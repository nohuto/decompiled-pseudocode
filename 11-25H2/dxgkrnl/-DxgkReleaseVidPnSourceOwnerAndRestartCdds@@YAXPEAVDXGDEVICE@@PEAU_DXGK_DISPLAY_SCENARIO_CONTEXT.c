/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401B7D90
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403AB268 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403D0BDC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EED8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031AE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003510C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x140038630 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x14006CAD0 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x140198118 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140286A00 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140310950 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039A4CC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D070 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x140425B64 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x140425F38 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
  int ProcessSessionId; // ebx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r9
  COREDEVICEACCESS *v12; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v14; // r9
  struct DXGDEVICE *v15; // rbx
  __int64 v16; // rax
  struct DXGDEVICE *v17; // rbx
  unsigned __int8 v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v20[6]; // [rsp+52h] [rbp-AEh] BYREF
  struct DXGDEVICE *v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[160]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[160]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v27[432]; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = *((_QWORD *)a1 + 235);
  v18 = 0;
  v20[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2610;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 2610LL, 0LL, 0LL, 0LL, 0LL);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2616;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PsGetProcessSessionId(pDevice->GetProcess()->GetEProcess()) == PsGetCurrentProcessSessionId()",
      2616LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a1 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2618;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2618LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v3 + 3120)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2619;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      2619LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v27,
    *(struct ADAPTER_DISPLAY **)(v3 + 3120),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 5) + 360LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kDwmStateAndPDevLocks((MANAGEDPRIMARIESTRACKER *)v27);
  v19 = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v19, 1);
  if ( v9 >= 0 )
  {
    v21 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v3 + 412), 0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
      WdLogGlobalForLineNumber = 2672;
    }
    v15 = v21;
    if ( v21 )
    {
      v16 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v21 + 2) != v16 )
        v15 = 0LL;
      v21 = v15;
      if ( v15 )
      {
        if ( *((_QWORD *)v15 + 2) != v16 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2687;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(pCddDevice == NULL) || (pCddDevice->GetRenderCore() == pDevice->GetRenderCore())",
            2687LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v15 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)a1, 1, v14, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v25);
    v17 = v21;
    if ( *(_DWORD *)(v3 + 200) == 1 )
    {
      if ( !*(_QWORD *)(v3 + 3120) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2723;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          2723LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3120), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3120), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v27, a1, 0xFFFFFFFF);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 3120), a1);
        v7 = 1;
        if ( v17 )
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v3 + 3120),
            v17,
            (struct COREDEVICEACCESS *)v25,
            &v18,
            v20,
            a2);
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v27, v18);
      }
      else
      {
        WdLogSingleEntry2(4LL, a1, v3);
        WdLogGlobalForLineNumber = 2733;
      }
    }
    else
    {
      WdLogSingleEntry2(4LL, a1, v3);
      WdLogGlobalForLineNumber = 2719;
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3120), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3120), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 3120), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v25);
    if ( v17 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
      *((_BYTE *)v17 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v19);
    if ( v18 && v20[0] && *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL) )
    {
      MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks((MANAGEDPRIMARIESTRACKER *)v27);
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL) + 216LL))();
    }
    if ( v7 )
    {
      v23[1] = 0LL;
      v23[0] = 1LL;
      v24 = 0LL;
      if ( (int)DxgkStatusChangeNotify(v23) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2804;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 2804LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v12 = (COREDEVICEACCESS *)v25;
    goto LABEL_49;
  }
  v10 = v9;
  WdLogSingleEntry1(2LL, v9);
  WdLogGlobalForLineNumber = 2638;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( a3 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)a1, 1, v11, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v26);
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3120), a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 3120), a1) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 3120), a1);
    }
    v12 = (COREDEVICEACCESS *)v26;
LABEL_49:
    COREDEVICEACCESS::~COREDEVICEACCESS(v12);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v19);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v27);
}
