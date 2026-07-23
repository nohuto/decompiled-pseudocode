/*
 * XREFs of ExpGetIRTimerDesc @ 0x1404D2B60
 * Callers:
 *     ExStartRecordingIRTimerExpiries @ 0x1407BB768 (ExStartRecordingIRTimerExpiries.c)
 *     ExpCheckIRTimerAccess @ 0x140A16AEC (ExpCheckIRTimerAccess.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140AB7EB4 (ExStopRecordingIRTimerExpiries.c)
 * Callees:
 *     <none>
 */

wchar_t **__fastcall ExpGetIRTimerDesc(unsigned int a1)
{
  return &(&ExpIRTimerDescs)[3 * a1];
}
