/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400B09E0
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400B1040 (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B0ADC (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  _BYTE v14[320]; // [rsp+40h] [rbp-158h] BYREF

  *a5 = 0LL;
  v9 = **(_QWORD **)a2;
  memset(v14, 0, sizeof(v14));
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v9;
    WdLogGlobalForLineNumber = 14992;
  }
  if ( a3 && (v11 = VIDMM_GLOBAL::PageInOneAllocation(this, a2, 0LL, 0LL, a4, a5, 0, -1LL), v12 = v11, v11 < 0) )
  {
    WdLogSingleEntry2(4LL, a2, v11);
    result = v12;
    WdLogGlobalForLineNumber = 14999;
  }
  else
  {
    VIDMM_GLOBAL::BuildInitContextAllocation(this, a2, 1);
    return 0LL;
  }
  return result;
}
