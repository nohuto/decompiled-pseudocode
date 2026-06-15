/*
 * XREFs of ?ReleaseExclusiveModeLock@CBtAudioResourceManagerBase@@UEAAXXZ @ 0x1800E0250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::ReleaseExclusiveModeLock(CBtAudioResourceManagerBase *this)
{
  _InterlockedExchange((volatile __int32 *)this + 24, 0);
}
