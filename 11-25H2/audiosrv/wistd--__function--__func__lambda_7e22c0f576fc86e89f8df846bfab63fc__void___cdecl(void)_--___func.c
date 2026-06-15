/*
 * XREFs of wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::___func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_ @ 0x180147018
 * Callers:
 *     wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180147B90 (wistd--__function--__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__::___func__lambda_7e22c0f576fc86e89f8df846bfab63fc__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  return result;
}
