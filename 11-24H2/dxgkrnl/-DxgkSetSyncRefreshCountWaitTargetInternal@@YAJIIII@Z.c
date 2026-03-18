/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x14030BC90 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000C81C (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14000E780 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400119E0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidSchLogWaitForVBlankRequest@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x140032F80 (-VidSchLogWaitForVBlankRequest@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140036564 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x140038380 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14005271C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x1400538FC (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14030D2BC (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x14030D3CC (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct DXGDEVICE *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // rsi
  int v10; // eax
  struct DXGADAPTER *v11; // r15
  int PairingAdapters; // eax
  __int64 v13; // rsi
  struct DXGADAPTER *v14; // rdi
  struct DXGADAPTER *v15; // rsi
  int v16; // r15d
  char v17; // r13
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // edx
  ADAPTER_DISPLAY *v21; // r10
  unsigned int v22; // eax
  unsigned int v23; // edx
  ADAPTER_DISPLAY *v24; // r10
  __int64 v25; // r8
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  int v34; // eax
  unsigned __int8 v35; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+51h] [rbp-AFh]
  char v37; // [rsp+52h] [rbp-AEh]
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v42; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v43; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v44; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v45; // [rsp+88h] [rbp-78h] BYREF
  struct DXGPROCESS *v46; // [rsp+90h] [rbp-70h]
  _BYTE v47[8]; // [rsp+98h] [rbp-68h] BYREF
  DXGADAPTER *v48[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v51[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v52[144]; // [rsp+100h] [rbp+0h] BYREF

  v42 = a4;
  v4 = 0LL;
  v5 = a3;
  v39 = 0LL;
  v6 = a2;
  v7 = (unsigned int)a1;
  v45 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
  v46 = Current;
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v27 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7198;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v27;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 && !g_OSTestSigningEnabled )
  {
    v27 = -1073741790;
    WdLogSingleEntry1(3LL, -1073741790LL);
    WdLogGlobalForLineNumber = 7206;
    return v27;
  }
  v40 = 0;
  v41 = 0;
  v10 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*((_QWORD *)Current + 11) + 240LL))(&v40, 0LL, &v41);
  if ( !v40 || v10 && !v41 )
    return 3221225659LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v48, v7, v9, &v45, 1);
  v11 = v45;
  if ( !v45 )
  {
    v27 = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 7229;
    if ( v48[0] )
      DXGADAPTER::ReleaseReference(v48[0]);
    return v27;
  }
  if ( (_DWORD)v6 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v47, v6, v9, &v39);
    if ( !v39 )
    {
      WdLogSingleEntry2(3LL, v11, v6);
      WdLogGlobalForLineNumber = 7244;
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
LABEL_59:
      v27 = -1073741811;
      goto LABEL_85;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v39 + 8);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
    v11 = v45;
    v4 = v39;
  }
  v38 = v4;
  v44 = 0LL;
  v43 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v11, v5, &v44, &v50, &v43, &v49, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, v11, v5, PairingAdapters);
    WdLogGlobalForLineNumber = 7270;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)v11,
      v5,
      v13,
      0LL,
      0LL);
    goto LABEL_54;
  }
  v14 = v44;
  v15 = v43;
  if ( !v44 || !v43 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7276;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7276LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v4 && (v14 != *(struct DXGADAPTER **)(*((_QWORD *)v4 + 2) + 16LL) || v15 != *((struct DXGADAPTER **)v4 + 237)) )
  {
    WdLogSingleEntry2(3LL, v11, v6);
    WdLogGlobalForLineNumber = 7284;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
    goto LABEL_59;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v14, v15);
  DXGADAPTER::ReleaseReference(v14);
  DXGADAPTER::ReleaseReference(v15);
  if ( *((_DWORD *)v15 + 40) == 1 )
  {
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
      (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v51,
      v14,
      v15);
    if ( *((_DWORD *)v14 + 50) != 1 || *((_DWORD *)v43 + 50) != 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v51);
      goto LABEL_70;
    }
    v15 = v43;
    if ( (unsigned int)v5 >= *(_DWORD *)(*((_QWORD *)v43 + 390) + 96LL) )
    {
      v27 = -1073741811;
      WdLogSingleEntry2(3LL, v5, -1073741811LL);
      WdLogGlobalForLineNumber = 7312;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v51);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
      goto LABEL_85;
    }
    if ( !DXGADAPTER::IsVSyncAvailable(v43, v5) )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v51);
      goto LABEL_67;
    }
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v51);
    v4 = v39;
    v14 = v44;
  }
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
  if ( v16 < 0 )
    goto LABEL_84;
  if ( !*((_QWORD *)v14 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7330;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pRenderAdapter->IsRenderAdapter()",
      7330LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)v15 + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7331;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      7331LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v6 )
  {
    if ( *((_DWORD *)v4 + 152) == 1 )
    {
      v4 = v39;
      v14 = v44;
      v15 = v43;
      goto LABEL_18;
    }
LABEL_70:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
    v27 = -1073741130;
    goto LABEL_85;
  }
