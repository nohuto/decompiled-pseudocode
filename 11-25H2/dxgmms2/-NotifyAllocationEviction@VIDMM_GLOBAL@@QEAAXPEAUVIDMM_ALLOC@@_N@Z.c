/*
 * XREFs of ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400BAA94
 * Callers:
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B9DF0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DC5B8 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140101E64 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AAC90 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D20EC (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2, char a3)
{
  __int64 *v6; // rdi
  __int64 v7; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v9; // rcx

  v6 = *(__int64 **)*a2;
  v7 = *v6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 12876;
  }
  VIDMM_DEVICE::RemoveCommitment(a2[1], (__int64 **)a2, a3);
  if ( !*((_DWORD *)v6 + 19)
    && !_bittest((const signed __int32 *)v6[47], 0x1Eu)
    && !*(_DWORD *)(v6[47] + 16)
    && (*(_DWORD *)v6[47] & 0x20000) == 0
    && !_bittest((const signed __int32 *)v6 + 6, 0x1Eu) )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v7 + 64), *(struct VIDMM_GLOBAL_ALLOC **)v7);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
    v9 = *(_QWORD *)(v7 + 16);
    if ( IsEnabledDeviceUsageNoInline )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 1798);
      _InterlockedAdd64((volatile signed __int64 *)this + 900, v9);
    }
    else
    {
      ++*((_DWORD *)this + 1798);
      *((_QWORD *)this + 900) += v9;
    }
  }
}
