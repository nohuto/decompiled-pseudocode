/*
 * XREFs of PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x140753080 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A1EE1C (PopDripsWatchdogStartWatchdog.c)
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F25D8 (Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PopDripsWatchdogScheduleNextTimer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline()
    || (result = *(unsigned int *)(a1 + 180), (result & 2) == 0) )
  {
    v4[0] = 0LL;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008];
    v3 = -10000000LL * *(unsigned int *)(a1 + 176);
    v4[1] = -1LL;
    if ( !(unsigned int)Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(a1 + 168) )
        PopOkayToQueueNextWorkItem(a1 + 136);
    }
    result = KeSetTimer2(a1, (LARGE_INTEGER)v3, 0LL, (__int64)v4);
    *(_DWORD *)(a1 + 180) |= 2u;
  }
  return result;
}
