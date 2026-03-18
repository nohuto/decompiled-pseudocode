/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140749184
 * Callers:
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( PopDiagSleepStudyHandleRegistered )
    return -1073740008;
  result = EtwRegister(
             &SLEEPSTUDY_ETW_PROVIDER,
             PopDiagTraceControlCallback,
             &PopDiagSleepStudyHandle,
             &PopDiagSleepStudyHandle);
  if ( result >= 0 )
    PopDiagSleepStudyHandleRegistered = 1;
  return result;
}
