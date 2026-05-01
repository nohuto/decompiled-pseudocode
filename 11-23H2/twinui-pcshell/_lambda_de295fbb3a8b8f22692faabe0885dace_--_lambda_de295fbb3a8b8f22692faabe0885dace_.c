/*
 * XREFs of _lambda_de295fbb3a8b8f22692faabe0885dace_::_lambda_de295fbb3a8b8f22692faabe0885dace_ @ 0x180206448
 * Callers:
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180094F5C (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_de295fbb3a8b8f22692faabe0885dace_::_lambda_de295fbb3a8b8f22692faabe0885dace_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  *a1 = *a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1, a3);
  return a1;
}
