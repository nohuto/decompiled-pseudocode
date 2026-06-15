/*
 * XREFs of ?AcquireExclusiveModeLock@CBtAudioResourceManagerBase@@UEAA_NK@Z @ 0x1800D3880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManagerBase::AcquireExclusiveModeLock(
        CBtAudioResourceManagerBase *this,
        signed __int32 a2)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 24, a2, 0) == 0;
}
