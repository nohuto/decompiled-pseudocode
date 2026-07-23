/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140B99184
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9D138 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     ViThunkApplyPristineCurrentSession @ 0x140B992F4 (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(ULONG_PTR a1)
{
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  return ViThunkApplyPristineCurrentSession(a1);
}
