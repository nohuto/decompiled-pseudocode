/*
 * XREFs of VidSchiCompletePreemption @ 0x14003D2FC
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003D090 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053568 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiResetEngines @ 0x1400A508C (VidSchiResetEngines.c)
 *     VidSchiPreemptEngineNodes @ 0x140111D60 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x140107440 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 3028);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption();
  return result;
}
