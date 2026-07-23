/*
 * XREFs of ViRlrsUnload @ 0x140613B40
 * Callers:
 *     <none>
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x14077A310 (PsSetCreateProcessNotifyRoutine.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfFaultsRemoveAllApps @ 0x140B986BC (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140B98754 (VfFaultsRemoveAllTags.c)
 */

__int64 ViRlrsUnload()
{
  __int64 result; // rax

  if ( ViFaultTraces )
  {
    ExFreePoolWithTag(ViFaultTraces, 0);
    ViFaultTraces = 0LL;
  }
  if ( ViFaultsProcessNotifyRoutineSet )
  {
    PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 1u);
    ViFaultsProcessNotifyRoutineSet = 0;
  }
  VfFaultInjectionMaxProbability = 10000;
  VfFaultInjectionProbability = 600;
  VfFaultsRemoveAllTags();
  result = VfFaultsRemoveAllApps();
  ViFaultsInitialized = 0;
  return result;
}
