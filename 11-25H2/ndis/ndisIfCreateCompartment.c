/*
 * XREFs of ndisIfCreateCompartment @ 0x1400D136C
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D2970 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1400499A0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisCmGetThreadState @ 0x14004D880 (ndisCmGetThreadState.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x140062240 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x140069280 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1400729C0 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1400D2904 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline @ 0x1400D2BF0 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_l_guid_ @ 0x1400D2F04 (WPP_RECORDER_SF_l_guid_.c)
 *     WPP_RECORDER_SF_l_guid_Lq @ 0x1400D2FD4 (WPP_RECORDER_SF_l_guid_Lq.c)
 *     WPP_RECORDER_SF_l_guid_d @ 0x1400D30E8 (WPP_RECORDER_SF_l_guid_d.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140152AD4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x140153264 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x14016E8A0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 */

__int64 __fastcall ndisIfCreateCompartment(__int64 a1, struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // rbx
  int v3; // esi
  int CompartmentBlock; // r14d
  __int128 *v6; // r13
  int IsEnabledDeviceUsageNoInline; // eax
  const struct _GUID *v8; // rdx
  KIRQL v9; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // rdi
  int v12; // ecx
  bool v13; // cf
  __int128 v14; // xmm0
  KIRQL v15; // bl
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  KIRQL v20; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r14
  int v22; // edx
  int v23; // r8d
  struct _NDIS_NSI_COMPARTMENT_RW *v24; // r8
  KIRQL v25; // bl
  __int64 v26; // rdx
  _OWORD *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  KIRQL v30; // bl
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  int v35; // [rsp+20h] [rbp-58h]
  unsigned int v36; // [rsp+50h] [rbp-28h] BYREF
  int v37; // [rsp+54h] [rbp-24h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v38; // [rsp+58h] [rbp-20h]
  __int64 v39; // [rsp+60h] [rbp-18h]
  struct _NDIS_NSI_COMPARTMENT_RW *v40; // [rsp+68h] [rbp-10h]
  char v43; // [rsp+D0h] [rbp+58h]
  char v44; // [rsp+D8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 32);
  LOBYTE(v3) = 0;
  v39 = v2;
  CompartmentBlock = 0;
  v44 = 0;
  v43 = 0;
  v6 = (__int128 *)(v2 + 1080);
  IsEnabledDeviceUsageNoInline = Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline();
  v8 = &WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x18u,
        (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
        v2 + 1080);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      22,
      25,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids);
  }
  *a2 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v38 = CompartmentBlockByGuid;
  v11 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    v12 = *((_DWORD *)CompartmentBlockByGuid + 10);
    if ( (v12 & 1) != 0 )
    {
      v11 = 0LL;
      v38 = 0LL;
    }
    else
    {
      if ( (v12 & 2) != 0 )
      {
        *((_DWORD *)CompartmentBlockByGuid + 10) = v12 & 0xFFFFFFF5 | 8;
        if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
          v43 = 1;
        else
          ndisNsiScheduleCompartmentBlockChangeNotification(v11);
        v44 = 1;
      }
      else if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline()
          && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x16u,
            0x1Au,
            (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
            v2 + 1080);
        }
        v11 = 0LL;
        v38 = 0LL;
        CompartmentBlock = -1073741270;
      }
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v11 + 11);
        v11 = v38;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  if ( CompartmentBlock < 0 )
    goto LABEL_50;
  if ( v11 )
  {
LABEL_47:
    v26 = 4LL;
    v27 = (_OWORD *)((char *)v11 + 1160);
    v28 = (_OWORD *)(v2 + 1096);
    do
    {
      *v27 = *v28;
      v27[1] = v28[1];
      v27[2] = v28[2];
      v27[3] = v28[3];
      v27[4] = v28[4];
      v27[5] = v28[5];
      v27[6] = v28[6];
      v27 += 8;
      v29 = v28[7];
      v28 += 8;
      *(v27 - 1) = v29;
      --v26;
    }
    while ( v26 );
    *(_DWORD *)v27 = *(_DWORD *)v28;
    memmove(*(void **)(a1 + 32), (char *)v11 + 64, 0x668uLL);
    **(_DWORD **)(a1 + 16) = *((_DWORD *)v11 + 4);
    goto LABEL_50;
  }
  v11 = v38;
  CompartmentBlock = ndisIfCreateCompartmentBlock(0);
  if ( CompartmentBlock < 0 )
    goto LABEL_50;
  v13 = *(_BYTE *)(v2 + 1) < 2u;
  v44 = 1;
  *a2 = v38;
  if ( !v13 )
    *((_DWORD *)v11 + 420) = *(_DWORD *)(v2 + 1616);
  *((_DWORD *)v11 + 16) = *(_DWORD *)v2;
  v14 = *v6;
  v40 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v11 + 64);
  *(_OWORD *)((char *)v11 + 1144) = v14;
  *((_DWORD *)v11 + 419) = *(_DWORD *)(v2 + 1612);
  if ( (*((_DWORD *)v11 + 420) & 4) != 0 )
  {
    *(_OWORD *)((char *)v11 + 1684) = v14;
  }
  else
  {
    v36 = 0;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    ndisCmGetThreadState(KeGetCurrentThread(), &v36, &v37);
    v16 = ndisIfFindCompartmentBlock(v36);
    v11 = v38;
    *(_OWORD *)((char *)v38 + 1684) = *(_OWORD *)((char *)v16 + 1144);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v15);
  }
  CompartmentBlock = ndisIfCreateNetwork((struct _GUID *)v11 + 5, *((_DWORD *)v11 + 4));
  if ( CompartmentBlock < 0 )
  {
    if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline()
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = 27;
LABEL_33:
      WPP_RECORDER_SF_l_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        v18,
        v19,
        v35,
        *((_DWORD *)v11 + 4),
        (__int64)v6,
        CompartmentBlock);
      goto LABEL_50;
    }
    goto LABEL_50;
  }
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v11 + 5);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
  if ( !NetworkBlock )
  {
    if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline()
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v22, v23, 28, v35, *((_DWORD *)v11 + 4), (__int64)v6);
    }
    CompartmentBlock = -1073741772;
    goto LABEL_50;
  }
  v24 = v40;
  *((_QWORD *)v11 + 7) = NetworkBlock;
  CompartmentBlock = ndisIfCreateInterface(
                       NetworkBlock,
                       1u,
                       v24,
                       0LL,
                       0LL,
                       0LL,
                       0LL,
                       NdisIfBlockSourceAutomaticLoopback);
  if ( CompartmentBlock >= 0 )
  {
    if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
    {
      v43 = 1;
    }
    else
    {
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      ndisNsiScheduleCompartmentBlockChangeNotification(v11);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v25);
    }
    v2 = v39;
    goto LABEL_47;
  }
  if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline()
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v19 = 29;
    goto LABEL_33;
  }
LABEL_50:
  if ( v11 )
  {
    if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() && v43 )
      ndisNsiNotifyClientCompartmentChange(v11, 1LL);
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    if ( v44 )
      *((_DWORD *)v11 + 10) &= ~8u;
    COMPARTMENTBLOCK_DECREMENT_REF(v11);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v30);
  }
  if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( v11 )
        v3 = *((_DWORD *)v11 + 4);
      WPP_RECORDER_SF_l_guid_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v31,
        v32,
        v33,
        v35,
        v3,
        (__int64)v6,
        CompartmentBlock,
        (char)*a2);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      CompartmentBlock,
      *a2);
  }
  return (unsigned int)CompartmentBlock;
}
