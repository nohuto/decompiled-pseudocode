/*
 * XREFs of PopUpdateExternalDisplayState @ 0x140AC8ECC
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407546A0 (PopDiagTraceExternalDisplayState.c)
 *     PopUpdateExternalDisplayStateV1 @ 0x14075EA00 (PopUpdateExternalDisplayStateV1.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v3) = a1;
    return PopUpdateExternalDisplayStateV1(v3, v2);
  }
  else
  {
    PopAcquirePolicyLock(v3, v2);
    PopConsoleExternalDisplayConnected = a1;
    PopDiagTraceExternalDisplayState(a1, 0);
    PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
    return PopReleasePolicyLock(v6, v5, v7, v8, v9);
  }
}
