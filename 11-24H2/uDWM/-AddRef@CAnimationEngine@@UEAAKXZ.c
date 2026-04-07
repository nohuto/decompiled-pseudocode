/*
 * XREFs of ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x180020590
 * Callers:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18007E198 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7BD0 (-QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::AddRef(CAnimationEngine *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 29);
}
