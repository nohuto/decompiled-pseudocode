/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405937B8
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x140592120 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1405924DC (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1405C1AB4 (KeFrozenProcessorCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  bool result; // al

  result = BugCheckProgressEfiSafeToCall
        && (v1 = (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount(), (unsigned int)v1 <= 1)
        && !BugCheckProgressEfiCalled
        && (unsigned __int8)guard_dispatch_icall_no_overrides(v1, v0, v2, v3) == 0;
  return result;
}
