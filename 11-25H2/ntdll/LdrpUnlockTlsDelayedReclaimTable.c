/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x18016105C
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdi
  int v6; // esi
  volatile signed __int64 *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rbx

  v5 = (__int64 *)&unk_1801D45E0;
  v6 = 15;
  v7 = (volatile signed __int64 *)&unk_1801D45E8;
  do
  {
    if ( a1 )
    {
      v8 = *v5;
      if ( *v5 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 8);
          RtlFreeHeap(LdrpTlsHeap, 0, v8, a4);
          v8 = v9;
        }
        while ( v9 );
        *v5 = 0LL;
      }
      v5[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v7);
    v7 -= 2;
    v5 -= 2;
    --v6;
  }
  while ( v6 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17LL;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
