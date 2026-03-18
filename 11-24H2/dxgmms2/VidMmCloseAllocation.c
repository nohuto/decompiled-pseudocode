/*
 * XREFs of VidMmCloseAllocation @ 0x140039900
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400F1A9C (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDIC.c)
 */

__int64 __fastcall VidMmCloseAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC **a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4)
{
  return VIDMM_GLOBAL::CloseAllocation(a1, a2, 0, a3, a4, 0LL);
}
