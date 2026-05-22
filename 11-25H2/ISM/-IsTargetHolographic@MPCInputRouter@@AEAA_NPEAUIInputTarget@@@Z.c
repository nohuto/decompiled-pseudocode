/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FBDB4
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FD014 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x1800FAAB0 (--$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800FB45C (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800FC0DC (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCInputRouter::IsTargetHolographic(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall *v3)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int ViewIdFromWindowId; // eax
  int v8; // eax
  unsigned int v9; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  char v11; // bl
  int v12; // ebx
  struct ViewHierarchyWithWindowManager *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int inited; // eax
  HWND Ancestor; // rax
  ISMTracing *v18; // rcx
  int v20; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  MPCInputRouter *v22; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp+28h] BYREF
  __int64 v24; // [rsp+60h] [rbp+30h] BYREF

  v22 = this;
  v24 = 0LL;
  v3 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v4 = v3((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v24);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x252,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v20);
  LODWORD(v22) = 0;
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v24 + 64LL))(v24, &v23);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x258,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5,
      v20);
  v6 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v24 + 56LL))(v24, &v22);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6,
      v20);
  ViewIdFromWindowId = (int)v22;
  if ( !(_DWORD)v22 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v24 + 48LL))(v24, &v22);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x260,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v8,
        v20);
    ViewIdFromWindowId = (int)v22;
    if ( !(_DWORD)v22 )
    {
      v9 = v23;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
      LODWORD(v22) = ViewIdFromWindowId;
    }
  }
  v11 = 0;
  if ( ViewIdFromWindowId )
  {
    v11 = IsEdition(1024LL);
    if ( !v11 )
    {
      v12 = (int)v22;
      v13 = ISMStatics::GetViewHierarchy();
      v11 = (unsigned int)ViewHelper::GetPresentationModeFromViewId(v13, v12) == 1;
    }
  }
  else if ( v23 )
  {
    v11 = IsEdition(1024LL);
    if ( !v11 )
    {
      if ( GetPropW((HWND)(int)v23, L"Windows.Graphics.Holographic.HolographicSpace")
        || GetPropW((HWND)(int)v23, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
      {
        goto LABEL_24;
      }
      inited = wil::init_once_nothrow<_lambda_d503711298e7f6b3b6e2140cf5363040_>(v14, 0LL, v15);
      if ( inited < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x34,
          (__int64)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
          (const char *)(unsigned int)inited);
      if ( `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled )
      {
        Ancestor = GetAncestor((HWND)(int)v23, 3u);
        if ( Ancestor )
        {
          if ( GetPropW(Ancestor, L"Windows.Internal.Shell.Holographic.Win32PortedView") )
LABEL_24:
            v11 = 1;
        }
      }
    }
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_IsTargetHolographic_(v18, (struct IInputTarget *)a2, (unsigned int)v22, v23, v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  return v11;
}
