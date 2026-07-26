/*
 * XREFs of NdisCopyReceiveNetBufferListInfo @ 0x1400334A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400339A0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __stdcall NdisCopyReceiveNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  unsigned __int64 v4; // rax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-9h] BYREF
  GUID RelatedActivityId; // [rsp+50h] [rbp+7h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp+17h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  DestNetBufferList->NetBufferListInfo[4] = SrcNetBufferList->NetBufferListInfo[4];
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[7] = SrcNetBufferList->NetBufferListInfo[7];
  DestNetBufferList->NetBufferListInfo[8] = SrcNetBufferList->NetBufferListInfo[8];
  DestNetBufferList->NetBufferListInfo[9] = SrcNetBufferList->NetBufferListInfo[9];
  DestNetBufferList->NetBufferListInfo[11] = SrcNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[12] = SrcNetBufferList->NetBufferListInfo[12];
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  DestNetBufferList->NetBufferListInfo[17] = SrcNetBufferList->NetBufferListInfo[17];
  DestNetBufferList->NetBufferListInfo[22] = SrcNetBufferList->NetBufferListInfo[22];
  DestNetBufferList->NetBufferListInfo[23] = SrcNetBufferList->NetBufferListInfo[23];
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  if ( (SrcNetBufferList->NblFlags & 0x8000) != 0 )
  {
    DestNetBufferList->NblFlags |= 0x8000u;
    DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  }
  DestNetBufferList->NetBufferListInfo[26] = SrcNetBufferList->NetBufferListInfo[26];
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  if ( ((unsigned __int64)SrcNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
    && ((__int64)SrcNetBufferList->NetBufferListInfo[10] & 1) == 0 )
  {
    WfpNblInfoClone(SrcNetBufferList, DestNetBufferList, 0LL, 0LL);
  }
  if ( byte_1401278B0 )
  {
    DestNetBufferList->NetBufferListInfo[13] = SrcNetBufferList->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList, 1u);
    v4 = (unsigned __int64)DestNetBufferList->NetBufferListInfo[13];
    *(_QWORD *)ActivityId.Data4 = 0LL;
    *(_QWORD *)RelatedActivityId.Data4 = 0LL;
    *(_QWORD *)&ActivityId.Data1 = v4 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&RelatedActivityId.Data1 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v5 = 5;
      EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
      if ( Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
      {
        *(_QWORD *)&UserData.Size = 16LL;
        UserData.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
        v10 = &v5;
        v11 = 4LL;
        EtwWriteTransfer(
          Microsoft_Windows_Networking_CorrelationHandle,
          &EventDescriptor,
          &ActivityId,
          &RelatedActivityId,
          2u,
          &UserData);
      }
      else
      {
        EtwWriteTransfer(
          Microsoft_Windows_Networking_CorrelationHandle,
          &EventDescriptor,
          &ActivityId,
          &RelatedActivityId,
          0,
          0LL);
      }
    }
  }
}
