/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Copy @ 0x1800CCD30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ @ 0x1800834D8 (-InternalAddRef@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801E3F90;
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef(a2 + 1);
  return a2;
}
