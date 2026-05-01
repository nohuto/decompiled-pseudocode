/*
 * XREFs of sub_1802F0C06 @ 0x1802F0C06
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void sub_1802F0C06(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)va);
  JUMPOUT(0x18008EA96LL);
}
