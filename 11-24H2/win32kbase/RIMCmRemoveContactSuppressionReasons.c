/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1400EF99C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1400F219C (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A44 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1400FA014 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140180FF0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimPTPPolicyUpdateState @ 0x1401EE420 (rimPTPPolicyUpdateState.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     ?UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x140154F48 (-UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_BOOL8 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  unsigned int v7; // r15d
  int v8; // r14d
  BOOL v9; // esi

  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2);
  v7 = a2[2];
  v8 = IsContactSuppressed;
  v9 = 0;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 712LL);
  a2[2] &= ~a3;
  if ( v8 && !(unsigned int)RIMCmIsContactSuppressed((__int64)a2) )
  {
    v9 = 1;
    ++*(_DWORD *)(a1 + 1020);
  }
  if ( (v7 & a3) != 0 )
    InputTraceLogging::RIM::UnsuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v9);
  if ( *(_DWORD *)(a1 + 1016) < *(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 728LL);
  return v9;
}
