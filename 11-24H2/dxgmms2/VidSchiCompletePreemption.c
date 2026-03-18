/*
 * XREFs of VidSchiCompletePreemption @ 0x14003B40C
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003B1A0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053138 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 *     VidSchiPreemptEngineNodes @ 0x140110AD8 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x140105610 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 3028);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption();
  return result;
}
