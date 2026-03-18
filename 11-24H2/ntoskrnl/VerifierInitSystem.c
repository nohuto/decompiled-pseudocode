/*
 * XREFs of VerifierInitSystem @ 0x140C3B1B8
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     VfPendingInitPhase1 @ 0x140B91AB4 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140B96468 (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140B9A3F0 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B9B33C (VfSettingsMiscellaneousChecksInitPhase1.c)
 *     VfIsRuleClassEnabled @ 0x140BA7550 (VfIsRuleClassEnabled.c)
 *     ViInitSystemPhase0 @ 0x140C3B6E4 (ViInitSystemPhase0.c)
 */

char VerifierInitSystem()
{
  char result; // al

  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  result = VfIsRuleClassEnabled(2u);
  if ( result )
    result = VfFaultsInitPhase1();
  if ( ViImageExecutionOptions == 1 )
  {
    result = MmWriteableSharedUserData;
    _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), 1u);
  }
  return result;
}
