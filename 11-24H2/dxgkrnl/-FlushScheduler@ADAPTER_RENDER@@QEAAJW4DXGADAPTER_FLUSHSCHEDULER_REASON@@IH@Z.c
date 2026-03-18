/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8
 * Callers:
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x14018D898 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x14019360C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     DxgkResumeMemorySegments @ 0x1401A094C (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1401A0C74 (DxgkSuspendMemorySegments.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1401B4500 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401D60B0 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025DFE4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402C7A94 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1402C801C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402CA7D8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x14030B7B8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140382824 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkFlushPresentHistory @ 0x1403DE5A0 (DxgkFlushPresentHistory.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F2C34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchFlushQueuePackets@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE@Z @ 0x14004CCCC (-VidSchFlushQueuePackets@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z @ 0x1401864E0 (-VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1402C89C8 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1402C8AD8 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rbx
  char v9; // r15
  __int64 v10; // r9
  unsigned int v11; // r14d
  int v13; // ebx
  char v14; // al
  unsigned int v15; // r8d
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  _DWORD *v21; // rax
  _DWORD *v22; // rax

  v5 = (unsigned int)a3;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a2;
  if ( *(_BYTE *)(v6 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushAdapter((struct DXG_VMBUS_CHANNEL_BASE *)(v6 + 4664), a2, a3);
  if ( *(int *)(v6 + 2736) >= 0x2000 || (v9 = 0, *(_BYTE *)(v6 + 3036)) )
    v9 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&Dxgk_FlushScheduler, a3);
  WdLogSingleEntry2(4LL, v7, v5);
  WdLogGlobalForLineNumber = 2893;
  v11 = 1;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 == 7 )
    {
LABEL_12:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2961;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
          2961LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v7 == 10);
      return 0LL;
    }
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
      {
        if ( (_DWORD)v7 == 10 )
          goto LABEL_12;
        goto LABEL_44;
      }
LABEL_22:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2920;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
          2920LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v9 )
      {
        if ( (_DWORD)v5 == -1 )
        {
LABEL_27:
          ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v7 == 9);
          return 0LL;
        }
      }
      else
      {
        LODWORD(v21) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v21 & 0x10) != 0 )
          goto LABEL_27;
      }
      VIDSCH_EXPORT::VidSchFlushQueuePackets(
        *(_QWORD *)(a1 + 736),
        *(_QWORD *)(a1 + 744),
        1u,
        (unsigned int)v5,
        a4 != 0);
      goto LABEL_27;
    }
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2966;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
        2966LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v9 )
    {
      LOBYTE(v10) = a4 != 0;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 784LL))(
        *(_QWORD *)(a1 + 744),
        1LL,
        (unsigned int)v5,
        v10);
      return 0LL;
    }
    LODWORD(v22) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
    if ( (*v22 & 0x10) != 0 )
      return 0LL;
    v15 = 1;
    v14 = a4 != 0;
LABEL_36:
    VIDSCH_EXPORT::VidSchFlushQueuePackets(*(_QWORD *)(a1 + 736), *(_QWORD *)(a1 + 744), v15, (unsigned int)v5, v14);
    return 0LL;
  }
  if ( (_DWORD)v7 == 6 )
    goto LABEL_22;
  v13 = v7 - 1;
  if ( !v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2902;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"IsCoreResourceExclusiveOwner()",
        2902LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v14 = a4 != 0;
    v15 = 0;
    goto LABEL_36;
  }
  v16 = v13 - 1;
  if ( !v16 )
    goto LABEL_45;
  v17 = v16 - 1;
  if ( !v17 )
  {
    v11 = 8;
    goto LABEL_45;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v11 = 9;
    goto LABEL_45;
  }
  if ( v18 == 1 )
  {
    v11 = 17;
    goto LABEL_45;
  }
LABEL_44:
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2992;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Invalid flush reason!", 2992LL, 0LL, 0LL, 0LL, 0LL);
LABEL_45:
  if ( ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)a1)
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 176LL) != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3008;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetAdapter()->m_ExclusiveAccessReason == DXGADAPTER_EXCLUSIVEACCESS_FLUSHSCHEDULER",
      3008LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 744),
          v11);
  v20 = v19;
  if ( v11 >= 8 && v19 < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3015;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 3015LL, 0LL, 0LL, 0LL, 0LL);
  }
  return v20;
}
