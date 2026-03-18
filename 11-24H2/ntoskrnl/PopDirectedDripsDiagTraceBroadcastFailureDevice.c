/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14076445C
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14074C7BC (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x140A9D5C8 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(__int64 a1)
{
  _QWORD *v2; // rax
  signed __int8 v3; // cf
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  PVOID *i; // rbx

  v2 = KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, (__int64)v2, (__int64)&PopDirectedDripsDiagLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *(_QWORD *)(a1 + 776);
  if ( v5 )
    *(_DWORD *)(v5 + 152) |= 0x20u;
  for ( i = (PVOID *)PopDirectedDripsDiagSessionContext; i != &PopDirectedDripsDiagSessionContext; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == dword_140F06848 )
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
