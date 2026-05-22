/*
 * XREFs of _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$10 @ 0x1801CB600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ControllerProcessor::SetVirtualKeyState_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::~ComPtr<IGamepadInterceptionTarget>((_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL));
}
