/*
 * XREFs of PoDeletePowerRequest @ 0x140A3C4E0
 * Callers:
 *     PoUnregisterSystemState @ 0x1404AF830 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14046C044 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
