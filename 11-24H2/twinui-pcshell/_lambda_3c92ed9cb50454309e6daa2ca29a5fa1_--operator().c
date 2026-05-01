/*
 * XREFs of _lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator() @ 0x180583D74
 * Callers:
 *     wistd::__function::__func__lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180583E30 (wistd--__function--__func__lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18058439C (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 */

__int64 __fastcall lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator()(_QWORD *a1)
{
  const char *v1; // r9
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v3, a1);
  try
  {
    result = StartupAppMonitor::ParentRegKeyCallback();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x5E,
             (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
             v1);
  }
  return result;
}
