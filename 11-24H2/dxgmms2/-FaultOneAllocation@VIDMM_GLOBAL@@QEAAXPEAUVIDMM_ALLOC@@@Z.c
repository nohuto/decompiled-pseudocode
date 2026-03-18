/*
 * XREFs of ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C
 * Callers:
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x14009EFF4 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0CC8 (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D5B8C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1400D6D94 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400D6EFC (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D74A4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400CDD2C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400FFB34 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FaultOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 *v4; // rsi
  __int64 v5; // r14
  VIDMM_PHYSICAL_ADAPTER *v6; // rbp
  unsigned __int64 v7; // rcx
  int IsEnabledDeviceUsageNoInline; // eax

  v4 = *(__int64 **)*a2;
  v5 = *v4;
  v6 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * (v4[3] & 0x3F));
  VIDMM_DEVICE::RemoveCommitment(a2[1], (__int64 **)a2, 0);
  if ( !*((_DWORD *)v4 + 19) )
  {
    v7 = v4[49];
    if ( (*(_DWORD *)v7 & 0x40000000) == 0 && !*(_DWORD *)(v7 + 16) && (*(_DWORD *)v4[49] & 0x20000) == 0 )
    {
      VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT ****)(v5 + 64), *(struct VIDMM_GLOBAL_ALLOC **)v5);
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer();
      IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
      v7 = *(_QWORD *)(v5 + 16);
      if ( IsEnabledDeviceUsageNoInline )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 1798);
        _InterlockedAdd64((volatile signed __int64 *)this + 900, v7);
      }
      else
      {
        ++*((_DWORD *)this + 1798);
        *((_QWORD *)this + 900) += v7;
      }
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a2[1] + 1) + 112LL) & 2) != 0 && *((_DWORD *)v4 + 18) == 1 )
    VIDMM_PHYSICAL_ADAPTER::EvictResources(v6, (struct VIDMM_PHYSICAL_ALLOC *)v5, 1, 0, 0, 0LL);
  VIDMM_DEVICE::FaultCommitment((VIDMM_DEVICE *)v7, (struct VIDMM_ALLOC *)a2);
}
