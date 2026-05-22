/*
 * XREFs of ??1?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A88EC
 * Callers:
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$4 @ 0x1801CB560 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$4.c)
 *     _GamepadInterceptionHelper::Create_::_1_::dtor$0 @ 0x1801CF65A (_GamepadInterceptionHelper--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::~ComPtr<GamepadInterceptionHelper>()
{
  return Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease();
}
