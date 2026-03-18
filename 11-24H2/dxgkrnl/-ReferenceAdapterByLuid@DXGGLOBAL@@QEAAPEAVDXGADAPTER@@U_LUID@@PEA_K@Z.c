/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878
 * Callers:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x14018F970 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1401AD630 (DxgkIsMonitorConnected.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401B61F0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C3738 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401C4378 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1401C5C00 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224090 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x140269630 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140269DA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026A7F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026B350 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x140291AD0 (DxgkGetVirtualRefreshRateInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402D71F0 (DxgkGetAdapterDefaultScaling.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402D9EA8 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1402DF034 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x140307170 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140307950 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x14030803C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403085C0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1403418F4 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x14035AC38 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     IsMiniportDriverCCDSupport @ 0x140360BC4 (IsMiniportDriverCCDSupport.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     DxgkGetCachedHybridQueryValue @ 0x14039FF10 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1403B6BB0 (DxgkCacheHybridQueryValue.c)
 *     DxgkWin32kSetPointerPosition @ 0x1403C0EF0 (DxgkWin32kSetPointerPosition.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1403CF128 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1403D76D0 (DxgkIsSourceInHardwareClone.c)
 *     DxgkWin32kSetPointerShape @ 0x1403E4E20 (DxgkWin32kSetPointerShape.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403E5694 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1403F6C10 (DxgkQueryModeListCacheLuid.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x140401CEC (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140406A48 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140412B00 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  struct _KTHREAD **v6; // rcx
  struct _KTHREAD **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  DXGGLOBAL *v11; // rdx
  DXGGLOBAL *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  struct _KTHREAD **v15; // rbx
  struct _KTHREAD **v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  LONG HighPart; // [rsp+9Ch] [rbp+3Ch]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  if ( a2 )
  {
    v6 = (struct _KTHREAD **)((char *)this + 752);
    v19 = 0;
    v18 = v6;
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v6 = 0LL;
    }
    if ( v6[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    v7 = v18;
    KeEnterCriticalRegion();
    if ( v18[3] == KeGetCurrentThread() )
    {
      if ( *((int *)v18 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 519;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 519LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++*((_DWORD *)v18 + 8);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18 + 1, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v10 = *((_DWORD *)v18 + 9);
          if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventBlockThread, v9, v10);
        }
        _InterlockedAdd64((volatile signed __int64 *)v18 + 2, 1uLL);
        ExAcquirePushLockExclusiveEx(v18 + 1, 0LL);
      }
      if ( v18[3] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 545;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 545LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((_DWORD *)v18 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 546;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 546LL, 0LL, 0LL, 0LL, 0LL);
      }
      v18[3] = KeGetCurrentThread();
      *((_DWORD *)v7 + 8) = 1;
    }
    v11 = (DXGGLOBAL *)*((_QWORD *)this + 100);
    v19 = 1;
    while ( v11 != (DXGGLOBAL *)((char *)this + 800) && v11 )
    {
      v12 = v11;
      v11 = *(DXGGLOBAL **)v11;
      if ( *((_DWORD *)v12 + 103) == LowPart && *((_DWORD *)v12 + 104) == HighPart )
      {
        _m_prefetchw((char *)v12 + 24);
        v13 = *((_QWORD *)v12 + 3);
        while ( v13 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 3, v13 + 1, v13);
          if ( v14 == v13 )
          {
            *a3 = -1LL;
            if ( v19 )
            {
              v15 = v18;
              v19 = 0;
              if ( v18[3] != KeGetCurrentThread() )
              {
                WdLogSingleEntry5(0LL, 275LL, 4LL, v18, 0LL, 0LL);
                WdLogGlobalForLineNumber = 568;
              }
              if ( *((int *)v18 + 8) <= 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 571;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"m_OwnerAcquireCount > 0",
                  571LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*((_DWORD *)v18 + 8))-- == 1 )
              {
                v15[3] = 0LL;
                ExReleasePushLockExclusiveEx(v15 + 1, 0LL);
              }
              KeLeaveCriticalRegion();
            }
            return v12;
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v18);
  }
  else
  {
    WdLogSingleEntry0((unsigned int)(a2.HighPart + 3));
    WdLogGlobalForLineNumber = 3265;
  }
  return 0LL;
}
