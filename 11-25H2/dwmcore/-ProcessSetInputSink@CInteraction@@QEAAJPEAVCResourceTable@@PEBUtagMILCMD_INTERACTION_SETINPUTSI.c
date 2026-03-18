/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18013A80C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18013A8B4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  unsigned int v6; // edi
  struct CVisual *VisualNoRef; // rax
  __int64 v8; // rcx
  struct CVisual *v9; // rbx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x183u, 0LL);
  }
  else
  {
    VisualNoRef = CInteraction::GetVisualNoRef(this);
    v9 = VisualNoRef;
    if ( VisualNoRef )
    {
      CVisual::PropagateFlags((__int64)VisualNoRef, 0x10u);
      *((_BYTE *)v9 + 104) |= 0x20u;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v8, &EVTDESC_INTERACTION_SET_INPUT_SINK, this, a3[1]);
  }
  return v6;
}
