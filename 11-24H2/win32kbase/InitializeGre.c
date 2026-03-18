/*
 * XREFs of InitializeGre @ 0x1402E6D50
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     HmgCreate @ 0x1400798EC (HmgCreate.c)
 *     GreCreateRectRgn @ 0x1400EF5F0 (GreCreateRectRgn.c)
 *     ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x14014236C (-AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x14014B40C (-bUseActualGDIScale@@YAHXZ.c)
 *     IsCurrentSessionInServerSilo @ 0x14014C424 (IsCurrentSessionInServerSilo.c)
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x14014D984 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     ?InitNonPagedGlobals@Base@Gre@@YA_NXZ @ 0x140152A68 (-InitNonPagedGlobals@Base@Gre@@YA_NXZ.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x14015AC0C (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x14015C120 (-Initialize@SfmState@@QEAAHXZ.c)
 *     bLockEtwEnabled @ 0x14015C530 (bLockEtwEnabled.c)
 *     ?Initialize@ScanLookAsideList@@QEAA_NXZ @ 0x14019D14C (-Initialize@ScanLookAsideList@@QEAA_NXZ.c)
 *     UserIsServiceSession @ 0x14019E7D0 (UserIsServiceSession.c)
 *     ?AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z @ 0x1401C526C (-AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z.c)
 *     Feature_Rust_GDI_REGION__private_IsEnabledPreCheck @ 0x1401C5674 (Feature_Rust_GDI_REGION__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402E2494 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1402E4910 (bInitICM.c)
 *     vInitXLATE @ 0x1402E555C (vInitXLATE.c)
 */

