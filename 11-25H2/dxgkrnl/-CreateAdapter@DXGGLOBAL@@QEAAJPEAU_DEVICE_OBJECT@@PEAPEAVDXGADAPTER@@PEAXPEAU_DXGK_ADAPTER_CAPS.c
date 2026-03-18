/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830
 * Callers:
 *     DxgkAddAdapter @ 0x14040C750 (DxgkAddAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x140066940 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x140072814 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x14018AEE0 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B188 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401A8AE0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401CDFB4 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D1928 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetTransitionIdFromToken@DXGSESSIONMGR@@QEAAXPEAXPEA_K@Z @ 0x1401F46D4 (-GetTransitionIdFromToken@DXGSESSIONMGR@@QEAAXPEAXPEA_K@Z.c)
 *     ?SetStartPnPTransitionSessionized@DXGSESSIONMGR@@QEAAXPEAXE@Z @ 0x1401F5948 (-SetStartPnPTransitionSessionized@DXGSESSIONMGR@@QEAAXPEAXE@Z.c)
 *     DxgkStartPnPTransition @ 0x1401F6848 (DxgkStartPnPTransition.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x140200BF8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     DpiEnableSharedGraphicsPowerInterface @ 0x14022F3A4 (DpiEnableSharedGraphicsPowerInterface.c)
 *     ?MakeAdapterActive@DXGADAPTER@@QEAAXXZ @ 0x1403200C8 (-MakeAdapterActive@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1403240C0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1403B3B40 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1403B3E04 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403FB908 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     DxgkDetermineAffectedSession @ 0x140400A60 (DxgkDetermineAffectedSession.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        PDEVICE_OBJECT DeviceObject,
        struct DXGADAPTER **a3,
        _QWORD *a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  char *v9; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  int v18; // r13d
  __int64 v19; // rax
  int v20; // r11d
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rcx
  struct _LUID *v24; // rdx
  ADAPTER_RENDER **v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  char IsAdapterSessionized; // r13
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v30; // rax
  __int64 *v31; // rax
  DXGGLOBAL **v32; // rcx
  struct DXGGLOBAL *v33; // rax
  struct DXGGLOBAL *v34; // rax
  int v35; // eax
  int v36; // [rsp+C8h] [rbp-C0h]
  int v37; // [rsp+E0h] [rbp-A8h]
  unsigned int v38; // [rsp+108h] [rbp-80h] BYREF
  int v39; // [rsp+10Ch] [rbp-7Ch] BYREF
  unsigned __int64 v40; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v41; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v42[24]; // [rsp+120h] [rbp-68h] BYREF

  LODWORD(a6) = 0;
  v9 = (char *)operator new(0x13F0uLL, 0x4B677844u, 64LL, (__int64)a4);
  if ( v9 && (v10 = DXGADAPTER::DXGADAPTER(v9, this), (v11 = (__int64)v10) != 0) )
  {
    v12 = DXGADAPTER::Initialize(v10, DeviceObject, a5);
    if ( v12 < 0 )
    {
LABEL_4:
      DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)v11);
      return (unsigned int)v12;
    }
    if ( bTracingEnabled )
    {
      v16 = *(_QWORD *)(v11 + 4772);
      v17 = *(_QWORD *)(v11 + 288);
      v18 = *DXGADAPTER::GetAdapterType((DXGADAPTER *)v11, &v39);
      v38 = *(_DWORD *)(v11 + 3368);
      v19 = *(_QWORD *)(v11 + 3120);
      if ( v19 )
        v20 = *(_DWORD *)(v19 + 96);
      else
        LOBYTE(v20) = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        v21 = *(_DWORD *)(v11 + 2452);
        v22 = v21 >> 17;
        LOBYTE(v22) = v22 & 7;
        v23 = v21 >> 10;
        LOBYTE(v23) = v23 & 0xF;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
          v23,
          &EventCreateAdapter,
          v22,
          (__int64)DeviceObject,
          v11,
          v20,
          *(_QWORD *)(v11 + 2400),
          *(_DWORD *)(v11 + 2408),
          *(_QWORD *)(v11 + 2416),
          *(_DWORD *)(v11 + 2424),
          *(_DWORD *)(v11 + 2428),
          *(_DWORD *)(v11 + 2436),
          *(_DWORD *)(v11 + 2440),
          *(_DWORD *)(v11 + 2444),
          *(_DWORD *)(v11 + 2456),
          *(_DWORD *)(v11 + 2432),
          *(_DWORD *)(v11 + 2448),
          v21,
          v23,
          (v21 >> 14) & 7,
          v22,
          (v21 & 0x80000000) != 0,
          *(_DWORD *)(v11 + 2460),
          *(_DWORD *)(v11 + 2464),
          v36,
          *(_DWORD *)(v11 + 2472),
          *(_DWORD *)(v11 + 2476),
          v37,
          v38,
          v18,
          v17,
          v16);
      }
    }
    DpiReportAdapter((__int64)DeviceObject, v11, v13, v14);
    v25 = (ADAPTER_RENDER **)(v11 + 3128);
    if ( *(_QWORD *)(v11 + 3128) )
    {
      DXGADAPTER::ReportNodeMetadata((DXGADAPTER *)v11);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 305824, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)this + 38229) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 76463) )
        DXGADAPTER::MakeAdapterActive((DXGADAPTER *)v11);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)this + 38229) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 305824, 0LL);
      KeLeaveCriticalRegion();
    }
    v12 = 0;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 4032LL) = v11;
    if ( *v25 )
    {
      v12 = ADAPTER_RENDER::FinalizeInitialization(*v25);
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL, -1073741801LL);
        v26 = *(_QWORD *)(v11 + 216);
        WdLogGlobalForLineNumber = 2681;
        v27 = *(_QWORD *)(v26 + 64);
        *(_QWORD *)(v27 + 4032) = 0LL;
