/*
 * XREFs of ?_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804BF720
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x1804BF590 (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180109F70 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall SwitchItem::_IsCortanaAltTabProxyWindowView(
        SwitchItem *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  bool v3; // si
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-238h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-230h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v3 = 0;
  v8 = 0LL;
  v4 = **a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IWin32ApplicationView>>(&v8);
  if ( v4((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v5) >= 0 )
  {
    hWnd = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8 + 24LL))(v8, &hWnd);
    if ( v6 >= 0 )
    {
      if ( GetClassNameW(hWnd, ClassName, 260) )
        v3 = CompareStringOrdinal(ClassName, -1, L"Shell_CortanaProxy", -1, 1) == 2;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return v3;
}
