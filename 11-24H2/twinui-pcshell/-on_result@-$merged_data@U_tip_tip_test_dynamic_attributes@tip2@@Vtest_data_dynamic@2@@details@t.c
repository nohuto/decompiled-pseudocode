/*
 * XREFs of ?on_result@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x1803C3D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::on_result(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 344);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 16LL))(v4, *(_QWORD *)(a1 + 336), a2);
  return result;
}
