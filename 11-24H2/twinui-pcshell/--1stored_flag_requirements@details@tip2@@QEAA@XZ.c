/*
 * XREFs of ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x1803B5DA0
 * Callers:
 *     ??1test_data_dynamic@tip2@@QEAA@XZ @ 0x1803B5DD0 (--1test_data_dynamic@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18068AE00 (--1-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@.c)
 * Callees:
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18028EA3C (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 */

void __fastcall tip2::details::stored_flag_requirements::~stored_flag_requirements(
        tip2::details::stored_flag_requirements *this,
        unsigned int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // edx

  tip2::vector_nothrow<tip2::test_flag>::clear((_QWORD *)this + 6, a2);
  tip2::vector_nothrow<tip2::test_flag>::clear((_QWORD *)this + 3, v3);
  tip2::vector_nothrow<tip2::test_flag>::clear(this, v4);
}
