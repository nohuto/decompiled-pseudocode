/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1403C9760 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031A00 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140031A50 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003503C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140036128 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1400382BC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x140042164 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x14006CA9C (Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x14006CB44 (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140199BF4 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14019A5A4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?HasContextWithAnyHintType@DXGDEVICE@@QEAAEPEBW4_D3DKMT_CLIENTHINT@@I@Z @ 0x1401BAE10 (-HasContextWithAnyHintType@DXGDEVICE@@QEAAEPEBW4_D3DKMT_CLIENTHINT@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x14028F620 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1402C9DC0 (DxgkShutdownBootGraphics.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x140313A24 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403800D0 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1403924AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140394060 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1403A17B0 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403CC780 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403D4B2C (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1403E89A4 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140406F60 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1404229E8 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x140422DBC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  const struct _D3DKMT_SETVIDPNSOURCEOWNER *v6; // rdi
  struct DXGPROCESS *Current; // r14
  unsigned int v8; // ebx
  const void *v10; // r9
  size_t v11; // r8
  size_t v12; // r8
  const void *v13; // rdx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // rsi
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rdx
  DISPLAY_SOURCE *v22; // rcx
  int v23; // r15d
  char v24; // al
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v26; // r9
  struct DXGDEVICE *v27; // rdi
  __int64 v28; // rax
  ADAPTER_DISPLAY *v29; // r14
  unsigned int v30; // r12d
  char v31; // cl
  struct DXGPROCESS *v32; // r13
  int v33; // edx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v34; // rbx
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r14
  unsigned int i; // ebx
  char v40; // r8
  unsigned int *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 HasContextWithAnyHintType; // al
  unsigned int v45; // edx
  char v46; // [rsp+50h] [rbp-4A8h] BYREF
  unsigned __int8 v47; // [rsp+51h] [rbp-4A7h] BYREF
  unsigned __int8 v48[6]; // [rsp+52h] [rbp-4A6h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v49; // [rsp+58h] [rbp-4A0h]
  void *Src[2]; // [rsp+60h] [rbp-498h] BYREF
  void *v51[2]; // [rsp+70h] [rbp-488h]
  struct DXGDEVICE *v52; // [rsp+80h] [rbp-478h] BYREF
  ADAPTER_DISPLAY *v53; // [rsp+88h] [rbp-470h]
  struct DXGPROCESS *v54; // [rsp+90h] [rbp-468h]
  struct DXGDEVICE *v55; // [rsp+98h] [rbp-460h] BYREF
  _BYTE v56[16]; // [rsp+A0h] [rbp-458h] BYREF
  _BYTE v57[16]; // [rsp+B0h] [rbp-448h] BYREF
  char v58[8]; // [rsp+C0h] [rbp-438h] BYREF
  _BYTE v59[24]; // [rsp+C8h] [rbp-430h] BYREF
  _QWORD v60[2]; // [rsp+E0h] [rbp-418h] BYREF
  __int128 v61; // [rsp+F0h] [rbp-408h]
  _BYTE v62[160]; // [rsp+100h] [rbp-3F8h] BYREF
  _BYTE v63[432]; // [rsp+1A0h] [rbp-358h] BYREF
  unsigned int v64[16]; // [rsp+350h] [rbp-1A8h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v65[16]; // [rsp+390h] [rbp-168h] BYREF
  enum _D3DKMT_CLIENTHINT v66[4]; // [rsp+3D0h] [rbp-128h] BYREF
  __m128i si128; // [rsp+3E0h] [rbp-118h]
  _DWORD v68[16]; // [rsp+3F0h] [rbp-108h] BYREF
  void *v69[16]; // [rsp+430h] [rbp-C8h] BYREF

  v49 = a4;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v54 = Current;
  if ( !Current )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2990;
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
    return v8;
  }
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v51 = 0LL;
  memset(v69, 0, sizeof(v69));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56, Current);
  v64[0] = 0;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v6, 0x20uLL);
  if ( LODWORD(v51[1]) )
  {
    if ( LODWORD(v51[1]) > 0x10 )
    {
      WdLogSingleEntry3(2LL, LODWORD(Src[0]), LODWORD(v51[1]), -1073741811LL);
      WdLogGlobalForLineNumber = 3014;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: VidPnSourceCount (0x%I64x) is too large, returning 0x%I64x",
        LODWORD(Src[0]),
        LODWORD(v51[1]),
        -1073741811LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
      return 3221225485LL;
    }
    v10 = Src[1];
    if ( !Src[1] || !v51[0] )
    {
      WdLogSingleEntry5(2LL, LODWORD(Src[0]), LODWORD(v51[1]), Src[1], v51[0], -1073741811LL);
      WdLogGlobalForLineNumber = 3026;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: (0x%I64x) must have both Type (0x%I64x) and VidPnSourceId (0x%I64x) array, returning 0x%I64x",
        LODWORD(Src[0]),
        LODWORD(v51[1]),
        (__int64)Src[1],
        (__int64)v51[0],
        -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
      return 3221225485LL;
    }
    v11 = 4LL * LODWORD(v51[1]);
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v65, v10, v11);
    v12 = 4LL * LODWORD(v51[1]);
    v13 = v51[0];
    if ( (char *)v51[0] + v12 < v51[0] || (char *)v51[0] + v12 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v64, v13, v12);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v14 = LODWORD(v51[1]);
      if ( &a3[v14] < a3 || (unsigned __int64)&a3[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v69, a3, v14 * 8);
    }
  }
  v55 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v58,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v55);
  v15 = v55;
  if ( !v55 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 3060;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_62:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v58);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
    return v8;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57, v55);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v59, (struct _KTHREAD **)v15 + 18);
  v16 = *((_QWORD *)v15 + 237);
  if ( !v16 )
  {
    v8 = -1073741637;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741637LL);
    WdLogGlobalForLineNumber = 3074;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkSetVidPnSourceOwner function is called on a render only device (0x%I64x), returning 0x%I64x.",
      LODWORD(Src[0]),
      -1073741637LL,
      0LL,
      0LL,
      0LL);
