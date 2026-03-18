/*
 * XREFs of VidSchiDrainFlipQueue @ 0x140103750
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x140103778 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al

  result = VidSchIsTDRPending((__int64)a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
