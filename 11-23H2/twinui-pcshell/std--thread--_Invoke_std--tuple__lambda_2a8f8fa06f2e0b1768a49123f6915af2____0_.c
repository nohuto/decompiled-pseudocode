/*
 * XREFs of std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_ @ 0x1801B3BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800A3798 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()((__int64)a1);
  _Cnd_do_broadcast_at_thread_exit();
  if ( a1 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 3);
    v2 = (std::_Ref_count_base *)a1[1];
    if ( v2 )
      std::_Ref_count_base::_Decref(v2);
    operator delete(a1, 0x28uLL);
  }
  return 0LL;
}
