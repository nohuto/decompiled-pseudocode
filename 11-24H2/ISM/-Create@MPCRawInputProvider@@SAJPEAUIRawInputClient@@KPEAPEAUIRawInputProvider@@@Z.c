/*
 * XREFs of ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800CF790
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x180095F00 (--$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@.c)
 */

__int64 __fastcall MPCRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3,
        const char *a4)
{
  int v5; // eax
  const char *v6; // r9
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IRawInputClient *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  if ( !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x61,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      a4);
  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      a4);
  *a3 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<MPCRawInputProvider,IRawInputProvider,IRawInputClient * &>(a3, &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      v8);
  if ( !*a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x67,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v6);
  return 0LL;
}
