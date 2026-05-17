/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  unsigned __int64 *v2; // rdi
  int v3; // esi
  volatile signed __int64 *v4; // rbp
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx

  v2 = (unsigned __int64 *)&unk_1801D2590;
  v3 = 15;
  v4 = (volatile signed __int64 *)&unk_1801D2598;
  do
  {
    if ( a1 )
    {
      v5 = *v2;
      if ( *v2 )
      {
        do
        {
          v6 = *(_QWORD *)(v5 + 8);
          RtlFreeHeap(LdrpTlsHeap, 0, v5);
          v5 = v6;
        }
        while ( v6 );
        *v2 = 0LL;
      }
      v2[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v4);
    v4 -= 2;
    v2 -= 2;
    --v3;
  }
  while ( v3 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17LL;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
