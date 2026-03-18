/*
 * XREFs of PopDripsWatchdogScheduleNextTimer @ 0x140A27F14
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x14075FC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075FF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A27DB4 (PopDripsWatchdogStartWatchdog.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 */

__int64 __fastcall PopDripsWatchdogScheduleNextTimer(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  result = *(unsigned int *)(a1 + 180);
  if ( (result & 2) == 0 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008];
    result = KeSetTimer2(a1, -10000000LL * *(unsigned int *)(a1 + 176), 0LL, (__int64)v3);
    *(_DWORD *)(a1 + 180) |= 2u;
  }
  return result;
}
