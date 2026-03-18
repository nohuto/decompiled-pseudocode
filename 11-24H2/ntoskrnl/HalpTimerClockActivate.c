/*
 * XREFs of HalpTimerClockActivate @ 0x140546980
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140547020 (HalpTimerPrepareClockInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerClockActivate(char a1)
{
  bool v1; // al
  int v2; // r8d
  bool v3; // bl
  int v4; // r9d
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  if ( a1 )
  {
    HalpTimerPrepareClockInterrupt();
    v1 = HalpDisableInterrupts();
    LOBYTE(v2) = 13;
    v3 = v1;
    result = HalpInterruptSetIdtEntry(209, (unsigned int)HalpTimerClockInterrupt, v2, v4, -3LL);
    if ( v3 )
      _enable();
  }
  else
  {
    result = *(unsigned int *)(HalpClockTimer + 224);
    if ( (result & 1) != 0 && (result & 0x800) != 0 )
    {
      InternalData = HalpTimerGetInternalData(HalpClockTimer);
      return guard_dispatch_icall_no_overrides(InternalData, 209LL, v7, v8);
    }
  }
  return result;
}
