/*
 * XREFs of TtmInit @ 0x140769D40
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140770B28 (TtmiInitQueues.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 TtmInit()
{
  TtmiInitQueues();
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  TtmiInitTerminals();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD88C8, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD8890, 0LL, 0LL);
}
