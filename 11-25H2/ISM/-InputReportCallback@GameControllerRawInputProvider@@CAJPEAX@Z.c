/*
 * XREFs of ?InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x18005D540
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x18005D5C0 (_lambda_31685d6d76905a19580e009ac071d915_--_lambda_invoker_cdecl_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameControllerRawInputProvider::InputReportCallback(void *a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GameControllerRawInputProvider::s_instance
    && (v2 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 6)
                                                       + 24LL))(
               *((_QWORD *)GameControllerRawInputProvider::s_instance + 6),
               a1),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v2,
      v5);
    if ( a1 )
      lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_(a1);
    return v3;
  }
  else
  {
    if ( a1 )
      lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_(a1);
    return 0LL;
  }
}
