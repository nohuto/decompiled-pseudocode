/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1405924DC
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1405922C0 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405937B8 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = IopBugCheckProgressEfiVariableServicesAvailable();
  if ( (_BYTE)result )
  {
    BugCheckProgressEfiCalled = 1;
    result = guard_dispatch_icall_no_overrides(L"BugCheckProgress", BUGCHECK_EFI_GUID, CrashdmpDumpBlock + 1404, 4LL);
    BugCheckProgressEfiCalled = 0;
  }
  return result;
}
