/*
 * XREFs of KeIsKernelCetEnabled @ 0x1404566A0
 * Callers:
 *     VslStartSecureProcessor @ 0x1407103F8 (VslStartSecureProcessor.c)
 *     PiIsDriverBlocked @ 0x1409C6E6C (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
