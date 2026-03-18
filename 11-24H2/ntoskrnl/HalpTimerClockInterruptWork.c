/*
 * XREFs of HalpTimerClockInterruptWork @ 0x14033A54C
 * Callers:
 *     HalpTimerClockInterrupt @ 0x14033ADE0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall HalpTimerClockInterruptWork(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOLEAN result; // al
  char v5; // bl
  struct _KDPC *v6; // rcx

  result = HalpClockWorkUnion;
  if ( (_WORD)HalpClockWorkUnion )
  {
    v5 = BYTE1(HalpClockWorkUnion);
    LOWORD(HalpClockWorkUnion) = 0;
    if ( result )
    {
      result = McaWmiCallback;
      if ( McaWmiCallback )
        result = guard_dispatch_icall_no_overrides(1496727831LL, 1LL, 0LL, a4);
    }
    if ( v5 )
    {
      result = KiProcessorBlock[0];
      v6 = *(struct _KDPC **)(KiProcessorBlock[0] + 128);
      if ( v6 )
      {
        *(_QWORD *)(KiProcessorBlock[0] + 128) = 0LL;
        return KeInsertQueueDpc(v6, (PVOID)MEMORY[0xFFFFF78000000014], (PVOID)HIDWORD(MEMORY[0xFFFFF78000000014]));
      }
    }
  }
  return result;
}
