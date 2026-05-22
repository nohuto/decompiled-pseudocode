/*
 * XREFs of ?Create@MPCManager@@SAXXZ @ 0x18009A5F0
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003310C (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     std::call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___ @ 0x1800830B4 (std--call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCManager::Create(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( MPCManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      a4);
  std::call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___(a1, a2);
  if ( !MPCManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v4);
}
