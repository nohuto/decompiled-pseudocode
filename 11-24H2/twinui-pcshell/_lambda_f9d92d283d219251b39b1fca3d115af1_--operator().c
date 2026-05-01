/*
 * XREFs of _lambda_f9d92d283d219251b39b1fca3d115af1_::operator() @ 0x180583DF4
 * Callers:
 *     wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180583E80 (wistd--__function--__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(en_ea_180583E80.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18058463C (-RegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@.c)
 */

__int64 __fastcall lambda_f9d92d283d219251b39b1fca3d115af1_::operator()(_QWORD *a1)
{
  const char *v1; // r9
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v3, a1);
  try
  {
    result = StartupAppMonitor::RegKeyCallback();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x7F,
             (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
             v1);
  }
  return result;
}
