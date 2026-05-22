/*
 * XREFs of ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A75BC
 * Callers:
 *     ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DFAF0 (-OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DFCA0 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DFD80 (-OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801979D0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x180197D68 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180198070 (-OnDeviceRemoval@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A76F4 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@HapticProcessor@@SA?AV?$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ @ 0x1800C828C (-Create@HapticProcessor@@SA-AV-$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ.c)
 */

struct HapticProcessor *ISMStatics::GetHapticProcessor(void)
{
  struct HapticProcessor *result; // rax
  struct HapticProcessor **v1; // rax
  struct HapticProcessor *v2; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_hapticProcessor;
  if ( !ISMStatics::s_hapticProcessor )
  {
    v1 = (struct HapticProcessor **)HapticProcessor::Create(&v3);
    v2 = *v1;
    *v1 = 0LL;
    ISMStatics::s_hapticProcessor = v2;
    Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(&v3);
    return ISMStatics::s_hapticProcessor;
  }
  return result;
}
