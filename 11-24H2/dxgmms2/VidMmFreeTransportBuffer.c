/*
 * XREFs of VidMmFreeTransportBuffer @ 0x14004BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z @ 0x140093F48 (-FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z.c)
 */

__int64 __fastcall VidMmFreeTransportBuffer(VIDMM_GLOBAL *a1, struct VIDMM_TRANSPORT_BUFFER *a2)
{
  return VIDMM_GLOBAL::FreeTransportBuffer(a1, a2);
}
