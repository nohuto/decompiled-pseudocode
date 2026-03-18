/*
 * XREFs of PciRootBusBiosMethodDispatcherOnResume @ 0x14004A420
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEvaluateBiosMethodsOnPciRootBusOnResume @ 0x14004A4A4 (AcpiEvaluateBiosMethodsOnPciRootBusOnResume.c)
 */

void __fastcall PciRootBusBiosMethodDispatcherOnResume(char *StartContext)
{
  NTSTATUS v2; // eax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  Object[0] = StartContext + 272;
  Object[1] = StartContext + 248;
  do
  {
    while ( 1 )
    {
      v2 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( v2 )
        break;
      AcpiEvaluateBiosMethodsOnPciRootBusOnResume(StartContext);
    }
  }
  while ( v2 != 1 );
  PsTerminateSystemThread(0);
}
