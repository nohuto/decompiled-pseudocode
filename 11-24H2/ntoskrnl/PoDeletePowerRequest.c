/*
 * XREFs of PoDeletePowerRequest @ 0x140A31CC0
 * Callers:
 *     PoUnregisterSystemState @ 0x1404AA220 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x140464CC4 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
