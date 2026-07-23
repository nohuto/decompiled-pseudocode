/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x140558090
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14053FAC8 (HalpInitializeInterruptsPn.c)
 *     HalpTimerClockActivate @ 0x140544240 (HalpTimerClockActivate.c)
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x1405447A4 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x14054768C (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547D50 (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x140553810 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x140B4FA78 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140C16944 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x140557FB0 (HalpCreateInterrupt.c)
 */

char *__fastcall HalpInterruptSetIdtEntry(
        unsigned __int8 a1,
        __int64 (__fastcall *a2)(struct _KINTERRUPT *a1, void *a2),
        char a3,
        __int64 a4,
        __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, (__int64)a2, a5);
}
