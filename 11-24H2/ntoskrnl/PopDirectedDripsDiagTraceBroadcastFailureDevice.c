/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x140763E2C
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14074AAEC (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x140A98B38 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(__int64 a1)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rbx
  __int64 v5; // rdi
  PVOID *i; // rbx

  v2 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v2, (__int64)&PopDirectedDripsDiagLock);
  if ( v4 )
    v4[10] = 1;
  v5 = *(_QWORD *)(a1 + 776);
  if ( v5 )
    *(_DWORD *)(v5 + 152) |= 0x20u;
  for ( i = (PVOID *)PopDirectedDripsDiagSessionContext; i != &PopDirectedDripsDiagSessionContext; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == dword_140F06B48 )
    {
      ++*((_DWORD *)i + 53);
      if ( v5 )
        PopDirectedDripsDiagInsertErrorRecord(i, v5, 5LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
