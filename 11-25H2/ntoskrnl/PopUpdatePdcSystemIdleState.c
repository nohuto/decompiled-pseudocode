/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x140A1ED14
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140A1EADC (PopExecuteSystemIdleAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14073DD8C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  v4 = 0;
  if ( byte_140F0B8D4 && byte_140F0D8B3 != a1 )
  {
    byte_140F0D8B3 = a1;
    if ( a1 )
    {
      qword_140F0D8B8 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140F0D8B8 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, 0LL, v2, v3);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock(&PopPowerRequestLock);
  if ( qword_140E67240 )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)guard_dispatch_icall_no_overrides(v5);
  }
  return v4;
}
