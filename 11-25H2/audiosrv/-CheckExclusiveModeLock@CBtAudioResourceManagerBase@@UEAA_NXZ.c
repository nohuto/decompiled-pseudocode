/*
 * XREFs of ?CheckExclusiveModeLock@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800D39D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManagerBase::CheckExclusiveModeLock(CBtAudioResourceManagerBase *this)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 24, 0, 0) != 0;
}
