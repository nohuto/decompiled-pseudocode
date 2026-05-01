/*
 * XREFs of sub_1802F6078 @ 0x1802F6078
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___::_lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___ @ 0x1801F498C (wil--details--lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___--_lambda_call__lambda_d7b8.c)
 */

void sub_1802F6078(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  __int64 v6; // [rsp+38h] [rbp+38h] BYREF
  va_list va; // [rsp+38h] [rbp+38h]
  __int64 v8; // [rsp+40h] [rbp+40h] BYREF
  va_list va1; // [rsp+40h] [rbp+40h]
  __int64 v10; // [rsp+48h] [rbp+48h]
  __int64 v11; // [rsp+50h] [rbp+50h]
  __int64 v12; // [rsp+58h] [rbp+58h]
  __int64 v13; // [rsp+60h] [rbp+60h]
  __int64 v14; // [rsp+68h] [rbp+68h]
  __int64 v15; // [rsp+70h] [rbp+70h]
  __int64 v16; // [rsp+78h] [rbp+78h]
  __int64 v17; // [rsp+80h] [rbp+80h]
  __int64 v18; // [rsp+88h] [rbp+88h]
  va_list va2; // [rsp+90h] [rbp+90h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  v10 = va_arg(va2, _QWORD);
  v11 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  wil::details::lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___::_lambda_call__lambda_d7b889f00800c56d2c67f3f2c35d2843___(va2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)va);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)va1);
  JUMPOUT(0x1800A22D9LL);
}
