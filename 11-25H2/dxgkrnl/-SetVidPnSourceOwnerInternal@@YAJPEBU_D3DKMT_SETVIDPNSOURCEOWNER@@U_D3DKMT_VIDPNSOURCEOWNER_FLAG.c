/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1403D2690 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EA80 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031AE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140031B30 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003510C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400362B0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x140038630 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x140198118 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140286A00 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1402BC5C0 (DxgkShutdownBootGraphics.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1402D69A0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1402D7C08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140310950 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403328FC (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039A4CC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D070 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1403B0424 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1403EE774 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x14040E0D4 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x140425B64 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x140425F38 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct DXGPROCESS *Current; // r13
  const void *v8; // r9
  size_t v9; // r8
  size_t v10; // r8
  const void *v11; // rdx
  __int64 v12; // r8
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  unsigned int i; // r14d
  __int64 v20; // rax
  __int64 v21; // rdx
  DISPLAY_SOURCE *v22; // rcx
  unsigned int v23; // ebx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // r9
  struct DXGDEVICE *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r14d
  ADAPTER_DISPLAY *v30; // r15
  int v31; // edx
  int v32; // edx
  int v33; // r12d
  unsigned int v34; // edx
  __int64 v35; // rax
  bool v36; // [rsp+50h] [rbp-438h] BYREF
  unsigned __int8 v37; // [rsp+51h] [rbp-437h] BYREF
  unsigned __int8 v38[6]; // [rsp+52h] [rbp-436h] BYREF
  struct DXGDEVICE *v39; // [rsp+58h] [rbp-430h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v40; // [rsp+60h] [rbp-428h]
  void *Src[2]; // [rsp+68h] [rbp-420h] BYREF
  void *v42[2]; // [rsp+78h] [rbp-410h]
  struct DXGDEVICE *v43; // [rsp+88h] [rbp-400h]
  struct DXGDEVICE *v44; // [rsp+90h] [rbp-3F8h] BYREF
  __int64 v45; // [rsp+98h] [rbp-3F0h] BYREF
  int v46; // [rsp+A0h] [rbp-3E8h]
  _BYTE v47[16]; // [rsp+A8h] [rbp-3E0h] BYREF
  _BYTE v48[24]; // [rsp+B8h] [rbp-3D0h] BYREF
  _QWORD v49[2]; // [rsp+D0h] [rbp-3B8h] BYREF
  __int128 v50; // [rsp+E0h] [rbp-3A8h]
  _BYTE v51[160]; // [rsp+F0h] [rbp-398h] BYREF
  _BYTE v52[432]; // [rsp+190h] [rbp-2F8h] BYREF
  unsigned int v53[16]; // [rsp+340h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v54[16]; // [rsp+380h] [rbp-108h] BYREF
  void *v55[16]; // [rsp+3C0h] [rbp-C8h] BYREF

  v40 = a4;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v23 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2938;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v23;
  }
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v42 = 0LL;
  memset(v55, 0, sizeof(v55));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47, Current);
  v53[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, a1, 0x20uLL);
  if ( LODWORD(v42[1]) )
  {
    if ( LODWORD(v42[1]) > 0x10 )
    {
      WdLogSingleEntry3(2LL, LODWORD(Src[0]), LODWORD(v42[1]), -1073741811LL);
      WdLogGlobalForLineNumber = 2962;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: VidPnSourceCount (0x%I64x) is too large, returning 0x%I64x",
        LODWORD(Src[0]),
        LODWORD(v42[1]),
        -1073741811LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
      return 3221225485LL;
    }
    v8 = Src[1];
    if ( !Src[1] || !v42[0] )
    {
      WdLogSingleEntry5(2LL, LODWORD(Src[0]), LODWORD(v42[1]), Src[1], v42[0], -1073741811LL);
      WdLogGlobalForLineNumber = 2974;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: (0x%I64x) must have both Type (0x%I64x) and VidPnSourceId (0x%I64x) array, returning 0x%I64x",
        LODWORD(Src[0]),
        LODWORD(v42[1]),
        (__int64)Src[1],
        (__int64)v42[0],
        -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
      return 3221225485LL;
    }
    v9 = 4LL * LODWORD(v42[1]);
    if ( (char *)Src[1] + v9 < Src[1] || (char *)Src[1] + v9 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v54, v8, v9);
    v10 = 4LL * LODWORD(v42[1]);
    v11 = v42[0];
    if ( (char *)v42[0] + v10 < v42[0] || (char *)v42[0] + v10 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v53, v11, v10);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v12 = LODWORD(v42[1]);
      if ( &a3[v12] < a3 || (unsigned __int64)&a3[v12] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v55, a3, v12 * 8);
    }
  }
  v44 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, (unsigned int)Src[0], Current, &v44);
  v14 = v44;
  if ( !v44 )
  {
    v23 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 3008;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_120:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v39);
