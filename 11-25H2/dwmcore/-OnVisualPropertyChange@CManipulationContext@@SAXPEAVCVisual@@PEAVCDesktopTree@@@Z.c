/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801CABDC
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800FA2C0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180134D80 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801CAFB8 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180216418 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801CAD60 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CDesktopTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v3; // r10
  const struct CVisualTree *v4; // r11
  CInteraction *v5; // rbx
  void *InputHandle; // r15
  void *v7; // rbp
  void *v8; // rsi
  void *v9; // r14
  struct CVisual *VisualNoRef; // rdi
  struct CInteraction *v11; // rax
  char v12; // r10
  CInteraction *v13; // r11
  _DWORD *v14; // rdx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // r8d
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h]

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5, (__int64)InteractionInternal + 128, 0LL, 0LL);
    InputHandle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    VisualNoRef = CInteraction::GetVisualNoRef(v5);
    do
    {
      if ( !VisualNoRef )
        break;
      v11 = CVisual::GetInteractionInternal(VisualNoRef);
      v13 = v11;
      if ( v11 )
      {
        v14 = (_DWORD *)*((_QWORD *)v11 + 14);
        v15 = 0;
        v12 = 1;
        if ( v14 )
          v15 = v14[19];
        if ( !InputHandle && (!v15 || (InputHandle = CInteraction::GetInputHandle(v13)) == 0LL) )
          v12 = 0;
        v16 = 0;
        if ( v14 )
          v16 = v14[20];
        if ( !v7 && (!v16 || (v7 = CInteraction::GetInputHandle(v13)) == 0LL) )
          v12 = 0;
        v17 = 0;
        if ( v14 )
          v17 = v14[22];
        if ( !v9 && (!v17 || (v9 = CInteraction::GetInputHandle(v13)) == 0LL) )
          v12 = 0;
        v18 = 0;
        if ( v14 )
          v18 = v14[21];
        if ( !v8 && (!v18 || (v8 = CInteraction::GetInputHandle(v13)) == 0LL) )
          v12 = 0;
      }
      VisualNoRef = (struct CVisual *)*((_QWORD *)VisualNoRef + 11);
    }
    while ( !v12 );
    *((_QWORD *)&v19 + 1) = v7;
    *(_QWORD *)&v19 = InputHandle;
    *(_QWORD *)&v20 = v8;
    *((_QWORD *)&v20 + 1) = v9;
    *((_OWORD *)v5 + 5) = v19;
    *((_OWORD *)v5 + 6) = v20;
  }
}
