/*
 * XREFs of VidMmEndCPUAccess @ 0x140040F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z @ 0x1400EEAF4 (-Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z.c)
 */

__int64 __fastcall VidMmEndCPUAccess(VIDMM_GLOBAL *a1, struct VIDMM_ALLOC *a2, __int64 a3, unsigned int a4)
{
  return VIDMM_GLOBAL::Unlock1(a1, a2, a4);
}
