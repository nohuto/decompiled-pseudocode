/*
 * XREFs of ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032B30 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400347D0 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034920 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisMIndicateStatus @ 0x14009F960 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400A8C18 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F2F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x140013B40 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014E70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140033A10 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140034E10 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140036C80 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049980 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLq @ 0x140049F00 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140050530 (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     WPP_RECORDER_SF_qdq @ 0x1400512E0 (WPP_RECORDER_SF_qdq_ea_1400512E0.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qLLL @ 0x140062B30 (WPP_RECORDER_SF_qLLL.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140065D90 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140066D70 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007E200 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x14007F4D0 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009CCDC (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009CDA4 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009D148 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400A7EE0 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  void *StatusBuffer; // r15
  struct _NDIS_STATUS_INDICATION *v3; // rdi
  int StatusCode; // ebx
  KIRQL v6; // r12
  bool v7; // r13
  _UNKNOWN **v8; // r11
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  unsigned int Flags; // ebx
  bool v13; // bl
  unsigned int v14; // eax
  _NET_IF_MEDIA_CONNECT_STATE v15; // ecx
  bool v16; // zf
  bool v17; // cf
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  char v22; // dl
  unsigned int v23; // r14d
  void *v24; // rbx
  unsigned int PortNumber; // r15d
  int v26; // edi
  struct _GUID *v27; // r10
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int64 Pool2; // rax
  void (__fastcall *v30)(void *); // rbx
  int v31; // edx
  int v32; // r14d
  struct _WORK_QUEUE_ITEM *v33; // rdi
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _BYTE *v35; // rdx
  int v36; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  char v38; // r15
  _NDIS_MINIPORT_BLOCK *v39; // rdi
  __int64 v40; // r8
  struct _NDIS_MINIPORT_BLOCK *v41; // rax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdi
  KIRQL v43; // al
  struct _NDIS_M_DRIVER_BLOCK *v44; // r13
  char v45; // bl
  KIRQL v46; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r14
  KIRQL v48; // r12
  int v49; // ebx
  size_t v50; // r8
  KIRQL v51; // al
  char v52; // bl
  struct _NDIS_STATUS_INDICATION *v53; // r14
  int v54; // r12d
  size_t v55; // r15
  KIRQL v56; // al
  __int64 v57; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v59; // bl
  unsigned __int16 *v60; // r13
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_BLOCK *v62; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rdi
  __int64 v64; // rcx
  char v65; // bl
  __int64 v66; // rcx
  struct _NDIS_OFFLOAD *v67; // rdx
  size_t v68; // rdi
  struct _NDIS_IF_BLOCK *v69; // r14
  struct _NDIS_IF_BLOCK **v70; // rax
  struct _NDIS_IF_BLOCK **v71; // r15
  KIRQL v72; // bl
  KIRQL v73; // bl
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rdi
  struct _NDIS_STATUS_INDICATION *v76; // rdi
  unsigned int v77; // edx
  unsigned __int16 *v78; // rax
  unsigned int v79; // ecx
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  int v82; // ecx
  __int64 v83; // xmm1_8
  int v84; // eax
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rdx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v87; // rax
  int v88; // eax
  __int64 v89; // r9
  unsigned __int16 *v90; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  struct _NDIS_STATUS_INDICATION *v92; // rbx
  unsigned int PnPFlags; // eax
  __int64 v94; // [rsp+20h] [rbp-E0h]
  __int64 v95; // [rsp+30h] [rbp-D0h]
  __int64 v96; // [rsp+38h] [rbp-C8h]
  bool v97; // [rsp+50h] [rbp-B0h]
  bool v98; // [rsp+51h] [rbp-AFh]
  bool v99; // [rsp+52h] [rbp-AEh]
  char v100; // [rsp+53h] [rbp-ADh]
  char v101; // [rsp+54h] [rbp-ACh]
  unsigned int StatusBufferSize; // [rsp+58h] [rbp-A8h]
  char v103; // [rsp+5Ch] [rbp-A4h]
  unsigned __int8 v104; // [rsp+5Dh] [rbp-A3h] BYREF
  char v105; // [rsp+5Eh] [rbp-A2h]
  char v106; // [rsp+5Fh] [rbp-A1h]
  char v107; // [rsp+60h] [rbp-A0h]
  void *Src; // [rsp+68h] [rbp-98h]
  char v109[4]; // [rsp+70h] [rbp-90h]
  char v110[8]; // [rsp+78h] [rbp-88h]
  struct _NDIS_STATUS_INDICATION *v111; // [rsp+80h] [rbp-80h]
  int v112; // [rsp+88h] [rbp-78h]
  int v113; // [rsp+8Ch] [rbp-74h]
  _OWORD v114[4]; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v115; // [rsp+D0h] [rbp-30h]
  _BYTE *DestinationHandle; // [rsp+D8h] [rbp-28h]
  struct _NDIS_STATUS_INDICATION v117; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_STATUS_INDICATION v118; // [rsp+150h] [rbp+50h] BYREF
  __int64 v119; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+1C8h] [rbp+C8h]
  __int128 v121; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v122; // [rsp+1E0h] [rbp+E0h]
  __int64 v123; // [rsp+1F0h] [rbp+F0h]

  StatusBuffer = a2->StatusBuffer;
  v3 = a2;
  StatusCode = a2->StatusCode;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = 2;
  DestinationHandle = a2->DestinationHandle;
  *(_QWORD *)v110 = DestinationHandle;
  v103 = 0;
  v119 = 0LL;
  v7 = 0;
  ifOperStatusFlags = 0;
  v97 = 0;
  v105 = 0;
  v106 = 0;
  v98 = 0;
  v123 = 0LL;
  v104 = 0;
  v111 = a2;
  v113 = StatusCode;
  *(_DWORD *)v109 = 0;
  Src = StatusBuffer;
  v101 = 0;
  v99 = 0;
  memset(&v117, 0, sizeof(v117));
  v107 = 0;
  v100 = 0;
  memset(&v118, 0, sizeof(v118));
  v121 = 0LL;
  v122 = 0LL;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x18u,
      0x38u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      StatusCode,
      DestinationHandle);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( DestinationHandle == (_BYTE *)&ndisIntReqWmi )
    goto LABEL_8;
  if ( DestinationHandle && *DestinationHandle != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        24,
        57,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a1);
      v8 = &WPP_RECORDER_INITIALIZED;
    }
LABEL_8:
    *(_QWORD *)v110 = 0LL;
  }
  v9 = *(_OWORD *)&v3->PortNumber;
  *(_OWORD *)&v117.Header.Type = *(_OWORD *)&v3->Header.Type;
  *(_OWORD *)&v117.PortNumber = v9;
  v10 = *(_OWORD *)&v3->StatusBuffer;
  *(_OWORD *)&v117.DestinationHandle = *(_OWORD *)&v3->DestinationHandle;
  *(_OWORD *)&v117.StatusBuffer = v10;
  v11 = *(_OWORD *)v3->NdisReserved;
  *(_OWORD *)&v117.Guid.Data2 = *(_OWORD *)&v3->Guid.Data2;
  *(_OWORD *)v117.NdisReserved = v11;
  *(_OWORD *)&v117.NdisReserved[2] = *(_OWORD *)&v3->NdisReserved[2];
  if ( (unsigned int)(StatusCode - 1073807371) <= 1 )
    return;
  if ( StatusCode != 1073807383 )
  {
    if ( StatusCode == 1073807394 )
    {
      v23 = v3->StatusBufferSize;
      v24 = v3->StatusBuffer;
      PortNumber = v3->PortNumber;
      v26 = -1073741811;
      v27 = (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          23,
          42,
          (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
          (char)a1);
        v27 = (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids;
        v8 = &WPP_RECORDER_INITIALIZED;
      }
      if ( v24 && v23 >= 0x30 && *((_BYTE *)v24 + 1) && *(_BYTE *)v24 == 0x80 && *((_WORD *)v24 + 1) >= 0x30u )
      {
        if ( PortNumber )
        {
          PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
          if ( PortByPortNumber && PortByPortNumber->PortPnPState == NdisPortPnPStateActivated )
          {
            v26 = 0;
            PortByPortNumber->PortCharacteristics.MediaConnectState = *((_DWORD *)v24 + 1);
            PortByPortNumber->PortCharacteristics.XmitLinkSpeed = *((_QWORD *)v24 + 1);
            PortByPortNumber->PortCharacteristics.RcvLinkSpeed = *((_QWORD *)v24 + 2);
            PortByPortNumber->PortCharacteristics.Direction = *((_DWORD *)v24 + 6);
            PortByPortNumber->PortCharacteristics.SendControlState = *((_DWORD *)v24 + 7);
            PortByPortNumber->PortCharacteristics.RcvControlState = *((_DWORD *)v24 + 8);
            PortByPortNumber->PortCharacteristics.SendAuthorizationState = *((_DWORD *)v24 + 9);
            PortByPortNumber->PortCharacteristics.RcvAuthorizationState = *((_DWORD *)v24 + 10);
          }
        }
        else
        {
          v26 = 0;
          if ( (a1->PnPFlags & 0x80u) != 0 )
          {
            a1->DefaultPortSendControlState = *((_DWORD *)v24 + 7);
            a1->DefaultPortRcvControlState = *((_DWORD *)v24 + 8);
            a1->DefaultPortSendAuthorizationState = *((_DWORD *)v24 + 9);
            a1->DefaultPortRcvAuthorizationState = *((_DWORD *)v24 + 10);
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v8 )
      {
        LODWORD(v95) = v26;
        WPP_RECORDER_SF_qL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0x17u, 0x2Bu, v27, (char)a1, v95);
        v8 = &WPP_RECORDER_INITIALIZED;
      }
      if ( v26 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v8 )
          WPP_RECORDER_SF_qLq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)a2,
            0x18u,
            0x3Bu,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            (char)a1,
            34,
            *(_QWORD *)v110);
        return;
      }
      if ( v111->PortNumber )
        goto LABEL_80;
      v22 = ndisIfSetInterfaceState(a1, 1, 2u);
LABEL_78:
      v100 = v22;
      if ( v22 )
      {
        IfBlock = a1->IfBlock;
        LODWORD(v119) = 786816;
        v103 = 1;
        HIDWORD(v119) = IfBlock->ifOperStatus;
        ifOperStatusFlags = IfBlock->ifOperStatusFlags;
        v118.StatusBuffer = &v119;
        v118.Header = (_NDIS_OBJECT_HEADER)7340440;
        v118.SourceHandle = a1;
        v118.StatusCode = 1073807395;
        v118.StatusBufferSize = 12;
      }
      goto LABEL_80;
    }
    if ( StatusCode == 1073807379 )
    {
      a1->LinkStateIndicationFlags |= 2u;
      Pool2 = ExAllocatePool2(64LL, 252LL, 1903313998LL);
      v30 = (void (__fastcall *)(void *))Pool2;
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
        v32 = -1073741823;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v31,
            11,
            24,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)a1,
            (char)v30);
        }
        v33 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950LL);
        if ( v33 )
        {
          if ( (unsigned __int8)ndisReferenceMiniport(a1, 0x4Au) )
          {
            RtlGetCallersAddress((PVOID *)&v33[1].List.Flink, (PVOID *)&v33[1].List.Blink);
            v33[1].WorkerRoutine = v30;
            v33->WorkerRoutine = ndisProcessRequestAsync;
            v33[1].Parameter = a1;
            v33->Parameter = v33;
            v33->List.Flink = 0LL;
            ExQueueWorkItem(v33, (WORK_QUEUE_TYPE)40);
            v32 = 259;
          }
          else
          {
            ExFreePoolWithTag(v33, 0);
          }
        }
        else
        {
          v32 = -1073741670;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v96) = v32;
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x19u,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            (char)a1,
            (char)v30,
            v96);
        }
        v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        if ( v32 != 259 )
          ExFreePoolWithTag(v30, 0);
      }
      v107 = 1;
      goto LABEL_80;
    }
    if ( ((StatusCode - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      Offload = a1->Offload;
      v35 = v3->StatusBuffer;
      if ( Offload )
      {
        v36 = v3->StatusCode;
        if ( v36 == 1073872897 )
        {
          Offload->TopConnectionOffloadPaused = 1;
          goto LABEL_75;
        }
        if ( v36 == 1073872899 && v3->StatusBufferSize >= 0x14 && *v35 == 0x80 && *((_WORD *)v35 + 1) >= 0x14u && v35[1] )
        {
          Offload->TopConnectionOffloadPaused = 0;
          v50 = *((unsigned __int16 *)v35 + 1);
          if ( *((unsigned __int16 *)v35 + 1) >= 0x14u )
            v50 = 20LL;
          memmove(&a1->Offload->TopTcpConnectionOffloadCapabilities, v35, v50);
          goto LABEL_75;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = 4;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v35,
          24,
          60,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          StatusCode);
      }
      return;
    }
LABEL_75:
    if ( StatusCode != 1073807384 || (v3->Flags & 4) == 0 )
      goto LABEL_80;
    v98 = 1;
    *(_DWORD *)v109 = 1073807371;
    a1->MediaConnectState = MediaConnectStateConnected;
    v117.Flags |= 0x1000u;
    v22 = ndisIfSetInterfaceState(a1, 1, 2u);
    *((_QWORD *)&v121 + 1) = (unsigned int)a1->MiniportMediaDuplexState;
    v122 = *(_OWORD *)&a1->MiniportXmitLinkSpeed;
    v123 = *(_QWORD *)&a1->MiniportPauseFunctions;
    v117.StatusBuffer = &v121;
    *(_QWORD *)&v121 = 0x100280180LL;
    v117.StatusCode = 1073807383;
    v117.StatusBufferSize = 40;
    goto LABEL_78;
  }
  Flags = v3->Flags;
  a1->LinkStateIndicationFlags |= 7u;
  v13 = (Flags & 8) != 0;
  v99 = v13;
  if ( StatusBuffer )
  {
    v14 = StatusBufferSize;
    v99 = v13;
    if ( StatusBufferSize >= 0x28 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v95) = *((_DWORD *)StatusBuffer + 1);
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0x3Au,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          v95);
        v14 = StatusBufferSize;
      }
      if ( v14 == -2 )
      {
        StatusBufferSize = 40;
        v3->StatusBufferSize = 40;
      }
      v15 = *((_DWORD *)StatusBuffer + 1);
      if ( v15 == MediaConnectStateConnected )
      {
        v16 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v109 = 1073807371;
        v97 = v16;
        v98 = !v16;
      }
      else if ( v15 == MediaConnectStateDisconnected )
      {
        v16 = a1->MediaConnectState == MediaConnectStateConnected;
        *(_DWORD *)v109 = 1073807372;
        v97 = !v16;
        v98 = v16;
      }
      else
      {
        v97 = 1;
      }
      v17 = a1->MajorNdisVersion < 6u;
      a1->MediaConnectState = v15;
      a1->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
      a1->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      a1->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
      a1->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
      if ( v17 )
      {
        MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *((_QWORD *)StatusBuffer + 2) )
          a1->MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *((_QWORD *)StatusBuffer + 3) )
          a1->MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
        v20 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v20 == 0x40000000 || v20 < *((_QWORD *)StatusBuffer + 2) )
          a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        v21 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v21 == 0x40000000 || v21 < *((_QWORD *)StatusBuffer + 3) )
          a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
      }
      a1->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
      v22 = ndisIfSetInterfaceState(a1, 1, 2u);
      v99 = v13;
      goto LABEL_78;
    }
  }
LABEL_80:
  v38 = 0;
  v112 = 0;
  a1->MiniportThread = 0LL;
  v39 = a1;
  KeReleaseSpinLock(&a1->Lock, v6);
  v41 = ndisReferenceTopMiniportByNameForNsi(
          a1,
          0x200000,
          v40,
          a1->MiniportMediaType == NdisMediumNative802_11,
          NSIREF_STATUS,
          MPREF_SI_NSI);
  v115 = v41;
  if ( !v41 )
    goto LABEL_111;
  if ( v41 == a1 )
  {
    BaseMiniport = a1->BaseMiniport;
    v43 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v44 = ndisMiniDriverList;
    while ( 2 )
    {
      v45 = 0;
      if ( v44 )
      {
        KeReleaseSpinLock(&ndisMiniDriverListLock, v43);
        v46 = KeAcquireSpinLockRaiseToDpc(&v44->Ref.SpinLock);
        MiniportQueue = v44->MiniportQueue;
        v48 = v46;
        do
        {
          v45 = 0;
          if ( !MiniportQueue )
            break;
          if ( MiniportQueue == BaseMiniport )
          {
            v38 = 1;
            if ( (unsigned __int8)ndisReferenceMiniport(BaseMiniport, 0x38u) )
              goto LABEL_108;
            if ( (BaseMiniport->Flags & 0x80200020) != 0 )
            {
              KeReleaseSpinLock(&v44->Ref.SpinLock, v48);
              v43 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              goto LABEL_95;
            }
            if ( (BaseMiniport->PnPFlags & 0x1084110) == 0
              && BaseMiniport->PnPDeviceState == NdisPnPDeviceStarted
              && BaseMiniport->CurrentDevicePowerState == PowerDeviceD0
              && (unsigned __int8)ndisReferenceMiniport(BaseMiniport, 0x38u) )
            {
LABEL_108:
              v45 = 1;
              KeReleaseSpinLock(&v44->Ref.SpinLock, v48);
              v51 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              KeReleaseSpinLock(&ndisMiniDriverListLock, v51);
              v39 = a1->BaseMiniport;
              goto LABEL_96;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( !v38 );
        KeReleaseSpinLock(&v44->Ref.SpinLock, v48);
        v43 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v44 = v44->NextDriver;
        if ( !v38 )
          continue;
      }
      break;
    }
LABEL_95:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v43);
    v39 = a1;
LABEL_96:
    v41 = v115;
    v16 = v45 == 0;
    v49 = v112;
    v7 = !v16;
  }
  else
  {
    v49 = -1073741823;
  }
  ndisDereferenceMiniportForNsi(v41, 1u, 0x39u);
  if ( !v49 )
  {
    v52 = v103;
  }
  else
  {
LABEL_111:
    v98 = 0;
    v52 = 0;
  }
  v53 = v111;
  v54 = v113;
  ndisWriteWmiStatusIndication(v39, v39->pAdapterInstanceName, v111, v113, Src, StatusBufferSize);
  if ( v98 )
    ndisWriteWmiStatusIndication(v39, v39->pAdapterInstanceName, v111, *(int *)v109, 0LL, 0);
  v55 = 12LL;
  if ( v52 )
    ndisWriteWmiStatusIndication(v39, v39->pAdapterInstanceName, v111, 1073807395, &v119, 0xCu);
  v56 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v59 = v56;
  a1->MiniportThread = CurrentThread;
  if ( v7 )
    ndisDereferenceMiniport(v39, 0x38u);
  if ( v54 == 1073807383 )
    v54 = *(_DWORD *)v109;
  if ( v54 != 1073807384 )
  {
    if ( v54 > 1073872960 )
    {
      if ( v54 == 1073872978 )
      {
        if ( StatusBufferSize >= 0xC )
        {
          v60 = (unsigned __int16 *)Src;
          if ( *(_BYTE *)Src == 0x80 && *((_WORD *)Src + 1) >= 0xCu )
          {
            if ( *((_BYTE *)Src + 1) )
            {
              TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
              if ( TopSriovCurrentCapabilities
                || (TopSriovCurrentCapabilities = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL),
                    (a1->TopSriovCurrentCapabilities = TopSriovCurrentCapabilities) != 0LL) )
              {
                if ( v60[1] < 0xCu )
                  v55 = v60[1];
                memmove(TopSriovCurrentCapabilities, v60, v55);
              }
            }
          }
          goto LABEL_132;
        }
      }
      else
      {
        if ( v54 == 1073873056 || v54 == 1073873057 )
        {
          v60 = (unsigned __int16 *)Src;
          ndisMIndicateQosParametersChange(a1, v54, (struct _NDIS_QOS_PARAMETERS *)Src, StatusBufferSize);
          goto LABEL_132;
        }
        if ( (unsigned int)(v54 - 1074073600) <= 1 )
        {
          v60 = (unsigned __int16 *)Src;
          ndisMIndicateHwTimestampCapabilitiesChange(a1, v54, Src, StatusBufferSize, 1, &v104);
          if ( v54 == 1074073601 )
          {
            if ( v104 )
            {
              v69 = ndisMReferenceIfBlock(a1, 0x1Au);
              if ( v69 )
              {
                a1->MiniportThread = 0LL;
                KeReleaseSpinLock(&a1->Lock, v59);
                v70 = (struct _NDIS_IF_BLOCK **)ExAllocatePool2(64LL, 80LL, 1769423950LL);
                v71 = v70;
                if ( v70 )
                {
                  *v70 = v69;
                  v70[1] = (struct _NDIS_IF_BLOCK *)ndisNsiQueuedTimestampingChangeNotification;
                  v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v69->RefCountTracker, 0xAu);
                  ++v69->Ref;
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v72);
                  v71[5] = (struct _NDIS_IF_BLOCK *)v71;
                  v71[4] = (struct _NDIS_IF_BLOCK *)ndisWorkItemHandler;
                  v71[2] = 0LL;
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(v71 + 2), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
                }
                KeAcquireSpinLockRaiseToDpc(&a1->Lock);
                a1->MiniportThread = KeGetCurrentThread();
                v73 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                IFBLOCK_DEREFERENCE_MINIPORT_LINK(a1->IfBlock, 0x1Au);
                KeReleaseSpinLock(&SpinLock, v73);
              }
            }
          }
          goto LABEL_132;
        }
      }
      goto LABEL_131;
    }
    if ( v54 == 1073872960 )
    {
      v60 = (unsigned __int16 *)Src;
      ndisMIndicateNicSwitchCapsChange(a1, 1073872960, Src, StatusBufferSize, 1u);
      goto LABEL_132;
    }
    if ( v54 > 1073807395 )
    {
      v60 = (unsigned __int16 *)Src;
      if ( v54 == 1073872902 )
      {
        v105 = 1;
        if ( StatusBufferSize >= 0x70 && *(_BYTE *)Src == 0xA7 && *((_WORD *)Src + 1) >= 0x70u && *((_BYTE *)Src + 1) )
        {
          v67 = (struct _NDIS_OFFLOAD *)Src;
          a1->Offload->SupportsTopOffload = 1;
          ndisMergeOffloadCapsAndRegistry(a1, v67);
          v68 = 220LL;
          memset(&a1->Offload->TopCapabilities, 0, sizeof(a1->Offload->TopCapabilities));
          if ( v60[1] < 0xDCu )
            v68 = v60[1];
          memmove(&a1->Offload->TopCapabilities, v60, v68);
        }
      }
      else if ( v54 == 1073872912 )
      {
        ndisMIndicateReceiveFilterCapsChange(a1, 1073872912, Src, StatusBufferSize, 1u);
      }
      goto LABEL_132;
    }
    if ( v54 == 1073807395 )
    {
      v97 = 1;
      if ( StatusBufferSize >= 0xC )
      {
        v60 = (unsigned __int16 *)Src;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v96) = *((_DWORD *)Src + 2);
          WPP_RECORDER_SF_qLL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)CurrentThread,
            0x18u,
            0x3Fu,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            (char)a1,
            *((_DWORD *)Src + 1),
            v96);
        }
        v66 = *((unsigned int *)Src + 1);
        if ( (_DWORD)v66 == 1 )
        {
          if ( (byte_14011B105 & 1) != 0 )
          {
            LODWORD(v96) = *((_DWORD *)Src + 2);
            LODWORD(v95) = 1;
            LODWORD(v94) = a1->IfIndex;
            McTemplateK0jqxqq_EtwWriteTransfer(
              v66,
              (__int64)&MiniportStatusIndicationOperStatusUp,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              v94,
              a1->NetLuid.Value,
              v95,
              v96);
          }
        }
        else if ( (byte_14011B105 & 1) != 0 )
        {
          LODWORD(v96) = *((_DWORD *)Src + 2);
          LODWORD(v95) = *((_DWORD *)Src + 1);
          LODWORD(v94) = a1->IfIndex;
          McTemplateK0jqxqq_EtwWriteTransfer(
            v66,
            (__int64)&MiniportStatusIndicationOperStatusNotUp,
            (__int64)&a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            v94,
            a1->NetLuid.Value,
            v95,
            v96);
        }
        goto LABEL_132;
      }
      goto LABEL_131;
    }
    goto LABEL_142;
  }
  if ( (v53->Flags & 4) == 0 )
  {
LABEL_142:
    v57 = (unsigned int)(v54 - 1073807371);
    if ( v54 != 1073807371 )
    {
      v64 = (unsigned int)(v54 - 1073807372);
      if ( v54 == 1073807372 )
      {
        ++a1->MediaSenseDisconnectCount;
        if ( (a1->Flags & 0x20000000) != 0 || a1->MediaSenseDisconnectCount == 1 )
        {
          v65 = 1;
          v101 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLLL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)CurrentThread,
              0x18u,
              0x3Du,
              (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
              (char)a1,
              a1->Flags,
              a1->PnPFlags,
              a1->CurrentDevicePowerState);
          if ( byte_14011B104 < 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v64,
              &MiniportStatusIndicationDisconnect,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              a1->Flags,
              a1->PnPFlags,
              a1->CurrentDevicePowerState);
        }
        else
        {
          v65 = 0;
        }
        _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
        a1->MediaConnectState = MediaConnectStateDisconnected;
        if ( !v99 )
        {
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x4000000u);
          if ( v65 )
            ndisSetMediaDisconnectTimer(a1);
        }
      }
      else if ( v54 == 1073807384 )
      {
        v97 = 1;
        if ( StatusBufferSize >= 4 )
        {
          v60 = (unsigned __int16 *)Src;
          if ( (byte_14011B105 & 1) != 0 )
          {
            LODWORD(v95) = *(_DWORD *)Src;
            LODWORD(v94) = a1->IfIndex;
            McTemplateK0jqxd_EtwWriteTransfer(
              v64,
              (__int64)&MiniportStatusIndicationNetworkChange,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              v94,
              a1->NetLuid.Value,
              v95);
          }
          goto LABEL_132;
        }
      }
      goto LABEL_131;
    }
    goto LABEL_124;
  }
  v54 -= 13;
LABEL_124:
  ++a1->MediaSenseConnectCount;
  if ( (a1->Flags & 0x20000000) == 0 )
  {
    v101 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)CurrentThread,
        0x18u,
        0x3Eu,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a1,
        a1->Flags,
        a1->PnPFlags,
        a1->CurrentDevicePowerState);
    if ( byte_14011B104 < 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v57,
        &MiniportStatusIndicationConnect,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->Flags,
        a1->PnPFlags,
        a1->CurrentDevicePowerState);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
  a1->MediaConnectState = MediaConnectStateConnected;
  if ( !v99 )
  {
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x4000000u);
    ndisCancelMediaDisconnectTimer(a1);
  }
LABEL_131:
  v60 = (unsigned __int16 *)Src;
LABEL_132:
  if ( DestinationHandle == (_BYTE *)&ndisIntReqWmi )
  {
    v92 = v111;
  }
  else
  {
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      v62 = *(_NDIS_OPEN_BLOCK **)v110;
      while ( v62 && v62 != OpenQueue )
      {
        MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_246:
        OpenQueue = MiniportNextOpen;
        if ( !MiniportNextOpen )
          goto LABEL_247;
      }
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
        goto LABEL_199;
      if ( v105 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
      {
        if ( !v106 )
        {
          StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
          if ( StatusUnbindWorkItem )
          {
            ndisReferenceMiniportNoCheck(a1, 0x36u);
            v106 = 1;
            OpenQueue->StatusUnbindWorkItem = 0LL;
            *(_QWORD *)StatusUnbindWorkItem->WorkItem.WrapperReserved = 0LL;
            *(_QWORD *)&StatusUnbindWorkItem->WorkItem.WrapperReserved[16] = ndisWorkItemHandler;
            *(_QWORD *)&StatusUnbindWorkItem->WorkItem.WrapperReserved[24] = StatusUnbindWorkItem;
            ExQueueWorkItem(
              (PWORK_QUEUE_ITEM)StatusUnbindWorkItem->WorkItem.WrapperReserved,
              CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
          }
        }
        goto LABEL_199;
      }
      v76 = v111;
      switch ( v54 )
      {
        case 1073938515:
          v77 = v111->StatusBufferSize;
          v78 = (unsigned __int16 *)v111->StatusBuffer;
          memset(v114, 0, 60);
          if ( v77 >= 0x34 )
          {
            v79 = v78[1];
            if ( v77 >= v79 )
            {
              v80 = *((_OWORD *)v78 + 1);
              v114[0] = *(_OWORD *)v78;
              v81 = *((_OWORD *)v78 + 2);
              v114[1] = v80;
              v114[2] = v81;
              if ( v79 >= 0x3C )
              {
                v83 = *((_QWORD *)v78 + 6);
                v84 = *((_DWORD *)v78 + 14);
                *(_QWORD *)&v114[3] = v83;
                v82 = v83;
                DWORD2(v114[3]) = v84;
              }
              else
              {
                v82 = *((_DWORD *)v78 + 12);
                LODWORD(v114[3]) = v82;
              }
              OpenQueue->PMCurrentParameters.EnabledWoLPacketPatterns &= DWORD2(v114[0]);
              OpenQueue->PMCurrentParameters.EnabledProtocolOffloads &= HIDWORD(v114[1]);
              if ( (unsigned int)(v82 - 2) > 2 )
                OpenQueue->PMCurrentParameters.WakeUpFlags &= ~1u;
            }
          }
          goto LABEL_226;
        case 1073938513:
          if ( v111->StatusBufferSize >= 4 )
          {
            p_WOLPatternList = &OpenQueue->WOLPatternList;
            Next = OpenQueue->WOLPatternList.Next;
            if ( Next )
            {
              while ( 1 )
              {
                v87 = Next->Next;
                if ( LODWORD(Next[5].Next) == *(_DWORD *)v111->StatusBuffer )
                  break;
                p_WOLPatternList = Next;
                Next = Next->Next;
                if ( !v87 )
                  goto LABEL_199;
              }
LABEL_225:
              p_WOLPatternList->Next = v87;
              ExFreePoolWithTag(Next, 0);
              --LODWORD(v76->NdisReserved[2]);
              goto LABEL_226;
            }
          }
          break;
        case 1073938514:
          if ( v111->StatusBufferSize >= 4 )
          {
            p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
            Next = OpenQueue->PMProtocolOffloadList.Next;
            if ( Next )
            {
              while ( 1 )
              {
                v87 = Next->Next;
                if ( LODWORD(Next[5].Next) == *(_DWORD *)v111->StatusBuffer )
                  goto LABEL_225;
                p_WOLPatternList = Next;
                Next = Next->Next;
                if ( !v87 )
                  goto LABEL_199;
              }
            }
          }
          break;
        default:
LABEL_226:
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
              if ( !v107 )
              {
                ndisInvokeStatus(OpenQueue, v76);
                if ( v76->StatusCode == 1073807384 && (v76->Flags & 4) != 0 )
                  ndisInvokeStatus(OpenQueue, &v117);
                if ( v100 )
                  ndisInvokeStatus(OpenQueue, &v118);
              }
            }
            else if ( !v97 && !v76->PortNumber )
            {
              v88 = v76->StatusCode;
              if ( v88 == 1073807383 || v88 == 1073807384 && (v76->Flags & 4) != 0 )
              {
                v89 = 0LL;
                v90 = 0LL;
              }
              else
              {
                v89 = StatusBufferSize;
                v90 = v60;
              }
              OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v54, v90, v89);
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
          goto LABEL_245;
      }
LABEL_199:
      MiniportNextOpen = OpenQueue->MiniportNextOpen;
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_245:
      v62 = *(_NDIS_OPEN_BLOCK **)v110;
      goto LABEL_246;
    }
LABEL_247:
    if ( v54 == 1073938516 )
      ndisUpdateAndIndicatePMCapabilities(a1);
    v92 = v111;
    if ( v101 && (v111->Flags & 2) == 0 )
    {
      PnPFlags = a1->PnPFlags;
      if ( v54 == 1073807371 )
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
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)CurrentThread,
      0x18u,
      0x40u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v54,
      v92->DestinationHandle);
}
