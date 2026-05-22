/*
 * XREFs of ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x18009AC78
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18005094C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x180144FA8 (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180145550 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x1801455F8 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

void __fastcall CursorSuppressionProcessor::UnsuppressForDeviceArrivalImpl(
        CursorSuppressionProcessor *this,
        unsigned int a2)
{
  CursorSuppressionProcessor *v2; // rbx

  v2 = CursorSuppressionProcessor::s_processor;
  if ( *((_DWORD *)CursorSuppressionProcessor::s_processor + 22) != 2 )
  {
    CursorSuppressionProcessor::SuppressCursor(CursorSuppressionProcessor::s_processor, 0);
    *((_DWORD *)v2 + 22) = 2;
    TestCursorTraceLogging::StateChange<unsigned short const (&)[14]>();
    InputTraceLogging::Cursor::SetSuppressionState(a2, *((unsigned int *)v2 + 22));
  }
}
