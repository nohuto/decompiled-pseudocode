/*
 * XREFs of ACPIEcConnectGpioInterrupt @ 0x14009C82C
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x14009C90C (ACPIEcConnectInterrupt.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     memset @ 0x140070F40 (memset.c)
 */

NTSTATUS __fastcall ACPIEcConnectGpioInterrupt(char *DeferredContext)
{
  KINTERRUPT_MODE v2; // eax
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+80h] [rbp+10h] BYREF

  DeferredRoutine = 0LL;
  AcpiGetDriverProxyEndpoint(&DeferredRoutine, (__int64)ACPIEcGpioDpcRoutine);
  KeInitializeDpc((PRKDPC)(DeferredContext + 2224), DeferredRoutine, DeferredContext);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)DeferredContext;
  Parameters.Version = 1;
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeferredContext + 2216);
  AcpiGetDriverProxyEndpoint(&Parameters.FullySpecified.ServiceRoutine, (__int64)ACPIEcGpioServiceRoutine);
  Parameters.FullySpecified.Vector = *((_DWORD *)DeferredContext + 574);
  Parameters.FullySpecified.Irql = DeferredContext[2292];
  Parameters.FullySpecified.SynchronizeIrql = Parameters.FullySpecified.Irql;
  v2 = DeferredContext[2290] & 1;
  *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeferredContext;
  Parameters.FullySpecified.InterruptMode = v2;
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)(DeferredContext + 2300);
  Parameters.FullySpecified.ShareVector = DeferredContext[2289];
  return IoConnectInterruptEx(&Parameters);
}
