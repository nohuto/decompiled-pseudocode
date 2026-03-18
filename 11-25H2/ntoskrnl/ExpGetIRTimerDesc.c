/*
 * XREFs of ExpGetIRTimerDesc @ 0x1404DA760
 * Callers:
 *     ExStartRecordingIRTimerExpiries @ 0x1407ABE68 (ExStartRecordingIRTimerExpiries.c)
 *     ExpCheckIRTimerAccess @ 0x140A1671C (ExpCheckIRTimerAccess.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140AB8D64 (ExStopRecordingIRTimerExpiries.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall ExpGetIRTimerDesc(unsigned int a1)
{
  return &(&ExpIRTimerDescs)[3 * a1];
}
