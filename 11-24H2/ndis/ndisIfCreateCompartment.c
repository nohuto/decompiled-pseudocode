/*
 * XREFs of ndisIfCreateCompartment @ 0x1400CA194
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CB4B0 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisCmGetThreadState @ 0x140029430 (ndisCmGetThreadState.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x14004DAB0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x140057D20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x140067950 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400CA640 (ndisIfCreateCompartmentBlock.c)
 *     WPP_RECORDER_SF_l_guid_ @ 0x1400CB918 (WPP_RECORDER_SF_l_guid_.c)
 *     WPP_RECORDER_SF_l_guid_Lq @ 0x1400CB9E8 (WPP_RECORDER_SF_l_guid_Lq.c)
 *     WPP_RECORDER_SF_l_guid_d @ 0x1400CBAFC (WPP_RECORDER_SF_l_guid_d.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140147E04 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x140148598 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140163200 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 */

__int64 __fastcall ndisIfCreateCompartment(__int64 a1, struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r15
  int v3; // esi
  int Network; // ebx
  char v7; // r13
  __int128 *v8; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v10; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // rdi
  int v12; // eax
  char v13; // r12
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  char v17; // al
  int v18; // eax
  bool v19; // cf
  __int128 v20; // xmm0
  KIRQL v21; // al
  KIRQL v22; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v24; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r13
  struct _NDIS_NSI_COMPARTMENT_RW *v26; // r8
  __int64 v27; // rdx
  _OWORD *v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  KIRQL v31; // r15
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+50h] [rbp-28h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v35; // [rsp+58h] [rbp-20h] BYREF
  struct _NDIS_NSI_COMPARTMENT_RW *v36; // [rsp+60h] [rbp-18h]
  KIRQL v39; // [rsp+D0h] [rbp+58h]
  unsigned int v40; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  LOBYTE(v3) = 0;
  Network = 0;
  v7 = 0;
  v8 = (__int128 *)(v2 + 1080);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      v2 + 1080);
  *a2 = 0LL;
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v35 = CompartmentBlockByGuid;
  v11 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    v12 = *((_DWORD *)CompartmentBlockByGuid + 10);
    if ( (v12 & 1) != 0 )
    {
      v11 = 0LL;
      v35 = 0LL;
      goto LABEL_9;
    }
    if ( (v12 & 2) != 0 )
    {
      v7 = 1;
      *((_DWORD *)v11 + 10) = v12 & 0xFFFFFFF5 | 8;
LABEL_8:
      _InterlockedIncrement((volatile signed __int32 *)v11 + 11);
      v11 = v35;
      goto LABEL_9;
    }
    if ( *(_DWORD *)(a1 + 48) != 1 )
      goto LABEL_8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x17u,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        v2 + 1080);
      v10 = v39;
    }
    v11 = 0LL;
    v35 = 0LL;
    Network = -1073741270;
  }
LABEL_9:
  v13 = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
  v17 = v7;
  if ( Network < 0 )
    goto LABEL_37;
  if ( v11 )
    goto LABEL_34;
  v18 = ndisIfCreateCompartmentBlock(0LL, v2 + 1080, 0LL, &v35);
  v11 = v35;
  Network = v18;
  v17 = v7;
  if ( Network < 0 )
    goto LABEL_37;
  v19 = *(_BYTE *)(v2 + 1) < 2u;
  v7 = 1;
  *a2 = v35;
  if ( !v19 )
    *((_DWORD *)v11 + 420) = *(_DWORD *)(v2 + 1616);
  *((_DWORD *)v11 + 16) = *(_DWORD *)v2;
  v20 = *v8;
  v36 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v11 + 64);
  *(_OWORD *)((char *)v11 + 1144) = v20;
  *((_DWORD *)v11 + 419) = *(_DWORD *)(v2 + 1612);
  if ( (*((_DWORD *)v11 + 420) & 4) != 0 )
  {
    *(_OWORD *)((char *)v11 + 1684) = v20;
  }
  else
  {
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    v40 = 0;
    v22 = v21;
    ndisCmGetThreadState(KeGetCurrentThread(), &v40, &v34);
    CompartmentBlock = ndisIfFindCompartmentBlock(v40);
    v11 = v35;
    *(_OWORD *)((char *)v35 + 1684) = *(_OWORD *)((char *)CompartmentBlock + 1144);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v22);
  }
  Network = ndisIfCreateNetwork((struct _GUID *)v11 + 5, *((_DWORD *)v11 + 4));
  if ( Network >= 0 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v11 + 5);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v24);
    if ( !NetworkBlock )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, 25, v33, *((_DWORD *)v11 + 4), v2 + 1080);
      }
      Network = -1073741772;
LABEL_29:
      v7 = 1;
      v17 = v13;
      goto LABEL_37;
    }
    v26 = v36;
    *((_QWORD *)v11 + 7) = NetworkBlock;
    Network = ndisIfCreateInterface(NetworkBlock, 1u, v26, 0LL, 0LL, 0LL, 0LL, NdisIfBlockSourceAutomaticLoopback);
    if ( Network < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_l_guid_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          v15,
          26,
          v33,
          *((_DWORD *)v11 + 4),
          v2 + 1080,
          Network);
      goto LABEL_29;
    }
    v7 = 1;
LABEL_34:
    v27 = 4LL;
    v28 = (_OWORD *)((char *)v11 + 1160);
    v29 = (_OWORD *)(v2 + 1096);
    do
    {
      *v28 = *v29;
      v28[1] = v29[1];
      v28[2] = v29[2];
      v28[3] = v29[3];
      v28[4] = v29[4];
      v28[5] = v29[5];
      v28[6] = v29[6];
      v28 += 8;
      v30 = v29[7];
      v29 += 8;
      *(v28 - 1) = v30;
      --v27;
    }
    while ( v27 );
    *(_DWORD *)v28 = *(_DWORD *)v29;
    memmove(*(void **)(a1 + 32), (char *)v11 + 64, 0x668uLL);
    **(_DWORD **)(a1 + 16) = *((_DWORD *)v11 + 4);
    v17 = v7;
    goto LABEL_37;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_l_guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      v15,
      24,
      v33,
      *((_DWORD *)v11 + 4),
      v2 + 1080,
      Network);
  v17 = v13;
LABEL_37:
  if ( v11 )
  {
    if ( v17 )
      ndisNsiNotifyClientCompartmentChange(v11, 1LL);
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    if ( v7 )
      *((_DWORD *)v11 + 10) &= ~8u;
    COMPARTMENTBLOCK_DECREMENT_REF(v11);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v31);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v11 )
      v3 = *((_DWORD *)v11 + 4);
    WPP_RECORDER_SF_l_guid_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      v15,
      v16,
      v33,
      v3,
      (__int64)v8,
      Network,
      (char)*a2);
  }
  return (unsigned int)Network;
}
