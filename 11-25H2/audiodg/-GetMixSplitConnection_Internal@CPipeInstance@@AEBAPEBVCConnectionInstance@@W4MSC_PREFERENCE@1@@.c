/*
 * XREFs of ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F78C
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004930 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E160 (-RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140045DD4 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006EB30 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014480 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 */

__int64 __fastcall CPipeInstance::GetMixSplitConnection_Internal(__int64 a1, int a2)
{
  __int64 Head; // rax
  _QWORD *v4; // rcx
  __int64 Tail; // rax

  Head = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)(a1 + 64));
  v4 = *(_QWORD **)Head;
  if ( *(_QWORD *)(*(_QWORD *)Head + 16LL) == 2LL && a2 == 1 )
    Tail = ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail((__int64)v4);
  else
    Tail = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v4);
  return *(_QWORD *)Tail;
}
