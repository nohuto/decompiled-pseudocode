/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___ @ 0x180787C94
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180788F0C (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx
  _QWORD *v7; // [rsp+38h] [rbp+10h]

  v7 = operator new(0x28uLL);
  v7[1] = 0LL;
  v7[2] = 0LL;
  v7[1] = *a2;
  v7[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = a2[2];
  a2[2] = 0LL;
  v7[3] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 8) = 1;
  *v7 = off_180986C08;
  *a1 = v7;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2 + 2);
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
