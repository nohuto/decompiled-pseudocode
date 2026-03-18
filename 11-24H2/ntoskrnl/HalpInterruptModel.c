/*
 * XREFs of HalpInterruptModel @ 0x1403BAB3C
 * Callers:
 *     HalpInterruptSetDestination @ 0x1403B9230 (HalpInterruptSetDestination.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x140540EC4 (HalpInterruptRemap.c)
 *     HalEnumerateProcessors @ 0x140541620 (HalEnumerateProcessors.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x140541C50 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpInitializeInterruptsBspLate @ 0x1405420B0 (HalpInitializeInterruptsBspLate.c)
 *     HalpMmReservePageTablePages @ 0x140542F5C (HalpMmReservePageTablePages.c)
 *     HalStartNextProcessor @ 0x140546280 (HalStartNextProcessor.c)
 *     HalpPrepareForBugcheck @ 0x14054AD30 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14054BDA0 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptQueryControllerInfo @ 0x1406FD930 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407018B8 (HalpGetAcpiStaticNumaTopology.c)
 *     HaliAcpiMachineStateInit @ 0x140701FB0 (HaliAcpiMachineStateInit.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407026A8 (HalpQueryAcpiResourceRequirements.c)
 *     HalpDpInitSystem @ 0x140B4CF60 (HalpDpInitSystem.c)
 *     HalpInterruptInitSystem @ 0x140B4D2D0 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140B4D4E0 (HalpWheaInitSystem.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140C15200 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140C15240 (HalpAcpiIBMVigilMatch.c)
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
