/*
 * XREFs of HalpInterruptModel @ 0x1403744A8
 * Callers:
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalEnumerateProcessors @ 0x14053EF20 (HalEnumerateProcessors.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x14053F550 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpInitializeInterruptsBspLate @ 0x14053FA00 (HalpInitializeInterruptsBspLate.c)
 *     HalpMmReservePageTablePages @ 0x1405408AC (HalpMmReservePageTablePages.c)
 *     HalStartNextProcessor @ 0x140543B40 (HalStartNextProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1405485F0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x140549660 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptQueryControllerInfo @ 0x1406FB570 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1406FF4F8 (HalpGetAcpiStaticNumaTopology.c)
 *     HaliAcpiMachineStateInit @ 0x1406FFBF0 (HaliAcpiMachineStateInit.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407002E8 (HalpQueryAcpiResourceRequirements.c)
 *     HalpDpInitSystem @ 0x140B4EFA0 (HalpDpInitSystem.c)
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140B4F530 (HalpWheaInitSystem.c)
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140C17200 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140C17240 (HalpAcpiIBMVigilMatch.c)
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
