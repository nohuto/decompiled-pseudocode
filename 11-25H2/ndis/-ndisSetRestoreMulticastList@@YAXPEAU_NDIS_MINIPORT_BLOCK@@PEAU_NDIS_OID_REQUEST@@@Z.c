/*
 * XREFs of ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C613C
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140051E00 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisSetRestoreMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _X_FILTER *EthDB; // rbx
  char v4; // r13
  _X_FILTER *v5; // rbp
  _NDIS_OPEN_BLOCK *OpenList; // rdi
  unsigned int NextNumAddresses; // eax
  _NDIS_OPEN_BLOCK **p_FTypeOpenList; // rcx
  _NDIS_OPEN_BLOCK **p_NoFTypeOpenList; // rax
  __int64 i; // r15
  unsigned int v11; // r9d
  __int64 v12; // r12
  int v13; // ecx
  __int64 v14; // r10
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rsi
  unsigned __int8 *NextMCastAddressBuf; // rax
  unsigned int v17; // r11d
  __int64 v18; // rsi

  EthDB = a1->EthDB;
  v4 = (char)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x51u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      a2);
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
          v11 = EthDB->NextNumAddresses;
          v12 = i;
          v13 = -1;
          v14 = 0LL;
          if ( v11 )
          {
            MCastAddressBuf = OpenList->MCastAddressBuf;
            v13 = -1;
            NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            v17 = *(_DWORD *)&MCastAddressBuf[v12].MCastAddress[2];
            while ( *(_DWORD *)(NextMCastAddressBuf + 2) <= v17 )
            {
              if ( *(_DWORD *)(NextMCastAddressBuf + 2) >= v17 )
              {
                if ( *(_WORD *)NextMCastAddressBuf > *(_WORD *)MCastAddressBuf[v12].MCastAddress )
                  break;
                if ( *(_WORD *)NextMCastAddressBuf >= *(_WORD *)MCastAddressBuf[v12].MCastAddress )
                  goto LABEL_19;
              }
              v14 = (unsigned int)(v14 + 1);
              NextMCastAddressBuf += 6;
              if ( (unsigned int)v14 >= v11 )
                goto LABEL_15;
            }
            v13 = 1;
          }
LABEL_15:
          EthDB->NextNumAddresses = v11 + 1;
          if ( v11 + 1 > EthDB->MaxMulticastAddresses )
            break;
          v18 = (unsigned int)v14;
          if ( v13 > 0 )
            memmove(
              EthDB->NextMCastAddressBuf[(unsigned int)(v14 + 1)],
              EthDB->NextMCastAddressBuf[v14],
              6 * (v11 + 1 - (unsigned int)v14) - 6);
          memmove(EthDB->NextMCastAddressBuf[v18], OpenList->MCastAddressBuf[v12].MCastAddress, 6uLL);
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
  a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v4,
      a2);
}
