/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x14055A460
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x140542178 (HalpInitializeInterruptsPn.c)
 *     HalpTimerClockActivate @ 0x140546980 (HalpTimerClockActivate.c)
 *     HalpTimerInitializeClock @ 0x140546CF4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x140546EE4 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x140549DCC (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x14054A490 (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x140555ED0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x140B4DA28 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140C0DE18 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140C14944 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x14055A380 (HalpCreateInterrupt.c)
 */

char *__fastcall HalpInterruptSetIdtEntry(
        unsigned __int8 a1,
        __int64 (__fastcall *a2)(struct _KINTERRUPT *a1, void *a2, __int64 a3, __int64 a4),
        char a3,
        __int64 a4,
        __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, (__int64)a2, a5);
}
