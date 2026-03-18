/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x140557B60
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14053F948 (HalpInitializeInterruptsPn.c)
 *     HalpTimerClockActivate @ 0x140544090 (HalpTimerClockActivate.c)
 *     HalpTimerInitializeClock @ 0x140544404 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x1405445F4 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x1405474DC (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547BA0 (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1405535D0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x140B3DA28 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140BFCE18 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140C038B4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x140557A80 (HalpCreateInterrupt.c)
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
