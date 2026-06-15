/*
 * XREFs of ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002DFA8
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004930 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DFF0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014480 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetSecondaryLoopbackConnection(CPipeInstance *this)
{
  _QWORD *v1; // rbx
  __int64 *Head; // rax

  v1 = (_QWORD *)((char *)this + 64);
  if ( *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 8) + 16LL) != 2LL )
    return 0LL;
  Head = (__int64 *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v1);
  return *(const struct CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*Head);
}
