/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B5B94
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B48A0 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400B38EC (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400B3FB8 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B598C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

char __fastcall ndisSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  char v7; // si
  int v8; // eax
  int CombinedRSSParameters; // edi
  unsigned __int8 *Pool2; // rax
  _DWORD *InformationBuffer; // r15
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r13
  char v13; // cl
  bool v14; // dl
  size_t v15; // r8
  bool v16; // si
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rax
  int v18; // edx
  char v19; // r9
  int v20; // r8d
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v22; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  KIRQL v24; // dl
  __int64 v26; // [rsp+38h] [rbp-40h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  MiniportHandle = a1->MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x25u,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  NewIrql = 0;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, a2);
  CombinedRSSParameters = v8;
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = v8;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x26u,
        (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v26);
    }
    goto LABEL_33;
  }
  if ( !a1->RssParametersBuffer )
  {
    Pool2 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430);
    a1->RssParametersBuffer = Pool2;
    if ( !Pool2 )
    {
      CombinedRSSParameters = -1073741670;
LABEL_33:
      a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_34;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(MiniportHandle, a2, 0LL, 0LL, 0LL, 0LL);
  if ( !CombinedRSSParameters )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( MiniportHandle->CombinedNdisRSSParameters )
    {
      RssParametersBuffer = MiniportHandle->RssParametersBuffer;
      if ( (RssParametersBuffer->Combined[4] & 0x10) != 0
        || (v13 = 1, !(unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8]) )
      {
        v13 = 0;
      }
      v14 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)InformationBuffer[2];
      v15 = (unsigned int)InformationBuffer[3];
      if ( v13 != (InformationBuffer[1] & 1) )
        v14 = 0;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != (_DWORD)v15 )
        goto LABEL_21;
      v16 = 0;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == InformationBuffer[6] )
        v16 = v14;
      if ( memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
             (char *)InformationBuffer + (unsigned int)InformationBuffer[4],
             v15) )
      {
LABEL_21:
        v16 = 0;
      }
      VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, a2);
      v18 = InformationBuffer[2];
      v19 = 0;
      v20 = (unsigned __int8)v18;
      if ( InformationBuffer[5] == VPortBlockForRequest->VPortParams.NumQueuePairs )
        v19 = v16;
      OpenQueue = MiniportHandle->OpenQueue;
      v22 = v18 & 0xFFFF00;
      while ( OpenQueue )
      {
        NdisRSSParameters = OpenQueue->NdisRSSParameters;
        if ( NdisRSSParameters && OpenQueue != a1 )
          v22 |= NdisRSSParameters->HashInformation & 0xFFFF00;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      v7 = v19;
      InformationBuffer[2] = v22 | v20;
      if ( v22 != (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00) )
        v7 = 0;
    }
    else
    {
      v7 = 0;
    }
  }
  v24 = NewIrql;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v24);
  if ( v7 )
    goto LABEL_33;
LABEL_34:
  *a3 = CombinedRSSParameters;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x27u,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v7,
      CombinedRSSParameters);
  if ( CombinedRSSParameters && (byte_140125104 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      CombinedRSSParameters,
      2,
      (char)a1);
  return v7;
}
