/*
 * XREFs of ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0
 * Callers:
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140092C18 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D5BC0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D65DC (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400DCD70 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E246C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1400ED970 (-SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x140100418 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x140113980 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFE.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGPUSHLOCK::AcquireShared(DXGPUSHLOCK *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(this, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v4 = *((unsigned int *)this + 6);
      if ( (_DWORD)v4 != -1 && (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, "g", v3, v4);
    }
    ExAcquirePushLockSharedEx(this, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
