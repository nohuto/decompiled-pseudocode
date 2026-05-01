/*
 * XREFs of wistd::__function::__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1804F9E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180213510 (--1-$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1804F8324 (--0-$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?OnLockScreenActiveChanged@GamingPosturePositioner@@AEAAX_N@Z @ 0x180504254 (-OnLockScreenActiveChanged@GamingPosturePositioner@@AEAAX_N@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl_unsigned_long_const____::operator()(
        GamingPosturePositioner *a1,
        _DWORD *a2)
{
  GamingPosturePositioner *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(&v4);
  if ( v4 )
    GamingPosturePositioner::OnLockScreenActiveChanged(v4, *a2 != 0);
  return wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>((__int64 *)&v4);
}
