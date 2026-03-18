/*
 * XREFs of BgGetDisplayContext @ 0x140BB06F4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140590050 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
