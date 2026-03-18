/*
 * XREFs of PopPowerRequestEvaluateExecutionRequiredStatus @ 0x140A37044
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 * Callees:
 *     <none>
 */

bool PopPowerRequestEvaluateExecutionRequiredStatus()
{
  char v0; // r8

  v0 = 0;
  if ( PopExecutionRequiredTimeout )
    return !byte_140F0D8B3
        || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140F0D8B2
        || byte_140F0D8B1
        || MEMORY[0xFFFFF78000000008] - qword_140F0D8B8 < 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout;
  return v0;
}
