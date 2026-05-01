/*
 * XREFs of ?Release@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180473C58
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18046C894 (--1-$com_ptr_t@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTe.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18046D268 (--4-$com_ptr_t@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTe.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180479B1C (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingT.c)
 * Callees:
 *     ??1?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x18046C8F0 (--1-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@det.c)
 */

__int64 __fastcall tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 74);
  if ( !v2 )
  {
    tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::~merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
