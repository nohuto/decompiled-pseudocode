/*
 * XREFs of KseAddHardwareId @ 0x14082C174
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x14048E750 (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404A0CB0 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KsepStringDuplicate @ 0x14082AB14 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14082BBBC (KsepStringFree.c)
 *     KsepCacheLookup @ 0x14082BFB8 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14082C09C (KsepCacheUnlock.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     KsepCacheInsert @ 0x140A9A6FC (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  unsigned __int64 *v1; // rsi
  _QWORD *v4; // rdi
  int v5; // ebx
  _QWORD *Paged; // rax
  __int64 v7; // rax
  UNICODE_STRING v8[2]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]

  v1 = (unsigned __int64 *)qword_140E66860;
  v10 = 0;
  memset(v8, 0, sizeof(v8));
  DestinationString = 0LL;
  if ( dword_140E66814 != 2 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = -1073741823;
    KsepHistoryErrors[2 * v7] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  KsepCacheLock(v1);
  v4 = KsepCacheLookup((__int64)v1, (__int64)v8);
  if ( !v4 )
  {
    Paged = KsepPoolAllocatePaged(0x38uLL);
    v4 = Paged;
    if ( !Paged || (int)KsepStringDuplicate((__int64)(Paged + 5), SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_6;
    }
    KsepCacheInsert(v1, v4);
  }
  v5 = 0;
LABEL_6:
  KsepCacheUnlock((volatile signed __int64 *)v1);
  if ( v5 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree((__int64)(v4 + 5));
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v5;
}
