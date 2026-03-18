/*
 * XREFs of KeIsKernelCetAuditModeEnabled @ 0x1404C9258
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetAuditModeEnabled()
{
  return (_BYTE)KiKernelCetAuditModeEnabled != 0;
}
