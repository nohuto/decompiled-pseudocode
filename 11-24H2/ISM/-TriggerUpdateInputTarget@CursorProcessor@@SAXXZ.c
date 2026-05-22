/*
 * XREFs of ?TriggerUpdateInputTarget@CursorProcessor@@SAXXZ @ 0x18004D438
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18004CC5C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     ?CursorProcessorTriggerUpdateInputStarted@Cursor@InputTraceLogging@@SAXXZ @ 0x18004D460 (-CursorProcessorTriggerUpdateInputStarted@Cursor@InputTraceLogging@@SAXXZ.c)
 */

void CursorProcessor::TriggerUpdateInputTarget(void)
{
  InputTraceLogging::Cursor::CursorProcessorTriggerUpdateInputStarted();
  if ( CursorProcessor::s_processor )
    *((_BYTE *)CursorProcessor::s_processor + 72) = 1;
}
