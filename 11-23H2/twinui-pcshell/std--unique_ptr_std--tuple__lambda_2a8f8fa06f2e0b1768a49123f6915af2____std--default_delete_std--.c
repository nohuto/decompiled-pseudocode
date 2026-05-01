/*
 * XREFs of std::unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______::_unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______ @ 0x1804DFA4C
 * Callers:
 *     _std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2____::_1_::dtor$0 @ 0x1802C6942 (_std--thread--_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2____--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______::_unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______(
        __int64 **a1)
{
  __int64 *v1; // rbx
  std::_Ref_count_base *v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1 + 3);
    v2 = (std::_Ref_count_base *)v1[1];
    if ( v2 )
      std::_Ref_count_base::_Decref(v2);
    operator delete(v1);
  }
}
