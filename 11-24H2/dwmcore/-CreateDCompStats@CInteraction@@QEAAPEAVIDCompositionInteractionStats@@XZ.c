/*
 * XREFs of ?CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ @ 0x180225744
 * Callers:
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180225690 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDCompositionInteractionStats *__fastcall CInteraction::CreateDCompStats(
        CInteraction *this,
        __int64 a2,
        __int64 a3)
{
  CGlobalDrawingContext **v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi

  v3 = (CGlobalDrawingContext **)((char *)this + 1728);
  v5 = *((_QWORD *)this + 216);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v3, v6, v7);
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 72);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v3, a2, a3);
      DCompositionCreateInteractionStats(v9, v3);
    }
  }
  return *v3;
}
