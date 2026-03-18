/*
 * XREFs of ??R?$default_delete@VCChainingHelper@@@std@@QEBAXPEAVCChainingHelper@@@Z @ 0x1800E8758
 * Callers:
 *     ??1?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@QEAA@XZ @ 0x1800E82E0 (--1-$unique_ptr@VCChainingHelper@@U-$default_delete@VCChainingHelper@@@std@@@std@@QEAA@XZ.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1800E90D0 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ??1?$com_ptr_t@VCInteraction@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E827C (--1-$com_ptr_t@VCInteraction@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CChainingHelper>::operator()(__int64 a1, CGlobalDrawingContext **a2)
{
  if ( a2 )
  {
    wil::com_ptr_t<CInteraction,wil::err_returncode_policy>::~com_ptr_t<CInteraction,wil::err_returncode_policy>(a2 + 5);
    operator delete(a2, 0x30uLL);
  }
}
