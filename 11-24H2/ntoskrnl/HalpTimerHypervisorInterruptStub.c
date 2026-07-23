/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x14055CAC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerHypervisorInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpHypervisorHpet);
  guard_dispatch_icall_no_overrides(InternalData, v1);
  result = 1;
  ++*(_DWORD *)(HalpHypervisorHpet + 64);
  return result;
}
