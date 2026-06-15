/*
 * XREFs of wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_::___func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_ @ 0x18014FB14
 * Callers:
 *     wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180150730 (wistd--__function--__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl_void__::___func__lambda_383ae521043a10c2e2d9282b6295b11b__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  return result;
}