LABEL_18:
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v17 = 0;
  if ( !DXGADAPTER::IsVSyncAvailable(v15, v5) )
    goto LABEL_67;
  if ( !*((_QWORD *)v15 + 391) )
  {
    v22 = DXGADAPTER::NumberOfVSyncWaiter(v14, v5);
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v24, v23, v42, v22, &v35);
    ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v15 + 390), v5);
LABEL_25:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v52);
    if ( v35 && v36 )
      DXGADAPTER::DecrementVSyncWaiter(v14, v5, v25);
    if ( !v37 )
    {
      if ( !v17 )
        goto LABEL_28;
      v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
      if ( v16 >= 0 )
      {
        v34 = *((_DWORD *)v4 + 152);
        v4 = v39;
        if ( v34 != 1 )
        {
LABEL_28:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
          if ( v48[0] )
            DXGADAPTER::ReleaseReference(v48[0]);
          return (unsigned int)v16;
        }
        v33 = VIDSCH_EXPORT::VidSchControlVSyncDevice(
                *(_QWORD *)(*((_QWORD *)v44 + 391) + 736LL),
                *((_QWORD *)v39 + 100),
                0LL,
                0,
                v5);
LABEL_80:
        v16 = v33;
        goto LABEL_28;
      }
LABEL_84:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
      v27 = v16;
      goto LABEL_85;
    }
    LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
    if ( (int)v13 >= 0 )
    {
      v33 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(
              *(_QWORD *)(*((_QWORD *)v14 + 391) + 736LL),
              *(_QWORD *)(*((_QWORD *)v14 + 391) + 744LL),
              1LL,
              0,
              v5);
      goto LABEL_80;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
LABEL_54:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
    v27 = v13;
LABEL_85:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v48, v31);
    return v27;
  }
  if ( v15 != v14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7353;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter == pRenderAdapter",
      7353LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::IncrementVSyncWaiter(v14, v5);
  v18 = *((_QWORD *)v14 + 391);
  v36 = 1;
  if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                          *(VIDSCH_EXPORT **)(v18 + 736),
                          *(struct _VIDSCH_GLOBAL **)(v18 + 744),
                          v5) )
  {
LABEL_23:
    VIDSCH_EXPORT::VidSchLogWaitForVBlankRequest(
      *(VIDSCH_EXPORT **)(*((_QWORD *)v14 + 391) + 736LL),
      *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v14 + 391) + 744LL),
      v46);
    v19 = DXGADAPTER::NumberOfVSyncWaiter(v14, v5);
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v21, v20, v42, v19, &v35);
    goto LABEL_25;
  }
  v28 = *((_QWORD *)v14 + 391);
  v29 = *(_QWORD *)(v28 + 736);
  if ( !v4 )
  {
    if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(v29, *(_QWORD *)(v28 + 744), 1LL, 1, v5) >= 0 )
    {
      v37 = 1;
      goto LABEL_23;
    }
    DXGADAPTER::DecrementVSyncWaiter(v14, v5, v32);
LABEL_67:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v38);
    v27 = -1071775738;
    goto LABEL_85;
  }
  if ( (int)VIDSCH_EXPORT::VidSchControlVSyncDevice(v29, *((_QWORD *)v4 + 100), 0LL, 1, v5) >= 0 )
  {
    v17 = 1;
    goto LABEL_23;
  }
  DXGADAPTER::DecrementVSyncWaiter(v14, v5, v30);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  if ( v48[0] )
    DXGADAPTER::ReleaseReference(v48[0]);
  return 3223191558LL;
}
