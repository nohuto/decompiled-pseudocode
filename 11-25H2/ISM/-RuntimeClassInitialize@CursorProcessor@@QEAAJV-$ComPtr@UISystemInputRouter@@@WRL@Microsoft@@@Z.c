/*
 * XREFs of ?RuntimeClassInitialize@CursorProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180146008
 * Callers:
 *     ??$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801965EC (--$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorProcessor::RuntimeClassInitialize(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(a1 + 10, a2);
  v4 = a1[10];
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 13);
  v6 = v5(v4, a1 + 13);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
      (const char *)(unsigned int)v6,
      v8);
  if ( CursorProcessor::s_processor )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
      (const char *)0x8000FFFFLL,
      v8);
  CursorProcessor::s_processor = (struct CursorProcessor *)a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return 0LL;
}
