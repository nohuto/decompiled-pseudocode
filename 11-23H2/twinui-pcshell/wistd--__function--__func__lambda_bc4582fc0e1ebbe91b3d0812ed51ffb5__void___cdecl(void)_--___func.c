/*
 * XREFs of wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_::___func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_ @ 0x1801DDC6C
 * Callers:
 *     wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1801DE090 (wistd--__function--__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl_void__::___func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
