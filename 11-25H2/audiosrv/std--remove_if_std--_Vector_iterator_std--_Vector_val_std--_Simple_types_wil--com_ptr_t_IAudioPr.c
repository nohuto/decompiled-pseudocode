/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_cfbb0c6987d5abcf9ababb9f7de24ee3___ @ 0x1800C2284
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180026200 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D8A8 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_cfbb0c6987d5abcf9ababb9f7de24ee3_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800C1E20 (_lambda_cfbb0c6987d5abcf9ababb9f7de24ee3_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 */

__int64 **std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_cfbb0c6987d5abcf9ababb9f7de24ee3___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, __int64 *);
  v8 = v9;
  for ( i = a2; i != a3; ++i )
  {
    if ( lambda_cfbb0c6987d5abcf9ababb9f7de24ee3_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
           &v8,
           i) )
    {
      break;
    }
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !lambda_cfbb0c6987d5abcf9ababb9f7de24ee3_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
              (__int64 **)va,
              j) )
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
