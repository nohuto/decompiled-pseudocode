/*
 * XREFs of PoDeletePowerRequest @ 0x140A35B50
 * Callers:
 *     PoUnregisterSystemState @ 0x1404AE990 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14046D6B4 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
