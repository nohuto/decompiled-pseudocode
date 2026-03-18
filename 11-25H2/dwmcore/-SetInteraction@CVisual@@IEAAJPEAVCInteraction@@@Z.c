/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180139C8C (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18013805C (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1801393AC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1801396C0 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18013A9B0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18013AC34 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // edi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v6; // rbp
  __int64 v7; // rcx
  CVisual *VisualNoRef; // rax
  int v10; // eax
  int v11; // eax

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, this);
      ReleaseInterface<CWeakReference<CVisual>>((CResourceWeakRef **)v6 + 15);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0xx_EventWriteTransfer(v7, &INTERACTION_VISUAL_UPDATE, v6, 0LL);
      CVisual::ClearInteraction(this);
    }
    if ( a2 )
    {
      VisualNoRef = CInteraction::GetVisualNoRef(a2);
      if ( VisualNoRef )
      {
        v11 = CVisual::SetInteraction(VisualNoRef, 0LL);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xD71u, 0LL);
          return v4;
        }
      }
      v10 = CInteraction::SetVisual(a2, this);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD75u, 0LL);
        return v4;
      }
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a2 + 8LL))(a2);
      CVisual::SetInteractionInternal(this, a2);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 0, this);
    }
    CVisual::PropagateFlags((__int64)this, 0x10u);
    *((_BYTE *)this + 104) |= 0x20u;
  }
  return v4;
}
