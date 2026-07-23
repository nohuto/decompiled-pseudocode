/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x14058F500
 * Callers:
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058F2E0 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405907DC (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = IopBugCheckProgressEfiVariableServicesAvailable();
  if ( (_BYTE)result )
  {
    BugCheckProgressEfiCalled = 1;
    result = guard_dispatch_icall_no_overrides(L"BugCheckProgress", BUGCHECK_EFI_GUID);
    BugCheckProgressEfiCalled = 0;
  }
  return result;
}
