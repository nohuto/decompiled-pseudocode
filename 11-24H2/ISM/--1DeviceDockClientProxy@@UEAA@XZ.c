/*
 * XREFs of ??1DeviceDockClientProxy@@UEAA@XZ @ 0x18018287C
 * Callers:
 *     ??_GDeviceDockClientProxy@@UEAAPEAXI@Z @ 0x1801828B0 (--_GDeviceDockClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800831EC (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DeviceDockClientProxy::~DeviceDockClientProxy(DeviceDockClientProxy *this)
{
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
