/*
 * XREFs of EtwpStackRundown @ 0x1403DEAE4
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x1403DED20 (EtwpTraceCachedStack.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwpStackRundown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdi
  KIRQL CurrentIrql; // r14
  volatile signed __int32 *j; // r8
  _SLIST_ENTRY **v12; // r14
  _SLIST_ENTRY *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-68h] BYREF
  __int128 i; // [rsp+30h] [rbp-58h]

  v3 = 0LL;
  v14 = 0LL;
  for ( i = 0LL; (unsigned int)v3 < *(_DWORD *)(a1 + 8); v3 = (unsigned int)(v3 + 1) )
  {
    v7 = 3 * v3;
    v8 = (volatile signed __int32 *)(a1 + 32 + 24 * v3);
    if ( *(volatile signed __int32 **)v8 != v8 )
    {
      v9 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)v8 + 2);
      for ( j = *(volatile signed __int32 **)v8; j != v8; j = *(volatile signed __int32 **)j )
      {
        _InterlockedIncrement(j + 6);
        *((_QWORD *)&v14 + v9) = j;
        v9 = (unsigned int)(v9 + 1);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 2, CurrentIrql);
      if ( (_DWORD)v9 )
      {
        v12 = (_SLIST_ENTRY **)&v14;
        do
        {
          v13 = *v12;
          EtwpTraceCachedStack(a2, a3, 6180LL, *v12, v14, *((_QWORD *)&v14 + 1), i, *((_QWORD *)&i + 1));
          EtwpDereferenceStackEntry(v13);
          ++v12;
          --v9;
        }
        while ( v9 );
      }
    }
  }
}
