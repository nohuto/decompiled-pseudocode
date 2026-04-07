/*
 * XREFs of ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800469F8
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180046930 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180046BF8 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ??$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180046F10 (--$QueryInterface@UIVisual@Composition@UI@Windows@@@CResourceProxy@@QEAAJPEAPEAUIVisual@Composit.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x1800472BC (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CGlobalLightSet::Initialize(CGlobalLightSet *this)
{
  int CoordinateSpaceVisual; // ebx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-30h]
  _DWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+80h] [rbp+30h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13[0] = 0;
  v13[1] = 1017370378;
  v13[2] = -1082130432;
  v14[0] = 0;
  v14[1] = 1053609165;
  v14[2] = -1082130432;
  CoordinateSpaceVisual = CGlobalLightSet::CreateCoordinateSpaceVisual(this);
  if ( CoordinateSpaceVisual < 0 )
    goto LABEL_6;
  v16 = 0LL;
  v3 = CResourceProxy::QueryInterface<Windows::UI::Composition::IVisual>(
         *(_QWORD *)(*((_QWORD *)this + 12) + 16LL),
         &v16);
  CoordinateSpaceVisual = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v3,
      v12);
    v9 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_6;
  }
  v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 3LL, v16, v13);
  CoordinateSpaceVisual = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v4,
      v12);
    v5 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
LABEL_6:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return (unsigned int)CoordinateSpaceVisual;
  }
  v7 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 4LL, v16, v14);
  CoordinateSpaceVisual = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v7,
      v12);
    v8 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_6;
  }
  v10 = RtlPublishWnfStateData(WNF_IMSN_GLOBALLIGHTSINVALIDATED, 0LL, 0LL, 0LL);
  CoordinateSpaceVisual = v10 | 0x10000000;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)CoordinateSpaceVisual,
      0);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return 0LL;
}
