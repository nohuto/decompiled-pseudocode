/*
 * XREFs of ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140045A10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140045B40 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140045CE0 (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisOidPostEthMulticastList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v2; // rsi
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rax
  _X_FILTER *EthDB; // r14
  unsigned int MiniportOldNumAddresses; // r15d
  unsigned __int8 *MiniportOldMCastAddressBuf; // rdx

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  MiniportHandle = 0LL;
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    if ( v2 )
    {
      EthDB = v2->EthDB;
      if ( (*(_DWORD *)(v1 + 88) & 0x10000) != 0 )
        *((_DWORD *)a1 + 10) = 0;
      if ( *((_DWORD *)a1 + 10) )
      {
        MiniportOldNumAddresses = EthDB->MiniportOldNumAddresses;
        MiniportOldMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportOldMCastAddressBuf;
      }
      else
      {
        MiniportOldMCastAddressBuf = *(unsigned __int8 **)(v1 + 40);
        MiniportOldNumAddresses = *(_DWORD *)(v1 + 48) / 6u;
      }
      memmove(EthDB->MiniportMCastAddressBuf, MiniportOldMCastAddressBuf, 6 * MiniportOldNumAddresses);
      EthDB->MiniportNumAddresses = MiniportOldNumAddresses;
      EthDB->MiniportOldNumAddresses = 0;
      ndisIfGetRcvAddressFromMiniport(v2);
      MiniportHandle = v2;
    }
    if ( v4 )
    {
      ndisPostOpenSetMulticastList(v4, (struct _NDIS_OID_REQUEST *)v1, *((_DWORD *)a1 + 10));
      MiniportHandle = v4->MiniportHandle;
    }
    if ( !MiniportHandle )
      MiniportHandle = *(struct _NDIS_MINIPORT_BLOCK **)(*((_QWORD *)a1 + 2) + 32LL);
    if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
      MiniportHandle->EthDB->NextOldNumAddresses = 0;
  }
}
