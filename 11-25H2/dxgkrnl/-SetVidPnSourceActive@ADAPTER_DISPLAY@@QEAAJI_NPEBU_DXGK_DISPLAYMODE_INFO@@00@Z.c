/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x140256A30 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140257160 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140057180 (-VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x14005766C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z @ 0x140058D78 (-UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140059320 (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1400595B8 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14005A308 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     McTemplateK0qtxxxxxx_EtwWriteTransfer @ 0x1400683D0 (McTemplateK0qtxxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x140187EA8 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x140312430 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1403A596C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B23C4 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z @ 0x1403EE380 (-NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  PERESOURCE *v21; // r13
  __int64 v22; // r13
  int LinkInfoFromTarget; // eax
  __int64 v24; // rdx
  PERESOURCE *v25; // rcx
  DXGGLOBAL *Global; // rax
  ULONG v27; // eax
  __int64 v28; // r9
  char *v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  BLTQUEUE *v34; // rcx
  PERESOURCE v35; // rcx
  PDEVICE_OBJECT v36; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct DXGADAPTERALLOCATION *v41; // r13
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v42; // rbx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v43; // r8
  int v44; // eax
  __int64 v45; // r12
  int v46; // eax
  __int64 v47; // rdi
  PERESOURCE *v48; // rcx
  union _LARGE_INTEGER *v49; // [rsp+20h] [rbp-C9h]
  union _LARGE_INTEGER *v50; // [rsp+20h] [rbp-C9h]
  union _LARGE_INTEGER *v51; // [rsp+20h] [rbp-C9h]
  PERESOURCE v52; // [rsp+60h] [rbp-89h]
  int v53; // [rsp+68h] [rbp-81h]
  __int64 v54; // [rsp+70h] [rbp-79h]
  __int64 v55; // [rsp+78h] [rbp-71h] BYREF
  __int64 v56; // [rsp+80h] [rbp-69h]
  __int64 v57; // [rsp+88h] [rbp-61h]
  __int64 v58; // [rsp+90h] [rbp-59h] BYREF
  __int64 v59; // [rsp+98h] [rbp-51h]
  __int64 v60; // [rsp+A0h] [rbp-49h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v61; // [rsp+A8h] [rbp-41h] BYREF
  _QWORD v62[2]; // [rsp+B0h] [rbp-39h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-29h]
  struct _DXGK_MONITORLINKINFO v64; // [rsp+D0h] [rbp-19h] BYREF

  v7 = a3;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 476;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 476LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v9 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 477;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      477LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = (const struct _DXGK_DISPLAYMODE_INFO *)&unk_1400B0D40;
  if ( a4 )
    v10 = a4;
  if ( (_BYTE)v7 && (!*(_DWORD *)v10 || !*((_DWORD *)v10 + 1)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 490;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!Active || ((pDisplayModeInfo->DisplayMode.Width != 0) && (pDisplayModeInfo->DisplayMode.Height != 0))",
      490LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[16];
  v12 = 3984 * v9;
  v52 = 0LL;
  v13 = v9;
  v54 = v12;
  v14 = LOBYTE(v11[498 * v9 + 95]) == 0;
  *((_BYTE *)v11 + v12 + 760) = v7;
  v53 = v14;
  v15 = v14 != (v7 ^ 1);
  if ( v14 != (v7 ^ 1) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::NotifyMonitorStateChange(Global, v7);
    v12 = v54;
  }
  v16 = this[2][391];
  if ( v16 )
  {
    v52 = this[2][391];
    *(_QWORD *)&v64.UsageHints.0 = 0LL;
    v17 = v16;
    v64.DitheringSupport.Value = 0;
    if ( (_BYTE)v7 )
    {
      v22 = *(unsigned int *)((char *)this[16] + v12 + 1072);
      if ( (_DWORD)v22 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 516;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"TargetId != D3DDDI_ID_UNINITIALIZED",
          516LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(this[2], v22, &v64);
      if ( LinkInfoFromTarget < 0 )
      {
        WdLogSingleEntry3(3LL, LinkInfoFromTarget, v9, v22);
        WdLogGlobalForLineNumber = 523;
      }
      v17 = v52;
    }
    LOBYTE(v12) = v7;
    ((void (__fastcall *)(POWNER_ENTRY, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, DXGK_MONITORLINKINFO_CAPABILITIES *))v17[7].SystemResourcesList.Blink->Blink[33].Flink)(
      v17[7].OwnerTable,
      (unsigned int)v9,
      v12,
      v10,
      &v64.Capabilities);
    VIDSCH_EXPORT::VidSchCancelDeferredVidPnSourceVisibility(
      (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
      (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
      v9);
    if ( v53 != (v7 ^ 1) )
    {
      DXGADAPTER::UpdateVSyncStatsOnMonitorPowerChange((DXGADAPTER *)this[2], v9, v7);
      if ( bTracingEnabled )
      {
        v30 = (__int64)this[2];
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        DXGADAPTER::GetVSyncTimeCounters(v30, v9, 1, (__int64)&v58);
        DXGADAPTER::GetVSyncTimeCounters((__int64)this[2], v9, 2, (__int64)&v55);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
          McTemplateK0qtxxxxxx_EtwWriteTransfer(v32, v31, v33, v9, v7, v58, v59, v60, v55, v56, v57);
      }
    }
  }
  else
  {
    v21 = this[57];
    if ( v21 )
    {
      v34 = (BLTQUEUE *)((char *)v21[1] + 2968 * v9);
      if ( (_BYTE)v7 )
        BLTQUEUE::EnableVSync(v34);
      else
        BLTQUEUE::DisableVSync((struct _KTHREAD **)v34);
      v35 = v21[1];
      v17 = 0LL;
      _InterlockedExchange((volatile __int32 *)&v35[9].NumberOfSharedWaiters + 742 * v9, 0);
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
        v25 = this[2];
LABEL_32:
        v18 = v54;
        if ( !*((_BYTE *)this[16] + v54 + 761) )
          v15 = 1;
        if ( v25[391] )
        {
          VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(
            (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
            (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
            v9);
        }
        else
        {
          v48 = this[57];
          if ( v48 )
          {
            v18 = 2968 * v9;
            _InterlockedExchange((volatile __int32 *)&v48[1][9].NumberOfSharedWaiters + 742 * v9, 1);
          }
        }
        goto LABEL_15;
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v9, 0) )
        goto LABEL_15;
      v27 = IoSizeofWorkItem();
      v29 = (char *)operator new[](v27 + 12LL, 0x4B677844u, 64LL, v28);
      if ( v29 )
      {
        *(_QWORD *)v29 = *(PERESOURCE *)((char *)this[2] + 412);
        v36 = g_pDriverObject;
        *((_DWORD *)v29 + 2) = v9;
        IoInitializeWorkItem(v36, (PIO_WORKITEM)(v29 + 12));
        IoQueueWorkItemEx((PIO_WORKITEM)(v29 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v29);
        goto LABEL_15;
      }
      WdLogSingleEntry1(6LL, this);
      WdLogGlobalForLineNumber = 618;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate work item for delay presnet CDD primary for adapter 0x%I64x",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( *(_QWORD *)(v24 + 3128) )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)this, v9);
      v41 = DisplayedPrimaryAllocation;
      if ( !DisplayedPrimaryAllocation || (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) != 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, -1071775482LL);
        v51 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 695;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to set VidPn source 0x%I64x on adapter 0x%I64x to be active since there is no displayed primary, returning 0x%I64x.",
          (__int64)v51,
          v9,
          -1071775482LL,
          0LL,
          0LL);
        return 3223191814LL;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
        &v61,
        v38,
        v39,
        v40);
      v42 = v61;
      if ( !v61 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 658;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS",
          658LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 3221225495LL;
      }
      memset(v61, 0, sizeof(struct _DXGKARG_SETVIDPNSOURCEADDRESS));
      v42->VidPnSourceId = v9;
      v42->hAllocation = (HANDLE)*((_QWORD *)v41 + 2);
      v43 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)v41 + 1);
      v17 = v52;
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        (VIDMM_EXPORT *)v52[7].SharedWaiters,
        (struct VIDMM_GLOBAL *)v52[7].ExclusiveWaiters,
        v43,
        &v42->PrimarySegment,
        &v42->PrimaryAddress,
        0LL);
      v42->Flags.Value |= 1u;
      v44 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(
              (VIDSCH_EXPORT *)v17[7].SystemResourcesList.Blink,
              (struct _VIDSCH_GLOBAL *)v17[7].OwnerTable,
              v42);
      v45 = v44;
      if ( v44 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v9, v44);
        v49 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 685;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to set VidPn source address on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)v49,
          v9,
          v45,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v42);
        return (unsigned int)v45;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v42);
    }
    if ( ((_DWORD)this[65] & 2) == 0
      && (!a5 || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v9) != 1)
      || (v25 = this[2], *((_DWORD *)v25 + 105) == 1297040209) && *((int *)v25 + 751) <= 1300 )
    {
      v46 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 1u, 0x800u, a6);
      v47 = v46;
      if ( v46 < 0 )
      {
        WdLogSingleEntry3(2LL, this[2], v13, v46);
        v50 = (union _LARGE_INTEGER *)this[2];
        WdLogGlobalForLineNumber = 738;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to set VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)v50,
          v13,
          v47,
          0LL,
          0LL);
        return (unsigned int)v47;
      }
      goto LABEL_15;
    }
    goto LABEL_32;
  }
  ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 0x800u, a6);
LABEL_15:
  if ( v15 )
  {
    v62[0] = 1LL;
    v62[1] = 0LL;
    v63 = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v62, v18, v19) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 788;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"NT_SUCCESS(NotificationStatus)",
        788LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  return 0LL;
}
