/*
 * XREFs of ?evaluate@test_data_basic@tip2@@IEAAXXZ @ 0x1803C3404
 * Callers:
 *     ?evaluate@test_data_dynamic@tip2@@IEAAXXZ @ 0x1803C3454 (-evaluate@test_data_dynamic@tip2@@IEAAXXZ.c)
 *     ?evaluate@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXXZ @ 0x180698BF0 (-evaluate@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basi.c)
 * Callees:
 *     <none>
 */

void __fastcall tip2::test_data_basic::evaluate(tip2::test_data_basic *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_BYTE *)(v1 + 152) = 1;
    *(_WORD *)(v1 + 154) = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 16385;
  }
  *(_QWORD *)(v1 + 160) = 0LL;
}
