/*
 * XREFs of ?NotifyRevoked@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x18029CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyRevoked(CGlobalCompositionSurfaceInfo *this)
{
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v2; // rcx

  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v2 + 280) = CurrentFrameId;
}
