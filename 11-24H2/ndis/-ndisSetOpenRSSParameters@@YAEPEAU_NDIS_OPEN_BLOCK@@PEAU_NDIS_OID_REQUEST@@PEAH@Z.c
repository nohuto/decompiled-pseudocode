/*
 * XREFs of ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE794
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBFC0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14002D480 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1400728D0 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

__int64 __fastcall ndisSetOpenRSSParameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _UNKNOWN **v3; // rax
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  UINT v5; // r12d
  int *v6; // rdi
  struct _NDIS_OPEN_BLOCK *v8; // r14
  UINT InformationBufferLength; // r8d
  int v10; // ebx
  _BYTE *InformationBuffer; // rdi
  unsigned __int8 v12; // cl
  int v13; // edx
  int v14; // r9d
  char v15; // al
  UINT v16; // ecx
  UINT v17; // eax
  int v18; // edx
  __int16 v19; // r11
  int v20; // r9d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  _NDIS_RECEIVE_SCALE_PARAMETERS *v22; // r14
  __int64 Pool2; // rax
  unsigned __int8 *v24; // rax
  bool v25; // r13
  __int16 v26; // r13
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // r13
  int v29; // ecx
  int v30; // eax
  KIRQL v31; // dl
  __int64 Oid; // r14
  unsigned int v33; // eax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rdi
  unsigned int v35; // r9d
  int v36; // edx
  bool v37; // r8
  int v38; // ecx
  int v39; // eax
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int i; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v42; // rax
  BOOL v43; // ecx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v44; // rax
  __int64 v46; // [rsp+38h] [rbp-30h]
  unsigned __int8 v47; // [rsp+50h] [rbp-18h]
  unsigned int v48; // [rsp+54h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+40h] BYREF
  KIRQL NewIrql; // [rsp+B8h] [rbp+50h] BYREF
  int *v52; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  v3 = &retaddr;
  v52 = a3;
  MiniportHandle = a1->MiniportHandle;
  v5 = 0;
  LODWORD(Size) = 0;
  NewIrql = 0;
  v6 = a3;
  v8 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    v3 = (_UNKNOWN **)WPP_RECORDER_SF_qqq(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        4u,
                        0xBu,
                        0x73u,
                        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                        (char)MiniportHandle,
                        (char)a1,
                        a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  LOBYTE(v3) = 1;
  v48 = (unsigned int)v3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  if ( InformationBufferLength >= 0x1C )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v12 = InformationBuffer[1];
    if ( v12 >= 2u )
    {
      v13 = *((unsigned __int16 *)InformationBuffer + 1);
      if ( (unsigned __int16)v13 < 0x28u )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_11:
          v10 = -1073676268;
          goto LABEL_12;
        }
        v14 = 117;
LABEL_10:
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          11,
          v14,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          (char)MiniportHandle,
          (char)a2);
        goto LABEL_11;
      }
      v17 = 40;
      if ( v12 >= 3u )
      {
        v17 = 44;
        if ( (unsigned __int16)v13 < 0x2Cu )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_11;
          v14 = 118;
          goto LABEL_10;
        }
      }
      if ( InformationBufferLength < v17 )
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v17;
        v10 = -1073676268;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v46) = -1073676268;
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xBu,
            0x77u,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)MiniportHandle,
            (char)a2,
            v46);
        }
        goto LABEL_12;
      }
    }
    v10 = ndisCalculateRssParametersSize(
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
            (unsigned int *)&Size);
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v46) = v10;
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x78u,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          (char)MiniportHandle,
          (char)a2,
          v46);
      }
      goto LABEL_25;
    }
    if ( !v8->NdisRSSParameters && ((InformationBuffer[4] & 0x10) != 0 || !InformationBuffer[8]) )
    {
LABEL_25:
      v5 = Size;
      goto LABEL_12;
    }
    if ( *((_WORD *)InformationBuffer + 6) > 0x200u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_33:
        v10 = -1073676267;
        goto LABEL_25;
      }
      v20 = 121;
LABEL_32:
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v18,
        11,
        v20,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)MiniportHandle,
        (char)v8);
      goto LABEL_33;
    }
    if ( *((_WORD *)InformationBuffer + 10) != v19 && (InformationBuffer[4] & 0x10) == 0 && InformationBuffer[8] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v20 = 122;
      goto LABEL_32;
    }
    v5 = Size;
    if ( !(_DWORD)Size && (InformationBuffer[4] & 0x10) != 0 )
      v5 = *((unsigned __int16 *)InformationBuffer + 1);
    v10 = 0;
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < v5 )
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
      v10 = -1073676268;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = v52;
        goto LABEL_13;
      }
      LODWORD(v46) = -1073676268;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x7Bu,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)MiniportHandle,
        (char)v8,
        v46);
LABEL_12:
      v6 = v52;
      goto LABEL_13;
    }
    NdisRSSParameters = v8->NdisRSSParameters;
    v22 = 0LL;
    if ( NdisRSSParameters )
      v22 = NdisRSSParameters;
    if ( !MiniportHandle->RssParametersBuffer )
    {
      Pool2 = ExAllocatePool2(72LL, 2216LL, 1936868430LL);
      MiniportHandle->RssParametersBuffer = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)Pool2;
      if ( !Pool2 )
        goto LABEL_49;
    }
    if ( a1->RssParametersBuffer )
    {
      v25 = 0;
    }
    else
    {
      v24 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430LL);
      a1->RssParametersBuffer = v24;
      v25 = 0;
      if ( !v24 )
      {
LABEL_49:
        v10 = -1073741670;
LABEL_50:
        LOBYTE(v8) = (_BYTE)a1;
        goto LABEL_12;
      }
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
    if ( !v22 )
      goto LABEL_77;
    LOBYTE(Size) = InformationBuffer[1];
    if ( v22->Header.Revision != (_BYTE)Size || !InformationBuffer[8] )
      goto LABEL_77;
    v26 = *((_WORD *)InformationBuffer + 2);
    if ( (v26 & 0x10) == 0
      && v22->IndirectionTableSize == *((_WORD *)InformationBuffer + 6)
      && !memcmp(
            &v22->Header.Type + v22->IndirectionTableOffset,
            &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
            v22->IndirectionTableSize)
      && v22->HashSecretKeySize == *((_WORD *)InformationBuffer + 10)
      && v22->BaseCpuNumber == *((_WORD *)InformationBuffer + 3)
      && v22->Flags == v26 )
    {
      v25 = 0;
      if ( memcmp(
             &v22->Header.Type + v22->HashSecretKeyOffset,
             &InformationBuffer[*((unsigned int *)InformationBuffer + 6)],
             v22->HashSecretKeySize) )
      {
        goto LABEL_77;
      }
      v27 = *(_QWORD *)&v22->Header.Type - *(_QWORD *)InformationBuffer;
      if ( *(_QWORD *)&v22->Header.Type == *(_QWORD *)InformationBuffer )
        v27 = v22->HashInformation - (unsigned __int64)*((unsigned int *)InformationBuffer + 2);
      if ( v27 )
        goto LABEL_77;
      v28 = Size;
      if ( (unsigned __int8)Size < 2u
        || (v29 = *((_DWORD *)InformationBuffer + 8), v22->NumberOfProcessorMasks == v29)
        && (v30 = *((_DWORD *)InformationBuffer + 9), v22->ProcessorMasksEntrySize == v30)
        && !memcmp(
              &v22->Header.Type + v22->ProcessorMasksOffset,
              &InformationBuffer[*((unsigned int *)InformationBuffer + 7)],
              (unsigned int)(v29 * v30))
        && (v28 < 3u
         || v22->DefaultProcessorNumber.Group == *((_WORD *)InformationBuffer + 20)
         && v22->DefaultProcessorNumber.Number == InformationBuffer[42]) )
      {
LABEL_75:
        v31 = NewIrql;
        MiniportHandle->MiniportThread = 0LL;
        KeReleaseSpinLock(&MiniportHandle->Lock, v31);
        goto LABEL_50;
      }
    }
    v25 = 0;
LABEL_77:
    if ( v5 <= 0x454 )
    {
      Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
      memmove((void *)Oid, InformationBuffer, v5);
      if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
      {
        RssParametersBuffer = MiniportHandle->RssParametersBuffer;
        v35 = *(unsigned __int16 *)(Oid + 12);
        v47 = *(_BYTE *)(Oid + 1);
        v36 = *(_DWORD *)(Oid + 8) ^ *(_DWORD *)&RssParametersBuffer->Combined[8];
        LOBYTE(Size) = RssParametersBuffer->Combined[1];
        v37 = 0;
        if ( !(_BYTE)v36 )
          v37 = (_BYTE)Size == v47;
        if ( *(_WORD *)&RssParametersBuffer->Combined[12] == (_WORD)v35 )
        {
          if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == (*(_WORD *)(Oid + 4) & 0x10) )
            v25 = v37;
          if ( memcmp(
                 &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
                 (const void *)(Oid + *(unsigned int *)(Oid + 16)),
                 v35) )
          {
            v25 = 0;
          }
        }
        if ( (unsigned __int8)Size >= 2u && v47 >= 2u )
        {
          v38 = *(_DWORD *)(Oid + 32);
          if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v38
            || (v39 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v39)
            || memcmp(
                 &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
                 (const void *)(Oid + *(unsigned int *)(Oid + 28)),
                 (unsigned int)(v38 * v39)) )
          {
            v25 = 0;
          }
          if ( (unsigned __int8)Size >= 3u
            && v47 >= 3u
            && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
             || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
          {
            v25 = 0;
          }
        }
        if ( *(_WORD *)&RssParametersBuffer->Combined[20] != *(_WORD *)(Oid + 20)
          || memcmp(
               &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
               (const void *)(Oid + *(unsigned int *)(Oid + 24)),
               *(unsigned __int16 *)(Oid + 20)) )
        {
          v25 = 0;
        }
        OpenQueue = MiniportHandle->OpenQueue;
        for ( i = *(_DWORD *)(Oid + 8) & 0xFFFF00; OpenQueue; OpenQueue = OpenQueue->MiniportNextOpen )
        {
          v42 = OpenQueue->NdisRSSParameters;
          if ( v42 && OpenQueue != a1 )
            i |= v42->HashInformation & 0xFFFF00;
        }
        *(_DWORD *)(Oid + 8) = i | (unsigned __int8)*(_DWORD *)(Oid + 8);
        v43 = v25;
        if ( i != (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00) )
          v43 = 0;
        v48 = v43;
      }
      else
      {
        LOBYTE(v33) = 0;
        v48 = v33;
      }
    }
    else
    {
      v10 = -1073676268;
    }
    goto LABEL_75;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
  v10 = -1073676268;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v46) = -1073676268;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x74u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)v8,
      v46);
  }
LABEL_13:
  v15 = v48;
  v16 = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( (_BYTE)v48 == 1 )
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = v16;
  }
  else
  {
    *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)&a2->NdisReserved[88] = v16;
    v44 = MiniportHandle->RssParametersBuffer;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v5;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = v44->Oid;
    v15 = v48;
  }
  *v6 = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)v8,
      v15,
      v10);
  if ( v10 && (byte_14011B104 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v10,
      1,
      (char)v8);
  return v48;
}
