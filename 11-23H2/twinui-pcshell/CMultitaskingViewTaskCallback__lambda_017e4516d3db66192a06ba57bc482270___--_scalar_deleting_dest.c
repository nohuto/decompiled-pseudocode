/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_scalar_deleting_destructor_ @ 0x180688030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_017e4516d3db66192a06ba57bc482270_::__lambda_017e4516d3db66192a06ba57bc482270_ @ 0x180687944 (_lambda_017e4516d3db66192a06ba57bc482270_--__lambda_017e4516d3db66192a06ba57bc482270_.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  lambda_017e4516d3db66192a06ba57bc482270_::__lambda_017e4516d3db66192a06ba57bc482270_((__int64)a1 + 48);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