LABEL_36:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
    return v23;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45, v44);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v48, (struct _KTHREAD **)v14 + 18);
  v15 = *((_QWORD *)v14 + 235);
  if ( !v15 )
  {
    v23 = -1073741637;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741637LL);
    WdLogGlobalForLineNumber = 3022;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkSetVidPnSourceOwner function is called on a render only device (0x%I64x), returning 0x%I64x.",
      LODWORD(Src[0]),
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45);
    goto LABEL_120;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v52,
    *(struct ADAPTER_DISPLAY **)(v15 + 3120),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v52);
  LOBYTE(v16) = 1;
  v17 = DxgkAcquireSessionModeChangeLock(v16);
  v18 = v17;
  v36 = v17 >= 0;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 3043;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v52);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45);
    v23 = v18;
    goto LABEL_120;
  }
  for ( i = 0; i < LODWORD(v42[1]); ++i )
  {
    v20 = *(_QWORD *)(v15 + 3120);
    v21 = v53[i];
    if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 96) )
    {
      v23 = -1073741811;
      WdLogSingleEntry3(2LL, v21, i, -1073741811LL);
      WdLogGlobalForLineNumber = 3065;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x at index 0x%I64x) is specified, returning 0x%I64x",
        v53[i],
        i,
        -1073741811LL,
        0LL,
        0LL);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v52);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45);
      if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
      goto LABEL_36;
    }
    v22 = (DISPLAY_SOURCE *)(*(_QWORD *)(v20 + 128) + 3984 * v21);
    if ( v54[i] )
    {
      if ( !v22 || !DISPLAY_SOURCE::CheckSessionOwnership(v22) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v52);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
        if ( v45 && v46 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v45 + 136));
          KeLeaveCriticalRegion();
        }
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
        }
        v23 = -1071774910;
        goto LABEL_36;
      }
      v33 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v15 + 412), v53[i], v55[i]);
      if ( v33 < 0 )
      {
        WdLogSingleEntry1(2LL, v53[i]);
        WdLogGlobalForLineNumber = 3084;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed DispMgr ownership check on VidPn source 0x%I64x",
          v53[i],
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v52);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45);
        if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
        v23 = v33;
        goto LABEL_36;
      }
    }
  }
  v43 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v15 + 412), 0);
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    WdLogGlobalForLineNumber = 3111;
  }
  v26 = v43;
  if ( v43 )
  {
    DxgkShutdownBootGraphics(v43, 0LL);
    if ( *((_BYTE *)v26 + 1936) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3121;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCddDevice->IsVsyncForced() == FALSE",
        3121LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v26 )
  {
    v27 = *((_QWORD *)v14 + 2);
    if ( *((_QWORD *)v26 + 2) != v27 )
      v26 = 0LL;
    v43 = v26;
    if ( v26 )
    {
      if ( *((_QWORD *)v26 + 2) != v27 || *((_QWORD *)v26 + 235) != *((_QWORD *)v14 + 235) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3136;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"(pCddDevice == NULL) || ((pCddDevice->GetRenderCore() == pDevice->GetRenderCore()) && (pCddDevice->GetDisplayA"
           "dapter(VidPnSourceId[0]) == pDevice->GetDisplayAdapter(VidPnSourceId[0])))",
          3136LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_BYTE *)v26 + 1937) = 1;
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v14, 1, v25, 0);
  v29 = COREDEVICEACCESS::AcquireExclusive((__int64)v51, 2u);
  if ( v29 < 0 )
  {
    if ( v26 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
      *((_BYTE *)v26 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v52);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    v23 = v29;
    goto LABEL_36;
  }
  if ( !*(_QWORD *)(v15 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3172;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      3172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v30 = *(ADAPTER_DISPLAY **)(v15 + 3120);
  LOBYTE(v28) = 0;
  if ( !LODWORD(v42[1])
    || LODWORD(v42[1]) == 1 && v54[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v53[0] < *((_DWORD *)v30 + 24) )
  {
    LOBYTE(v28) = 1;
  }
  if ( (_BYTE)v28 )
  {
    if ( !LODWORD(v42[1])
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v30, v14) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v30, v14))
      || LODWORD(v42[1]) == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v30, v14, v53[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v30, v14, v53[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v52, v14, 0xFFFFFFFF);
      if ( LODWORD(v42[1]) )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v30, v14, v53[0]);
        v34 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v30, v14);
        v34 = *((_DWORD *)v14 + 473);
      }
      DXGDEVICE::RemoveVidPnOwnership(v14, v34);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v14, 0);
    }
    goto LABEL_70;
  }
  if ( g_OSTestSigningEnabled )
  {
    v35 = *((_QWORD *)v14 + 5);
    v28 = *(_DWORD *)(v35 + 408) >> 13;
    if ( (*(_DWORD *)(v35 + 408) & 0x2000) != 0 && v54[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      v54[0] = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(v28, 0LL)
    && (v54[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v54[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 320LL))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v52, 0LL, 0xFFFFFFFF);
    v29 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v30, v14, v54, v53, (unsigned int)v42[1], a2);
    if ( v29 < 0 )
      goto LABEL_70;
    if ( v54[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( v54[0] == D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE || v54[0] == D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        v31 = 7;
        goto LABEL_69;
      }
      if ( v54[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3256;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Invalid VidPn source ownership!",
          3256LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v31 = 0;
        goto LABEL_69;
      }
    }
    v31 = 3;
LABEL_69:
    DXGDEVICE::SetSchedulingPriorityAdjustment(v14, v31);
    *((_DWORD *)v14 + 473) += LODWORD(v42[1]);
    goto LABEL_70;
  }
  v29 = -1073741790;
  WdLogSingleEntry1(4LL, -1073741790LL);
  WdLogGlobalForLineNumber = 3276;
LABEL_70:
  v37 = 0;
  v38[0] = 0;
  if ( v29 < 0 )
    goto LABEL_74;
  if ( v26 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v30, v26, (struct COREDEVICEACCESS *)v51, &v37, v38, v40);
  v32 = 1;
  if ( !v37 )
LABEL_74:
    v32 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v52, v32);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v51);
  if ( v26 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    *((_BYTE *)v26 + 1937) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    v14 = v44;
  }
  if ( v36 )
  {
    v36 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v29 >= 0 )
  {
    if ( v38[0] && v37 )
    {
      MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks((MANAGEDPRIMARIESTRACKER *)v52);
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v14 + 5) + 88LL) + 216LL))();
    }
    (*(void (**)(void))(*((_QWORD *)Current + 11) + 360LL))();
    v49[0] = 1LL;
    v49[1] = 0LL;
    v50 = 0LL;
    if ( (int)DxgkStatusChangeNotify(v49) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3371;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 3371LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v52);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v45);
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
  return (unsigned int)v29;
}
