/*
 * XREFs of ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540
 * Callers:
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140059320 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140059470 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisMIndicateStatus @ 0x140099D40 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400B0D88 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000EB80 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F9B0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140016A10 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qLq @ 0x140026A00 (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140055260 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059CB0 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005B600 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x140063730 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14006ADB0 (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     WPP_RECORDER_SF_qdq @ 0x14006CF10 (WPP_RECORDER_SF_qdq_ea_14006CF10.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007E5A0 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     WPP_RECORDER_SF_qLLL @ 0x14007EBF0 (WPP_RECORDER_SF_qLLL.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081E60 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140082750 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1400A5ABC (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1400A5B84 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1400A5F28 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B0050 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int StatusCode; // esi
  bool v3; // r13
  struct _NDIS_STATUS_INDICATION *v4; // r14
  KIRQL v6; // r12
  bool v7; // r15
  int *v8; // r11
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  unsigned int Flags; // ebx
  struct _NDIS_QOS_PARAMETERS *v13; // rdx
  _NET_IF_MEDIA_CONNECT_STATE v14; // ecx
  bool v15; // zf
  bool v16; // cf
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  char v21; // dl
  unsigned int v22; // esi
  void *v23; // rbx
  unsigned int PortNumber; // r15d
  int v25; // r14d
  struct _GUID *v26; // r10
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int64 Pool2; // rax
  void (__fastcall *v29)(void *); // rbx
  int v30; // r14d
  struct _WORK_QUEUE_ITEM *v31; // rsi
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _BYTE *v33; // rdx
  int v34; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  size_t v36; // r8
  int v37; // r14d
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rbx
  __int64 v39; // r8
  struct _NDIS_MINIPORT_BLOCK *v40; // rax
  struct _NDIS_MINIPORT_BLOCK *v41; // rsi
  char v42; // al
  char v43; // r14
  int v44; // r12d
  int v45; // esi
  size_t Size; // r14
  KIRQL v47; // r15
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v49; // rcx
  unsigned int v50; // eax
  struct _NDIS_QOS_PARAMETERS *v51; // r13
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_BLOCK *v53; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rsi
  __int64 v55; // rcx
  unsigned __int16 v56; // ax
  char v57; // bl
  unsigned int v58; // eax
  __int64 v59; // rcx
  size_t v60; // rsi
  struct _NDIS_IF_BLOCK *v61; // r14
  _QWORD *v62; // rax
  _QWORD *v63; // r15
  KIRQL v64; // bl
  KIRQL v65; // bl
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rsi
  struct _NDIS_STATUS_INDICATION *v68; // rsi
  unsigned int v69; // edx
  unsigned __int16 *StatusBuffer; // rax
  unsigned int v71; // ecx
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  int v74; // ecx
  __int64 v75; // xmm1_8
  int v76; // eax
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rdx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v79; // rax
  int v80; // eax
  __int64 v81; // r9
  struct _NDIS_QOS_PARAMETERS *v82; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  struct _NDIS_STATUS_INDICATION *v84; // rcx
  unsigned int PnPFlags; // eax
  __int64 v86; // [rsp+20h] [rbp-E0h]
  enum _NDIS_MP_REFTAG v87[8]; // [rsp+28h] [rbp-D8h]
  __int64 v88; // [rsp+30h] [rbp-D0h]
  __int64 v89; // [rsp+38h] [rbp-C8h]
  bool v90; // [rsp+50h] [rbp-B0h]
  char v91; // [rsp+51h] [rbp-AFh]
  char v92; // [rsp+52h] [rbp-AEh]
  unsigned int StatusBufferSize; // [rsp+54h] [rbp-ACh]
  struct _NDIS_QOS_PARAMETERS *Src; // [rsp+58h] [rbp-A8h]
  char v95; // [rsp+60h] [rbp-A0h]
  bool v96; // [rsp+61h] [rbp-9Fh]
  unsigned __int8 v97; // [rsp+62h] [rbp-9Eh] BYREF
  char v98; // [rsp+63h] [rbp-9Dh]
  char v99; // [rsp+64h] [rbp-9Ch]
  char v100; // [rsp+65h] [rbp-9Bh]
  struct _NDIS_STATUS_INDICATION *v101; // [rsp+68h] [rbp-98h]
  char v102[4]; // [rsp+70h] [rbp-90h]
  char v103[8]; // [rsp+78h] [rbp-88h]
  int v104; // [rsp+80h] [rbp-80h]
  _OWORD v105[4]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *DestinationHandle; // [rsp+C8h] [rbp-38h]
  struct _NDIS_STATUS_INDICATION v107; // [rsp+D0h] [rbp-30h] BYREF
  struct _NDIS_STATUS_INDICATION v108; // [rsp+140h] [rbp+40h] BYREF
  __int64 v109; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+1B8h] [rbp+B8h]
  __int128 v111; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v112; // [rsp+1D0h] [rbp+D0h]
  __int64 v113; // [rsp+1E0h] [rbp+E0h]

  StatusCode = a2->StatusCode;
  v3 = 0;
  Src = (struct _NDIS_QOS_PARAMETERS *)a2->StatusBuffer;
  v4 = a2;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = 2;
  DestinationHandle = a2->DestinationHandle;
  *(_QWORD *)v103 = DestinationHandle;
  v95 = 0;
  v109 = 0LL;
  v7 = 0;
  ifOperStatusFlags = 0;
  v90 = 0;
  v98 = 0;
  v99 = 0;
  v113 = 0LL;
  v96 = 0;
  v97 = 0;
  v101 = a2;
  v104 = StatusCode;
  *(_DWORD *)v102 = 0;
  v92 = 0;
  memset(&v107, 0, sizeof(v107));
  v100 = 0;
  v91 = 0;
  memset(&v108, 0, sizeof(v108));
  v111 = 0LL;
  v112 = 0LL;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x18u,
      0x38u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      StatusCode,
      DestinationHandle);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( DestinationHandle == (_BYTE *)&ndisIntReqWmi )
    goto LABEL_8;
  if ( DestinationHandle && *DestinationHandle != 18 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        24,
        57,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1);
      v8 = &WPP_RECORDER_INITIALIZED;
    }
LABEL_8:
    *(_QWORD *)v103 = 0LL;
  }
  v9 = *(_OWORD *)&v4->PortNumber;
  *(_OWORD *)&v107.Header.Type = *(_OWORD *)&v4->Header.Type;
  *(_OWORD *)&v107.PortNumber = v9;
  v10 = *(_OWORD *)&v4->StatusBuffer;
  *(_OWORD *)&v107.DestinationHandle = *(_OWORD *)&v4->DestinationHandle;
  *(_OWORD *)&v107.StatusBuffer = v10;
  v11 = *(_OWORD *)v4->NdisReserved;
  *(_OWORD *)&v107.Guid.Data2 = *(_OWORD *)&v4->Guid.Data2;
  *(_OWORD *)v107.NdisReserved = v11;
  *(_OWORD *)&v107.NdisReserved[2] = *(_OWORD *)&v4->NdisReserved[2];
  if ( (unsigned int)(StatusCode - 1073807371) <= 1 )
    return;
  if ( StatusCode == 1073807383 )
  {
    Flags = v4->Flags;
    a1->LinkStateIndicationFlags |= 7u;
    v13 = Src;
    v3 = (Flags & 8) != 0;
    if ( !Src || StatusBufferSize < 0x28 )
      goto LABEL_91;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = Src->Flags;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x18u,
        0x3Au,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1,
        v88);
      v13 = Src;
    }
    if ( StatusBufferSize == -2 )
    {
      StatusBufferSize = 40;
      v4->StatusBufferSize = 40;
    }
    v14 = v13->Flags;
    if ( v14 == MediaConnectStateConnected )
    {
      v15 = a1->MediaConnectState == MediaConnectStateConnected;
      *(_DWORD *)v102 = 1073807371;
      v90 = v15;
      v7 = !v15;
    }
    else if ( v14 == MediaConnectStateDisconnected )
    {
      v15 = a1->MediaConnectState == MediaConnectStateConnected;
      *(_DWORD *)v102 = 1073807372;
      v90 = !v15;
      v7 = v15;
    }
    else
    {
      v90 = 1;
    }
    v16 = a1->MajorNdisVersion < 6u;
    a1->MediaConnectState = v14;
    a1->MediaDuplexState = v13->NumTrafficClasses;
    a1->RcvLinkSpeed = *(_QWORD *)&v13->TcBandwidthAssignmentTable[4];
    a1->XmitLinkSpeed = *(_QWORD *)&v13->PriorityAssignmentTable[4];
    a1->PauseFunctions = *(_DWORD *)&v13->TsaAssignmentTable[4];
    if ( v16 )
    {
      MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
      if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *(_QWORD *)&v13->PriorityAssignmentTable[4] )
        a1->MaxXmitLinkSpeed = *(_QWORD *)&v13->PriorityAssignmentTable[4];
      MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
      if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *(_QWORD *)&v13->TcBandwidthAssignmentTable[4] )
        a1->MaxRcvLinkSpeed = *(_QWORD *)&v13->TcBandwidthAssignmentTable[4];
      v19 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
      if ( v19 == 0x40000000 || v19 < *(_QWORD *)&v13->PriorityAssignmentTable[4] )
        a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)&v13->PriorityAssignmentTable[4];
      v20 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
      if ( v20 == 0x40000000 || v20 < *(_QWORD *)&v13->TcBandwidthAssignmentTable[4] )
        a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)&v13->TcBandwidthAssignmentTable[4];
    }
    a1->AutoNegotiationFlags = v13->PfcEnable;
    v21 = ndisIfSetInterfaceState(a1, 1, 2u);
    v91 = v21;
    goto LABEL_78;
  }
  if ( StatusCode != 1073807394 )
  {
    if ( StatusCode == 1073807379 )
    {
      a1->LinkStateIndicationFlags |= 2u;
      Pool2 = ExAllocatePool2(64LL, 252LL, 1903313998);
      v29 = (void (__fastcall *)(void *))Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)Pool2 = 16253334LL;
        *(_DWORD *)(Pool2 + 32) = 65799;
        *(_DWORD *)(Pool2 + 48) = 4;
        *(_QWORD *)(Pool2 + 40) = Pool2 + 248;
        *(_QWORD *)(Pool2 + 104) = &ndisIntReqGeneric;
        *(_DWORD *)(Pool2 + 88) |= 2u;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, 2u);
        v30 = -1073741823;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x18u,
            (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
            (char)a1,
            v29);
        v31 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
        if ( v31 )
        {
          if ( (unsigned __int8)ndisReferenceMiniport(a1, 0x4Au) )
          {
            RtlGetCallersAddress((PVOID *)&v31[1].List.Flink, (PVOID *)&v31[1].List.Blink);
            v31[1].WorkerRoutine = v29;
            v31->WorkerRoutine = ndisProcessRequestAsync;
            v31[1].Parameter = a1;
            v31->Parameter = v31;
            v31->List.Flink = 0LL;
            ExQueueWorkItem(v31, (WORK_QUEUE_TYPE)40);
            v30 = 259;
          }
          else
          {
            ExFreePoolWithTag(v31, 0);
          }
        }
        else
        {
          v30 = -1073741670;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v89) = v30;
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x19u,
            (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
            (char)a1,
            (char)v29,
            v89);
        }
        v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        if ( v30 != 259 )
          ExFreePoolWithTag(v29, 0);
      }
      v100 = 1;
LABEL_91:
      v37 = 0;
      a1->MiniportThread = 0LL;
      BaseMiniport = a1;
      KeReleaseSpinLock(&a1->Lock, v6);
      v40 = ndisReferenceTopMiniportByNameForNsi(
              a1,
              0x200000,
              v39,
              a1->MiniportMediaType == NdisMediumNative802_11,
              NSIREF_STATUS,
              MPREF_SI_NSI);
      v41 = v40;
      if ( !v40 )
        goto LABEL_98;
      if ( v40 == a1 )
      {
        v42 = ndisReferenceMiniportByHandle(a1->BaseMiniport, 0, 0x38u);
        if ( v42 )
          BaseMiniport = a1->BaseMiniport;
        v96 = v42 != 0;
      }
      else
      {
        v37 = -1073741823;
      }
      ndisDereferenceMiniportForNsi(v41, 1u, 0x39u);
      if ( !v37 )
      {
        v43 = v95;
      }
      else
      {
LABEL_98:
        v7 = 0;
        v43 = 0;
      }
      v44 = v104;
      ndisWriteWmiStatusIndication(
        BaseMiniport,
        BaseMiniport->pAdapterInstanceName,
        v101,
        v104,
        (int *)Src,
        StatusBufferSize);
      v45 = *(_DWORD *)v102;
      if ( v7 )
        ndisWriteWmiStatusIndication(
          BaseMiniport,
          BaseMiniport->pAdapterInstanceName,
          v101,
          *(unsigned int *)v102,
          0LL,
          0);
      v15 = v43 == 0;
      Size = 12LL;
      if ( !v15 )
        ndisWriteWmiStatusIndication(
          BaseMiniport,
          BaseMiniport->pAdapterInstanceName,
          v101,
          0x40010023u,
          (int *)&v109,
          0xCu);
      v47 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      CurrentThread = KeGetCurrentThread();
      a1->MiniportThread = CurrentThread;
      if ( v96 )
        ndisDereferenceMiniport(BaseMiniport, 0x38u);
      if ( v44 == 1073807383 )
        v44 = v45;
      if ( v44 == 1073807384 )
      {
        if ( (v101->Flags & 4) != 0 )
        {
          v44 -= 13;
LABEL_111:
          ++a1->MediaSenseConnectCount;
          v49 = a1->Flags;
          if ( (v49 & 0x20000000) == 0 )
          {
            v92 = 1;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qLLL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)CurrentThread,
                0x18u,
                0x3Eu,
                (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                (char)a1,
                v49,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
              v49 = a1->Flags;
            }
            if ( byte_140125104 < 0 )
              McTemplateK0jqxddq_EtwWriteTransfer(
                v49,
                &MiniportStatusIndicationConnect,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                v49,
                a1->PnPFlags,
                a1->CurrentDevicePowerState);
          }
          v50 = a1->Flags | 0x20000000;
          a1->MediaConnectState = MediaConnectStateConnected;
          a1->Flags = v50;
          if ( !v3 )
          {
            a1->Flags = v50 | 0x4000000;
            ndisCancelMediaDisconnectTimer(a1);
          }
          goto LABEL_118;
        }
LABEL_129:
        switch ( v44 )
        {
          case 1073807371:
            goto LABEL_111;
          case 1073807372:
            v55 = a1->Flags;
            v56 = a1->MediaSenseDisconnectCount + 1;
            a1->MediaSenseDisconnectCount = v56;
            if ( (v55 & 0x20000000) != 0 || v56 == 1 )
            {
              v57 = 1;
              v92 = 1;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_qLLL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)CurrentThread,
                  0x18u,
                  0x3Du,
                  (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                  (char)a1,
                  v55,
                  a1->PnPFlags,
                  a1->CurrentDevicePowerState);
                v55 = a1->Flags;
              }
              if ( byte_140125104 < 0 )
                McTemplateK0jqxddq_EtwWriteTransfer(
                  v55,
                  &MiniportStatusIndicationDisconnect,
                  &a1->InterfaceGuid,
                  (__int64)&a1->InterfaceGuid,
                  a1->IfIndex,
                  a1->NetLuid.Value,
                  v55,
                  a1->PnPFlags,
                  a1->CurrentDevicePowerState);
            }
            else
            {
              v57 = 0;
            }
            v58 = a1->Flags & 0xDFFFFFFF;
            a1->MediaConnectState = MediaConnectStateDisconnected;
            a1->Flags = v58;
            if ( !v3 )
            {
              a1->Flags = v58 | 0x4000000;
              if ( v57 )
                ndisSetMediaDisconnectTimer(a1);
            }
            break;
          case 1073807384:
            v90 = 1;
            if ( StatusBufferSize >= 4 )
            {
              v51 = Src;
              if ( (byte_140125105 & 1) != 0 )
              {
                LODWORD(v88) = Src->Header;
                LODWORD(v86) = a1->IfIndex;
                McTemplateK0jqxd_EtwWriteTransfer(
                  (unsigned int)(v44 - 1073807372),
                  &MiniportStatusIndicationNetworkChange,
                  &a1->InterfaceGuid,
                  (__int64)&a1->InterfaceGuid,
                  v86,
                  a1->NetLuid.Value,
                  v88);
              }
              goto LABEL_119;
            }
            break;
        }
LABEL_118:
        v51 = Src;
        goto LABEL_119;
      }
      if ( v44 > 1073872960 )
      {
        if ( v44 == 1073872978 )
        {
          if ( StatusBufferSize < 0xC )
            goto LABEL_118;
          v51 = Src;
          if ( Src->Header.Type == 0x80 && Src->Header.Size >= 0xCu )
          {
            if ( Src->Header.Revision )
            {
              TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
              if ( TopSriovCurrentCapabilities
                || (TopSriovCurrentCapabilities = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742),
                    (a1->TopSriovCurrentCapabilities = TopSriovCurrentCapabilities) != 0LL) )
              {
                if ( Src->Header.Size < 0xCu )
                  Size = Src->Header.Size;
                memmove(TopSriovCurrentCapabilities, Src, Size);
              }
            }
          }
        }
        else
        {
          if ( v44 == 1073873056 || v44 == 1073873057 )
          {
            v51 = Src;
            ndisMIndicateQosParametersChange(a1, v44, Src, StatusBufferSize);
            goto LABEL_119;
          }
          if ( (unsigned int)(v44 - 1074073600) > 1 )
            goto LABEL_118;
          v51 = Src;
          ndisMIndicateHwTimestampCapabilitiesChange(
            a1,
            v44,
            (unsigned __int16 *)&Src->Header.Type,
            StatusBufferSize,
            1,
            &v97);
          if ( v44 == 1074073601 )
          {
            if ( v97 )
            {
              v61 = ndisMReferenceIfBlock(a1, 0x1Au);
              if ( v61 )
              {
                a1->MiniportThread = 0LL;
                KeReleaseSpinLock(&a1->Lock, v47);
                v62 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1769423950);
                v63 = v62;
                if ( v62 )
                {
                  *v62 = v61;
                  v62[1] = ndisNsiQueuedTimestampingChangeNotification;
                  v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v61->RefCountTracker, 0xAu);
                  ++v61->Ref;
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v64);
                  v63[5] = v63;
                  v63[4] = ndisWorkItemHandler;
                  v63[2] = 0LL;
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(v63 + 2), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
                }
                KeAcquireSpinLockRaiseToDpc(&a1->Lock);
                a1->MiniportThread = KeGetCurrentThread();
                v65 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                IFBLOCK_DEREFERENCE_MINIPORT_LINK(a1->IfBlock, 0x1Au);
                KeReleaseSpinLock(&SpinLock, v65);
              }
            }
          }
        }
      }
      else
      {
        if ( v44 == 1073872960 )
        {
          v51 = Src;
          ndisMIndicateNicSwitchCapsChange(a1, 1073872960, Src, StatusBufferSize, 1u);
          goto LABEL_119;
        }
        if ( v44 > 1073807395 )
        {
          v51 = Src;
          if ( v44 == 1073872902 )
          {
            v98 = 1;
            if ( StatusBufferSize >= 0x70
              && Src->Header.Type == 0xA7
              && Src->Header.Size >= 0x70u
              && Src->Header.Revision )
            {
              a1->Offload->SupportsTopOffload = 1;
              ndisMergeOffloadCapsAndRegistry(a1, (struct _NDIS_OFFLOAD *)Src);
              v60 = 220LL;
              memset(&a1->Offload->TopCapabilities, 0, sizeof(a1->Offload->TopCapabilities));
              if ( Src->Header.Size < 0xDCu )
                v60 = Src->Header.Size;
              memmove(&a1->Offload->TopCapabilities, Src, v60);
            }
          }
          else if ( v44 == 1073872912 )
          {
            ndisMIndicateReceiveFilterCapsChange(a1, 1073872912, Src, StatusBufferSize, 1u);
          }
        }
        else
        {
          if ( v44 != 1073807395 )
            goto LABEL_129;
          v90 = 1;
          if ( StatusBufferSize < 0xC )
            goto LABEL_118;
          v51 = Src;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v89) = Src->NumTrafficClasses;
            WPP_RECORDER_SF_qLL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)CurrentThread,
              0x18u,
              0x3Fu,
              (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
              (char)a1,
              Src->Flags,
              v89);
          }
          v59 = Src->Flags;
          if ( (_DWORD)v59 == 1 )
          {
            if ( (byte_140125105 & 1) != 0 )
            {
              LODWORD(v89) = Src->NumTrafficClasses;
              LODWORD(v88) = 1;
              LODWORD(v86) = a1->IfIndex;
              McTemplateK0jqxqq_EtwWriteTransfer(
                v59,
                &MiniportStatusIndicationOperStatusUp,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                v86,
                a1->NetLuid.Value,
                v88,
                v89);
            }
          }
          else if ( (byte_140125105 & 1) != 0 )
          {
            LODWORD(v89) = Src->NumTrafficClasses;
            LODWORD(v88) = Src->Flags;
            LODWORD(v86) = a1->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v59,
              &MiniportStatusIndicationOperStatusNotUp,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              v86,
              a1->NetLuid.Value,
              v88,
              v89);
          }
        }
      }
LABEL_119:
      if ( DestinationHandle != (_BYTE *)&ndisIntReqWmi )
      {
        OpenQueue = a1->OpenQueue;
        if ( OpenQueue )
        {
          v53 = *(_NDIS_OPEN_BLOCK **)v103;
          while ( v53 && v53 != OpenQueue )
          {
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_233:
            OpenQueue = MiniportNextOpen;
            if ( !MiniportNextOpen )
              goto LABEL_234;
          }
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
            goto LABEL_186;
          if ( v98 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
          {
            if ( !v99 )
            {
              StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
              if ( StatusUnbindWorkItem )
              {
                ndisReferenceMiniportNoCheck(a1, 0x36u);
                v99 = 1;
                OpenQueue->StatusUnbindWorkItem = 0LL;
                *(_QWORD *)StatusUnbindWorkItem->WorkItem.WrapperReserved = 0LL;
                *(_QWORD *)&StatusUnbindWorkItem->WorkItem.WrapperReserved[16] = ndisWorkItemHandler;
                *(_QWORD *)&StatusUnbindWorkItem->WorkItem.WrapperReserved[24] = StatusUnbindWorkItem;
                ExQueueWorkItem(
                  (PWORK_QUEUE_ITEM)StatusUnbindWorkItem->WorkItem.WrapperReserved,
                  CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
              }
            }
            goto LABEL_186;
          }
          v68 = v101;
          switch ( v44 )
          {
            case 1073938515:
              v69 = v101->StatusBufferSize;
              StatusBuffer = (unsigned __int16 *)v101->StatusBuffer;
              memset(v105, 0, 60);
              if ( v69 >= 0x34 )
              {
                v71 = StatusBuffer[1];
                if ( v69 >= v71 )
                {
                  v72 = *((_OWORD *)StatusBuffer + 1);
                  v105[0] = *(_OWORD *)StatusBuffer;
                  v73 = *((_OWORD *)StatusBuffer + 2);
                  v105[1] = v72;
                  v105[2] = v73;
                  if ( v71 >= 0x3C )
                  {
                    v75 = *((_QWORD *)StatusBuffer + 6);
                    v76 = *((_DWORD *)StatusBuffer + 14);
                    *(_QWORD *)&v105[3] = v75;
                    v74 = v75;
                    DWORD2(v105[3]) = v76;
                  }
                  else
                  {
                    v74 = *((_DWORD *)StatusBuffer + 12);
                    LODWORD(v105[3]) = v74;
                  }
                  OpenQueue->PMCurrentParameters.EnabledWoLPacketPatterns &= DWORD2(v105[0]);
                  OpenQueue->PMCurrentParameters.EnabledProtocolOffloads &= HIDWORD(v105[1]);
                  if ( (unsigned int)(v74 - 2) > 2 )
                    OpenQueue->PMCurrentParameters.WakeUpFlags &= ~1u;
                }
              }
              goto LABEL_213;
            case 1073938513:
              if ( v101->StatusBufferSize >= 4 )
              {
                p_WOLPatternList = &OpenQueue->WOLPatternList;
                Next = OpenQueue->WOLPatternList.Next;
                if ( Next )
                {
                  while ( 1 )
                  {
                    v79 = Next->Next;
                    if ( LODWORD(Next[5].Next) == *(_DWORD *)v101->StatusBuffer )
                      break;
                    p_WOLPatternList = Next;
                    Next = Next->Next;
                    if ( !v79 )
                      goto LABEL_186;
                  }
LABEL_212:
                  p_WOLPatternList->Next = v79;
                  ExFreePoolWithTag(Next, 0);
                  --LODWORD(v68->NdisReserved[2]);
                  goto LABEL_213;
                }
              }
              break;
            case 1073938514:
              if ( v101->StatusBufferSize >= 4 )
              {
                p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
                Next = OpenQueue->PMProtocolOffloadList.Next;
                if ( Next )
                {
                  while ( 1 )
                  {
                    v79 = Next->Next;
                    if ( LODWORD(Next[5].Next) == *(_DWORD *)v101->StatusBuffer )
                      goto LABEL_212;
                    p_WOLPatternList = Next;
                    Next = Next->Next;
                    if ( !v79 )
                      goto LABEL_186;
                  }
                }
              }
              break;
            default:
LABEL_213:
              ndisMReferenceOpen((__int64)OpenQueue, 7u);
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
              if ( OpenQueue->StatusHandler )
              {
                KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                OpenQueue->OpenFlags |= 0x100u;
                KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
                a1->MiniportThread = 0LL;
                KeReleaseSpinLockFromDpcLevel(&a1->Lock);
                if ( OpenQueue->ProtocolHandle->MajorNdisVersion >= 6u )
                {
                  if ( !v100 )
                  {
                    ndisInvokeStatus(OpenQueue, v68);
                    if ( v68->StatusCode == 1073807384 && (v68->Flags & 4) != 0 )
                      ndisInvokeStatus(OpenQueue, &v107);
                    if ( v91 )
                      ndisInvokeStatus(OpenQueue, &v108);
                  }
                }
                else if ( !v90 && !v68->PortNumber )
                {
                  v80 = v68->StatusCode;
                  if ( v80 == 1073807383 || v80 == 1073807384 && (v68->Flags & 4) != 0 )
                  {
                    v81 = 0LL;
                    v82 = 0LL;
                  }
                  else
                  {
                    v81 = StatusBufferSize;
                    v82 = v51;
                  }
                  OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v44, v82, v81);
                  StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                  if ( StatusCompleteHandler )
                    StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                }
                KeAcquireSpinLockAtDpcLevel(&a1->Lock);
                a1->MiniportThread = KeGetCurrentThread();
                KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
                OpenQueue->OpenFlags &= ~0x100u;
                KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
              }
              MiniportNextOpen = OpenQueue->MiniportNextOpen;
              ndisMDereferenceOpenLocked(OpenQueue, 7u);
              goto LABEL_232;
          }
LABEL_186:
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_232:
          v53 = *(_NDIS_OPEN_BLOCK **)v103;
          goto LABEL_233;
        }
LABEL_234:
        if ( v44 == 1073938516 )
          ndisUpdateAndIndicatePMCapabilities(a1);
        v84 = v101;
        if ( !v92 || (v101->Flags & 2) != 0 )
          goto LABEL_242;
        PnPFlags = a1->PnPFlags;
        if ( v44 == 1073807371 )
        {
          a1->PnPFlags = PnPFlags & 0xEFFFFFFF;
          ndisMRestoreOpenHandlers(a1, 2u);
          a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
          a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
        }
        else
        {
          a1->PnPFlags = PnPFlags | 0x10000000;
          ndisMSwapOpenHandlers(a1, 2u);
          a1->ReceivePathEnabled = 0;
          a1->PacketIndicateHandler = ndisMDummyIndicatePacket;
        }
      }
      v84 = v101;
LABEL_242:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qdq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)CurrentThread,
          0x18u,
          0x40u,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1,
          v44,
          v84->DestinationHandle);
      return;
    }
    if ( ((StatusCode - 1073872897) & 0xFFFFFFFD) != 0 )
      goto LABEL_75;
    Offload = a1->Offload;
    v33 = v4->StatusBuffer;
    if ( Offload )
    {
      v34 = v4->StatusCode;
      if ( v34 == 1073872897 )
      {
        Offload->TopConnectionOffloadPaused = 1;
LABEL_75:
        if ( StatusCode != 1073807384 || (v4->Flags & 4) == 0 )
          goto LABEL_91;
        v7 = 1;
        *(_DWORD *)v102 = 1073807371;
        a1->MediaConnectState = MediaConnectStateConnected;
        v107.Flags |= 0x1000u;
        v21 = ndisIfSetInterfaceState(a1, 1, 2u);
        v91 = v21;
        *((_QWORD *)&v111 + 1) = (unsigned int)a1->MiniportMediaDuplexState;
        v112 = *(_OWORD *)&a1->MiniportXmitLinkSpeed;
        v113 = *(_QWORD *)&a1->MiniportPauseFunctions;
        v107.StatusBuffer = &v111;
        *(_QWORD *)&v111 = 0x100280180LL;
        v107.StatusCode = 1073807383;
        v107.StatusBufferSize = 40;
LABEL_78:
        if ( v21 )
        {
          IfBlock = a1->IfBlock;
          LODWORD(v109) = 786816;
          v95 = 1;
          HIDWORD(v109) = IfBlock->ifOperStatus;
          ifOperStatusFlags = IfBlock->ifOperStatusFlags;
          v108.StatusBuffer = &v109;
          v108.Header = (_NDIS_OBJECT_HEADER)7340440;
          v108.SourceHandle = a1;
          v108.StatusCode = 1073807395;
          v108.StatusBufferSize = 12;
        }
        goto LABEL_91;
      }
      if ( v34 == 1073872899 && v4->StatusBufferSize >= 0x14 && *v33 == 0x80 && *((_WORD *)v33 + 1) >= 0x14u && v33[1] )
      {
        Offload->TopConnectionOffloadPaused = 0;
        v36 = *((unsigned __int16 *)v33 + 1);
        if ( *((unsigned __int16 *)v33 + 1) >= 0x14u )
          v36 = 20LL;
        memmove(&a1->Offload->TopTcpConnectionOffloadCapabilities, v33, v36);
        goto LABEL_75;
      }
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v87 = StatusCode;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x18u,
        0x3Cu,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        *(_QWORD *)v87);
    }
    return;
  }
  v22 = v4->StatusBufferSize;
  v23 = v4->StatusBuffer;
  PortNumber = v4->PortNumber;
  v25 = -1073741811;
  v26 = (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      42,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
    v26 = (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids;
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( v23 && v22 >= 0x30 && *((_BYTE *)v23 + 1) && *(_BYTE *)v23 == 0x80 && *((_WORD *)v23 + 1) >= 0x30u )
  {
    if ( PortNumber )
    {
      PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
      if ( PortByPortNumber && PortByPortNumber->PortPnPState == NdisPortPnPStateActivated )
      {
        v25 = 0;
        PortByPortNumber->PortCharacteristics.MediaConnectState = *((_DWORD *)v23 + 1);
        PortByPortNumber->PortCharacteristics.XmitLinkSpeed = *((_QWORD *)v23 + 1);
        PortByPortNumber->PortCharacteristics.RcvLinkSpeed = *((_QWORD *)v23 + 2);
        PortByPortNumber->PortCharacteristics.Direction = *((_DWORD *)v23 + 6);
        PortByPortNumber->PortCharacteristics.SendControlState = *((_DWORD *)v23 + 7);
        PortByPortNumber->PortCharacteristics.RcvControlState = *((_DWORD *)v23 + 8);
        PortByPortNumber->PortCharacteristics.SendAuthorizationState = *((_DWORD *)v23 + 9);
        PortByPortNumber->PortCharacteristics.RcvAuthorizationState = *((_DWORD *)v23 + 10);
      }
    }
    else
    {
      v25 = 0;
      if ( (a1->PnPFlags & 0x80u) != 0 )
      {
        a1->DefaultPortSendControlState = *((_DWORD *)v23 + 7);
        a1->DefaultPortRcvControlState = *((_DWORD *)v23 + 8);
        a1->DefaultPortSendAuthorizationState = *((_DWORD *)v23 + 9);
        a1->DefaultPortRcvAuthorizationState = *((_DWORD *)v23 + 10);
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != v8 )
  {
    LODWORD(v88) = v25;
    WPP_RECORDER_SF_qL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0x17u, 0x2Bu, v26, (char)a1, v88);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( !v25 )
  {
    if ( v101->PortNumber )
    {
      v7 = 0;
      goto LABEL_91;
    }
    v21 = ndisIfSetInterfaceState(a1, 1, 2u);
    v91 = v21;
    v7 = 0;
    goto LABEL_78;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != v8 )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x18u,
      0x3Bu,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      34,
      *(_QWORD *)v103);
}
