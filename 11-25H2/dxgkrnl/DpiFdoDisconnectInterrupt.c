/*
 * XREFs of DpiFdoDisconnectInterrupt @ 0x140236CB8
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoDisconnectInterrupt(__int64 a1)
{
  __int64 v1; // rdx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(&Parameters.Version + 1) = 0;
  Parameters.Version = *(_DWORD *)(v1 + 1384);
  Parameters.ConnectionContext.Generic = *(PVOID *)(v1 + 1392);
  *(_QWORD *)(v1 + 1392) = 0LL;
  IoDisconnectInterruptEx(&Parameters);
}
