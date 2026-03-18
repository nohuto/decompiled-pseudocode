/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4
 * Callers:
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800B3570 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E3DC0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1801380F0 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1801393AC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180139580 (-FinalRelease@CVisual@@MEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1800FA8D4 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800FAD34 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1800FAEC0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800FB600 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1800FB9F8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801351A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180138F1C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  struct CInteraction *InteractionInternal; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  unsigned int *v9; // rax
  unsigned int *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  EVENT_DESCRIPTOR *v15; // rdx
  unsigned int v16; // esi
  CInteraction *v17; // r8
  int TotalNumContacts; // eax
  __int64 v19; // r8
  bool *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  CVisual **i; // rdi
  CVisual *v26; // r14
  unsigned int *v27; // rax
  struct CInteraction *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *v33; // rax
  __int64 v34; // rcx
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF
  __int64 v36; // [rsp+40h] [rbp-10h]
  struct CInteraction *v37; // [rsp+98h] [rbp+48h] BYREF

  v36 = 0LL;
  v3 = a3;
  InteractionInternal = 0LL;
  v7 = 0;
  v35 = 0LL;
  if ( a2 > 0xA || !a3 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1DFu, 0LL);
    goto LABEL_17;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
      v16 = 0;
      v17 = (CInteraction *)*((_QWORD *)InteractionInternal + 31);
      while ( v17 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v17);
        v17 = *(CInteraction **)(v19 + 232);
        v16 += TotalNumContacts;
      }
      if ( v16 < (unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) )
      {
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(
                                       (const struct CVisual *)v3,
                                       v20);
        Microsoft::WRL::ComPtr<CVisual>::operator=((char *)InteractionInternal + 208, ClosestInteractionAncestor);
      }
      if ( !v16 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v3) )
      {
        *(_BYTE *)(v3 + 105) &= ~0x20u;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(
          *(struct CVisual ***)(v3 + 88),
          0,
          (__int64)&v35,
          0);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0xx_EventWriteTransfer(v21, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, InteractionInternal, v3);
    }
    else
    {
      if ( a2 == 2 )
      {
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual ***)(a3 + 88), 1, 0LL, 0);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
          goto LABEL_9;
        a3 = v3;
        v15 = (EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
        goto LABEL_23;
      }
      v8 = a2 - 3;
      if ( a2 != 3 )
      {
        if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
          goto LABEL_9;
        v15 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
LABEL_23:
        McTemplateU0x_EventWriteTransfer(v8, v15, a3);
        goto LABEL_9;
      }
      *(_BYTE *)(a3 + 105) &= ~0x20u;
      v37 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
      v11 = CManipulationContext::TotalContactsCapturedUnderVisual(
              (const struct MCCollections *)(a1 + 160),
              (struct CVisual *)v3,
              &v37);
      InteractionInternal = v37;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(
        *(struct CVisual ***)(v3 + 88),
        0,
        (__int64)&v35,
        v11);
      if ( InteractionInternal )
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)InteractionInternal + 16LL))(InteractionInternal);
      *(_BYTE *)(v3 + 105) |= 0x20u;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0x_EventWriteTransfer(v12, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v3);
      if ( !InteractionInternal )
        goto LABEL_17;
    }
  }
  else
  {
    v33 = CVisual::GetInteractionInternal((CVisual *)a3);
    InteractionInternal = v33;
    if ( v33 && *((_QWORD *)v33 + 26) )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v33 + 26);
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual **)v3, 1, 0LL, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v34, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, InteractionInternal, v3);
  }
LABEL_9:
  v9 = (unsigned int *)MIDL_user_allocate(0x48uLL);
  v10 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23Fu, 0LL);
LABEL_17:
    v13 = (_QWORD *)v35;
    goto LABEL_18;
  }
  memset_0(v9, 0, 0x48uLL);
  *v10 = a2;
  Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 2, v3);
  Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 4, InteractionInternal);
  v10[6] = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  v24 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v23, v22, v10);
  v13 = (_QWORD *)v35;
  v7 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x253u, 0LL);
LABEL_49:
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v10);
  }
  else
  {
    for ( i = (CVisual **)v35; i != *((CVisual ***)&v35 + 1); ++i )
    {
      v26 = *i;
      v27 = (unsigned int *)MIDL_user_allocate(0x48uLL);
      v10 = v27;
      if ( !v27 )
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25Cu, 0LL);
        break;
      }
      memset_0(v27, 0, 0x48uLL);
      *v10 = 10;
      Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 2, v26);
      v28 = CVisual::GetInteractionInternal(v26);
      Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 4, v28);
      v10[6] = 0;
      *((_QWORD *)v10 + 4) = 0LL;
      v31 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v30, v29, v10);
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x263u, 0LL);
        goto LABEL_49;
      }
    }
  }
LABEL_18:
  if ( v13 )
    std::_Deallocate<16,0>(v13, (v36 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL);
  return v7;
}
