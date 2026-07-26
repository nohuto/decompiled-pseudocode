/*
 * XREFs of ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA270
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140045B40 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140045CE0 (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisOidPostEthMulticastOid(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  _NDIS_MEDIUM *p_MediaType; // rcx
  _X_FILTER *EthDB; // rbx
  int v7; // r8d
  int v8; // eax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    p_MediaType = &v3->MediaType;
    if ( (!v3 || *p_MediaType == NdisMedium802_3) && (!v4 || v4->MiniportHandle->MediaType == NdisMedium802_3) )
    {
      if ( v3 )
      {
        if ( *p_MediaType && *((_DWORD *)a1 + 10) )
        {
          EthDB = v3->EthDB;
          memmove(EthDB->MiniportMCastAddressBuf, EthDB->MiniportOldMCastAddressBuf, 6 * EthDB->MiniportOldNumAddresses);
          EthDB->MiniportNumAddresses = EthDB->MiniportOldNumAddresses;
        }
        ndisIfGetRcvAddressFromMiniport(v3);
      }
      if ( v4 )
      {
        if ( v4->MiniportHandle->MediaType == NdisMedium802_3 )
        {
          v7 = *((_DWORD *)a1 + 10);
          if ( v7 != -1073741637 )
          {
            ndisPostOpenSetMulticastList(v4, (struct _NDIS_OID_REQUEST *)v1, v7);
            if ( *(_DWORD *)(v1 + 32) == 16843011 )
            {
              v8 = *(_DWORD *)(v1 + 144);
              *(_DWORD *)(v1 + 144) = 0;
              *(_DWORD *)(v1 + 32) = v8;
            }
          }
        }
      }
    }
  }
}
