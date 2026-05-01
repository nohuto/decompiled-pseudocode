/*
 * XREFs of SetGamingFullScreenExperience$dtor$1 @ 0x180010DBE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGamingFullScreenExperience_dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>::~com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
