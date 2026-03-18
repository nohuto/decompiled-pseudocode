/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18009588C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x180095934 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x180095A18 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
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
      CVisual::PropagateFlags(VisualNoRef, 16LL);
      *((_BYTE *)v9 + 104) |= 0x20u;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v8, &EVTDESC_INTERACTION_SET_INPUT_SINK, this, a3[1]);
  }
  return v6;
}
