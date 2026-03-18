/*
 * XREFs of AcpiEvaluateBiosMethodsOnPciRootBusOnResume @ 0x14004A4A4
 * Callers:
 *     PciRootBusBiosMethodDispatcherOnResume @ 0x14004A420 (PciRootBusBiosMethodDispatcherOnResume.c)
 *     PciRootBusBiosMethodDispatcherOnResumeWorker @ 0x140064430 (PciRootBusBiosMethodDispatcherOnResumeWorker.c)
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x140049D9C (AcpiEvaluateOscMethodOnPciRootBus.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnPciRootBusOnResume(__int64 a1, __int64 a2, int a3)
{
  char v3; // al

  v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0);
  if ( *(_DWORD *)(a1 + 244) == 5 && (v3 & 8) != 0 )
    AcpiEvaluateOscMethodOnPciRootBus(a1, 0, a3, (_DWORD *)(a1 + 304), (int *)(a1 + 304));
  return 0LL;
}
