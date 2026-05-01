/*
 * XREFs of ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180289BCC
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180289C04 (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     __lambda_02d18896a6f04e84a63129cc1fd81310_::operator()_::_1_::catch$4 @ 0x1806FCB40 (__lambda_02d18896a6f04e84a63129cc1fd81310_--operator()_--_1_--catch$4.c)
 *     __lambda_037aa076caca4eb578368a6543edcedb_::operator()_::_1_::catch$3 @ 0x1806FCBC2 (__lambda_037aa076caca4eb578368a6543edcedb_--operator()_--_1_--catch$3.c)
 *     __lambda_0b18bae158eb7b112561ba3eda31e137_::operator()_::_1_::catch$3 @ 0x1806FCC33 (__lambda_0b18bae158eb7b112561ba3eda31e137_--operator()_--_1_--catch$3.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 1336));
  tip2::details::shared_data<0,0,1>::begin_update(*a1 + 8);
  return a1;
}
