/*
 * XREFs of ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x14013F7E0
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x140159CC0 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14013F594 (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisPcwRemoveCounter(int a1, __int64 a2)
{
  _QWORD *v4; // rdi
  char *i; // rbx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v7, &ndisPcwMutex);
  for ( i = (char *)ndisPcwConsumerList; i; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 2) == a1
      && *((_QWORD *)i + 2) == *(_QWORD *)a2
      && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), *(PCUNICODE_STRING *)(a2 + 8), 0) )
    {
      if ( v4 )
        *v4 = *(_QWORD *)i;
      else
        ndisPcwConsumerList = *(PVOID *)i;
      ndisPcwDeleteConsumer(i);
      break;
    }
    v4 = i;
  }
  KLockHolder::~KLockHolder(&v7);
  return 0LL;
}
