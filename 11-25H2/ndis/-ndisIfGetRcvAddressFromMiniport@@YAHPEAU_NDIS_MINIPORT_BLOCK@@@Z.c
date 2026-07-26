/*
 * XREFs of ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004EFD0
 * Callers:
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14004EEA0 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14004FC80 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C14A0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfGetRcvAddressFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rbx
  _X_FILTER *EthDB; // rdi
  unsigned int MaxMulticastAddresses; // eax
  __int64 Pool2; // rax
  unsigned int *p_ifRcvAddressCount; // rdx
  unsigned int *v6; // r9
  unsigned int MiniportNumAddresses; // ecx
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int8 *MiniportMCastAddressBuf; // rcx
  char *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int8 *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax

  IfBlock = a1->IfBlock;
  EthDB = a1->EthDB;
  if ( !IfBlock )
    return 0LL;
  if ( !EthDB )
    return 0LL;
  MaxMulticastAddresses = EthDB->MaxMulticastAddresses;
  if ( MaxMulticastAddresses + 1 < MaxMulticastAddresses )
    return 0LL;
  if ( IfBlock->ifMaxRcvAddressCount < MaxMulticastAddresses + 1 )
  {
    ifRcvAddressTable = IfBlock->ifRcvAddressTable;
    if ( ifRcvAddressTable )
      ExFreePoolWithTag(ifRcvAddressTable, 0);
    IfBlock->ifRcvAddressTable = 0LL;
    *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
  }
  Pool2 = (__int64)IfBlock->ifRcvAddressTable;
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(64LL, 48 * (EthDB->MaxMulticastAddresses + 1), 1718174798);
    IfBlock->ifRcvAddressTable = (struct _NDIS_IF_RCV_ADDRESS *)Pool2;
    if ( Pool2 )
    {
      p_ifRcvAddressCount = &IfBlock->ifRcvAddressCount;
      v6 = &IfBlock->ifRcvAddressCount;
      IfBlock->ifMaxRcvAddressCount = EthDB->MaxMulticastAddresses + 1;
      goto LABEL_7;
    }
  }
  p_ifRcvAddressCount = &IfBlock->ifRcvAddressCount;
  v6 = &IfBlock->ifRcvAddressCount;
  if ( Pool2 )
  {
LABEL_7:
    MiniportNumAddresses = EthDB->MiniportNumAddresses;
    v8 = 0LL;
    *p_ifRcvAddressCount = MiniportNumAddresses + 1;
    if ( MiniportNumAddresses )
    {
      do
      {
        v9 = 40 * v8;
        v10 = 3 * v8;
        v8 = (unsigned int)(v8 + 1);
        *(_DWORD *)((char *)IfBlock->ifRcvAddressTable + v9) = 2;
        *(_WORD *)((char *)IfBlock->ifRcvAddressTable + v9 + 4) = 6;
        MiniportMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
        v12 = (char *)IfBlock->ifRcvAddressTable + v9;
        *((_DWORD *)v12 + 2) = *(_DWORD *)&MiniportMCastAddressBuf[2 * v10];
        *((_WORD *)v12 + 6) = *(_WORD *)&MiniportMCastAddressBuf[2 * v10 + 4];
      }
      while ( (unsigned int)v8 < *v6 - 1 );
    }
    v13 = 5 * v8;
    *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v13) = 2;
    *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v13 + 2) = 6;
    v14 = (__int64)IfBlock->ifRcvAddressTable + 40 * v8;
    *(_DWORD *)(v14 + 8) = *(_DWORD *)EthDB->AdapterAddress;
    *(_WORD *)(v14 + 12) = *(_WORD *)&EthDB->AdapterAddress[4];
    if ( (unsigned int)v8 < IfBlock->ifRcvAddressCount - 1 )
    {
      do
      {
        v17 = (unsigned int)(v8 + 1);
        v18 = 40 * v17;
        *(_DWORD *)((char *)IfBlock->ifRcvAddressTable + v18) = 2;
        *(_WORD *)((char *)IfBlock->ifRcvAddressTable + v18 + 4) = 6;
        v19 = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
        v20 = (__int64)IfBlock->ifRcvAddressTable + 40 * v17;
        v21 = (unsigned int)v8;
        LODWORD(v8) = v8 + 1;
        *(_DWORD *)(v20 + 8) = *(_DWORD *)&v19[6 * v21];
        *(_WORD *)(v20 + 12) = *(_WORD *)&v19[6 * v21 + 4];
      }
      while ( (unsigned int)v17 < IfBlock->ifRcvAddressCount - 1 );
    }
    return 0LL;
  }
  IfBlock->ifMaxRcvAddressCount = 0;
  result = 3221225626LL;
  *p_ifRcvAddressCount = 0;
  return result;
}
