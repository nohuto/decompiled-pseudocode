/*
 * XREFs of BgGetDisplayContext @ 0x140BA06F4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058C870 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
