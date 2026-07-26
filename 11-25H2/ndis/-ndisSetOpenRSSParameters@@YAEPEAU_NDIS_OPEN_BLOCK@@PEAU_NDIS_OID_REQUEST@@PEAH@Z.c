/*
 * XREFs of ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C59C4
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C31F0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140029F70 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x14008E870 (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
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
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r9
  char v15; // al
  UINT v16; // ecx
  UINT v17; // eax
  __int16 v18; // r11
  unsigned __int16 v19; // r9
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  _NDIS_RECEIVE_SCALE_PARAMETERS *v21; // r14
  __int64 Pool2; // rax
  unsigned __int8 *v23; // rax
  bool v24; // r13
  __int16 v25; // r13
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // r13
  int v28; // ecx
  int v29; // eax
  KIRQL v30; // dl
  __int64 Oid; // r14
  unsigned int v32; // eax
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rdi
  unsigned int v34; // r9d
  int v35; // edx
  bool v36; // r8
  int v37; // ecx
  int v38; // eax
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int i; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v41; // rax
  BOOL v42; // ecx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *v43; // rax
  __int64 v45; // [rsp+38h] [rbp-30h]
  unsigned __int8 v46; // [rsp+50h] [rbp-18h]
  unsigned int v47; // [rsp+54h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+40h] BYREF
  KIRQL NewIrql; // [rsp+B8h] [rbp+50h] BYREF
  int *v51; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  v3 = &retaddr;
  v51 = a3;
  MiniportHandle = a1->MiniportHandle;
  v5 = 0;
  LODWORD(Size) = 0;
  NewIrql = 0;
  v6 = a3;
  v8 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    v3 = (_UNKNOWN **)WPP_RECORDER_SF_qqq(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        4u,
                        0xBu,
                        0x73u,
                        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                        (char)MiniportHandle,
                        (char)a1,
                        a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  LOBYTE(v3) = 1;
  v47 = (unsigned int)v3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  if ( InformationBufferLength >= 0x1C )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v12 = InformationBuffer[1];
    if ( v12 >= 2u )
    {
      v13 = *((_WORD *)InformationBuffer + 1);
      if ( v13 < 0x28u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_11:
          v10 = -1073676268;
          goto LABEL_12;
        }
        v14 = 117;
LABEL_10:
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          v14,
          (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
          (char)MiniportHandle,
          a2);
        goto LABEL_11;
      }
      v17 = 40;
      if ( v12 >= 3u )
      {
        v17 = 44;
        if ( v13 < 0x2Cu )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_11;
          v14 = 118;
          goto LABEL_10;
        }
      }
      if ( InformationBufferLength < v17 )
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v17;
        v10 = -1073676268;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v45) = -1073676268;
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xBu,
            0x77u,
            (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
            (char)MiniportHandle,
            (char)a2,
            v45);
        }
        goto LABEL_12;
      }
    }
    v10 = ndisCalculateRssParametersSize(
            (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
            (unsigned int *)&Size);
    if ( v10 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v45) = v10;
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x78u,
          (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
          (char)MiniportHandle,
          (char)a2,
          v45);
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
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_33:
        v10 = -1073676267;
        goto LABEL_25;
      }
      v19 = 121;
LABEL_32:
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        v19,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)MiniportHandle,
        v8);
      goto LABEL_33;
    }
    if ( *((_WORD *)InformationBuffer + 10) != v18 && (InformationBuffer[4] & 0x10) == 0 && InformationBuffer[8] )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v19 = 122;
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
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
        v6 = v51;
        goto LABEL_13;
      }
      LODWORD(v45) = -1073676268;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x7Bu,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)MiniportHandle,
        (char)v8,
        v45);
LABEL_12:
      v6 = v51;
      goto LABEL_13;
    }
    NdisRSSParameters = v8->NdisRSSParameters;
    v21 = 0LL;
    if ( NdisRSSParameters )
      v21 = NdisRSSParameters;
    if ( !MiniportHandle->RssParametersBuffer )
    {
      Pool2 = ExAllocatePool2(72LL, 2216LL, 1936868430);
      MiniportHandle->RssParametersBuffer = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)Pool2;
      if ( !Pool2 )
        goto LABEL_49;
    }
    if ( a1->RssParametersBuffer )
    {
      v24 = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430);
      a1->RssParametersBuffer = v23;
      v24 = 0;
      if ( !v23 )
      {
LABEL_49:
        v10 = -1073741670;
LABEL_50:
        LOBYTE(v8) = (_BYTE)a1;
        goto LABEL_12;
      }
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
    if ( !v21 )
      goto LABEL_77;
    LOBYTE(Size) = InformationBuffer[1];
    if ( v21->Header.Revision != (_BYTE)Size || !InformationBuffer[8] )
      goto LABEL_77;
    v25 = *((_WORD *)InformationBuffer + 2);
    if ( (v25 & 0x10) == 0
      && v21->IndirectionTableSize == *((_WORD *)InformationBuffer + 6)
      && !memcmp(
            &v21->Header.Type + v21->IndirectionTableOffset,
            &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
            v21->IndirectionTableSize)
      && v21->HashSecretKeySize == *((_WORD *)InformationBuffer + 10)
      && v21->BaseCpuNumber == *((_WORD *)InformationBuffer + 3)
      && v21->Flags == v25 )
    {
      v24 = 0;
      if ( memcmp(
             &v21->Header.Type + v21->HashSecretKeyOffset,
             &InformationBuffer[*((unsigned int *)InformationBuffer + 6)],
             v21->HashSecretKeySize) )
      {
        goto LABEL_77;
      }
      v26 = *(_QWORD *)&v21->Header.Type - *(_QWORD *)InformationBuffer;
      if ( *(_QWORD *)&v21->Header.Type == *(_QWORD *)InformationBuffer )
        v26 = v21->HashInformation - (unsigned __int64)*((unsigned int *)InformationBuffer + 2);
      if ( v26 )
        goto LABEL_77;
      v27 = Size;
      if ( (unsigned __int8)Size < 2u
        || (v28 = *((_DWORD *)InformationBuffer + 8), v21->NumberOfProcessorMasks == v28)
        && (v29 = *((_DWORD *)InformationBuffer + 9), v21->ProcessorMasksEntrySize == v29)
        && !memcmp(
              &v21->Header.Type + v21->ProcessorMasksOffset,
              &InformationBuffer[*((unsigned int *)InformationBuffer + 7)],
              (unsigned int)(v28 * v29))
        && (v27 < 3u
         || v21->DefaultProcessorNumber.Group == *((_WORD *)InformationBuffer + 20)
         && v21->DefaultProcessorNumber.Number == InformationBuffer[42]) )
      {
LABEL_75:
        v30 = NewIrql;
        MiniportHandle->MiniportThread = 0LL;
        KeReleaseSpinLock(&MiniportHandle->Lock, v30);
        goto LABEL_50;
      }
    }
    v24 = 0;
LABEL_77:
    if ( v5 <= 0x454 )
    {
      Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
      memmove((void *)Oid, InformationBuffer, v5);
      if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
      {
        RssParametersBuffer = MiniportHandle->RssParametersBuffer;
        v34 = *(unsigned __int16 *)(Oid + 12);
        v46 = *(_BYTE *)(Oid + 1);
        v35 = *(_DWORD *)(Oid + 8) ^ *(_DWORD *)&RssParametersBuffer->Combined[8];
        LOBYTE(Size) = RssParametersBuffer->Combined[1];
        v36 = 0;
        if ( !(_BYTE)v35 )
          v36 = (_BYTE)Size == v46;
        if ( *(_WORD *)&RssParametersBuffer->Combined[12] == (_WORD)v34 )
        {
          if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == (*(_WORD *)(Oid + 4) & 0x10) )
            v24 = v36;
          if ( memcmp(
                 &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
                 (const void *)(Oid + *(unsigned int *)(Oid + 16)),
                 v34) )
          {
            v24 = 0;
          }
        }
        if ( (unsigned __int8)Size >= 2u && v46 >= 2u )
        {
          v37 = *(_DWORD *)(Oid + 32);
          if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v37
            || (v38 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v38)
            || memcmp(
                 &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
                 (const void *)(Oid + *(unsigned int *)(Oid + 28)),
                 (unsigned int)(v37 * v38)) )
          {
            v24 = 0;
          }
          if ( (unsigned __int8)Size >= 3u
            && v46 >= 3u
            && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
             || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
          {
            v24 = 0;
          }
        }
        if ( *(_WORD *)&RssParametersBuffer->Combined[20] != *(_WORD *)(Oid + 20)
          || memcmp(
               &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
               (const void *)(Oid + *(unsigned int *)(Oid + 24)),
               *(unsigned __int16 *)(Oid + 20)) )
        {
          v24 = 0;
        }
        OpenQueue = MiniportHandle->OpenQueue;
        for ( i = *(_DWORD *)(Oid + 8) & 0xFFFF00; OpenQueue; OpenQueue = OpenQueue->MiniportNextOpen )
        {
          v41 = OpenQueue->NdisRSSParameters;
          if ( v41 && OpenQueue != a1 )
            i |= v41->HashInformation & 0xFFFF00;
        }
        *(_DWORD *)(Oid + 8) = i | (unsigned __int8)*(_DWORD *)(Oid + 8);
        v42 = v24;
        if ( i != (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00) )
          v42 = 0;
        v47 = v42;
      }
      else
      {
        LOBYTE(v32) = 0;
        v47 = v32;
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v45) = -1073676268;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x74u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)MiniportHandle,
      (char)v8,
      v45);
  }
LABEL_13:
  v15 = v47;
  v16 = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( (_BYTE)v47 == 1 )
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = v16;
  }
  else
  {
    *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)&a2->NdisReserved[88] = v16;
    v43 = MiniportHandle->RssParametersBuffer;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v5;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = v43->Oid;
    v15 = v47;
  }
  *v6 = v10;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Cu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)MiniportHandle,
      (char)v8,
      v15,
      v10);
  if ( v10 && (byte_140125104 & 4) != 0 )
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
  return v47;
}
