/*
 * XREFs of PopPowerRequestExecutionRequiredSettingCallback @ 0x140AACF80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x140749E0C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v6 = -1073741811;
  PopAcquireRwLockExclusive(&PopPowerRequestLock);
  v8 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v8 && a3 == 4 && a2 )
  {
    KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, 0LL, v7, 0LL);
    PopExecutionRequiredTimeout = *a2;
    PopPowerRequestSetExecutionRequiredTimeoutTimer();
    PopPowerRequestHandleExecutionEnablementUpdate(v10, v9, v11);
    v6 = 0;
  }
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
  return v6;
}
