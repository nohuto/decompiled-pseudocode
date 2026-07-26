/*
 * XREFs of ndisIfCreateInterfaceFromPersistentStore @ 0x140049A90
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x140167650 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1400499A0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14004B090 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x140062240 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1400963C0 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     WPP_RECORDER_SF_I @ 0x1400D0658 (WPP_RECORDER_SF_I_ea_1400D0658.c)
 *     WPP_RECORDER_SF_IL @ 0x1400D06F0 (WPP_RECORDER_SF_IL.c)
 *     WPP_RECORDER_SF_i_guid_ @ 0x1400D0AA0 (WPP_RECORDER_SF_i_guid_.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x14016E8A0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x14016F360 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        struct _GUID *a1,
        struct NdisNetworkInterfacePersistedState *a2,
        unsigned int a3)
{
  unsigned int v4; // esi
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rdi
  KIRQL v7; // dl
  int v8; // edx
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  KIRQL v13; // di
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  KIRQL v15; // dl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rbp
  int v17; // ecx
  int v18; // r9d
  int v19; // ecx
  int Interface; // eax
  int v21; // ecx
  int v23; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = a3;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, 12);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)((char *)a2 + 24));
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v7);
  if ( InterfaceByNetLuid )
  {
    v4 = -1073741823;
    goto LABEL_19;
  }
  v10 = *((_QWORD *)a2 + 3);
  v11 = (v10 >> 24) & 0xFFFFFF;
  v12 = HIWORD(v10);
  v24 = v11;
  if ( v11 - 32512 <= 0x4100 || (v4 = ndisIfAllocateAndVerifyNetLuidIndex(v12, &v24, 0, 0)) == 0 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)a2 + 36));
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v13);
    if ( NetworkBlock )
    {
LABEL_14:
      v19 = *(_DWORD *)(*((_QWORD *)NetworkBlock + 6) + 16LL);
      if ( *((_DWORD *)a2 + 13) != v19 )
        *((_DWORD *)a2 + 13) = v19;
      Interface = ndisIfCreateInterface(
                    NetworkBlock,
                    0,
                    0LL,
                    (const union _NET_LUID_LH *)a2 + 3,
                    a1,
                    a2,
                    0LL,
                    NdisIfBlockSourcePersistedNetSetup);
      v21 = v4;
      if ( Interface < 0 )
        v21 = -1073741823;
      v4 = v21;
      ndisIfUpdateInterfaceFromPersistentStore(a2);
      goto LABEL_19;
    }
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    CompartmentBlock = ndisIfFindCompartmentBlock(*((_DWORD *)a2 + 13));
    if ( !CompartmentBlock )
    {
      CompartmentBlock = ndisIfFindCompartmentBlock(1u);
      *((_DWORD *)a2 + 13) = v17;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v15);
    if ( !CompartmentBlock )
    {
      v4 = -1073741823;
      goto LABEL_19;
    }
    NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)*((_QWORD *)CompartmentBlock + 7);
    if ( NetworkBlock )
    {
      *(_OWORD *)((char *)a2 + 36) = *((_OWORD *)NetworkBlock + 2);
      goto LABEL_14;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v18);
    v4 = -1073741252;
  }
LABEL_19:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, 14, v23, *((_QWORD *)a2 + 3), v4);
  return v4;
}
