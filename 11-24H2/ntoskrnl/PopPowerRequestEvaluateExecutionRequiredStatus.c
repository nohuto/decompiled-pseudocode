/*
 * XREFs of PopPowerRequestEvaluateExecutionRequiredStatus @ 0x140A3150C
 * Callers:
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC (PopPowerRequestHandleExecutionEnablementUpdate.c)
 * Callees:
 *     <none>
 */

bool PopPowerRequestEvaluateExecutionRequiredStatus()
{
  char v0; // r8

  v0 = 0;
  if ( PopExecutionRequiredTimeout )
    return !byte_140F0E223
        || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140F0E222
        || byte_140F0E221
        || MEMORY[0xFFFFF78000000008] - qword_140F0E228 < 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout;
  return v0;
}
