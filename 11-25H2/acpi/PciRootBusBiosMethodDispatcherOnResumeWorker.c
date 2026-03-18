/*
 * XREFs of PciRootBusBiosMethodDispatcherOnResumeWorker @ 0x140064430
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEvaluateBiosMethodsOnPciRootBusOnResume @ 0x14004A4A4 (AcpiEvaluateBiosMethodsOnPciRootBusOnResume.c)
 */

bool __fastcall PciRootBusBiosMethodDispatcherOnResumeWorker(__int64 a1, __int64 a2, int a3)
{
  if ( (_DWORD)a2 )
    return (_DWORD)a2 == 1;
  AcpiEvaluateBiosMethodsOnPciRootBusOnResume(a1, a2, a3);
  return 0;
}
