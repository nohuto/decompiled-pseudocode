/*
 * XREFs of ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x18017C828
 * Callers:
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18017C6EC (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Assign_counted_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@_K@Z @ 0x18017BFDC (--$_Assign_counted_range@PEAU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ViewMenuChordedKeyHandler::Initialize(__int64 a1, __int64 a2, __int64 a3, ...)
{
  char **v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, int (__fastcall *)(ViewMenuChordedKeyHandler *), __int64, __int64); // rsi
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v5 = (char **)(a1 + 80);
  if ( v5 != (char **)&qword_180246FB0 )
    std::vector<std::pair<unsigned short,bool>>::_Assign_counted_range<std::pair<unsigned short,bool> *>(
      v5,
      (char *)qword_180246FB0,
      (qword_180246FB8 - (__int64)qword_180246FB0) >> 2);
  *(_QWORD *)(a1 + 32) = ControllerProcessor::TaskSwitcherInvokedCallbackStatic;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 16) = 1;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
  v6 = CoreUICreate((__int64 *)va);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 96LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v9 = v14;
  v10 = *(__int64 (__fastcall **)(__int64, int (__fastcall *)(ViewMenuChordedKeyHandler *), __int64, __int64))(*(_QWORD *)v14 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  v6 = v10(v9, lambda_d6b818e87fb176752f65e0086b51e68b_::_lambda_invoker_cdecl_, a1, a1 + 24);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 103LL;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)(a1 + 48);
  if ( v11 != *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = v11;
  *(_WORD *)(a1 + 73) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  v7 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
  return v7;
}
