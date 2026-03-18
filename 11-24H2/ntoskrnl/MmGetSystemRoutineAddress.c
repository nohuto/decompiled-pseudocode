/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1408B0D70
 * Callers:
 *     HalpCmciLoadThresholdConfiguration @ 0x1404D66BC (HalpCmciLoadThresholdConfiguration.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405594B8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetLoadConfiguration @ 0x1405598B4 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x14055996C (HalpMcGetRollbackRequest.c)
 *     HalpPmuArbiterQueryRegistryQuantum @ 0x1406FE324 (HalpPmuArbiterQueryRegistryQuantum.c)
 *     HalpDmaCvmQueryRegistryKeys @ 0x140C104F0 (HalpDmaCvmQueryRegistryKeys.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x140482574 (MiMarkKernelCfgTarget.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408AEF80 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x1408B0E30 (RtlFindExportedRoutineByName.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  NTSTATUS i; // eax
  void *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u);
        i < 0;
        i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  return ExportedRoutineByName;
}
