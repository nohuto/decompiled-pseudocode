/*
 * XREFs of ??1?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x180107A5C
 * Callers:
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$10 @ 0x1801D2AA0 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$10.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ShellHandwritingProcessor_IContextualProcessor__::_1_::dtor$1 @ 0x1801D3886 (_Microsoft--WRL--Details--MakeAndInitialize_ShellHandwritingProcessor_IContextualProcessor__--_1.c)
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$1 @ 0x1801D6E65 (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$1.c)
 *     _GamepadInterceptionHelper::ClearGamepadInterceptionTarget_::_1_::dtor$0 @ 0x1801D6EBD (_GamepadInterceptionHelper--ClearGamepadInterceptionTarget_--_1_--dtor$0.c)
 *     _GamepadInterceptionHelper::SetGamepadInterceptionTarget_::_1_::dtor$0 @ 0x1801D6EE1 (_GamepadInterceptionHelper--SetGamepadInterceptionTarget_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::~ComPtr<IGamepadInterceptionTarget>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
