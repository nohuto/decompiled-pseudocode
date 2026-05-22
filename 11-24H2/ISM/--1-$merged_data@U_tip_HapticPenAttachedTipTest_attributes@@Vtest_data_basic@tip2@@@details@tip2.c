/*
 * XREFs of ??1?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180107AE4
 * Callers:
 *     ?Release@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x1801080DC (-Release@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@.c)
 * Callees:
 *     ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x180107C44 (--1stored_flag_requirements@details@tip2@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$00@details@tip2@@IEAAXXZ @ 0x180108D30 (-on_destroy@-$shared_data@$0A@$0A@$00@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_HapticPenAttachedTipTest_attributes,tip2::test_data_basic>::~merged_data<_tip_HapticPenAttachedTipTest_attributes,tip2::test_data_basic>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_HapticMouseAttachedTipTest_attributes,tip2::test_data_basic>::`vftable';
  tip2::details::shared_data<0,0,1>::on_destroy(a1 + 1);
  tip2::details::stored_flag_requirements::~stored_flag_requirements((tip2::details::stored_flag_requirements *)(a1 + 33));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
