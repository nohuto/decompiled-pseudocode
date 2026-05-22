/*
 * XREFs of _GamepadInterceptionHelper::Create_::_1_::dtor$0 @ 0x1801CF65A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A88EC (--1-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall GamepadInterceptionHelper::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::~ComPtr<GamepadInterceptionHelper>();
  }
  return result;
}
