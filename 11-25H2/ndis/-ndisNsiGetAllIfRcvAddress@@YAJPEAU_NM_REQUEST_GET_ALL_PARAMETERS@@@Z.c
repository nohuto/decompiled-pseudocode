/*
 * XREFs of ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D4020
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14000E590 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14004B090 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ndisIfFindNextRcvAddress @ 0x140152FE4 (ndisIfFindNextRcvAddress.c)
 *     ndisIfFindRcvAddress @ 0x140153070 (ndisIfFindRcvAddress.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x1401530F0 (ndisNsiGetIfRcvAddressRodInformation.c)
 */

__int64 __fastcall ndisNsiGetAllIfRcvAddress(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rsi
  int v3; // r14d
  unsigned int IfRcvAddressRodInformation; // edi
  union _NET_LUID_LH *v5; // rax
  union _NET_LUID_LH v6; // rbx
  union _NET_LUID_LH *v7; // r12
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // r15
  int v11; // ecx
  _LIST_ENTRY *v12; // rax
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  __int64 ifRcvAddressTable; // rdx
  int v15; // ebx
  __int64 NextRcvAddress; // rax
  __int64 v17; // rax
  KIRQL v18; // bl
  char v20[64]; // [rsp+40h] [rbp-68h] BYREF

  InterfaceByNetLuid = 0LL;
  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      14,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      (char)a1);
  memset(v20, 0, sizeof(v20));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 40 )
  {
    IfRcvAddressRodInformation = -1073741808;
    goto LABEL_39;
  }
  v5 = (union _NET_LUID_LH *)*((_QWORD *)a1 + 2);
  v6.Value = v5->Value;
  v7 = v5 + 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v9 = *((_DWORD *)a1 + 8);
  IfRcvAddressRodInformation = -1073741808;
  v10 = v8;
  if ( !v9 )
    goto LABEL_15;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v3 = -1073741808;
      goto LABEL_17;
    }
LABEL_15:
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v6);
    if ( !InterfaceByNetLuid )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v6.Value != -1LL )
    goto LABEL_15;
  do
  {
    v12 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink - 77;
    if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
      v12 = (_LIST_ENTRY *)InterfaceByNetLuid;
    InterfaceByNetLuid = (struct _NDIS_IF_BLOCK *)v12;
  }
  while ( !v12 || !v12[80].Flink );
LABEL_16:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid->RefCountTracker, 9u);
  ++InterfaceByNetLuid->Ref;
  **((_QWORD **)a1 + 2) = InterfaceByNetLuid->NetLuid.Value;
LABEL_17:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
  if ( v3 < 0 )
  {
    IfRcvAddressRodInformation = v3;
    if ( !InterfaceByNetLuid )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( !InterfaceByNetLuid )
  {
    IfRcvAddressRodInformation = *((_DWORD *)a1 + 8) != 0 ? -2147483622 : -1073741772;
    goto LABEL_39;
  }
  v13 = ndisIfReferenceMiniport(InterfaceByNetLuid, 5u);
  if ( v13 )
  {
    if ( !v13->EthDB )
    {
      IfRcvAddressRodInformation = 0;
LABEL_36:
      ndisIfDereferenceMiniport(InterfaceByNetLuid, (struct _NDIS_MINIPORT_BLOCK *)ifRcvAddressTable, 5u);
      goto LABEL_38;
    }
    v15 = *((_DWORD *)a1 + 8);
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        ifRcvAddressTable = (__int64)InterfaceByNetLuid->ifRcvAddressTable;
        goto LABEL_31;
      }
      if ( v15 != 2 )
        goto LABEL_36;
      NextRcvAddress = ndisIfFindNextRcvAddress(InterfaceByNetLuid, v7);
    }
    else
    {
      NextRcvAddress = ndisIfFindRcvAddress(InterfaceByNetLuid, v7);
    }
    ifRcvAddressTable = NextRcvAddress;
LABEL_31:
    if ( ifRcvAddressTable )
    {
      v17 = *((_QWORD *)a1 + 2);
      *(_OWORD *)(v17 + 8) = *(_OWORD *)(ifRcvAddressTable + 8);
      *(_OWORD *)(v17 + 24) = *(_OWORD *)(ifRcvAddressTable + 24);
      if ( *((_QWORD *)a1 + 1) == 3LL )
      {
        *(_QWORD *)&v20[40] = *((_QWORD *)a1 + 7);
        *(_DWORD *)&v20[48] = *((_DWORD *)a1 + 16);
        *(_DWORD *)&v20[32] = 1;
        IfRcvAddressRodInformation = ndisNsiGetIfRcvAddressRodInformation(
                                       (char)InterfaceByNetLuid,
                                       ifRcvAddressTable,
                                       (char)v20);
        *((_DWORD *)a1 + 16) = *(_DWORD *)&v20[48];
      }
      else
      {
        IfRcvAddressRodInformation = -1073741811;
      }
    }
    else
    {
      IfRcvAddressRodInformation = v15 != 0 ? -2147483622 : -1073741772;
    }
    goto LABEL_36;
  }
  IfRcvAddressRodInformation = 0;
LABEL_38:
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  IFBLOCK_DECREMENT_REF((char *)InterfaceByNetLuid, 9u);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v18);
LABEL_39:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      (char)a1,
      IfRcvAddressRodInformation);
  KeLeaveCriticalRegion();
  return IfRcvAddressRodInformation;
}
