/*
 * XREFs of ?InternalAddRef@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ @ 0x1800834D8
 * Callers:
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CBF30 (--0InputProcess@@AEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Copy @ 0x1800CCD30 (std--_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft--_ea_1800CCD30.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 8LL))(v1 + 8);
  return result;
}
