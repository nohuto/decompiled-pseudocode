/*
 * XREFs of NdisCopySendNetBufferListInfo @ 0x1400271A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140026C20 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __stdcall NdisCopySendNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  char v4; // cl
  unsigned __int64 v5; // rax
  int v6; // [rsp+30h] [rbp-19h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-9h] BYREF
  GUID RelatedActivityId; // [rsp+50h] [rbp+7h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp+17h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  v4 = (__int64)SrcNetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !v4 )
    v4 = *((_BYTE *)SrcNetBufferList->NdisPoolHandle + 40);
  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  DestNetBufferList->NetBufferListInfo[22] = SrcNetBufferList->NetBufferListInfo[22];
  DestNetBufferList->NetBufferListInfo[23] = SrcNetBufferList->NetBufferListInfo[23];
  DestNetBufferList->NetBufferListInfo[3] = SrcNetBufferList->NetBufferListInfo[3];
  DestNetBufferList->NetBufferListInfo[4] = SrcNetBufferList->NetBufferListInfo[4];
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  DestNetBufferList->NetBufferListInfo[8] = SrcNetBufferList->NetBufferListInfo[8];
  LOBYTE(DestNetBufferList->NetBufferListInfo[7]) = v4;
  DestNetBufferList->NetBufferListInfo[11] = SrcNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[12] = SrcNetBufferList->NetBufferListInfo[12];
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  if ( (SrcNetBufferList->NblFlags & 0x10000) != 0 )
    DestNetBufferList->NblFlags |= 0x10000u;
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  if ( ((unsigned __int64)SrcNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
    && ((__int64)SrcNetBufferList->NetBufferListInfo[10] & 1) == 0 )
  {
    WfpNblInfoClone(SrcNetBufferList, DestNetBufferList, 0LL, 0LL);
  }
  if ( byte_14011D800 )
  {
    DestNetBufferList->NetBufferListInfo[13] = SrcNetBufferList->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList, 1u);
    v5 = (unsigned __int64)DestNetBufferList->NetBufferListInfo[13];
    *(_QWORD *)ActivityId.Data4 = 0LL;
    *(_QWORD *)RelatedActivityId.Data4 = 0LL;
    *(_QWORD *)&ActivityId.Data1 = v5 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&RelatedActivityId.Data1 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v6 = 4;
      EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
      if ( Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
      {
        *(_QWORD *)&UserData.Size = 16LL;
        UserData.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
        v11 = &v6;
        v12 = 4LL;
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
