/*
 * XREFs of ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE2BC
 * Callers:
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BAC30 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14003E130 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x14003EA10 (WPP_RECORDER_SF_qqqDD.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140095F4C (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140096178 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r13
  unsigned __int8 v4; // r14
  int *v5; // r15
  _X_FILTER *EthDB; // rbx
  signed __int64 v9; // rdx
  int IsValidMulticastFilter; // ebp
  unsigned int NumAddresses; // eax
  unsigned __int8 *InformationBuffer; // rdx
  int v13; // eax
  _X_FILTER *p_NoFTypeOpenList; // r15
  _NDIS_OPEN_BLOCK *OpenList; // r14
  unsigned int NextNumAddresses; // eax
  int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r10
  int v22; // ecx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r12
  unsigned __int8 *NextMCastAddressBuf; // rax
  unsigned int v25; // r11d
  __int64 v26; // r12
  bool v27; // zf
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned __int8 *NextOldMCastAddressBuf; // rdx
  unsigned __int8 *v31; // rcx
  _DWORD *v32; // r10
  UINT v33; // ecx
  unsigned __int8 result; // al
  int v35; // [rsp+90h] [rbp+8h] BYREF
  int *v36; // [rsp+A0h] [rbp+18h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v36 = a3;
  MiniportHandle = a1->MiniportHandle;
  v4 = 1;
  v5 = a3;
  LOBYTE(v35) = 1;
  EthDB = MiniportHandle->EthDB;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x41u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1->MiniportHandle, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        11,
        66,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids);
      goto LABEL_56;
    }
    goto LABEL_59;
  }
  if ( !a1->MaxMulticastAddresses )
  {
    IsValidMulticastFilter = 0;
    goto LABEL_56;
  }
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength != 6 )
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    IsValidMulticastFilter = -1073676268;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x43u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        a2);
      goto LABEL_56;
    }
    goto LABEL_59;
  }
  memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
  NumAddresses = a1->NumAddresses;
  a1->NumAddresses = 0;
  a1->OldNumAddresses = NumAddresses;
  InformationBuffer = (unsigned __int8 *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( a2->DATA.QUERY_INFORMATION.Oid == 16843272 )
    v13 = ethAddOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v35);
  else
    v13 = ethDeleteOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v35);
  v4 = v35;
  IsValidMulticastFilter = v13;
  if ( (_BYTE)v35 == 1 )
    goto LABEL_56;
  p_NoFTypeOpenList = EthDB;
  OpenList = EthDB->OpenList;
  memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
  NextNumAddresses = EthDB->NextNumAddresses;
  EthDB->NextNumAddresses = 0;
  v17 = -1;
  EthDB->NextOldNumAddresses = NextNumAddresses;
  do
  {
    while ( 1 )
    {
      if ( OpenList )
        goto LABEL_16;
      if ( IsValidMulticastFilter )
        goto LABEL_46;
      if ( p_NoFTypeOpenList != EthDB )
        break;
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
      OpenList = EthDB->NoFTypeOpenList;
      if ( !OpenList )
        goto LABEL_43;
LABEL_16:
      if ( IsValidMulticastFilter )
        goto LABEL_46;
      v18 = 0LL;
      while ( 1 )
      {
        v35 = v18;
        if ( (unsigned int)v18 >= OpenList->NumAddresses )
          break;
        v19 = EthDB->NextNumAddresses;
        v20 = 3 * v18;
        v21 = 0LL;
        v37 = 3 * v18;
        v22 = -1;
        if ( v19 )
        {
          MCastAddressBuf = OpenList->MCastAddressBuf;
          v22 = -1;
          NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          v25 = *(_DWORD *)&MCastAddressBuf->MCastAddress[4 * v20 + 2];
          while ( *(_DWORD *)(NextMCastAddressBuf + 2) <= v25 )
          {
            if ( *(_DWORD *)(NextMCastAddressBuf + 2) >= v25 )
            {
              LODWORD(v9) = *(unsigned __int16 *)NextMCastAddressBuf;
              if ( (unsigned __int16)v9 > *(_WORD *)&MCastAddressBuf->MCastAddress[4 * v20] )
                break;
              if ( (unsigned __int16)v9 >= *(_WORD *)&MCastAddressBuf->MCastAddress[4 * v20] )
                goto LABEL_34;
              v20 = v37;
            }
            v21 = (unsigned int)(v21 + 1);
            NextMCastAddressBuf += 6;
            if ( (unsigned int)v21 >= v19 )
              goto LABEL_29;
          }
          v22 = 1;
LABEL_29:
          v17 = -1;
        }
        EthDB->NextNumAddresses = v19 + 1;
        if ( v19 + 1 > EthDB->MaxMulticastAddresses )
        {
          IsValidMulticastFilter = -1073676279;
          break;
        }
        v26 = (unsigned int)v21;
        if ( v22 > 0 )
          memmove(
            EthDB->NextMCastAddressBuf[(unsigned int)(v21 + 1)],
            EthDB->NextMCastAddressBuf[v21],
            6 * (v19 + 1 - (unsigned int)v21) - 6);
        memmove(
          EthDB->NextMCastAddressBuf[v26],
          OpenList->MCastAddressBuf[(unsigned __int64)v37 / 3].MCastAddress,
          6uLL);
LABEL_34:
        v18 = (unsigned int)(v35 + 1);
        v17 = -1;
      }
      OpenList = OpenList->FilterNextOpen;
    }
    if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
    {
LABEL_43:
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
      OpenList = EthDB->FTypeOpenList;
      v27 = OpenList == 0LL;
      continue;
    }
    v27 = p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList;
  }
  while ( !v27 );
LABEL_46:
  v28 = EthDB->NextNumAddresses;
  if ( v28 == EthDB->NextOldNumAddresses && (v29 = 0, v28) )
  {
    NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
    v31 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
    v32 = NextOldMCastAddressBuf + 2;
    v9 = NextOldMCastAddressBuf - v31;
    while ( *(_DWORD *)(v31 + 2) == *v32 && *(_WORD *)v31 == *(_WORD *)&v31[v9] )
    {
      v17 = 0;
      ++v29;
      v32 = (_DWORD *)((char *)v32 + 6);
      v31 += 6;
      if ( v29 >= v28 )
        goto LABEL_52;
    }
LABEL_54:
    v4 = 0;
    *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
    v33 = 6 * EthDB->NextNumAddresses;
    *(_DWORD *)&a2->NdisReserved[72] = a2->DATA.QUERY_INFORMATION.Oid;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v33;
    a2->DATA.QUERY_INFORMATION.Oid = 16843011;
  }
  else
  {
LABEL_52:
    if ( v17 )
      goto LABEL_54;
    memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    EthDB->NextOldNumAddresses = 0;
    v4 = 1;
  }
  v5 = v36;
LABEL_56:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      IsValidMulticastFilter,
      v4);
  if ( IsValidMulticastFilter )
  {
LABEL_59:
    if ( (byte_14011B104 & 4) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        MiniportHandle->IfIndex,
        &SetOpenEthAddDeleteMulticastFailed,
        &MiniportHandle->InterfaceGuid,
        (__int64)&MiniportHandle->InterfaceGuid,
        MiniportHandle->IfIndex,
        MiniportHandle->NetLuid.Value,
        IsValidMulticastFilter,
        1,
        (char)a1);
  }
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
