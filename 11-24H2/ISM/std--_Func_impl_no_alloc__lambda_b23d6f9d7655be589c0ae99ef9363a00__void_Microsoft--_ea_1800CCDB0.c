/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Do_call @ 0x1800CCDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 24LL))(*(_QWORD *)a2 + 8LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 8) + 24LL))(
           v3 + 8,
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
}
