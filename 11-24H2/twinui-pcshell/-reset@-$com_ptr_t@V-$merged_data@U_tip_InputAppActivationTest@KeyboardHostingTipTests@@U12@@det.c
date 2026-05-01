/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802A9B8C
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180251890 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802C55C8 (-close@-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180473C10 (-Release@-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@.c)
 */

void *__fastcall wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>,wil::err_returncode_policy>::reset(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>::Release(result);
  return result;
}
