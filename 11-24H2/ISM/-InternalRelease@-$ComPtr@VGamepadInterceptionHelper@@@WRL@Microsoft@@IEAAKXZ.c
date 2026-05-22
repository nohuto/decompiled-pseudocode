/*
 * XREFs of ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A76F4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18007AA60 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ??1?$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A739C (--1-$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A75BC (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ??$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@@Z @ 0x1800C7C18 (--$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@.c)
 *     ?Create@HapticProcessor@@SA?AV?$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ @ 0x1800C828C (-Create@HapticProcessor@@SA-AV-$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ.c)
 *     ?OnDeviceQueryRemove@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CD2F0 (-OnDeviceQueryRemove@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x1800D2EAC (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800D2FF8 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepadInterceptionHelper@@@Z @ 0x180106B3C (--$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepad.c)
 *     ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x180107F4C (-Create@GamepadInterceptionHelper@@SA-AV-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
