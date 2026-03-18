/*
 * XREFs of ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800FB600
 * Callers:
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1800FAEC0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801CAFB8 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18022E788 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 * Callees:
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1800FA80C (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CInteraction *__fastcall CManipulationContext::GetClosestInteractionAncestor(const struct CVisual *a1, bool *a2)
{
  __int64 v2; // rbx
  CVisual *VisualEffectiveParentImpl; // rdi
  struct CInteraction *InteractionInternal; // rax
  bool *v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(a1, a2);
  if ( VisualEffectiveParentImpl )
  {
    do
    {
      InteractionInternal = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
      if ( *(_QWORD *)Microsoft::WRL::ComPtr<CVisual>::operator=(&v7, InteractionInternal) )
        break;
      VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v5);
    }
    while ( VisualEffectiveParentImpl );
    v2 = v7;
  }
  if ( v2 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (struct CInteraction *)v2;
}
