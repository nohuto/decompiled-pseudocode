/*
 * XREFs of PopPowerRequestEvaluateExecutionRequiredStatus @ 0x140A3BD2C
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 * Callees:
 *     <none>
 */

bool PopPowerRequestEvaluateExecutionRequiredStatus()
{
  char v0; // r8

  v0 = 0;
  if ( PopExecutionRequiredTimeout )
    return !byte_140F0E083
        || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140F0E082
        || byte_140F0E081
        || MEMORY[0xFFFFF78000000008] - qword_140F0E088 < 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout;
  return v0;
}
