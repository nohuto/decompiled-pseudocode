/*
 * XREFs of PoFxActivateComponent @ 0x1403B6160
 * Callers:
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AB730 (PoFxStartDevicePowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x140547B68 (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x140551CA0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1405563B8 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x140636E00 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140C33028 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  char v3; // r8

  v3 = a3 & 0xF7;
  if ( (v3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (v3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(BugCheckParameter2);
}
