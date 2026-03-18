/*
 * XREFs of ViRlrsUnload @ 0x140615580
 * Callers:
 *     <none>
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x14077A210 (PsSetCreateProcessNotifyRoutine.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfFaultsRemoveAllApps @ 0x140B966BC (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140B96754 (VfFaultsRemoveAllTags.c)
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
