/*
 * XREFs of HalpTimerClockInterruptStub @ 0x14055C540
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerClockInterruptStub()
{
  __int64 InternalData; // rax
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  guard_dispatch_icall_no_overrides(InternalData);
  result = 1;
  ++*(_DWORD *)(HalpClockTimer + 64);
  return result;
}
