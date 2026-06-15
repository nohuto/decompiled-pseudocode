/*
 * XREFs of ?CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C0C4
 * Callers:
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140049140 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14004A088 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 */

__int64 __fastcall CPipeInstance::CreateBridgeToApo(
        CPipeInstance *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct IAudioMediaType ***Head; // rax
  int BridgeToApo; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Head = (struct IAudioMediaType ***)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 2);
  BridgeToApo = CBridgeToAPOProcessNode::CreateBridgeToApo(
                  *Head,
                  *((struct IDeviceGraphObjectCache **)this + 30),
                  a2,
                  a3,
                  *((_DWORD *)this + 36));
  v9 = BridgeToApo;
  if ( BridgeToApo >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x472,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)BridgeToApo);
  return v9;
}
