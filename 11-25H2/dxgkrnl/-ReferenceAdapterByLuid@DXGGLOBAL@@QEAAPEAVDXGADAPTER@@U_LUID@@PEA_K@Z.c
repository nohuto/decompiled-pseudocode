/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8
 * Callers:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x14018D620 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1401AB1A0 (DxgkIsMonitorConnected.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401B3C40 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C01C8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401C0384 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1401C1AF0 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C1F40 (DxgkHandleForceProjectionMonitor.c)
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021DC20 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x140262730 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140262EA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1402638F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x140264450 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x140286BB0 (DxgkGetVirtualRefreshRateInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 *     IsMiniportDriverCCDSupport @ 0x1402C0CF8 (IsMiniportDriverCCDSupport.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1402C82B4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402E8C80 (DxgkGetAdapterDefaultScaling.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402EBB8C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1403249F0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1403251D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1403258BC (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x140325E40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x140366348 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x14036D620 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403774A0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1403AD8F0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1403C2160 (DxgkCacheHybridQueryValue.c)
 *     DxgkWin32kSetPointerPosition @ 0x1403CDC00 (DxgkWin32kSetPointerPosition.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1403D6F1C (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1403DFE70 (DxgkIsSourceInHardwareClone.c)
 *     DxgkWin32kSetPointerShape @ 0x1403EB5E0 (DxgkWin32kSetPointerShape.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403EBD84 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1403FCE80 (DxgkQueryModeListCacheLuid.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1404098D0 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040DBBC (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x140419880 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  char *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  DXGGLOBAL *v10; // rdx
  DXGGLOBAL *v11; // rdi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  char *v14; // rbx
  char *v17; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+58h] [rbp-8h]
  LONG HighPart; // [rsp+9Ch] [rbp+3Ch]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  if ( a2 )
  {
    v18 = 0;
    v17 = (char *)this + 720;
    if ( this == (DXGGLOBAL *)-720LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((struct _KTHREAD **)v17 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6 = v17;
    KeEnterCriticalRegion();
    if ( *((struct _KTHREAD **)v17 + 3) == KeGetCurrentThread() )
    {
      if ( *((int *)v17 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 521;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++*((_DWORD *)v17 + 8);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v17 + 8, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v9 = *((_DWORD *)v17 + 9);
          if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventBlockThread, v8, v9);
        }
        _InterlockedAdd64((volatile signed __int64 *)v17 + 2, 1uLL);
        ExAcquirePushLockExclusiveEx(v17 + 8, 0LL);
      }
      if ( *((_QWORD *)v17 + 3) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 547;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((_DWORD *)v17 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 548;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_QWORD *)v17 + 3) = KeGetCurrentThread();
      *((_DWORD *)v6 + 8) = 1;
    }
    v10 = (DXGGLOBAL *)*((_QWORD *)this + 96);
    v18 = 1;
    while ( v10 != (DXGGLOBAL *)((char *)this + 768) && v10 )
    {
      v11 = v10;
      v10 = *(DXGGLOBAL **)v10;
      if ( *((_DWORD *)v11 + 103) == LowPart && *((_DWORD *)v11 + 104) == HighPart )
      {
        _m_prefetchw((char *)v11 + 24);
        v12 = *((_QWORD *)v11 + 3);
        while ( v12 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 3, v12 + 1, v12);
          if ( v13 == v12 )
          {
            *a3 = -1LL;
            if ( v18 )
            {
              v14 = v17;
              v18 = 0;
              if ( *((struct _KTHREAD **)v17 + 3) != KeGetCurrentThread() )
              {
                WdLogSingleEntry5(0LL, 275LL, 4LL, v17, 0LL, 0LL);
                WdLogGlobalForLineNumber = 570;
              }
              if ( *((int *)v17 + 8) <= 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 573;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"m_OwnerAcquireCount > 0",
                  573LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*((_DWORD *)v17 + 8))-- == 1 )
              {
                *((_QWORD *)v14 + 3) = 0LL;
                ExReleasePushLockExclusiveEx(v14 + 8, 0LL);
              }
              KeLeaveCriticalRegion();
            }
            return v11;
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v17);
  }
  else
  {
    WdLogSingleEntry0((unsigned int)(a2.HighPart + 3));
    WdLogGlobalForLineNumber = 3264;
  }
  return 0LL;
}
