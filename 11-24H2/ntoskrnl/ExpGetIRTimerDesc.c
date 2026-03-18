/*
 * XREFs of ExpGetIRTimerDesc @ 0x1404D9710
 * Callers:
 *     ExStartRecordingIRTimerExpiries @ 0x1407BB318 (ExStartRecordingIRTimerExpiries.c)
 *     ExpCheckIRTimerAccess @ 0x140A20CBC (ExpCheckIRTimerAccess.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140ABCE48 (ExStopRecordingIRTimerExpiries.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall ExpGetIRTimerDesc(unsigned int a1)
{
  return &(&ExpIRTimerDescs)[3 * a1];
}
