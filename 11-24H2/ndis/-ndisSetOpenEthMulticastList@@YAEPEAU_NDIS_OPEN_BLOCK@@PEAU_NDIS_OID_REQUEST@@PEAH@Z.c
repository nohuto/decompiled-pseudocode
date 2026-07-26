/*
 * XREFs of ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003D9C0
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D690 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14003E130 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x14003EA10 (WPP_RECORDER_SF_qqqDD.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisSetOpenEthMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  int *v4; // r15
  struct _NDIS_OID_REQUEST *v5; // r12
  unsigned __int8 v7; // bl
  _X_FILTER *EthDB; // rdi
  unsigned __int8 *NextOldMCastAddressBuf; // rdx
  __int64 v10; // rsi
  char *InformationBuffer; // r15
  unsigned int v12; // ebp
  _X_FILTER *p_NoFTypeOpenList; // r15
  _NDIS_OPEN_BLOCK *OpenList; // rbx
  unsigned int NextNumAddresses; // r9d
  __int64 v16; // rbp
  __int64 v17; // rcx
  int v18; // r11d
  _ETH_MULTICAST_WRAPPER *v19; // r14
  unsigned __int8 *NextMCastAddressBuf; // rdx
  unsigned int v21; // r8d
  __int64 v22; // r14
  unsigned int v23; // ecx
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int NumAddresses; // edx
  unsigned int v27; // ecx
  char *v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rbx
  unsigned int v31; // r10d
  unsigned __int8 *MCastAddress; // rax
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r9
  unsigned int v34; // edx
  unsigned int v35; // r9d
  unsigned __int8 *v36; // r10
  _DWORD *v37; // r8
  signed __int64 v38; // r10
  char v39; // [rsp+38h] [rbp-50h]
  unsigned int IsValidMulticastFilter; // [rsp+90h] [rbp+8h]
  _NDIS_MINIPORT_BLOCK *v42; // [rsp+A8h] [rbp+20h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  v42 = MiniportHandle;
  v7 = 1;
  EthDB = MiniportHandle->EthDB;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v39 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      74,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v39);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1->MiniportHandle, a1, v5);
  v10 = IsValidMulticastFilter;
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_70:
      if ( (byte_14011B104 & 4) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          MiniportHandle->IfIndex,
          (unsigned int)&SetOpenEthMulticastListFailed,
          (_DWORD)MiniportHandle + 4008,
          (_DWORD)MiniportHandle + 4008,
          MiniportHandle->IfIndex,
          MiniportHandle->NetLuid.Value,
          v10,
          1,
          (char)a1);
      goto LABEL_40;
    }
    LOBYTE(NextOldMCastAddressBuf) = 2;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NextOldMCastAddressBuf,
      11,
      75,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5);
  }
  else if ( a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
    a1->OldNumAddresses = a1->NumAddresses;
    a1->NumAddresses = IsValidMulticastFilter;
    InformationBuffer = (char *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
    v12 = v5->DATA.QUERY_INFORMATION.InformationBufferLength / 6;
    if ( v12 )
    {
      for ( i = 0; i < v12; ++i )
      {
        NumAddresses = a1->NumAddresses;
        v27 = 0;
        v28 = &InformationBuffer[6 * i];
        if ( NumAddresses )
        {
          v31 = *(_DWORD *)(v28 + 2);
          MCastAddress = a1->MCastAddressBuf->MCastAddress;
          while ( *(_DWORD *)(MCastAddress + 2) <= v31 )
          {
            if ( *(_DWORD *)(MCastAddress + 2) >= v31 )
            {
              if ( *(_WORD *)MCastAddress > *(_WORD *)v28 )
                break;
              if ( *(_WORD *)MCastAddress >= *(_WORD *)v28 )
                goto LABEL_45;
            }
            ++v27;
            MCastAddress += 12;
            if ( v27 >= NumAddresses )
              goto LABEL_43;
          }
          MCastAddressBuf = a1->MCastAddressBuf;
          v34 = NumAddresses + 1;
          a1->NumAddresses = v34;
          v29 = v27;
          memmove(&MCastAddressBuf[v27 + 1], &MCastAddressBuf[v27], 12LL * (v34 - v27 - 1));
        }
        else
        {
LABEL_43:
          v29 = v27;
          a1->NumAddresses = NumAddresses + 1;
        }
        v30 = v29;
        memmove(a1->MCastAddressBuf[v30].MCastAddress, &InformationBuffer[6 * i], 6uLL);
        a1->MCastAddressBuf[v30].RefCount = 1;
LABEL_45:
        ;
      }
      v10 = 0LL;
    }
    p_NoFTypeOpenList = EthDB;
    OpenList = EthDB->OpenList;
    memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    LODWORD(NextOldMCastAddressBuf) = -1;
    EthDB->NextOldNumAddresses = EthDB->NextNumAddresses;
    EthDB->NextNumAddresses = 0;
    while ( 1 )
    {
      if ( OpenList )
        goto LABEL_15;
LABEL_13:
      if ( p_NoFTypeOpenList == EthDB )
        break;
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
        goto LABEL_29;
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList )
        goto LABEL_32;
    }
    OpenList = EthDB->NoFTypeOpenList;
    p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
    if ( OpenList )
      goto LABEL_15;
LABEL_29:
    OpenList = EthDB->FTypeOpenList;
    p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
    if ( OpenList )
    {
LABEL_15:
      while ( !(_DWORD)v10 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v10 >= OpenList->NumAddresses )
          {
            v10 = IsValidMulticastFilter;
            goto LABEL_11;
          }
          NextNumAddresses = EthDB->NextNumAddresses;
          v16 = v10;
          v17 = 0LL;
          v18 = -1;
          if ( NextNumAddresses )
          {
            v19 = OpenList->MCastAddressBuf;
            NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            v21 = *(_DWORD *)&v19[v16].MCastAddress[2];
            while ( *(_DWORD *)(NextMCastAddressBuf + 2) <= v21 )
            {
              if ( *(_DWORD *)(NextMCastAddressBuf + 2) >= v21 )
              {
                if ( *(_WORD *)NextMCastAddressBuf > *(_WORD *)v19[v16].MCastAddress )
                  break;
                if ( *(_WORD *)NextMCastAddressBuf >= *(_WORD *)v19[v16].MCastAddress )
                  goto LABEL_27;
              }
              v17 = (unsigned int)(v17 + 1);
              NextMCastAddressBuf += 6;
              if ( (unsigned int)v17 >= NextNumAddresses )
                goto LABEL_22;
            }
            v18 = 1;
LABEL_22:
            LODWORD(NextOldMCastAddressBuf) = -1;
          }
          EthDB->NextNumAddresses = NextNumAddresses + 1;
          if ( NextNumAddresses + 1 > EthDB->MaxMulticastAddresses )
            break;
          v22 = (unsigned int)v17;
          if ( v18 > 0 )
            memmove(
              EthDB->NextMCastAddressBuf[(unsigned int)(v17 + 1)],
              EthDB->NextMCastAddressBuf[v17],
              6 * (NextNumAddresses + 1 - (unsigned int)v17) - 6);
          memmove(EthDB->NextMCastAddressBuf[v22], OpenList->MCastAddressBuf[v16].MCastAddress, 6uLL);
LABEL_27:
          v10 = (unsigned int)(v10 + 1);
          LODWORD(NextOldMCastAddressBuf) = -1;
        }
        v10 = 3221291017LL;
        IsValidMulticastFilter = -1073676279;
LABEL_11:
        OpenList = OpenList->FilterNextOpen;
        if ( !OpenList )
        {
          if ( (_DWORD)v10 )
            break;
          goto LABEL_13;
        }
      }
    }
    else
    {
LABEL_32:
      v23 = EthDB->NextNumAddresses;
      if ( v23 == EthDB->NextOldNumAddresses )
      {
        v35 = 0;
        if ( v23 )
        {
          v36 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
          v37 = v36 + 2;
          v38 = v36 - NextOldMCastAddressBuf;
          while ( *v37 == *(_DWORD *)(NextOldMCastAddressBuf + 2)
               && *(_WORD *)&NextOldMCastAddressBuf[v38] == *(_WORD *)NextOldMCastAddressBuf )
          {
            ++v35;
            v37 = (_DWORD *)((char *)v37 + 6);
            NextOldMCastAddressBuf += 6;
            if ( v35 >= v23 )
            {
              LODWORD(NextOldMCastAddressBuf) = 0;
              goto LABEL_33;
            }
          }
          goto LABEL_34;
        }
      }
LABEL_33:
      if ( (_DWORD)NextOldMCastAddressBuf )
      {
LABEL_34:
        v7 = 0;
        *(_QWORD *)&v5->NdisReserved[80] = v5->DATA.QUERY_INFORMATION.InformationBuffer;
        *(_DWORD *)&v5->NdisReserved[88] = v5->DATA.QUERY_INFORMATION.InformationBufferLength;
        v5->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
        v5->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
        goto LABEL_36;
      }
      memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
      LODWORD(v10) = 0;
      EthDB->NextOldNumAddresses = 0;
    }
    v7 = 1;
LABEL_36:
    v4 = a3;
    MiniportHandle = v42;
  }
  else
  {
    LODWORD(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NextOldMCastAddressBuf,
      11,
      76,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5,
      v10,
      v7);
  if ( (_DWORD)v10 )
    goto LABEL_70;
LABEL_40:
  result = v7;
  *v4 = v10;
  return result;
}
