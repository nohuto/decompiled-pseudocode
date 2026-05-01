/*
 * XREFs of ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FE0BC
 * Callers:
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802ED3D4 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180309CF8 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppChromeData(__int64 a1, __int64 a2, unsigned int a3)
{
  int (__fastcall *v5)(__int64, HSTRING, __int64 *); // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  UINT32 v8; // edx
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING string; // [rsp+40h] [rbp-38h] BYREF

  LODWORD(v14) = 0;
  v5 = *(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)a2 + 360LL);
  string = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( aWindowframesty[v6] );
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    JUMPOUT(0x1801FE1CBLL);
  }
  v7 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v6, a2, a3);
  v8 = v7 - 1;
  if ( (unsigned int)v6 < v7 )
    v8 = v6;
  v9 = WindowsCreateStringReference(L"WindowFrameStyle", v8, &hstringHeader, &string);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
  v12 = v5(a2, string, &v14) < 0;
  result = a1;
  if ( v12 )
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    LODWORD(v14) = (_DWORD)v14 == 1 ? 0x81 : 0;
    HIDWORD(v14) = 128;
    *(_QWORD *)a1 = v14;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return result;
}
