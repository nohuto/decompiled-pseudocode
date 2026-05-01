/*
 * XREFs of SetGamingFullScreenExperience$dtor$0 @ 0x180010DAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGamingFullScreenExperience_dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>::~com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
