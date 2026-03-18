/*
 * XREFs of ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4
 * Callers:
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
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
 */

void __fastcall MUTEX_LOCK::~MUTEX_LOCK(MUTEX_LOCK *this)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 115;
  }
  v2 = *(_QWORD *)this;
  if ( *(struct _KTHREAD **)(v2 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 568;
  }
  if ( *(int *)(v2 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 571;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(571LL, v4, v5, 0LL, 2, -1, L"m_OwnerAcquireCount > 0", 59, 0, 0, 0, 0);
    }
  }
  if ( (*(_DWORD *)(v2 + 32))-- == 1 )
  {
    *(_QWORD *)(v2 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
