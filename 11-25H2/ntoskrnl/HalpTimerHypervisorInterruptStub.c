/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x14055C590
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerHypervisorInterruptStub()
{
  __int64 InternalData; // rax
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpHypervisorHpet);
  guard_dispatch_icall_no_overrides(InternalData);
  result = 1;
  ++*(_DWORD *)(HalpHypervisorHpet + 64);
  return result;
}
