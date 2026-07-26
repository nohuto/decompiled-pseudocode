/*
 * XREFs of NdisSendNetBufferLists @ 0x140027C10
 * Callers:
 *     <none>
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     PktMonClientNblLogNdis @ 0x1400206D0 (PktMonClientNblLogNdis.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1400207D0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140021AD0 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x140022110 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140027460 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1400427C0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     NdisAllocateNetBufferListContext @ 0x1400433B0 (NdisAllocateNetBufferListContext.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004BCA0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140073CE0 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NblContextVerifierBugcheckInternalError @ 0x14008ADA0 (NblContextVerifierBugcheckInternalError.c)
 *     TrackNblContextVerifierFailure @ 0x1400A2970 (TrackNblContextVerifierFailure.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  ULONG_PTR v4; // rdi
  NDIS_PORT_NUMBER v5; // r10d
  __int64 v6; // r8
  ULONG v8; // r15d
  unsigned int Number; // r13d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebp
  ULONG_PTR v14; // rsi
  bool v15; // zf
  struct _NET_BUFFER_LIST *v16; // rbp
  struct _NET_BUFFER_LIST *v17; // r15
  PNET_BUFFER_LIST v18; // r14
  char v19; // cl
  ULONG v20; // edx
  __int64 v21; // rax
  struct _NDIS_OBJECT_HEADER *v22; // r9
  void *v23; // rcx
  void (*v24)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r10
  int v25; // esi
  __int64 v26; // rax
  int v27; // r14d
  KIRQL v28; // r9
  __int64 v29; // r10
  unsigned int v30; // r8d
  PNET_BUFFER_LIST i; // rdx
  $C1F0B4CD31131FE325411CF2EE445EA1 *FirstNetBuffer; // rax
  int j; // ecx
  int v34; // ebp
  __int64 v35; // rcx
  __int64 v36; // r12
  char v37; // r15
  __int64 v38; // rsi
  int v39; // r14d
  KIRQL v40; // bp
  unsigned int v41; // ebx
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // rax
  char v46; // [rsp+30h] [rbp-1E8h]
  struct _NET_BUFFER_LIST *v47; // [rsp+38h] [rbp-1E0h] BYREF
  int v48; // [rsp+40h] [rbp-1D8h]
  __int64 v49; // [rsp+48h] [rbp-1D0h]
  struct _NET_BUFFER_LIST *v50; // [rsp+50h] [rbp-1C8h] BYREF
  PNET_BUFFER_LIST v51; // [rsp+58h] [rbp-1C0h]
  _QWORD v52[48]; // [rsp+60h] [rbp-1B8h] BYREF
  KIRQL v53; // [rsp+220h] [rbp+8h]

  v4 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = PortNumber;
  v6 = 0LL;
  v53 = 2;
  v49 = 0LL;
  v8 = SendFlags;
  LODWORD(v47) = 0;
  v46 = 0;
  Number = -1;
  if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
  {
    v11 = *(_QWORD *)(v4 + 40);
    v12 = *(_DWORD *)(v4 + 80);
    LODWORD(v47) = *(_DWORD *)(v4 + 48);
    v46 = v12;
    v49 = v11;
    if ( !v11 )
      v49 = *(_QWORD *)(v4 + 40);
  }
  v13 = *(_DWORD *)(v4 + 2668);
  v48 = v13;
  if ( v13 )
  {
    if ( v13 != 1 && v13 != 3 )
      goto LABEL_45;
    v14 = v4;
  }
  else
  {
    v14 = *(_QWORD *)(v4 + 2568);
  }
  if ( !v14 || !ndisNblContextVerifierMode || ndisNblContextVerifierMode == 3 )
    goto LABEL_45;
  if ( *(_BYTE *)v14 == 5 )
  {
    v15 = !FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v14, 1024);
LABEL_20:
    if ( v15 )
      goto LABEL_45;
LABEL_21:
    v16 = (struct _NET_BUFFER_LIST *)v6;
    v50 = (struct _NET_BUFFER_LIST *)v6;
    v51 = (PNET_BUFFER_LIST)&v50;
    memset(&v52[1], 0, 0x178uLL);
    v52[0] = NetBufferLists;
    v17 = NetBufferLists;
    v18 = (PNET_BUFFER_LIST)v52;
    if ( NetBufferLists )
    {
      do
      {
        if ( NdisAllocateNetBufferListContext(NetBufferLists, 8u, 0, 0x6376444Eu) )
        {
          TrackNblContextVerifierFailure(NetBufferLists, v14);
          v18->Link.Alignment = NetBufferLists->Link.Alignment;
          NetBufferLists->Link.Alignment = (unsigned __int64)v16;
          v51->Link.Alignment = (unsigned __int64)NetBufferLists;
          v51 = NetBufferLists;
          NetBufferLists = (PNET_BUFFER_LIST)v18->Link.Alignment;
        }
        else
        {
          v18 = NetBufferLists;
          *(_QWORD *)&NetBufferLists->Context->ContextData[NetBufferLists->Context->Offset] = v14;
          NetBufferLists = (PNET_BUFFER_LIST)NetBufferLists->Link.Alignment;
        }
      }
      while ( NetBufferLists );
      v16 = v50;
      v17 = (struct _NET_BUFFER_LIST *)v52[0];
    }
    v50 = 0LL;
    v51 = (PNET_BUFFER_LIST)&v50;
    NetBufferLists = v17;
    if ( !v16 )
    {
LABEL_44:
      v5 = PortNumber;
      v8 = SendFlags;
      v13 = v48;
      goto LABEL_45;
    }
    if ( byte_14011D800 && (*(_DWORD *)(v4 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(v4 + 5816, (_DWORD)v16, v6, 2, -1073741670, -536866800);
    v19 = *(_BYTE *)v4;
    v20 = SendFlags & 1;
    if ( *(_BYTE *)v4 == 5 )
    {
      v21 = *(_QWORD *)(v4 + 456);
    }
    else
    {
      if ( v19 != 17 )
        goto LABEL_125;
      v21 = *(_QWORD *)(v4 + 2568);
    }
    if ( !v21 )
    {
      if ( v19 == 17 )
      {
        ndisInvokeNextSendCompleteHandler(
          v16,
          v20,
          (struct _NDIS_OBJECT_HEADER *)v4,
          *(struct _NDIS_OBJECT_HEADER **)(v4 + 2408),
          *(void **)(v4 + 2392),
          *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v4 + 2432));
        goto LABEL_43;
      }
LABEL_125:
      NblContextVerifierBugcheckInternalError(v4, (ULONG_PTR)v16);
    }
    if ( *(_BYTE *)v21 == 5 )
    {
      v22 = *(struct _NDIS_OBJECT_HEADER **)(v21 + 488);
      v23 = *(void **)(v21 + 472);
      v24 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v21 + 464);
    }
    else
    {
      if ( *(_BYTE *)v21 != 17 )
        goto LABEL_125;
      v22 = *(struct _NDIS_OBJECT_HEADER **)(v21 + 2592);
      v23 = *(void **)(v21 + 2576);
      v24 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v21 + 2616);
    }
    ndisInvokeNextSendCompleteHandler(v16, v20, (struct _NDIS_OBJECT_HEADER *)v21, v22, v23, v24);
LABEL_43:
    if ( !v17 )
      return;
    goto LABEL_44;
  }
  if ( *(_BYTE *)v14 == 17 )
  {
    v15 = (*(_DWORD *)(v14 + 3688) & 0x1000) == 0;
    goto LABEL_20;
  }
  if ( *(_BYTE *)v14 == 18 && *(int *)(v14 + 224) < 0 )
    goto LABEL_21;
LABEL_45:
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyTxIndication(NetBufferLists, v5, v8, (const struct _NDIS_OBJECT_HEADER *)NdisBindingHandle);
    ndisNblPoisonScratchFields(NetBufferLists);
  }
  v25 = v8 & 1;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferLists,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisBindingHandle + 73),
      *(_QWORD *)(v4 + 2560),
      0x8Fu,
      v8 & 1);
  if ( byte_14011D800 )
  {
    v26 = *((_QWORD *)NdisBindingHandle + 126);
    if ( v26 )
    {
      if ( (*(_DWORD *)(v26 + 56) & 1) != 0 )
        PktMonClientNblLogNdis((__int64)NdisBindingHandle + 984, (__int64)NetBufferLists, v6, 2);
    }
  }
  v27 = (int)v47;
  if ( ((unsigned int)v47 & 0x200140) != 0 )
    goto LABEL_56;
  if ( (v46 & 0x40) != 0 )
  {
    v25 = v8 & 1;
LABEL_56:
    if ( v25 )
    {
      v28 = 2;
    }
    else
    {
      v28 = KfRaiseIrql(2u);
      v53 = v28;
    }
    v29 = v49;
    if ( ((unsigned __int8)v47 & 0x40) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwPerCpuDataStride * Number + v49 + ndisPcwOffsetToPerCpuData + 48);
    }
    if ( !v28 && (v27 & 0x200000) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwPerCpuDataStride * Number + v29 + ndisPcwOffsetToPerCpuData + 200);
    }
    if ( (v27 & 0x400100) != 0 )
    {
      v30 = 0;
      for ( i = NetBufferLists; i; v30 += j )
      {
        FirstNetBuffer = ($C1F0B4CD31131FE325411CF2EE445EA1 *)i->FirstNetBuffer;
        for ( j = 0; FirstNetBuffer; ++j )
          FirstNetBuffer = ($C1F0B4CD31131FE325411CF2EE445EA1 *)FirstNetBuffer->Link.Alignment;
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      }
      if ( (v27 & 0x100) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v29 + ndisPcwOffsetToPerCpuData + 64) += v30;
      }
      if ( !v28 && (v27 & 0x400000) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v29 + ndisPcwOffsetToPerCpuData + 208) += v30;
      }
    }
    if ( (v46 & 0x40) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwPerCpuDataStride * Number + v29 + ndisPcwOffsetToPerCpuData + 352) = __rdtsc();
    }
    else if ( v28 != 2 )
    {
      KeLowerIrql(v28);
    }
  }
  if ( v13 )
  {
    v34 = v13 - 1;
    if ( v34 )
    {
      if ( v34 == 1 )
        ndisMSendNetBufferListsToPackets((struct _NDIS_MINIPORT_BLOCK *)v4, NetBufferLists, PortNumber, v8);
      else
        ndisMFakeSendNetBufferLists((struct _NDIS_FILTER_BLOCK *)v4, NetBufferLists, PortNumber, v8);
    }
    else
    {
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)v4, NetBufferLists, PortNumber, v8, 0);
    }
  }
  else
  {
    v35 = *(_QWORD *)(v4 + 2568);
    v47 = NetBufferLists;
    if ( *(_BYTE *)v35 == 5
      && (*(_DWORD *)(v35 + 56) & 0x8000) != 0
      && !*(_DWORD *)(v35 + 336)
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v8 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v35, NetBufferLists, PortNumber, v8, &v47);
    }
    if ( v47 )
    {
      v36 = *(_QWORD *)(v4 + 2552);
      v37 = 0;
      v38 = 0LL;
      LOBYTE(v39) = 0;
      v40 = 2;
      v41 = -1;
      if ( *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 80) )
      {
        v38 = *(_QWORD *)(v4 + 40);
        v39 = *(_DWORD *)(v4 + 80);
        if ( !v38 )
          v38 = *(_QWORD *)(v4 + 40);
      }
      if ( v36 == v4 && (v39 & 0x80u) != 0 )
      {
        if ( (SendFlags & 1) == 0 )
        {
          v40 = KfRaiseIrql(2u);
          v37 = 1;
        }
        v41 = KeGetPcr()->Prcb.Number;
        *(_QWORD *)(ndisPcwOffsetToPerCpuData + v38 + ndisPcwPerCpuDataStride * v41 + 360) = __rdtsc();
      }
      ndisInvokeNextSendHandler(
        v47,
        PortNumber,
        SendFlags,
        *(struct _NDIS_OBJECT_HEADER **)(v4 + 2568),
        *(void **)(v4 + 2552),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 2648));
      if ( v36 == v4 )
      {
        if ( (v39 & 0x80u) != 0 )
        {
          if ( v41 == -1 )
            v41 = KeGetPcr()->Prcb.Number;
          v42 = v38 + ndisPcwPerCpuDataStride * v41 + ndisPcwOffsetToPerCpuData;
          v43 = __rdtsc();
          *(_QWORD *)(v42 + 160) += (((unsigned __int64)HIDWORD(v43) << 32) | (unsigned int)v43)
                                  - *(_QWORD *)(v42 + 360);
          *(_QWORD *)(v42 + 360) = 0LL;
        }
        if ( v37 && v40 != 2 )
          KeLowerIrql(v40);
      }
    }
  }
  if ( (v46 & 0x40) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v44 = v49 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v45 = __rdtsc();
    *(_QWORD *)(v44 + 152) += (((unsigned __int64)HIDWORD(v45) << 32) | (unsigned int)v45) - *(_QWORD *)(v44 + 352);
    *(_QWORD *)(v44 + 352) = 0LL;
    if ( v53 != 2 )
      KeLowerIrql(v53);
  }
}
