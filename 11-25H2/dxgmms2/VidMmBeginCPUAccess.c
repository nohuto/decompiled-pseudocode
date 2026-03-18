/*
 * XREFs of VidMmBeginCPUAccess @ 0x140040E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140112974 (-Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 */

__int64 __fastcall VidMmBeginCPUAccess(
        VIDMM_GLOBAL *a1,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        void **a6)
{
  return VIDMM_GLOBAL::Lock1(a1, a2, a4, a6);
}
