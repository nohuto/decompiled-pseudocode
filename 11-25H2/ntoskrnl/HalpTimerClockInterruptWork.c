/*
 * XREFs of HalpTimerClockInterruptWork @ 0x1402792DC
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN HalpTimerClockInterruptWork()
{
  BOOLEAN result; // al
  char v1; // bl
  struct _KDPC *v2; // rcx

  result = HalpClockWorkUnion;
  if ( (_WORD)HalpClockWorkUnion )
  {
    v1 = BYTE1(HalpClockWorkUnion);
    LOWORD(HalpClockWorkUnion) = 0;
    if ( result )
    {
      result = McaWmiCallback;
      if ( McaWmiCallback )
        result = guard_dispatch_icall_no_overrides(1496727831LL, 1LL);
    }
    if ( v1 )
    {
      result = KiProcessorBlock[0];
      v2 = *(struct _KDPC **)(KiProcessorBlock[0] + 128);
      if ( v2 )
      {
        *(_QWORD *)(KiProcessorBlock[0] + 128) = 0LL;
        return KeInsertQueueDpc(v2, (PVOID)MEMORY[0xFFFFF78000000014], (PVOID)HIDWORD(MEMORY[0xFFFFF78000000014]));
      }
    }
  }
  return result;
}
