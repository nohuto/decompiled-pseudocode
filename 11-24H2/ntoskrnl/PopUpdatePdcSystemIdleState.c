/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x140A27CB4
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140A27A7C (PopExecuteSystemIdleAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x140749E0C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  PopAcquireRwLockExclusive(&PopPowerRequestLock);
  v4 = 0;
  if ( byte_140F0BB54 && byte_140F0E083 != a1 )
  {
    byte_140F0E083 = a1;
    if ( a1 )
    {
      qword_140F0E088 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140F0E088 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, 0LL, v2, v3);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
  if ( qword_140E67520 )
  {
    LOBYTE(v6) = a1;
    return (unsigned int)guard_dispatch_icall_no_overrides(v6, v5, v7, v8);
  }
  return v4;
}
