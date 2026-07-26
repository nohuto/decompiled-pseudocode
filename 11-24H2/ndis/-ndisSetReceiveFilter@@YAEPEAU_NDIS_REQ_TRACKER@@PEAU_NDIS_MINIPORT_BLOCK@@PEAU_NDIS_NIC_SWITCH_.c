/*
 * XREFs of ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400AB060
 * Callers:
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AAD50 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140006710 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400084F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1400A9408 (-ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400A99A8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400A9ADC (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400DEA1C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

char __fastcall ndisSetReceiveFilter(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a3,
        struct _NDIS_SRIOV_CAPABILITIES *a4)
{
  struct _NDIS_OID_REQUEST *v4; // r14
  unsigned int *InformationBuffer; // rdx
  char v9; // si
  struct _NDIS_RECEIVE_FILTER_BLOCK *v10; // r13
  char *ReceiveQueueByQueueId; // rbp
  struct _NDIS_VPORT_BLOCK *v12; // r12
  struct _NDIS_OID_REQUEST *v13; // rcx
  bool v14; // cf
  int v15; // edx
  char v16; // r14
  char v17; // r15
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  unsigned int *v19; // r15
  char v20; // al
  __int64 v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // rcx
  unsigned int v24; // r15d
  unsigned __int64 v25; // rcx
  __int64 Pool2; // rax
  _DWORD *v27; // r15
  size_t v28; // r8
  void *v29; // rdx
  size_t v30; // r8
  char *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // r9
  unsigned int v34; // edx
  KIRQL v35; // dl
  unsigned __int64 *p_Lock; // r14
  unsigned int v37; // eax
  unsigned __int64 *v38; // rcx
  KIRQL v39; // dl
  unsigned __int8 *AllocatedReceiveFilterIndices; // r15
  unsigned int AllocatedReceiveFilterIndicesLength; // r8d
  __int64 v42; // rcx
  unsigned __int8 *v43; // rax
  int v44; // r10d
  __int64 v45; // rax
  _BYTE *v46; // r14
  __int64 v47; // r9
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // r10d
  __int64 v52; // r12
  unsigned int v53; // eax
  _DWORD *v54; // r15
  int v55; // eax
  KIRQL v56; // dl
  _LIST_ENTRY *v57; // rcx
  __int64 v58; // rdx
  _LIST_ENTRY *p_QueueLink; // rax
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *Flink; // rcx
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // rax
  KIRQL v63; // dl
  char v65; // [rsp+40h] [rbp-68h]
  KIRQL NewIrql[2]; // [rsp+42h] [rbp-66h] BYREF
  char v67[4]; // [rsp+44h] [rbp-64h]
  unsigned int v68; // [rsp+48h] [rbp-60h]
  unsigned int Size; // [rsp+4Ch] [rbp-5Ch]
  unsigned int Size_4; // [rsp+50h] [rbp-58h]
  void *Src; // [rsp+58h] [rbp-50h]
  _NDIS_OPEN_BLOCK *v72; // [rsp+60h] [rbp-48h]
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // [rsp+68h] [rbp-40h]
  char v74; // [rsp+B0h] [rbp+8h]

  v4 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v72 = 0LL;
  *(_DWORD *)v67 = 0;
  NewIrql[0] = 0;
  InformationBuffer = (unsigned int *)v4->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = 1;
  Src = InformationBuffer;
  v10 = 0LL;
  ReceiveQueueByQueueId = 0LL;
  v74 = 0;
  v65 = 0;
  v12 = 0LL;
  VPortByVPortId = 0LL;
  v68 = 0;
  v13 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InformationBuffer) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InformationBuffer,
      25,
      20,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a2);
    v13 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
    InformationBuffer = (unsigned int *)Src;
  }
  v14 = *((_BYTE *)InformationBuffer + 1) < 2u;
  if ( *((_BYTE *)InformationBuffer + 1) >= 2u )
    v68 = InformationBuffer[10];
  *((_DWORD *)a1 + 10) = -1073741637;
  v13->DATA.METHOD_INFORMATION.BytesRead = v14 ? 36 : 44;
  Size_4 = v14 ? 36 : 44;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  if ( !(unsigned __int8)ndisReferenceMiniport(a2, 0x46u) )
  {
    *((_DWORD *)a1 + 10) = -1073676286;
    v16 = 0;
    v17 = 0;
LABEL_20:
    v20 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v4);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v72 = OidSourceHandle;
    if ( !(unsigned __int8)ndisReferenceOpenByHandle(OidSourceHandle, 0xBu) )
    {
      *((_DWORD *)a1 + 10) = -1073676286;
      v16 = 0;
LABEL_19:
      v17 = 1;
      goto LABEL_20;
    }
    v74 = 1;
  }
  if ( a2->PFBlock && (ndisIovNicSwitchWithoutIovSupported(a3) || a4 && (a4->SriovCapabilities & 3) == 3) )
  {
    v19 = (unsigned int *)Src;
    if ( *((_DWORD *)Src + 3) )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(a2, v68);
    v12 = VPortByVPortId;
    if ( !VPortByVPortId || v68 && VPortByVPortId->Open != v72 )
      goto LABEL_17;
  }
  else
  {
    if ( v68 )
    {
LABEL_17:
      *((_DWORD *)a1 + 10) = -1073741811;
LABEL_18:
      v16 = v74;
      goto LABEL_19;
    }
    v19 = (unsigned int *)Src;
  }
  v21 = v19[6];
  v22 = -1;
  v23 = v19[7];
  v24 = -1;
  v25 = v21 * v23;
  if ( v25 <= 0xFFFFFFFF )
    v24 = v25;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v25 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v24 < 0xFFFFFF48 )
    v22 = v24 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v24 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  Pool2 = ExAllocatePool2(64LL, v22, 1718764622LL);
  v10 = (struct _NDIS_RECEIVE_FILTER_BLOCK *)Pool2;
  if ( !Pool2 )
    goto LABEL_18;
  *(_DWORD *)(Pool2 + 48) = 0;
  v27 = Src;
  v28 = Size_4;
  v29 = Src;
  *(_DWORD *)(Pool2 + 80) = 1;
  *(_QWORD *)(Pool2 + 56) = a2;
  *(_QWORD *)(Pool2 + 64) = v72;
  memmove((void *)(Pool2 + 132), v29, v28);
  v30 = (unsigned int)(v27[7] * v27[6]);
  v31 = (char *)v27 + (unsigned int)v27[5];
  v10->FilterParameters.FieldParametersArrayOffset = 184;
  memmove(&v10[1], v31, v30);
  v10->VPortBlock = v12;
  v10->VPortLink.Blink = &v10->VPortLink;
  v10->VPortLink.Flink = &v10->VPortLink;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v34 = v27[3];
  if ( v34 )
    ReceiveQueueByQueueId = (char *)ndisFindReceiveQueueByQueueId(a2, v34, v32, v33);
  else
    ReceiveQueueByQueueId = (char *)a2->DefaultReceiveQueue;
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v65 = 1;
  }
  v35 = NewIrql[0];
  p_Lock = &a2->Lock;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v35);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_49;
  if ( v27[3] )
  {
    if ( v72 )
    {
      if ( v72 != *((_NDIS_OPEN_BLOCK **)ReceiveQueueByQueueId + 9) )
      {
LABEL_49:
        *((_DWORD *)a1 + 10) = -1073741811;
LABEL_50:
        v16 = v74;
        v17 = 1;
        v20 = v65;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_50;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v37 = a2->NumReceiveFilters + 1;
  v10->ReceiveQueue = (_NDIS_RECEIVE_QUEUE_BLOCK *)ReceiveQueueByQueueId;
  if ( v37 > 0x5555555 )
  {
    v38 = &a2->Lock;
LABEL_56:
    v39 = NewIrql[0];
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(v38, v39);
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_50;
  }
  AllocatedReceiveFilterIndices = a2->AllocatedReceiveFilterIndices;
  AllocatedReceiveFilterIndicesLength = a2->AllocatedReceiveFilterIndicesLength;
  Size = AllocatedReceiveFilterIndicesLength;
  if ( AllocatedReceiveFilterIndices && (v42 = 0LL, AllocatedReceiveFilterIndicesLength) )
  {
    v43 = AllocatedReceiveFilterIndices;
    v44 = 0;
    while ( *v43 == 0xFF )
    {
      v44 += 8;
      v42 = (unsigned int)(v42 + 1);
      ++v43;
      *(_DWORD *)v67 = v44;
      if ( (unsigned int)v42 >= AllocatedReceiveFilterIndicesLength )
        goto LABEL_64;
    }
    v47 = (unsigned int)v42;
    v48 = 1;
    v49 = AllocatedReceiveFilterIndices[v42];
    v50 = 0;
    while ( (v49 & v48) != 0 )
    {
      v48 *= 2;
      if ( (unsigned int)++v50 >= 8 )
        goto LABEL_64;
    }
    v51 = v50 + v44;
    AllocatedReceiveFilterIndices[v47] = v49 | v48;
    *(_DWORD *)v67 = v51;
  }
  else
  {
LABEL_64:
    v45 = ExAllocatePool2(66LL, AllocatedReceiveFilterIndicesLength + 64, 1970357326LL);
    v46 = (_BYTE *)v45;
    if ( !v45 )
    {
      v38 = &a2->Lock;
      goto LABEL_56;
    }
    v52 = Size;
    memset((void *)(Size + v45), 0, 0x40uLL);
    if ( AllocatedReceiveFilterIndices )
    {
      memmove(v46, AllocatedReceiveFilterIndices, (unsigned int)v52);
      v46[v52] = 1;
      ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
      v51 = *(_DWORD *)v67;
    }
    else
    {
      *v46 = 3;
      v51 = 1;
      *(_DWORD *)v67 = 1;
    }
    v12 = VPortByVPortId;
    v53 = Size + 64;
    a2->AllocatedReceiveFilterIndices = v46;
    p_Lock = &a2->Lock;
    a2->AllocatedReceiveFilterIndicesLength = v53;
  }
  v54 = Src;
  v10->FilterParameters.FilterId = v51;
  v10->FilterId = v51;
  v54[4] = v51;
  v55 = ndisAddReceiveFilterToList(a2, v10);
  v17 = 0;
  *((_DWORD *)a1 + 10) = v55;
  if ( v55 )
  {
    v56 = NewIrql[0];
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v56);
    goto LABEL_50;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v57 = (_LIST_ENTRY *)(ReceiveQueueByQueueId + 32);
  v58 = *((_QWORD *)ReceiveQueueByQueueId + 4);
  p_QueueLink = &v10->QueueLink;
  if ( *(char **)(v58 + 8) != ReceiveQueueByQueueId + 32 )
    goto LABEL_84;
  p_QueueLink->Flink = (_LIST_ENTRY *)v58;
  v10->QueueLink.Blink = v57;
  *(_QWORD *)(v58 + 8) = p_QueueLink;
  v57->Flink = p_QueueLink;
  if ( v12 )
  {
    ++v12->NumFilters;
    p_FilterList = &v12->FilterList;
    Flink = v12->FilterList.Flink;
    if ( Flink->Blink == &v12->FilterList )
    {
      v10->VPortLink.Blink = p_FilterList;
      v10->VPortLink.Flink = Flink;
      Flink->Blink = &v10->VPortLink;
      p_FilterList->Flink = &v10->VPortLink;
      NicSwitch = v12->NicSwitch;
      if ( v68 )
        ++*((_DWORD *)NicSwitch + 164);
      else
        ++*((_DWORD *)NicSwitch + 163);
      goto LABEL_83;
    }
LABEL_84:
    __fastfail(3u);
  }
LABEL_83:
  v63 = NewIrql[0];
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v63);
  v20 = 0;
  v16 = 0;
  v9 = 0;
LABEL_21:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v20 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v16 )
      ndisMDereferenceOpenUnlocked((__int64)v72, 0xBu);
    if ( v17 )
      ndisDereferenceMiniport(a2, 0x46u);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = Size_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      0x19u,
      0x15u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a2,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v67);
  return v9;
}
