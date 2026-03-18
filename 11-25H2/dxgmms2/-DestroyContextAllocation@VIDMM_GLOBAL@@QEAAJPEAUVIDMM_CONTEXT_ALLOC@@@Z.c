/*
 * XREFs of ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400B808C
 * Callers:
 *     VidMmDestroyContextAllocation @ 0x140042DA0 (VidMmDestroyContextAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchRemoveContextAllocation @ 0x1400B8158 (VidSchRemoveContextAllocation.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(VIDMM_GLOBAL *this, struct VIDMM_CONTEXT_ALLOC *a2)
{
  struct VIDMM_ALLOC *v3; // rbx
  struct VIDMM_DEVICE *v4; // rsi
  struct VIDMM_GLOBAL_ALLOC *v5; // rdi
  __int64 v7; // rcx

  if ( a2 )
  {
    v3 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 3);
    v4 = (struct VIDMM_DEVICE *)*((_QWORD *)v3 + 1);
    v5 = **(struct VIDMM_GLOBAL_ALLOC ***)v3;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v3, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(this, v4, v5, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2158;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
