/*
 * XREFs of KeIsKernelCetEnabled @ 0x14045663C
 * Callers:
 *     VslStartSecureProcessor @ 0x1407042F8 (VslStartSecureProcessor.c)
 *     PiIsDriverBlocked @ 0x1409ADF08 (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
