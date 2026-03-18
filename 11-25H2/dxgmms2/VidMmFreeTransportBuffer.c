/*
 * XREFs of VidMmFreeTransportBuffer @ 0x14004C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z @ 0x140093E1C (-FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z.c)
 */

__int64 __fastcall VidMmFreeTransportBuffer(VIDMM_GLOBAL *a1, struct VIDMM_TRANSPORT_BUFFER *a2)
{
  return VIDMM_GLOBAL::FreeTransportBuffer(a1, a2);
}
