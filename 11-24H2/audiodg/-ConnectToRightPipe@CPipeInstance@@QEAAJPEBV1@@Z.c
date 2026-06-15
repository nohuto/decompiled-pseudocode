/*
 * XREFs of ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x1400581B8
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DCF0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x14003FE60 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x1400400E0 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400401C0 (-ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006E770 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 */

__int64 __fastcall CPipeInstance::ConnectToRightPipe(CPipeInstance *this, const struct CPipeInstance *a2)
{
  _QWORD **Head; // rax
  __int64 v4; // rax

  Head = (_QWORD **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)a2 + 8);
  v4 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(*Head);
  return CPipeInstance::ResolvePendingConnections(
           (__int64)this,
           -(__int64)(*((_BYTE *)this + 318) != 0) - 1,
           *(_QWORD *)(*(_QWORD *)v4 + 8LL));
}
