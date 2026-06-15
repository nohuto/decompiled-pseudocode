/*
 * XREFs of ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140058064
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004930 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?RemovePipeFromLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DF00 (-RemovePipeFromLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140064520 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006E7E0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006EB30 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014480 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14002F78C (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140032380 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetLoopbackConnection(CPipeInstance *this, char a2)
{
  __int64 Head; // rax
  _QWORD *v4; // rcx
  __int64 Tail; // rax
  const struct CConnectionInstance *result; // rax
  struct CConnectionInstance *v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 53) )
  {
    Head = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 8);
    v4 = *(_QWORD **)Head;
    if ( *(_QWORD *)(*(_QWORD *)Head + 16LL) == 2LL )
      Tail = ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail((__int64)v4);
    else
      Tail = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v4);
    return *(const struct CConnectionInstance **)Tail;
  }
  else if ( a2
         || (v7 = 0LL,
             CPipeInstance::GetAPONodeAndConnection(this, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, 0LL, &v7, 0LL),
             (result = v7) == 0LL) )
  {
    v7 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(this, &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693, 0LL, &v7, 0LL);
    result = v7;
    if ( !v7 )
      return (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal((__int64)this, 1);
  }
  return result;
}
