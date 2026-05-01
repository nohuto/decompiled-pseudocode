/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::Release @ 0x18078A390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::Release(
        void *a1)
{
  unsigned int v2; // edi
  std::_Ref_count_base *v3; // rcx

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 8);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 3);
    v3 = (std::_Ref_count_base *)*((_QWORD *)a1 + 2);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(a1);
  }
  return v2;
}
