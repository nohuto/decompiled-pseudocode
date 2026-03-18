/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4
 * Callers:
 *     DxgkAddAdapter @ 0x1404055E4 (DxgkAddAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x140066500 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1400731A8 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007328C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738E4 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x14018D120 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D5F4 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401AB000 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401D3300 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6C58 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetTransitionIdFromToken@DXGSESSIONMGR@@QEAAXPEAXPEA_K@Z @ 0x1401FAF94 (-GetTransitionIdFromToken@DXGSESSIONMGR@@QEAAXPEAXPEA_K@Z.c)
 *     DxgkSetStartPnPTransitionSessionized @ 0x1401FD158 (DxgkSetStartPnPTransitionSessionized.c)
 *     DxgkStartPnPTransition @ 0x1401FD198 (DxgkStartPnPTransition.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x140207308 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     DpiEnableSharedGraphicsPowerInterface @ 0x140235C04 (DpiEnableSharedGraphicsPowerInterface.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?MakeAdapterActive@DXGADAPTER@@QEAAXXZ @ 0x140397DF4 (-MakeAdapterActive@DXGADAPTER@@QEAAXXZ.c)
 *     DpiReportAdapter @ 0x1403A45AC (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1403A4870 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403F56EC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     DxgkDetermineAffectedSession @ 0x1403FAA50 (DxgkDetermineAffectedSession.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        PDEVICE_OBJECT DeviceObject,
        struct DXGADAPTER **a3,
        _QWORD *a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  int v6; // r12d
  char *v10; // rax
  DXGADAPTER *v11; // rax
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // r11d
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rcx
  struct _LUID *v20; // rdx
  ADAPTER_RENDER *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  char IsAdapterSessionized; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 *v26; // rax
  DXGGLOBAL **v27; // rcx
  struct DXGGLOBAL *v28; // rax
  struct DXGGLOBAL *v29; // rax
  __int64 result; // rax
  int v31; // [rsp+C8h] [rbp-C0h]
  int v32; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+108h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+110h] [rbp-78h] BYREF
  int v35; // [rsp+114h] [rbp-74h] BYREF
  unsigned __int64 v36; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v37[24]; // [rsp+120h] [rbp-68h] BYREF

  v6 = 0;
  LODWORD(a6) = 0;
  v10 = (char *)operator new(0x13F0uLL, 0x4B677844u, 64LL);
  if ( v10 && (v11 = DXGADAPTER::DXGADAPTER(v10, this), (v12 = (__int64)v11) != 0) )
  {
    v13 = DXGADAPTER::Initialize(v11, DeviceObject, a5);
    if ( v13 < 0 )
    {
LABEL_54:
      DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)v12);
      return (unsigned int)v13;
    }
    if ( bTracingEnabled )
    {
      v14 = *(_QWORD *)(v12 + 4772);
      v36 = *(_QWORD *)(v12 + 288);
      LODWORD(v33) = *DXGADAPTER::GetAdapterType((DXGADAPTER *)v12, &v35);
      v34 = *(_DWORD *)(v12 + 3368);
      v15 = *(_QWORD *)(v12 + 3120);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 96);
      else
        LOBYTE(v16) = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        v17 = *(_DWORD *)(v12 + 2452);
        v18 = v17 >> 17;
        LOBYTE(v18) = v18 & 7;
        v19 = v17 >> 10;
        LOBYTE(v19) = v19 & 0xF;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
          v19,
          &EventCreateAdapter,
          v18,
          (__int64)DeviceObject,
          v12,
          v16,
          *(_QWORD *)(v12 + 2400),
          *(_DWORD *)(v12 + 2408),
          *(_QWORD *)(v12 + 2416),
          *(_DWORD *)(v12 + 2424),
          *(_DWORD *)(v12 + 2428),
          *(_DWORD *)(v12 + 2436),
          *(_DWORD *)(v12 + 2440),
          *(_DWORD *)(v12 + 2444),
          *(_DWORD *)(v12 + 2456),
          *(_DWORD *)(v12 + 2432),
          *(_DWORD *)(v12 + 2448),
          v17,
          v19,
          (v17 >> 14) & 7,
          v18,
          (v17 & 0x80000000) != 0,
          *(_DWORD *)(v12 + 2460),
          *(_DWORD *)(v12 + 2464),
          v31,
          *(_DWORD *)(v12 + 2472),
          *(_DWORD *)(v12 + 2476),
          v32,
          v34,
          v33,
          v36,
          v14);
      }
    }
    DpiReportAdapter((__int64)DeviceObject, v12);
    if ( *(_QWORD *)(v12 + 3128) )
    {
      DXGADAPTER::ReportNodeMetadata((DXGADAPTER *)v12);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 305904, 0LL);
      *((_QWORD *)this + 38239) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 76483) )
        DXGADAPTER::MakeAdapterActive((DXGADAPTER *)v12);
      *((_QWORD *)this + 38239) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 305904, 0LL);
      KeLeaveCriticalRegion();
    }
    v13 = 0;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 4032LL) = v12;
    v21 = *(ADAPTER_RENDER **)(v12 + 3128);
    if ( v21 )
    {
      v13 = ADAPTER_RENDER::FinalizeInitialization(v21);
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(3LL, -1073741801LL);
        v22 = *(_QWORD *)(v12 + 216);
        WdLogGlobalForLineNumber = 2682;
        v23 = *(_QWORD *)(v22 + 64);
        *(_QWORD *)(v23 + 4032) = 0LL;
LABEL_53:
        DXGADAPTER::Destroy((DXGADAPTER *)v12, (struct _LUID *)v23);
        goto LABEL_54;
      }
    }
    *(_BYTE *)(v12 + 213) = 1;
    v34 = 0;
    v33 = 0LL;
    IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v12, v20, &v34, &v33);
    v33 = DxgkDetermineAffectedSession(
            IsAdapterSessionized,
            *(_QWORD *)(v12 + 3128) != 0LL,
            *(_QWORD *)(v12 + 3120) != 0LL,
            0,
            v33);
    if ( !DxgkStartPnPTransition(a4, v33) )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 2704;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to start PnP transition on the affected sessions, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 4032LL) = 0LL;
      goto LABEL_53;
    }
    v36 = 0LL;
    if ( !a4 )
    {
      v13 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2721;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get the PnP transition ID from the token (Status = 0x%I64x)",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 4032LL) = 0LL;
      goto LABEL_53;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::GetTransitionIdFromToken(*((DXGSESSIONMGR **)Global + 122), a4, &v36);
    *(_QWORD *)(v12 + 248) = v36;
    *(_BYTE *)(v12 + 4808) = 1;
    DxgkSetStartPnPTransitionSessionized(a4, IsAdapterSessionized);
    if ( *(_QWORD *)(v12 + 3128) && (*(_DWORD *)(v12 + 444) & 0x4000) == 0 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v37,
        (struct DXGADAPTER *)v12,
        1);
      if ( *(_DWORD *)(v12 + 200) == 1 )
      {
        if ( *((_DWORD *)this + 76214) != 10 || (*((_DWORD *)this + 76217) & 1) != 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 3128) + 736LL) + 8LL)
                                                 + 960LL))(
            *(_QWORD *)(*(_QWORD *)(v12 + 3128) + 744LL),
            *((_DWORD *)this + 76217) & 1);
        if ( *(_QWORD *)((char *)this + 304860) != 0x1E00000032LL )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 3128) + 760LL) + 8LL)
                                                         + 1104LL))(
            *(_QWORD *)(*(_QWORD *)(v12 + 3128) + 768LL),
            *((unsigned int *)this + 76215),
            *((unsigned int *)this + 76216));
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    }
    DXGADAPTERLISTLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 672));
    DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 752));
    v26 = (__int64 *)((char *)this + 800);
    v27 = (DXGGLOBAL **)*((_QWORD *)this + 100);
    if ( v27[1] != (DXGGLOBAL *)((char *)this + 800) )
      __fastfail(3u);
    *(_QWORD *)v12 = v27;
    *(_QWORD *)(v12 + 8) = v26;
    v27[1] = (DXGGLOBAL *)v12;
    *v26 = v12;
    if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v27, (struct DXGADAPTER *)v12) )
    {
      if ( ++*((_DWORD *)this + 76313) == 2 )
      {
        v28 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::RecordFeatureUsage((__int64)v28, 6, 1);
      }
      if ( *(_BYTE *)(v12 + 2948) )
      {
        ++*((_DWORD *)this + 76309);
      }
      else if ( *(_BYTE *)(v12 + 2943) )
      {
        ++*((_DWORD *)this + 76310);
      }
      if ( *((_DWORD *)this + 76310) && *((_DWORD *)this + 76309) )
      {
        v29 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::RecordFeatureUsage((__int64)v29, 9, 1);
      }
      else
      {
        v6 = 0;
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 94);
    DXGADAPTERLISTLOCK::ReleaseExclusive((DXGGLOBAL *)((char *)this + 672));
    if ( *(_BYTE *)(v12 + 209) )
    {
      if ( !*((_QWORD *)this + 124) && (*(_DWORD *)(v12 + 2976) & 8) == 0 )
      {
        DXGGLOBAL::SetVirtualRenderAdapter(this, (struct DXGADAPTER *)v12);
        v6 = *(unsigned __int8 *)(v12 + 211);
      }
      if ( v6 )
        DXGVAILOBJECT::NotifyVailAdapter(1);
    }
    else
    {
      DpiEnableSharedGraphicsPowerInterface(*(_QWORD *)(v12 + 216));
    }
    if ( (*(_BYTE *)(v12 + 3072) & 1) != 0 )
    {
      LOBYTE(a6) = 0;
      DxgkCheckAndUpdatePairingForNewAdapter((struct DXGADAPTER *)v12, (unsigned __int8 *)&a6);
      *((_BYTE *)a5 + 1) = *((_BYTE *)a5 + 1) & 0xBF | (((unsigned __int8)a6 & 1) << 6);
    }
    *a3 = (struct DXGADAPTER *)v12;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741801LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2636;
  }
  return result;
}
