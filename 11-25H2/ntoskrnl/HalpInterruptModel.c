/*
 * XREFs of HalpInterruptModel @ 0x1404469AC
 * Callers:
 *     HalpInterruptSetDestination @ 0x1404450C0 (HalpInterruptSetDestination.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalEnumerateProcessors @ 0x14053EDF0 (HalEnumerateProcessors.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x14053F420 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpInitializeInterruptsBspLate @ 0x14053F880 (HalpInitializeInterruptsBspLate.c)
 *     HalpMmReservePageTablePages @ 0x14054072C (HalpMmReservePageTablePages.c)
 *     HalStartNextProcessor @ 0x140543990 (HalStartNextProcessor.c)
 *     HalpPrepareForBugcheck @ 0x140548440 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1405494B0 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptQueryControllerInfo @ 0x1406F1B40 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1406F5AC8 (HalpGetAcpiStaticNumaTopology.c)
 *     HaliAcpiMachineStateInit @ 0x1406F61C0 (HaliAcpiMachineStateInit.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1406F68B8 (HalpQueryAcpiResourceRequirements.c)
 *     HalpDpInitSystem @ 0x140B3CF60 (HalpDpInitSystem.c)
 *     HalpInterruptInitSystem @ 0x140B3D2D0 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140B3D4E0 (HalpWheaInitSystem.c)
 *     HalpPiix4Detect @ 0x140B5AF1C (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140C04170 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140C041B0 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 240) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 240) == 6 )
    {
      return 4LL;
    }
    else
    {
      return 4096LL;
    }
  }
  return result;
}
