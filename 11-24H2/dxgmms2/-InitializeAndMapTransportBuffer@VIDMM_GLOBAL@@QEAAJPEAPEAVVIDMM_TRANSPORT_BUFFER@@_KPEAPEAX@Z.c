/*
 * XREFs of ?InitializeAndMapTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAPEAVVIDMM_TRANSPORT_BUFFER@@_KPEAPEAX@Z @ 0x140094E44
 * Callers:
 *     VidMmInitializeAndMapTransportBuffer @ 0x14004BD80 (VidMmInitializeAndMapTransportBuffer.c)
 * Callees:
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004DBB0 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeAndMapTransportBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_TRANSPORT_BUFFER **a2,
        __int64 a3,
        void **a4)
{
  return VIDMM_TRANSPORT_BUFFER::CreateVidMmTransportBuffer(this, a3, a2, a4);
}