LABEL_27:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
    goto LABEL_62;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v63,
    *(struct ADAPTER_DISPLAY **)(v16 + 3120),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v63);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
  v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v46, 1);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 3095;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v63);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
    v8 = v18;
    goto LABEL_62;
  }
  v19 = 0;
  if ( LODWORD(v51[1]) )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(v16 + 3120);
      v21 = v64[v19];
      if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 96) )
        break;
      v22 = (DISPLAY_SOURCE *)(*(_QWORD *)(v20 + 128) + 4024 * v21);
      if ( v65[v19] )
      {
        if ( !v22 || !DISPLAY_SOURCE::CheckSessionOwnership(v22) )
        {
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
          MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v63);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
          v8 = -1071774910;
          goto LABEL_62;
        }
        v23 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v16 + 412), v64[v19], v69[v19]);
        if ( v23 < 0 )
        {
          WdLogSingleEntry1(2LL, v64[v19]);
          WdLogGlobalForLineNumber = 3136;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed DispMgr ownership check on VidPn source 0x%I64x",
            v64[v19],
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_61;
        }
      }
      if ( ++v19 >= LODWORD(v51[1]) )
        goto LABEL_37;
    }
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, v21, v19, -1073741811LL);
    WdLogGlobalForLineNumber = 3117;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x at index 0x%I64x) is specified, returning 0x%I64x",
      v64[v19],
      v19,
      -1073741811LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v63);
    goto LABEL_27;
  }
