/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x14058FFC0
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x14058E8F0 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058ECAC (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1405BDA44 (KeFrozenProcessorCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  __int64 v0; // rcx
  bool result; // al

  result = BugCheckProgressEfiSafeToCall
        && (v0 = (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount(), (unsigned int)v0 <= 1)
        && !BugCheckProgressEfiCalled
        && (unsigned __int8)guard_dispatch_icall_no_overrides(v0) == 0;
  return result;
}
