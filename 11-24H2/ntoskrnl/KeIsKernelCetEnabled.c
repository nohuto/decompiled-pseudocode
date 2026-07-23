/*
 * XREFs of KeIsKernelCetEnabled @ 0x14044B670
 * Callers:
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
