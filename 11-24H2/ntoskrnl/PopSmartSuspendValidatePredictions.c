/*
 * XREFs of PopSmartSuspendValidatePredictions @ 0x14075B4FC
 * Callers:
 *     PopIdleGlobalUserPresenceCallback @ 0x140ABA420 (PopIdleGlobalUserPresenceCallback.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopSmartSuspendValidateSinglePrediction @ 0x140A8C254 (PopSmartSuspendValidateSinglePrediction.c)
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
