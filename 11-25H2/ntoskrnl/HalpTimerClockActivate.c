/*
 * XREFs of HalpTimerClockActivate @ 0x140544090
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140544730 (HalpTimerPrepareClockInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerClockActivate(char a1)
{
  bool v1; // al
  int v2; // r8d
  bool v3; // bl
  int v4; // r9d
  __int64 result; // rax
  __int64 InternalData; // rax

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
      return guard_dispatch_icall_no_overrides(InternalData);
    }
  }
  return result;
}
