/*
 * XREFs of ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18002A818
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18002DA00 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x1801C2470 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002AC94 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_18002AC94.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x18002AEE0 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18030F434 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::InitializeCloakType(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  HWND v7; // rax
  HWND v9; // rax
  HWND Window; // rax
  LPVOID *v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int pvAttribute; // [rsp+70h] [rbp+10h] BYREF

  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  pv[0] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         &v11,
         L"W32:%p",
         v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v5);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v6);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v6;
  }
  else
  {
    pv[0] = v11;
    if ( !a2 )
    {
      v11 = pv;
      v12 = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(&v11);
    }
    pvAttribute = 0;
    v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    if ( DwmGetWindowAttribute(v7, 0xEu, &pvAttribute, 4u) >= 0 && (pvAttribute & 2) != 0 && !*(_DWORD *)(a1 + 264) )
    {
      v9 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
      Window = GetWindow(v9, 4u);
      if ( !Window || DwmGetWindowAttribute(Window, 0xEu, &pvAttribute, 4u) < 0 || (pvAttribute & 2) == 0 )
      {
        *(_DWORD *)(a1 + 264) |= 1u;
        ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
          pv,
          a1 + 264);
      }
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return 0LL;
  }
}
