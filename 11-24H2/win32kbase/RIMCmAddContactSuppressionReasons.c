/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1400F2C6C
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x140056BD0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1400EF99C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1400F0E64 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1400F219C (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1400F2930 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A44 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1400FA014 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140180FF0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x14015B17C (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  unsigned int v7; // r14d
  int v8; // r15d
  BOOL v9; // ebp

  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2);
  v7 = a2[2];
  v8 = IsContactSuppressed;
  v9 = 0;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 678LL);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 679LL);
  a2[2] |= a3;
  if ( !v8 && (unsigned int)RIMCmIsContactSuppressed((__int64)a2) )
  {
    if ( !*(_DWORD *)(a1 + 1020) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 684LL);
    --*(_DWORD *)(a1 + 1020);
    v9 = 1;
  }
  if ( (a3 & v7) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v9);
  if ( *(_DWORD *)(a1 + 1016) < *(_DWORD *)(a1 + 1020) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 696LL);
  return v9;
}
