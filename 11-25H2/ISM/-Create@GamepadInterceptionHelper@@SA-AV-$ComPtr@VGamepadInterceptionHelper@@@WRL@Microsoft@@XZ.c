/*
 * XREFs of ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x1801060E8
 * Callers:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A8BF4 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepadInterceptionHelper@@@Z @ 0x180104D3C (--$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepad.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall GamepadInterceptionHelper::Create(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<GamepadInterceptionHelper,GamepadInterceptionHelper,>((GamepadInterceptionHelper **)a1);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
