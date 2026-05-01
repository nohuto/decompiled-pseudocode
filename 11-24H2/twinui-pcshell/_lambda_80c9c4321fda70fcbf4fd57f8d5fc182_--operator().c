/*
 * XREFs of _lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator() @ 0x1806848D0
 * Callers:
 *     _lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::_lambda_invoker_cdecl_ @ 0x1806847B0 (_lambda_80c9c4321fda70fcbf4fd57f8d5fc182_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1806CA2C4 (wcscmp_0.c)
 */

__int64 __fastcall lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator()(__int64 a1, HWND a2, __int64 a3)
{
  DWORD WindowThreadProcessId; // edi
  HRESULT v6; // eax
  HRESULT v7; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp-828h] BYREF
  COLORREF pvAttribute; // [rsp+34h] [rbp-824h] BYREF
  int v11; // [rsp+38h] [rbp-820h] BYREF
  WCHAR ClassName[1024]; // [rsp+40h] [rbp-818h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+0h]

  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
  if ( dwProcessId != GetCurrentProcessId() )
    return 1LL;
  if ( WindowThreadProcessId != GetCurrentThreadId() )
    return 1LL;
  GetClassNameW(a2, ClassName, 1024);
  if ( wcscmp_0(ClassName, L"#32768") || *(_QWORD *)a3 != SendMessageW(a2, 0x1E1u, 0LL, 0LL) )
    return 1LL;
  if ( !(unsigned int)GetPropW(a2, L"IsZachMenuDWMAttributeSet") )
  {
    pvAttribute = 0;
    if ( GetThemeColor(*(HTHEME *)(a3 + 8), 10, 0, 3821, &pvAttribute) >= 0 )
    {
      v6 = DwmSetWindowAttribute(a2, 0x22u, &pvAttribute, 4u);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x74,
          (int)"shell\\lib\\immersivecontextmenu\\immersivecontextmenuownerdrawhelper.cpp",
          (const char *)(unsigned int)v6);
    }
    v11 = 3;
    v7 = DwmSetWindowAttribute(a2, 0x21u, &v11, 4u);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x78,
        (int)"shell\\lib\\immersivecontextmenu\\immersivecontextmenuownerdrawhelper.cpp",
        (const char *)(unsigned int)v7);
    SetPropW(a2, L"IsZachMenuDWMAttributeSet", HANDLE_FLAG_INHERIT);
  }
  return 0LL;
}