LABEL_54:
        DXGADAPTER::Destroy((DXGADAPTER *)v11, (struct _LUID *)v27);
        goto LABEL_4;
      }
    }
    *(_BYTE *)(v11 + 213) = 1;
    v38 = 0;
    v40 = 0LL;
    IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v24, &v38, &v40);
    v40 = DxgkDetermineAffectedSession(IsAdapterSessionized, *v25 != 0LL, *(_QWORD *)(v11 + 3120) != 0LL, 0, v40);
    if ( !DxgkStartPnPTransition(a4, v40) )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 2703;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to start PnP transition on the affected sessions, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 4032LL) = 0LL;
      goto LABEL_54;
    }
    v41 = 0LL;
    if ( !a4 )
    {
      v12 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2720;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get the PnP transition ID from the token (Status = 0x%I64x)",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL);
      *(_QWORD *)(v27 + 4032) = 0LL;
      goto LABEL_54;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::GetTransitionIdFromToken(*((DXGSESSIONMGR **)Global + 118), a4, &v41);
    *(_QWORD *)(v11 + 248) = v41;
    *(_BYTE *)(v11 + 4808) = 1;
    v30 = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetStartPnPTransitionSessionized(*((DXGSESSIONMGR **)v30 + 118), a4, IsAdapterSessionized);
    if ( *(_QWORD *)(v11 + 3128) && (*(_DWORD *)(v11 + 444) & 0x4000) == 0 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v42,
        (struct DXGADAPTER *)v11,
        1);
      if ( *(_DWORD *)(v11 + 200) == 1 )
      {
        if ( *((_DWORD *)this + 76194) != 10 || (*((_DWORD *)this + 76197) & 1) != 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 3128) + 736LL) + 8LL)
                                                 + 960LL))(
            *(_QWORD *)(*(_QWORD *)(v11 + 3128) + 744LL),
            *((_DWORD *)this + 76197) & 1);
        if ( *(_QWORD *)((char *)this + 304780) != 0x1E00000032LL )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 3128) + 760LL) + 8LL)
                                                         + 1104LL))(
            *(_QWORD *)(*(_QWORD *)(v11 + 3128) + 768LL),
            *((unsigned int *)this + 76195),
            *((unsigned int *)this + 76196));
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    }
    DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
    DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 720));
    v31 = (__int64 *)((char *)this + 768);
    v32 = (DXGGLOBAL **)*((_QWORD *)this + 96);
    if ( v32[1] != (DXGGLOBAL *)((char *)this + 768) )
      __fastfail(3u);
    *(_QWORD *)v11 = v32;
    *(_QWORD *)(v11 + 8) = v31;
    v32[1] = (DXGGLOBAL *)v11;
    *v31 = v11;
    if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v32, (struct DXGADAPTER *)v11) )
    {
      if ( ++*((_DWORD *)this + 76293) == 2 )
      {
        v33 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::RecordFeatureUsage((__int64)v33, 6, 1);
      }
      if ( *(_BYTE *)(v11 + 2948) )
      {
        ++*((_DWORD *)this + 76289);
      }
      else if ( *(_BYTE *)(v11 + 2943) )
      {
        ++*((_DWORD *)this + 76290);
      }
      if ( *((_DWORD *)this + 76290) && *((_DWORD *)this + 76289) )
      {
        v34 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::RecordFeatureUsage((__int64)v34, 9, 1);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 90);
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 84);
    if ( *(_BYTE *)(v11 + 209) )
    {
      if ( *((_QWORD *)this + 120) || (*(_DWORD *)(v11 + 2976) & 8) != 0 )
      {
        v35 = (int)a6;
      }
      else
      {
        DXGGLOBAL::SetVirtualRenderAdapter(this, (struct DXGADAPTER *)v11);
        v35 = *(unsigned __int8 *)(v11 + 211);
      }
      if ( v35 )
        DXGVAILOBJECT::NotifyVailAdapter(1);
    }
    else
    {
      DpiEnableSharedGraphicsPowerInterface(*(_QWORD *)(v11 + 216));
    }
    if ( (*(_BYTE *)(v11 + 3072) & 1) != 0 )
    {
      LOBYTE(a6) = 0;
      DxgkCheckAndUpdatePairingForNewAdapter((struct DXGADAPTER *)v11, (unsigned __int8 *)&a6);
      *((_BYTE *)a5 + 1) = *((_BYTE *)a5 + 1) & 0xBF | (((unsigned __int8)a6 & 1) << 6);
    }
    *a3 = (struct DXGADAPTER *)v11;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741801LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2635;
  }
  return result;
}
