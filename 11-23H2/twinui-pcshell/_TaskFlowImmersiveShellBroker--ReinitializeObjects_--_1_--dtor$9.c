/*
 * XREFs of _TaskFlowImmersiveShellBroker::ReinitializeObjects_::_1_::dtor$9 @ 0x1802BD9DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
