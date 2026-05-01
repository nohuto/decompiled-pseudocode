/*
 * XREFs of _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_ @ 0x1806B9DFC
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806BA714 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 */

_QWORD *__fastcall lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_(
        _QWORD *a1,
        __int64 *a2)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(a1, *a2);
  a1[1] = a2[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1 + 1);
  a1[2] = a2[2];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1 + 2);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    a1 + 3,
    a2[3]);
  return a1;
}
