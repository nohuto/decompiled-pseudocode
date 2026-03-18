/*
 * XREFs of VidMmLock @ 0x1400396C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x1400F353C (-Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 */

__int64 __fastcall VidMmLock(VIDMM_GLOBAL *a1, struct VIDMM_ALLOC *a2, unsigned int a3, void **a4)
{
  return VIDMM_GLOBAL::Lock2(a1, a2, a3, a4);
}
