/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x14058ECAC
 * Callers:
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058EA90 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x14058FFC0 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = IopBugCheckProgressEfiVariableServicesAvailable();
  if ( (_BYTE)result )
  {
    BugCheckProgressEfiCalled = 1;
    result = guard_dispatch_icall_no_overrides(L"BugCheckProgress");
    BugCheckProgressEfiCalled = 0;
  }
  return result;
}
