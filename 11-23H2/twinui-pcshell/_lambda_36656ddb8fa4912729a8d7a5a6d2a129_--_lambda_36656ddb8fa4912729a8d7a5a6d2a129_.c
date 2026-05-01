/*
 * XREFs of _lambda_36656ddb8fa4912729a8d7a5a6d2a129_::_lambda_36656ddb8fa4912729a8d7a5a6d2a129_ @ 0x1801DDB28
 * Callers:
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_36656ddb8fa4912729a8d7a5a6d2a129_::_lambda_36656ddb8fa4912729a8d7a5a6d2a129_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  *a1 = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1, a3);
  return a1;
}
