/*
 * XREFs of ACPIEcDisconnectGpioInterrupt @ 0x14009C964
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x14009C9B0 (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcDisconnectGpioInterrupt(__int64 a1)
{
  void *v1; // rax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 2216);
  *(&Parameters.Version + 1) = 0;
  Parameters.ConnectionContext.Generic = v1;
  Parameters.Version = 1;
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 2216) = 0LL;
  return 0LL;
}
