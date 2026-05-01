/*
 * XREFs of wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802E0920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802AB300 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x1802C8DBC (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 */

void __fastcall wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  AcrylicPolicyManager *v4; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(AcrylicPolicyManager **)(a1 + 8);
  *((_BYTE *)v4 + 354) = AcrylicPolicyManager::_IsTransparencyEnabled(a1, a2, a3, a4);
  updated = AcrylicPolicyManager::UpdateAcrylicState(v4, 0);
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated);
}
