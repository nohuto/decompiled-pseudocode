/*
 * XREFs of __lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator()_::_1_::catch$0 @ 0x1806F0BE9
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0DM@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0DM@$$CBG$$QEAUhresult@winrt@@AEAY00$$CBG@Z @ 0x1806EEBA0 (--$Callback_Error@AEAY0DM@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0.c)
 */

__int64 __fastcall _lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator()_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = winrt::to_hresult((_DWORD *)(a2 + 56));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[60],winrt::hresult,unsigned short const (&)[1]>(
    v3,
    v2,
    v4);
  return 0LL;
}
