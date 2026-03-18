/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401BA340
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x14039D208 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C5210 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F8F8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031A00 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003503C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1400382BC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x14006C7EC (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14019A5A4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403800D0 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1403924AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x140394060 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403CC780 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1404229E8 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x140422DBC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
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

  v3 = *((_QWORD *)a1 + 237);
  v18 = 0;
  v20[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2662;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 2662LL, 0LL, 0LL, 0LL, 0LL);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2668;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PsGetProcessSessionId(pDevice->GetProcess()->GetEProcess()) == PsGetCurrentProcessSessionId()",
      2668LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)a1 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2670;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2670LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v3 + 3120)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2671;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      2671LL,
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
      WdLogGlobalForLineNumber = 2724;
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
          WdLogGlobalForLineNumber = 2739;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(pCddDevice == NULL) || (pCddDevice->GetRenderCore() == pDevice->GetRenderCore())",
            2739LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v15 + 1953) = 1;
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
        WdLogGlobalForLineNumber = 2775;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          2775LL,
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
        WdLogGlobalForLineNumber = 2785;
      }
    }
    else
    {
      WdLogSingleEntry2(4LL, a1, v3);
      WdLogGlobalForLineNumber = 2771;
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
      *((_BYTE *)v17 + 1953) = 0;
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
        WdLogGlobalForLineNumber = 2856;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 2856LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v12 = (COREDEVICEACCESS *)v25;
    goto LABEL_49;
  }
  v10 = v9;
  WdLogSingleEntry1(2LL, v9);
  WdLogGlobalForLineNumber = 2690;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
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