LABEL_37:
  v52 = 0LL;
  if ( (unsigned int)Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline() )
    v24 = BYTE1(*(_DWORD *)(v16 + 444)) & 1;
  else
    v24 = 0;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v16 + 412),
                                           &v52,
                                           0LL,
                                           0LL,
                                           v24);
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    WdLogGlobalForLineNumber = 3176;
  }
  v27 = v52;
  if ( v52 )
  {
    DxgkShutdownBootGraphics(v52, 0);
    if ( *((_BYTE *)v27 + 1952) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3186;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pCddDevice->IsVsyncForced() == FALSE",
        3186LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v27 )
    {
      v28 = *((_QWORD *)v15 + 2);
      if ( *((_QWORD *)v27 + 2) != v28 )
        v27 = 0LL;
      v52 = v27;
      if ( v27 )
      {
        if ( *((_QWORD *)v27 + 2) != v28 || *((_QWORD *)v27 + 237) != *((_QWORD *)v15 + 237) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3201;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(pCddDevice == NULL) || ((pCddDevice->GetRenderCore() == pDevice->GetRenderCore()) && (pCddDevice->GetDispla"
             "yAdapter(VidPnSourceId[0]) == pDevice->GetDisplayAdapter(VidPnSourceId[0])))",
            3201LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v27 + 1953) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v15, 1, v26, 0);
  v23 = COREDEVICEACCESS::AcquireExclusive((__int64)v62, 2u);
  if ( v23 < 0 )
  {
    if ( v27 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
      *((_BYTE *)v27 + 1953) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
LABEL_61:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v63);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
    v8 = v23;
    goto LABEL_62;
  }
  if ( !*(_QWORD *)(v16 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3237;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      3237LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v29 = *(ADAPTER_DISPLAY **)(v16 + 3120);
  v53 = v29;
  v30 = *((_DWORD *)v29 + 24);
  v31 = 0;
  if ( !LODWORD(v51[1]) || LODWORD(v51[1]) == 1 && v65[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v64[0] < v30 )
    v31 = 1;
  if ( v31 )
  {
    if ( (unsigned int)Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline() )
    {
      v38 = 0LL;
      if ( LODWORD(v51[1]) )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 3120), v15, v64[0])
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v16 + 3120), v64[0]) == 2 )
        {
          v68[0] = v64[0];
          LODWORD(v38) = 1;
        }
      }
      else
      {
        for ( i = 0; i < v30; ++i )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 3120), v15, i)
            && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v16 + 3120), i) == 2 )
          {
            v68[v38] = i;
            v38 = (unsigned int)(v38 + 1);
          }
        }
      }
      v40 = 0;
      if ( (_DWORD)v38 )
      {
        v41 = v68;
        v42 = (unsigned int)v38;
        do
        {
          v43 = *v41;
          if ( *((_BYTE *)v15 + v43 + 1304) )
          {
            *((_BYTE *)v15 + v43 + 1304) = 0;
            v40 = 1;
          }
          ++v41;
          --v42;
        }
        while ( v42 );
      }
      *(__m128i *)v66 = _mm_load_si128((const __m128i *)&_xmm);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      if ( v40 )
      {
        HasContextWithAnyHintType = DXGDEVICE::HasContextWithAnyHintType((ADAPTER_RENDER **)v15, v66);
        v34 = v49;
        if ( !HasContextWithAnyHintType )
          ADAPTER_DISPLAY::OnPathFailedOrInvalidate(*(DXGADAPTER ***)(v16 + 3120), v49);
        v29 = v53;
        goto LABEL_128;
      }
      v29 = v53;
    }
    v34 = v49;
LABEL_128:
    if ( !LODWORD(v51[1])
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v29, v15) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v29, v15))
      || LODWORD(v51[1]) == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v29, v15, v64[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v29, v15, v64[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v63, v15, 0xFFFFFFFF);
      if ( LODWORD(v51[1]) )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v29, v15, v64[0]);
        v45 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v29, v15);
        v45 = *((_DWORD *)v15 + 477);
      }
      DXGDEVICE::RemoveVidPnOwnership(v15, v45);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v15, 0);
    }
    v32 = v54;
    goto LABEL_89;
  }
  if ( g_OSTestSigningEnabled
    && (*(_DWORD *)(*((_QWORD *)v15 + 5) + 408LL) & 0x2000) != 0
    && v65[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
  {
    v65[0] = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
  }
  v32 = v54;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v54 + 11) + 224LL))()
    || (v65[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED || v65[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED)
    && !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v32 + 11) + 320LL))(0LL) )
  {
    v23 = -1073741790;
    WdLogSingleEntry1(4LL, -1073741790LL);
    WdLogGlobalForLineNumber = 3341;
    goto LABEL_88;
  }
  MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v63, 0LL, 0xFFFFFFFF);
  v23 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v29, v15, v65, v64, (unsigned int)v51[1], a2);
  if ( v23 >= 0 )
  {
    if ( v65[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( v65[0] == D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE || v65[0] == D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        v33 = 7;
        goto LABEL_87;
      }
      if ( v65[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3321;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Invalid VidPn source ownership!",
          3321LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v33 = 0;
LABEL_87:
        DXGDEVICE::SetSchedulingPriorityAdjustment(v15, v33);
        *((_DWORD *)v15 + 477) += LODWORD(v51[1]);
        goto LABEL_88;
      }
    }
    v33 = 3;
    goto LABEL_87;
  }
LABEL_88:
  v34 = v49;
LABEL_89:
  v47 = 0;
  v48[0] = 0;
  if ( v23 < 0 )
    goto LABEL_93;
  if ( v27 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v29, v27, (struct COREDEVICEACCESS *)v62, &v47, v48, v34);
  v35 = 1;
  if ( !v47 )
LABEL_93:
    v35 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v63, v35);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v62);
  if ( v27 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
    *((_BYTE *)v27 + 1953) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    v15 = v55;
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
  if ( v23 >= 0 )
  {
    if ( v47 && v48[0] )
    {
      MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks((MANAGEDPRIMARIESTRACKER *)v63);
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v15 + 5) + 88LL) + 216LL))();
    }
    (*(void (**)(void))(*((_QWORD *)v32 + 11) + 360LL))();
    v60[0] = 1LL;
    v60[1] = 0LL;
    v61 = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v60, v36, v37) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3511;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 3511LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v46);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v63);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v58);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
  return (unsigned int)v23;
}
