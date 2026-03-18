/*
 * XREFs of PopSmartSuspendValidatePredictions @ 0x14075C560
 * Callers:
 *     PopIdleGlobalUserPresenceCallback @ 0x140AC9210 (PopIdleGlobalUserPresenceCallback.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopSmartSuspendValidateSinglePrediction @ 0x140A8FC14 (PopSmartSuspendValidateSinglePrediction.c)
 */

char PopSmartSuspendValidatePredictions()
{
  char result; // al
  char *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx

  result = SSHSupportIsPlatformAoAc();
  if ( result )
  {
    v1 = (char *)&PopSmartSuspendDecisionQueue;
    v2 = 16LL;
    v3 = MEMORY[0xFFFFF78000000014];
    do
    {
      result = PopSmartSuspendValidateSinglePrediction(v1, v3);
      v1 += 96;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
