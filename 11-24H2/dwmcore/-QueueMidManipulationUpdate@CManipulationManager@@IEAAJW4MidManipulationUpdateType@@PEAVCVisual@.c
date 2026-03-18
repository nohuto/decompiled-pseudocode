/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800931D4
 * Callers:
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x180093018 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x180093620 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800948DC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180094AB0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800BF2C0 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800905E4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18009444C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180094C60 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800966AC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180193DE4 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180194A04 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x180194E84 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180195050 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  struct CInteraction *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  unsigned int *v9; // rax
  unsigned int *v10; // rsi
  __int64 v11; // rcx
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned int v14; // esi
  CInteraction *v15; // r8
  unsigned int TotalNumContacts; // eax
  __int64 v17; // r8
  bool *v18; // rdx
  __int64 v19; // rcx
  void *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v26; // [rsp+98h] [rbp+48h] BYREF

  v3 = a3;
  v6 = 0LL;
  v7 = 0;
  if ( a2 > 0xA || !a3 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1DFu, 0LL);
    return v7;
  }
  switch ( a2 )
  {
    case 0u:
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
      v6 = InteractionInternal;
      if ( InteractionInternal && *((_QWORD *)InteractionInternal + 26) )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)InteractionInternal + 26);
      CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v3);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_9;
      v20 = &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION;
LABEL_40:
      McTemplateU0xx_EventWriteTransfer(v19, v20, v6, v3);
      goto LABEL_9;
    case 1u:
      v6 = CVisual::GetInteractionInternal((CVisual *)a3);
      v14 = 0;
      v15 = (CInteraction *)*((_QWORD *)v6 + 31);
      while ( v15 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v15);
        v15 = *(CInteraction **)(v17 + 232);
        v14 += TotalNumContacts;
      }
      if ( v14 < CInteraction::GetTotalNumContacts(v6) )
      {
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(
                                       (const struct CVisual *)v3,
                                       v18);
        Microsoft::WRL::ComPtr<CVisual>::operator=((char *)v6 + 208, ClosestInteractionAncestor);
      }
      if ( !v14 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v3) )
      {
        *(_BYTE *)(v3 + 105) &= ~0x20u;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v3 + 88));
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_9;
      v20 = &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL;
      goto LABEL_40;
    case 2u:
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 88));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_9;
      a3 = v3;
      v13 = (const EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
      goto LABEL_20;
  }
  v8 = a2 - 3;
  if ( a2 != 3 )
  {
    if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
    {
LABEL_9:
      v9 = (unsigned int *)MIDL_user_allocate(0x48uLL);
      v10 = v9;
      if ( v9 )
      {
        memset_0(v9, 0, 0x48uLL);
        *v10 = a2;
        Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 2, v3);
        Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 4, v6);
        v10[6] = 0;
        *((_QWORD *)v10 + 4) = 0LL;
        v23 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v22, v21, v10);
        v7 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x253u, 0LL);
          CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v10);
        }
      }
      else
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23Fu, 0LL);
      }
      return v7;
    }
    v13 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
LABEL_20:
    McTemplateU0x_EventWriteTransfer(v8, v13, a3);
    goto LABEL_9;
  }
  *(_BYTE *)(a3 + 105) &= ~0x20u;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  CManipulationContext::TotalContactsCapturedUnderVisual(
    (const struct MCCollections *)(a1 + 160),
    (struct CVisual *)v3,
    &v26);
  v6 = v26;
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v3 + 88));
  if ( v6 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v6 + 16LL))(v6);
  *(_BYTE *)(v3 + 105) |= 0x20u;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0x_EventWriteTransfer(v11, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v3);
  if ( v6 )
    goto LABEL_9;
  return v7;
}
