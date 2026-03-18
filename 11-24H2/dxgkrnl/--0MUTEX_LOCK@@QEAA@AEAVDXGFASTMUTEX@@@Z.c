/*
 * XREFs of ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C
 * Callers:
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x140091340 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ?MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@@@Z @ 0x14026E064 (-MonitorGetColorPipelineState2@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE_2@.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x140277984 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277AF4 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 *     ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x140277D94 (-DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x140277E70 (-GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ @ 0x140278164 (-MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ.c)
 *     ?OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ @ 0x1402781E4 (-OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ.c)
 *     ?OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x140278228 (-OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA-AW4SetupFailureStage@2@PEAU_DEVICE_OBJEC.c)
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402782C4 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 *     ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1402785A0 (-RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x140279104 (-_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 *     ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x140279A54 (-GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN.c)
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x140279E78 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027EED0 (-_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027F154 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402DF49C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403D3CF4 (-SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?SetLastColorspace@DXGMONITOR@@QEAAXW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1403D3D4C (-SetLastColorspace@DXGMONITOR@@QEAAXW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ @ 0x1403FA998 (-MonitorFlushUsb4PowerOnWorkQueue@@YAXXZ.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1403FB518 (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042F770 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 */

MUTEX_LOCK *__fastcall MUTEX_LOCK::MUTEX_LOCK(MUTEX_LOCK *this, struct DXGFASTMUTEX *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8

  *(_QWORD *)this = a2;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
  }
  v3 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v3 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v3 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 519;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(519LL, v12, v13, 0LL, 2, -1, L"m_OwnerAcquireCount > 0", 7, 0, 0, 0, 0);
      }
    }
    ++*(_DWORD *)(v3 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v6 = *(_DWORD *)(v3 + 36);
        if ( v6 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventBlockThread, v5, v6);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16));
      ExAcquirePushLockExclusiveEx(v3 + 8, 0LL);
    }
    if ( *(_QWORD *)(v3 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 545;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(545LL, v10, v11, 0LL, 2, -1, L"NULL == m_OwningThread", 33, 0, 0, 0, 0);
      }
    }
    if ( *(_DWORD *)(v3 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(546LL, v8, v9, 0LL, 2, -1, L"0 == m_OwnerAcquireCount", 34, 0, 0, 0, 0);
      }
    }
    *(_QWORD *)(v3 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 32) = 1;
  }
  return this;
}
