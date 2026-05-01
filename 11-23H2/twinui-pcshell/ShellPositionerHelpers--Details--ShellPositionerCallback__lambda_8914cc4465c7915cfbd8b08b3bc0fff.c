/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___ @ 0x1801D8968
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_scalar_deleting_destructor_ @ 0x1801D8EF0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_8914cc4465c7915cfb_ea_1801D8EF0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 32));
}
