/*
 * XREFs of TtmInit @ 0x140769B20
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 *     TtmiInitTerminals @ 0x14076F7E0 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140770908 (TtmiInitQueues.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 TtmInit()
{
  TtmiInitQueues();
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  TtmiInitTerminals();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD78B8, TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140FD7880, 0LL, 0LL);
}
