/*
 * XREFs of PopSetupUserPresencePredictionNotification @ 0x14073CF50
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupUserPresencePredictionNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_PO_USER_AWAY_PREDICTION,
           1,
           0,
           (__int64)PopWnfUserAwayPredictionCallback,
           0LL);
}
