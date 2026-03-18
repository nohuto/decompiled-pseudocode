/*
 * XREFs of PopSmartSuspendValidatePredictions @ 0x140AC3F10
 * Callers:
 *     PopIdleGlobalUserPresenceCallback @ 0x140ABB1A0 (PopIdleGlobalUserPresenceCallback.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopSmartSuspendValidateSinglePrediction @ 0x140A8ADC4 (PopSmartSuspendValidateSinglePrediction.c)
 */

void PopSmartSuspendValidatePredictions()
{
  char *v0; // rdi
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx

  if ( SSHSupportIsPlatformAoAc() )
  {
    v0 = (char *)&PopSmartSuspendDecisionQueue;
    v1 = 16LL;
    v2 = MEMORY[0xFFFFF78000000014];
    do
    {
      PopSmartSuspendValidateSinglePrediction((__int64)v0, v2);
      v0 += 96;
      --v1;
    }
    while ( v1 );
  }
}
