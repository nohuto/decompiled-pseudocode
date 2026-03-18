/*
 * XREFs of PoFxActivateComponent @ 0x140203CD0
 * Callers:
 *     PopFxActivateDevice @ 0x14047D560 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AA2A0 (PoFxStartDevicePowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x140545278 (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14054F3A0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x140553AB8 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x14062AE40 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140C21F30 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
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
