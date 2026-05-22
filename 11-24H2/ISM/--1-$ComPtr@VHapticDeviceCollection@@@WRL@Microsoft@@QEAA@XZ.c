/*
 * XREFs of ??1?$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A739C
 * Callers:
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$4 @ 0x1801D2A00 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$4.c)
 *     _GamepadInterceptionHelper::Create_::_1_::dtor$0 @ 0x1801D5000 (_GamepadInterceptionHelper--Create_--_1_--dtor$0.c)
 *     _InputStateManager::OnDeviceQueryRemove_::_1_::dtor$1 @ 0x1801D535B (_InputStateManager--OnDeviceQueryRemove_--_1_--dtor$1.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$14 @ 0x1801D57A4 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<HapticDeviceCollection>::~ComPtr<HapticDeviceCollection>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(a1);
}
