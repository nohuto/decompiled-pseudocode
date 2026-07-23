/*
 * XREFs of HalpTimerClockInterruptStub @ 0x14055CA70
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerClockInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  guard_dispatch_icall_no_overrides(InternalData, v1);
  result = 1;
  ++*(_DWORD *)(HalpClockTimer + 64);
  return result;
}
