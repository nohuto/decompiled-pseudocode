/*
 * XREFs of ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BEF0C
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D690 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisSetRestoreMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _X_FILTER *EthDB; // rbx
  struct _NDIS_OID_REQUEST *v3; // r14
  char v4; // r13
  _X_FILTER *v5; // rbp
  _NDIS_OPEN_BLOCK *OpenList; // rdi
  int v7; // edx
  unsigned int NextNumAddresses; // eax
  _NDIS_OPEN_BLOCK **p_FTypeOpenList; // rcx
  _NDIS_OPEN_BLOCK **p_NoFTypeOpenList; // rax
  __int64 i; // r15
  unsigned int v12; // r9d
  __int64 v13; // r12
  int v14; // ecx
  __int64 v15; // r10
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rsi
  unsigned __int8 *NextMCastAddressBuf; // rax
  unsigned int v18; // r11d
  __int64 v19; // rsi
  char v20; // [rsp+30h] [rbp-38h]

  EthDB = a1->EthDB;
  v3 = a2;
  v4 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      81,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v20);
  }
  v5 = EthDB;
  OpenList = EthDB->OpenList;
  memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
  NextNumAddresses = EthDB->NextNumAddresses;
  p_FTypeOpenList = &EthDB->FTypeOpenList;
  EthDB->NextNumAddresses = 0;
  EthDB->NextOldNumAddresses = NextNumAddresses;
  p_NoFTypeOpenList = &EthDB->NoFTypeOpenList;
  do
  {
    if ( !OpenList )
      goto LABEL_22;
    while ( 1 )
    {
      do
      {
        for ( i = 0LL; (unsigned int)i < OpenList->NumAddresses; i = (unsigned int)(i + 1) )
        {
          v12 = EthDB->NextNumAddresses;
          v13 = i;
          v14 = -1;
          v15 = 0LL;
          if ( v12 )
          {
            MCastAddressBuf = OpenList->MCastAddressBuf;
            v14 = -1;
            NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            v18 = *(_DWORD *)&MCastAddressBuf[v13].MCastAddress[2];
            while ( *(_DWORD *)(NextMCastAddressBuf + 2) <= v18 )
            {
              if ( *(_DWORD *)(NextMCastAddressBuf + 2) >= v18 )
              {
                v7 = *(unsigned __int16 *)NextMCastAddressBuf;
                if ( (unsigned __int16)v7 > *(_WORD *)MCastAddressBuf[v13].MCastAddress )
                  break;
                if ( (unsigned __int16)v7 >= *(_WORD *)MCastAddressBuf[v13].MCastAddress )
                  goto LABEL_19;
              }
              v15 = (unsigned int)(v15 + 1);
              NextMCastAddressBuf += 6;
              if ( (unsigned int)v15 >= v12 )
                goto LABEL_15;
            }
            v14 = 1;
          }
LABEL_15:
          EthDB->NextNumAddresses = v12 + 1;
          if ( v12 + 1 > EthDB->MaxMulticastAddresses )
            break;
          v19 = (unsigned int)v15;
          if ( v14 > 0 )
            memmove(
              EthDB->NextMCastAddressBuf[(unsigned int)(v15 + 1)],
              EthDB->NextMCastAddressBuf[v15],
              6 * (v12 + 1 - (unsigned int)v15) - 6);
          memmove(EthDB->NextMCastAddressBuf[v19], OpenList->MCastAddressBuf[v13].MCastAddress, 6uLL);
LABEL_19:
          ;
        }
        OpenList = OpenList->FilterNextOpen;
      }
      while ( OpenList );
      p_NoFTypeOpenList = &EthDB->NoFTypeOpenList;
      p_FTypeOpenList = &EthDB->FTypeOpenList;
LABEL_22:
      if ( v5 == EthDB )
      {
        OpenList = EthDB->NoFTypeOpenList;
        v5 = (_X_FILTER *)&EthDB->NoFTypeOpenList;
        if ( OpenList )
          continue;
      }
      if ( v5 != (_X_FILTER *)p_NoFTypeOpenList )
        break;
      OpenList = EthDB->FTypeOpenList;
      v5 = (_X_FILTER *)&EthDB->FTypeOpenList;
      if ( !OpenList )
        break;
    }
  }
  while ( v5 != (_X_FILTER *)p_FTypeOpenList );
  v3->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
  v3->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      82,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v4,
      (char)v3);
  }
}
