/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405907DC
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x14058F140 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058F500 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1405BF084 (KeFrozenProcessorCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool result; // al

  result = BugCheckProgressEfiSafeToCall
        && (v1 = (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount(), (unsigned int)v1 <= 1)
        && !BugCheckProgressEfiCalled
        && (unsigned __int8)guard_dispatch_icall_no_overrides(v1, v0) == 0;
  return result;
}
