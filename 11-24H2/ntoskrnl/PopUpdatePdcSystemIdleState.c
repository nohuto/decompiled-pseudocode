/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x140A1C734
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140A1C4FC (PopExecuteSystemIdleAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14074813C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  v4 = 0;
  if ( byte_140F0B674 && byte_140F0E223 != a1 )
  {
    byte_140F0E223 = a1;
    if ( a1 )
    {
      qword_140F0E228 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140F0E228 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, 0LL, v2, v3);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock(&PopPowerRequestLock);
  if ( qword_140E67690 )
  {
    LOBYTE(v6) = a1;
    return (unsigned int)guard_dispatch_icall_no_overrides(v6, v5);
  }
  return v4;
}
