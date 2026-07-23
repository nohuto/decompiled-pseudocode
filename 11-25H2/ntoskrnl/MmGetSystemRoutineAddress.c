/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1408E84F0
 * Callers:
 *     HalpCmciLoadThresholdConfiguration @ 0x1404D6FCC (HalpCmciLoadThresholdConfiguration.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetLoadConfiguration @ 0x140556FB4 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x14055706C (HalpMcGetRollbackRequest.c)
 *     HalpPmuArbiterQueryRegistryQuantum @ 0x1406F2534 (HalpPmuArbiterQueryRegistryQuantum.c)
 *     HalpDmaCvmQueryRegistryKeys @ 0x140BFF4F0 (HalpDmaCvmQueryRegistryKeys.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x140481744 (MiMarkKernelCfgTarget.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408E67D0 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x1408E85B0 (RtlFindExportedRoutineByName.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  NTSTATUS i; // eax
  void *v3; // rcx
  PVOID ExportedRoutineByName; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u);
        i < 0;
        i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v3 = *(void **)&KeNumberProcessorsGroup0[9];
  ExportedRoutineByName = RtlFindExportedRoutineByName(v3, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  return ExportedRoutineByName;
}
