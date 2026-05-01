/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_e3c426caee313476e75c2fbd46ec7ac0___ @ 0x1804275C8
 * Callers:
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1801DCD00 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 * Callees:
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180193958 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_e3c426caee313476e75c2fbd46ec7ac0_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x180426A30 (_lambda_e3c426caee313476e75c2fbd46ec7ac0_--operator()_UwpWindowEventDispatcher--PendingActivatio.c)
 */

__int64 **std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_e3c426caee313476e75c2fbd46ec7ac0___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD *);
  v8 = v9;
  for ( i = a2; i != a3; i += 4 )
  {
    if ( lambda_e3c426caee313476e75c2fbd46ec7ac0_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
           &v8,
           i) )
    {
      break;
    }
  }
  if ( i != a3 )
  {
    for ( j = i + 4; j != a3; j += 4 )
    {
      if ( !lambda_e3c426caee313476e75c2fbd46ec7ac0_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
              (_QWORD **)va,
              j) )
      {
        UwpWindowEventDispatcher::PendingActivationResumeData::operator=(i, j);
        i += 4;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
