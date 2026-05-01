/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad___::_scalar_deleting_destructor_ @ 0x1800652A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x50uLL);
  return a1;
}
