/*
 * XREFs of VidMmInitializeAndMapTransportBuffer @ 0x14004BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAndMapTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAPEAVVIDMM_TRANSPORT_BUFFER@@_KPEAPEAX@Z @ 0x140094E44 (-InitializeAndMapTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAPEAVVIDMM_TRANSPORT_BUFFER@@_KPEAPEAX@Z.c)
 */

int __fastcall VidMmInitializeAndMapTransportBuffer(
        VIDMM_GLOBAL *a1,
        struct VIDMM_TRANSPORT_BUFFER **a2,
        unsigned __int64 a3,
        void **a4)
{
  return VIDMM_GLOBAL::InitializeAndMapTransportBuffer(a1, a2, a3, a4);
}
