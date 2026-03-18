/*
 * XREFs of ?CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ @ 0x180230F54
 * Callers:
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180230EA0 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDCompositionInteractionStats *__fastcall CInteraction::CreateDCompStats(CInteraction *this)
{
  CGlobalDrawingContext **v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi

  v1 = (CGlobalDrawingContext **)((char *)this + 1728);
  v3 = *((_QWORD *)this + 216);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v1);
  }
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 72);
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v1);
      DCompositionCreateInteractionStats(v5, v1);
    }
  }
  return *v1;
}
