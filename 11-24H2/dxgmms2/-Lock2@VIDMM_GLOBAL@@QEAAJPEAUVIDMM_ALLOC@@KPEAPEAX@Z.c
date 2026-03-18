/*
 * XREFs of ?Lock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x1400EE020
 * Callers:
 *     VidMmLock @ 0x140038390 (VidMmLock.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400EE09C (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock2(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, unsigned int a3, void **a4)
{
  __int64 v5; // rcx

  if ( !a3 )
    return VIDMM_GLOBAL::LockCommon(this, a2, 1, 0, a4);
  WdLogSingleEntry2(1LL, a3, 0LL);
  WdLogGlobalForLineNumber = 22338;
  DxgkLogInternalTriageEvent(v5, 0x40000LL);
  return 3221225485LL;
}
