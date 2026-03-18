/*
 * XREFs of ?FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z @ 0x140093E1C
 * Callers:
 *     VidMmFreeTransportBuffer @ 0x14004C5F0 (VidMmFreeTransportBuffer.c)
 * Callees:
 *     ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14004E6D8 (-DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeTransportBuffer(VIDMM_GLOBAL *this, struct VIDMM_TRANSPORT_BUFFER *a2)
{
  return VIDMM_TRANSPORT_BUFFER::DestroyVidMmTransportBuffer(this, a2);
}
