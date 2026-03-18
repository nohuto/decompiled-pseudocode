/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140755254
 * Callers:
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
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
