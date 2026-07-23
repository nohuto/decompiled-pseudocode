/*
 * XREFs of BgGetDisplayContext @ 0x140BB26F4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14058D070 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
