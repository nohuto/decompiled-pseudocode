/*
 * XREFs of VerifierInitSystem @ 0x140C3D310
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     VfPendingInitPhase1 @ 0x140B93AB4 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140B98468 (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140B9C3F0 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B9D33C (VfSettingsMiscellaneousChecksInitPhase1.c)
 *     VfIsRuleClassEnabled @ 0x140BA9550 (VfIsRuleClassEnabled.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
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
