/*
 * XREFs of ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x180105E14
 * Callers:
 *     ??1?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180105CA0 (--1-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@detai.c)
 * Callees:
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x1800A5ED0 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 */

void __fastcall tip2::details::stored_flag_requirements::~stored_flag_requirements(
        tip2::details::stored_flag_requirements *this)
{
  tip2::vector_nothrow<tip2::test_flag>::clear((_QWORD *)this + 6);
  tip2::vector_nothrow<tip2::test_flag>::clear((_QWORD *)this + 3);
  tip2::vector_nothrow<tip2::test_flag>::clear(this);
}
