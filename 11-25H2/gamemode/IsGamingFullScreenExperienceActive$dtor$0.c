/*
 * XREFs of IsGamingFullScreenExperienceActive$dtor$0 @ 0x18000FA93
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGamingFullScreenExperienceActive_dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>::~com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
