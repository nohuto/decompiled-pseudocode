/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x14055EE90
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerHypervisorInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpHypervisorHpet);
  guard_dispatch_icall_no_overrides(InternalData, v1, v2, v3);
  result = 1;
  ++*(_DWORD *)(HalpHypervisorHpet + 64);
  return result;
}
