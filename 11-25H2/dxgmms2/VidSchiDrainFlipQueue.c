/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1401057C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1400362C0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1401057E8 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al

  result = VidSchIsTDRPending((__int64)a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
