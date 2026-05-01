/*
 * XREFs of _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_ @ 0x1804DF9F4
 * Callers:
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1802B85D4 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
