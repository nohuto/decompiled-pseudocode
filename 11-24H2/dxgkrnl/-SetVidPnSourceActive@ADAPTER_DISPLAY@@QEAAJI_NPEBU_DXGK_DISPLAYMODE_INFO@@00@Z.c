/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402903F4
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025D8D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025DFE4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004EF94 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1400569D0 (-VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x140056E7C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z @ 0x140058838 (-UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140058DE0 (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x140059078 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140059D08 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     McTemplateK0qtxxxxxx_EtwWriteTransfer @ 0x14006809C (McTemplateK0qtxxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x14018A110 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x14028EF80 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x140381BDC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z @ 0x1403E8A40 (-NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1403EF064 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        unsigned __int8 a3,
        const struct _DXGK_DISPLAYMODE_INFO *a4,
        bool a5,
        unsigned __int8 a6)
{
  int v7; // ebx
  __int64 v9; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *v10; // r12
  PERESOURCE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r15
  bool v14; // zf
  bool v15; // r14
  PERESOURCE v16; // rcx
  PERESOURCE v17; // r13
  PERESOURCE *v19; // r13
  __int64 v20; // r13
  int LinkInfoFromTarget; // eax
  __int64 v22; // rdx
  PERESOURCE *v23; // rcx
  DXGGLOBAL *Global; // rax
  ULONG v25; // eax
  char *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  BLTQUEUE *v31; // rcx
  PERESOURCE v32; // rcx
  PDEVICE_OBJECT v33; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v35; // r13
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v36; // rbx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v37; // r8
  int v38; // eax
  __int64 v39; // r12
  int v40; // eax
  __int64 v41; // rdi
  PERESOURCE *v42; // rcx
  union _LARGE_INTEGER *v43; // [rsp+20h] [rbp-C9h]
  union _LARGE_INTEGER *v44; // [rsp+20h] [rbp-C9h]
  union _LARGE_INTEGER *v45; // [rsp+20h] [rbp-C9h]
  PERESOURCE v46; // [rsp+60h] [rbp-89h]
  int v47; // [rsp+68h] [rbp-81h]
  __int64 v48; // [rsp+70h] [rbp-79h]
  __int64 v49; // [rsp+78h] [rbp-71h] BYREF
  __int64 v50; // [rsp+80h] [rbp-69h]
  __int64 v51; // [rsp+88h] [rbp-61h]
  __int64 v52; // [rsp+90h] [rbp-59h] BYREF
  __int64 v53; // [rsp+98h] [rbp-51h]
  __int64 v54; // [rsp+A0h] [rbp-49h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v55; // [rsp+A8h] [rbp-41h] BYREF
  _QWORD v56[2]; // [rsp+B0h] [rbp-39h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-29h]
  struct _DXGK_MONITORLINKINFO v58; // [rsp+D0h] [rbp-19h] BYREF

  v7 = a3;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 479;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      479LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 480;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      480LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = (const struct _DXGK_DISPLAYMODE_INFO *)&unk_1400A9B50;
  if ( a4 )
    v10 = a4;
  if ( (_BYTE)v7 && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 1)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 493;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!Active || ((pDisplayModeInfo->DisplayMode.Width != 0) && (pDisplayModeInfo->DisplayMode.Height != 0))",
      493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[16];
  v12 = 4024 * v9;
  v46 = 0LL;
  v13 = v9;
  v48 = v12;
  v14 = LOBYTE(v11[503 * v9 + 95]) == 0;
  *((_BYTE *)v11 + v12 + 760) = v7;
  v47 = v14;
  v15 = v14 != (v7 ^ 1);
  if ( v14 != (v7 ^ 1) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::NotifyMonitorStateChange(Global, v7);
    v12 = v48;
  }
  v16 = this[2][391];
  if ( v16 )
  {
    v46 = this[2][391];
    *(_QWORD *)&v58.UsageHints.0 = 0LL;
    v17 = v16;
    v58.DitheringSupport.Value = 0;
    if ( (_BYTE)v7 )
    {
      v20 = *(unsigned int *)((char *)this[16] + v12 + 1072);
      if ( (_DWORD)v20 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 519;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"TargetId != D3DDDI_ID_UNINITIALIZED",
          519LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget((__int64)this[2], v20, &v58);
      if ( LinkInfoFromTarget < 0 )
      {
        WdLogSingleEntry3(3LL, LinkInfoFromTarget, v9, v20);
        WdLogGlobalForLineNumber = 526;
      }
      v17 = v46;
    }
    LOBYTE(v12) = v7;
    ((void (__fastcall *)(POWNER_ENTRY, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, DXGK_MONITORLINKINFO_CAPABILITIES *))v17[7].SystemResourcesList.Blink->Blink[33].Flink)(
      v17[7].OwnerTable,
      (unsigned int)v9,
      v12,
      v10,
      &v58.Capabilities);
    VIDSCH_EXPORT::VidSchCancelDeferredVidPnSourceVisibility(
      (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
      (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
      v9);
    if ( v47 != (v7 ^ 1) )
    {
      DXGADAPTER::UpdateVSyncStatsOnMonitorPowerChange((DXGADAPTER *)this[2], v9, v7);
      if ( bTracingEnabled )
      {
        v27 = (__int64)this[2];
        v52 = 0LL;
        v53 = 0LL;
        v54 = 0LL;
        v49 = 0LL;
        v50 = 0LL;
        v51 = 0LL;
        DXGADAPTER::GetVSyncTimeCounters(v27, v9, 1, (__int64)&v52);
        DXGADAPTER::GetVSyncTimeCounters((__int64)this[2], v9, 2, (__int64)&v49);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
          McTemplateK0qtxxxxxx_EtwWriteTransfer(v29, v28, v30, v9, v7, v52, v53, v54, v49, v50, v51);
      }
    }
  }
  else
  {
    v19 = this[58];
    if ( v19 )
    {
      v31 = (BLTQUEUE *)((char *)v19[1] + 3040 * v9);
      if ( (_BYTE)v7 )
        BLTQUEUE::EnableVSync(v31);
      else
        BLTQUEUE::DisableVSync((struct _KTHREAD **)v31);
      v32 = v19[1];
      v17 = 0LL;
      _InterlockedExchange((volatile __int32 *)&v32[10].ExclusiveWaiters + 760 * v9, 0);
    }
    else
    {
      v17 = 0LL;
    }
  }
  if ( (_BYTE)v7 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) )
      {
        v23 = this[2];
LABEL_32:
        if ( !*((_BYTE *)this[16] + v48 + 761) )
          v15 = 1;
        if ( v23[391] )
        {
          VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(
            (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
            (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
            v9);
        }
        else
        {
          v42 = this[58];
          if ( v42 )
            _InterlockedExchange((volatile __int32 *)&v42[1][10].ExclusiveWaiters + 760 * v9, 1);
        }
        goto LABEL_15;
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v9, 0) )
        goto LABEL_15;
      v25 = IoSizeofWorkItem();
      v26 = (char *)operator new[](v25 + 12LL, 0x4B677844u, 64LL);
      if ( v26 )
      {
        *(_QWORD *)v26 = *(PERESOURCE *)((char *)this[2] + 412);
        v33 = g_pDriverObject;
        *((_DWORD *)v26 + 2) = v9;
        IoInitializeWorkItem(v33, (PIO_WORKITEM)(v26 + 12));
        IoQueueWorkItemEx((PIO_WORKITEM)(v26 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v26);
        goto LABEL_15;
      }
      WdLogSingleEntry1(6LL, this);
      WdLogGlobalForLineNumber = 621;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate work item for delay presnet CDD primary for adapter 0x%I64x",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( *(_QWORD *)(v22 + 3128) )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)this, v9);
      v35 = DisplayedPrimaryAllocation;
      if ( !DisplayedPrimaryAllocation || (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) != 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, -1071775482LL);
        v45 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 698;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to set VidPn source 0x%I64x on adapter 0x%I64x to be active since there is no displayed primary, returning 0x%I64x.",
          (__int64)v45,
          v9,
          -1071775482LL,
          0LL,
          0LL);
        return 3223191814LL;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v55);
      v36 = v55;
      if ( !v55 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 661;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS",
          661LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 3221225495LL;
      }
      memset(v55, 0, sizeof(struct _DXGKARG_SETVIDPNSOURCEADDRESS));
      v36->VidPnSourceId = v9;
      v36->hAllocation = (HANDLE)*((_QWORD *)v35 + 2);
      v37 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)v35 + 1);
      v17 = v46;
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        (VIDMM_EXPORT *)v46[7].SharedWaiters,
        (struct VIDMM_GLOBAL *)v46[7].ExclusiveWaiters,
        v37,
        &v36->PrimarySegment,
        &v36->PrimaryAddress,
        0LL);
      v36->Flags.Value |= 1u;
      v38 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(
              (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
              (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
              v36);
      v39 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, v38);
        v43 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 688;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to set VidPn source address on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)v43,
          v9,
          v39,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v36);
        return (unsigned int)v39;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v36);
    }
    if ( ((_DWORD)this[66] & 2) == 0
      && (!a5 || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) != 1)
      || (v23 = this[2], *((_DWORD *)v23 + 105) == 1297040209) && *((int *)v23 + 751) <= 1300 )
    {
      v40 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 1u, 0x800u, a6);
      v41 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v13, v40);
        v44 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 741;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to set VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)v44,
          v13,
          v41,
          0LL,
          0LL);
        return (unsigned int)v41;
      }
      goto LABEL_15;
    }
    goto LABEL_32;
  }
  ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 0x800u, a6);
LABEL_15:
  if ( v15 )
  {
    v56[0] = 1LL;
    v56[1] = 0LL;
    v57 = 0LL;
    if ( (int)DxgkStatusChangeNotify(v56) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 791;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"NT_SUCCESS(NotificationStatus)",
        791LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  return 0LL;
}