char InitializeGre()
{
  Gre::Base *v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  unsigned int (*v6)(void); // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  Gre::Base *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int (*v15)(void); // rax
  __int64 v16; // rdx
  void (*v17)(void); // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int (*v23)(void); // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int (*v27)(void); // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  void (*v30)(void); // rax
  __int64 v31; // rax
  struct HOBJ__ *RectRgn; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int (*v43)(void); // rax
  unsigned int (*v44)(void); // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int (*v47)(void); // rax
  unsigned int (*v48)(void); // rax
  int (*v49)(void); // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  void (*v52)(void); // rax
  PSECURITY_DESCRIPTOR SystemOwnerSecurityDescriptor; // rax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-59h] BYREF
  __int64 v55; // [rsp+68h] [rbp-21h]
  int v56; // [rsp+70h] [rbp-19h]
  __int64 v57; // [rsp+78h] [rbp-11h]
  _QWORD v58[8]; // [rsp+A0h] [rbp+17h] BYREF

  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
  {
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
    Feature_Rust_GDI_REGION__private_IsEnabledPreCheck();
    if ( (int)AllocateAndLoadBaseRustExports(
                L"\\SystemRoot\\System32\\win32kbase_rs.sys",
                (struct _UNICODE_STRING **)&WPP_MAIN_CB.Dpc.SystemArgument2,
                1) < 0 )
      return 0;
    WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument2;
  }
  if ( !Gre::Base::AllocateSessionGlobalsArea(v0) )
    return 0;
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v1) + 24);
  v4 = *(int (**)(void))(v3 + 2744);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v5) + 24) + 2752LL);
      if ( !v6 || !v6() )
        return 0;
    }
  }
  v7 = *(_QWORD *)(W32GetSessionState(v3) + 88);
  *(_BYTE *)(v7 + 8) = 1;
  *(_DWORD *)(v7 + 2848) = UserIsServiceSession(v8);
  *(_DWORD *)(v7 + 2852) = IsCurrentSessionInServerSilo();
  InitializeDefaultDCAttributes(v9);
  *(_BYTE *)(v7 + 2220) = (RtlGetSuiteMask() & 0x10) != 0;
  v11 = (Gre::Base *)(*(_QWORD *)(W32GetSessionState(v10) + 88) + 3040LL);
  *((_QWORD *)v11 + 1) = v11;
  *(_QWORD *)v11 = v11;
  if ( !Gre::Base::InitNonPagedGlobals(v11) )
    return 0;
  v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 24);
  v15 = *(int (**)(void))(v14 + 1272);
  if ( v15 )
  {
    if ( v15() >= 0 )
    {
      v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v16) + 24);
      v17 = *(void (**)(void))(v14 + 1280);
      if ( v17 )
        v17();
    }
  }
  v18 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(v14) + 88) + 3056LL);
  v18[1] = v18;
  *v18 = v18;
  v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v19) + 24) + 1288LL);
  if ( v20 )
  {
    if ( v20() >= 0 )
    {
      v23 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 24) + 1296LL);
      if ( !v23 || !v23() )
        return 0;
    }
  }
  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = bLockEtwEnabled();
  if ( !(unsigned int)HmgCreate(v24) || !ScanLookAsideList::Initialize((ScanLookAsideList *)(v7 + 4136)) )
    return 0;
  *(_DWORD *)(v7 + 4144) = 1;
  v27 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 24) + 1304LL);
  if ( v27 )
  {
    if ( v27() >= 0 )
    {
      v30 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 24) + 1312LL);
      if ( v30 )
        v30();
    }
  }
  v31 = *(_QWORD *)v7 + 1824LL;
  *(_QWORD *)(v7 + 3816) = 0LL;
  *(_QWORD *)(v7 + 3808) = v31;
  *(_QWORD *)(v7 + 3824) = 0LL;
  RectRgn = GreCreateRectRgn(0, 0, 0, 0);
  *(_QWORD *)(v7 + 4152) = RectRgn;
  if ( !RectRgn )
    return 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v58, (HRGN)RectRgn, 1, 0);
  if ( !v58[0] )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v58);
    return 0;
  }
  *(_QWORD *)(v7 + 4160) = v58[0];
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v58);
  if ( !(unsigned int)bInitPALOBJ(v34) )
    return 0;
  vInitXLATE(v35);
  if ( !(unsigned int)bInitBMOBJ(v36) )
    return 0;
  if ( !(unsigned int)bInitBRUSHOBJ(v37) )
    return 0;
  if ( !(unsigned int)bInitICM(v38) )
    return 0;
  v42 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v40, v39) + 24);
  v43 = *(int (**)(void))(v42 + 1320);
  if ( v43 )
  {
    if ( v43() >= 0 )
    {
      v44 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v42, v41) + 24) + 1328LL);
      if ( !v44 || !v44() )
        return 0;
    }
  }
  v46 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v42, v41) + 24);
  v47 = *(int (**)(void))(v46 + 1336);
  if ( v47 )
  {
    if ( v47() >= 0 )
    {
      v48 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46, v45) + 24) + 1344LL);
      if ( !v48 || !v48() )
        return 0;
    }
  }
  v49 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46, v45) + 24) + 1352LL);
  if ( v49 )
  {
    if ( v49() >= 0 )
    {
      v52 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v51, v50) + 24) + 1360LL);
      if ( v52 )
        v52();
    }
  }
  if ( !(unsigned int)SfmState::Initialize(*(SfmState **)(v7 + 4232)) )
    return 0;
  SystemOwnerSecurityDescriptor = CreateSystemOwnerSecurityDescriptor();
  *(_QWORD *)(v7 + 1736) = SystemOwnerSecurityDescriptor;
  if ( !SystemOwnerSecurityDescriptor )
    return 0;
  QueryTable.Flags = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
  QueryTable.DefaultData = 0LL;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultLength = 0;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  *(_DWORD *)(*(_QWORD *)(v7 + 1768) + 1573012LL) = 0;
  RtlQueryRegistryValues(0x80000003, L"LanguagePack", &QueryTable, 0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(v7 + 1768) + 1573016LL) = 1;
  *(_DWORD *)(v7 + 20) = bUseActualGDIScale();
  return 1;
}
