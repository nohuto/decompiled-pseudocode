/*
 * XREFs of ??$?4VCInteractionTrackerPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCInteractionTrackerPositionAnimation@@@12@@Z @ 0x180254A2C
 * Callers:
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1800F1338 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CScrollAnimation>::operator=<CInteractionTrackerPositionAnimation>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
