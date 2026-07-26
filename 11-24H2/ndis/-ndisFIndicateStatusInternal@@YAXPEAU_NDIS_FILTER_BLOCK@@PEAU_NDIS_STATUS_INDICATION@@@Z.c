/*
 * XREFs of ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032B30
 * Callers:
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032A20 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x140032B10 (-ndisFIndicateStatusWrapper@@YAXPEAX@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x140032910 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032A20 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140035350 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140036100 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     WPP_RECORDER_SF_dDq @ 0x140051620 (WPP_RECORDER_SF_dDq.c)
 *     WPP_RECORDER_SF_dq @ 0x140063790 (WPP_RECORDER_SF_dq_ea_140063790.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140070710 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140074400 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007AC50 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007B190 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     WPP_RECORDER_SF_dDDDq @ 0x14009B970 (WPP_RECORDER_SF_dDDDq.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2970 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400C4C70 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisFIndicateStatusInternal(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int StatusCode; // r13d
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  __int64 *StatusBuffer; // r15
  _NDIS_IF_BLOCK *IfBlock; // r14
  unsigned int v8; // ebx
  KIRQL v9; // al
  KIRQL v10; // r14
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // eax
  _NET_IF_MEDIA_CONNECT_STATE v12; // ecx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  int v15; // r8d
  unsigned int v16; // ecx
  int v17; // r9d
  int v18; // r9d
  unsigned __int8 *v19; // rcx
  int v20; // edx
  _NDIS_SRIOV_CAPABILITIES *p_SriovHwCapabilities; // rax
  void *v22; // rdx
  size_t v23; // r8
  void *v24; // rcx
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v26; // rbx
  KSPIN_LOCK *p_Lock; // r14
  KIRQL v28; // al
  KIRQL v29; // r12
  bool v30; // cf
  int v31; // r9d
  _QWORD *v32; // rax
  unsigned __int8 *v33; // rcx
  unsigned int v34; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *p_NicSwitchHwCapabilities; // r9
  _QWORD *SourceHandle; // rax
  unsigned __int8 *v37; // rcx
  unsigned int v38; // eax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *p_ReceiveFilterHwCapabilities; // r9
  size_t v40; // r8
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // edx
  _NET_IF_MEDIA_CONNECT_STATE v42; // ecx
  char v43; // al
  unsigned __int8 v44; // al
  unsigned int v45; // eax
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rdx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v48; // rax
  unsigned __int8 v49; // r14
  unsigned int SyncFlags; // ecx
  unsigned int v51; // eax
  _NET_IF_MEDIA_CONNECT_STATE v52; // eax
  int v53; // ecx
  char v54; // [rsp+50h] [rbp-C8h]
  unsigned int StatusBufferSize; // [rsp+54h] [rbp-C4h]
  KIRQL v56; // [rsp+58h] [rbp-C0h]
  bool v57; // [rsp+5Ch] [rbp-BCh]
  struct _KTIMER Timer; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-68h] BYREF
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // [rsp+B8h] [rbp-60h]
  int v62; // [rsp+BCh] [rbp-5Ch]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+C0h] [rbp-58h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+C8h] [rbp-50h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+D0h] [rbp-48h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+D4h] [rbp-44h]

  StatusCode = a2->StatusCode;
  Miniport = a1->Miniport;
  StatusBuffer = (__int64 *)a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  v57 = 0;
  v54 = 0;
  if ( StatusCode == 1073873072 )
  {
    if ( a2->SourceHandle != (void *)0x140000000LL )
      return;
    ndisIfUpdateCurrentMacAddress(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)StatusBuffer);
  }
  else if ( StatusCode == 1073873073 )
  {
    if ( a2->SourceHandle != (void *)0x140000000LL )
      return;
    IfBlock = a1->IfBlock;
    v8 = *(_DWORD *)StatusBuffer;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    if ( IfBlock->ifMtu != v8 )
      IfBlock->ifMtu = v8;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  }
  v60 = 2621824LL;
  v62 = 0;
  MediaDuplexStateIndicateUp = a1->MediaDuplexStateIndicateUp;
  XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
  RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
  PauseFunctionsIndicateUp = a1->PauseFunctionsIndicateUp;
  AutoNegotiationFlagsIndicateUp = a1->AutoNegotiationFlagsIndicateUp;
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  switch ( StatusCode )
  {
    case 1073807372:
      HIDWORD(v60) = 2;
LABEL_13:
      a2->StatusCode = 1073807383;
      a2->StatusBuffer = &v60;
      StatusBuffer = &v60;
      a2->StatusBufferSize = 40;
      StatusCode = 1073807383;
      StatusBufferSize = 40;
LABEL_15:
      MediaConnectStateIndicateUp = a1->MediaConnectStateIndicateUp;
      v12 = *((_DWORD *)StatusBuffer + 1);
      if ( MediaConnectStateIndicateUp != v12 )
      {
        if ( v12 == MediaConnectStateConnected )
          v54 = 1;
        else
          v57 = MediaConnectStateIndicateUp == MediaConnectStateConnected;
      }
      a1->MediaConnectStateIndicateUp = v12;
      a1->MediaDuplexStateIndicateUp = *((_DWORD *)StatusBuffer + 2);
      a1->XmitLinkSpeedIndicateUp = StatusBuffer[2];
      a1->RcvLinkSpeedIndicateUp = StatusBuffer[3];
      a1->PauseFunctionsIndicateUp = *((_DWORD *)StatusBuffer + 8);
      a1->AutoNegotiationFlagsIndicateUp = *((_DWORD *)StatusBuffer + 9);
      a1->IfBlock->MediaConnectState = v12;
      a1->IfBlock->MediaDuplexState = a1->MediaDuplexStateIndicateUp;
      a1->IfBlock->RcvLinkSpeed = a1->RcvLinkSpeedIndicateUp;
      a1->IfBlock->XmitLinkSpeed = a1->XmitLinkSpeedIndicateUp;
      break;
    case 1073807371:
      HIDWORD(v60) = 1;
      goto LABEL_13;
    case 1073807383:
      goto LABEL_15;
  }
  v13 = 0x140000000uLL;
  switch ( StatusCode )
  {
    case 1073872912:
    case 1073872928:
      SourceHandle = a2->SourceHandle;
      v15 = a2->StatusCode;
      v16 = a2->StatusBufferSize;
      if ( *(_BYTE *)SourceHandle == 5 )
      {
        v13 = SourceHandle[2];
        if ( *(_BYTE *)(v13 + 100) <= 6u && (*(_BYTE *)(v13 + 100) != 6 || *(_BYTE *)(v13 + 101) < 0x59u) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_88;
          v17 = 54;
          goto LABEL_72;
        }
      }
      if ( v16 < 0x38 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_88;
        v18 = 55;
        goto LABEL_76;
      }
      v37 = (unsigned __int8 *)a2->StatusBuffer;
      v20 = *v37;
      if ( (_BYTE)v20 == 0x80 )
      {
        v38 = *((unsigned __int16 *)v37 + 1);
        if ( v38 >= 0x38 )
        {
          if ( v37[1] )
          {
            p_ReceiveFilterHwCapabilities = &a1->ReceiveFilterHwCapabilities;
            if ( v15 != 1073872928 )
              p_ReceiveFilterHwCapabilities = &a1->ReceiveFilterCurrentCapabilities;
            v40 = *((unsigned __int16 *)v37 + 1);
            if ( v38 >= 0x54 )
              v40 = 84LL;
            memmove(p_ReceiveFilterHwCapabilities, a2->StatusBuffer, v40);
            a1->LockThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v10);
            goto LABEL_40;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_88;
      v31 = 56;
      goto LABEL_87;
    case 1073872960:
    case 1073872976:
      v32 = a2->SourceHandle;
      v15 = a2->StatusCode;
      v16 = a2->StatusBufferSize;
      if ( *(_BYTE *)v32 == 5 )
      {
        v13 = v32[2];
        if ( *(_BYTE *)(v13 + 100) <= 6u && (*(_BYTE *)(v13 + 100) != 6 || *(_BYTE *)(v13 + 101) < 0x59u) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_88;
          v17 = 51;
          goto LABEL_72;
        }
      }
      if ( v16 < 0x20 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_88;
        v18 = 52;
        goto LABEL_76;
      }
      v33 = (unsigned __int8 *)a2->StatusBuffer;
      v20 = *v33;
      if ( (_BYTE)v20 == 0x80 )
      {
        v34 = *((unsigned __int16 *)v33 + 1);
        if ( v34 >= 0x20 )
        {
          if ( v33[1] )
          {
            p_NicSwitchHwCapabilities = &a1->NicSwitchHwCapabilities;
            if ( v15 != 1073872976 )
              p_NicSwitchHwCapabilities = &a1->NicSwitchCurrentCapabilities;
            v23 = 132LL;
            if ( (unsigned __int16)v34 < 0x84u )
              v23 = *((unsigned __int16 *)v33 + 1);
            v22 = a2->StatusBuffer;
            v24 = p_NicSwitchHwCapabilities;
            goto LABEL_38;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_88;
      v31 = 53;
      goto LABEL_87;
    case 1073872978:
    case 1073872980:
      v14 = a2->SourceHandle;
      v15 = a2->StatusCode;
      v16 = a2->StatusBufferSize;
      if ( *(_BYTE *)v14 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 47;
LABEL_72:
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_dq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v13,
            26,
            v17,
            (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
            v15,
            (char)a1);
          goto LABEL_88;
        }
        goto LABEL_88;
      }
      v13 = v14[2];
      if ( *(_BYTE *)(v13 + 100) <= 6u && (*(_BYTE *)(v13 + 100) != 6 || *(_BYTE *)(v13 + 101) < 0x59u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 48;
          goto LABEL_72;
        }
LABEL_88:
        a1->LockThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v10);
        return;
      }
      if ( v16 < 0xC )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 49;
LABEL_76:
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_dDq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v13,
            26,
            v18,
            (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
            v15,
            v16,
            (char)a1);
        }
        goto LABEL_88;
      }
      v19 = (unsigned __int8 *)a2->StatusBuffer;
      v20 = *v19;
      if ( (_BYTE)v20 != 0x80 || *((_WORD *)v19 + 1) < 0xCu || !v19[1] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = 50;
LABEL_87:
          WPP_RECORDER_SF_dDDDq(*((_QWORD *)WPP_GLOBAL_Control + 8), v20, v15, v31);
        }
        goto LABEL_88;
      }
      p_SriovHwCapabilities = &a1->SriovHwCapabilities;
      if ( v15 != 1073872980 )
        p_SriovHwCapabilities = &a1->SriovCurrentCapabilities;
      v22 = a2->StatusBuffer;
      v23 = 12LL;
      v24 = p_SriovHwCapabilities;
LABEL_38:
      memmove(v24, v22, v23);
LABEL_39:
      a1->LockThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v10);
LABEL_40:
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, a1, FPNPREF_FSTATUS);
      v26 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        p_Lock = &HigherFilterWithPnpRef->Lock;
        while ( 1 )
        {
          v28 = KeAcquireSpinLockRaiseToDpc(p_Lock);
          v29 = v28;
          v26->LockThread = KeGetCurrentThread();
          v30 = (v26->Flags & 0x2000) != 0;
          v26->LockThread = 0LL;
          if ( !v30 )
            break;
          KeReleaseSpinLock(p_Lock, v28);
          if ( KeGetCurrentIrql() == 2 )
          {
            KeStallExecutionProcessor(1u);
          }
          else
          {
            memset(&Timer, 0, sizeof(Timer));
            KeInitializeTimerEx(&Timer, SynchronizationTimer);
            KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
            KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
          }
        }
        v26->Flags |= 0x2000u;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        switch ( StatusCode )
        {
          case 1073807383:
            if ( StatusBuffer && StatusBufferSize >= 0x28 )
            {
              MediaConnectState = v26->MediaConnectState;
              v42 = *((_DWORD *)StatusBuffer + 1);
              if ( MediaConnectState != v42 )
              {
                if ( v42 == MediaConnectStateConnected )
                {
                  v54 = 1;
                }
                else
                {
                  v43 = v57;
                  if ( MediaConnectState == MediaConnectStateConnected )
                    v43 = 1;
                  v57 = v43;
                }
              }
              v26->MediaConnectState = v42;
              v26->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
              v26->RcvLinkSpeed = StatusBuffer[3];
              v26->XmitLinkSpeed = StatusBuffer[2];
              v26->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
              v26->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
            }
            goto LABEL_100;
          case 1073872902:
            v44 = ndisFIndicateOffloadChange(v26, (unsigned __int16 *)StatusBuffer, StatusBufferSize);
LABEL_106:
            if ( !v44 )
            {
LABEL_107:
              KeAcquireSpinLockAtDpcLevel(p_Lock);
              v26->LockThread = KeGetCurrentThread();
              v45 = v26->Flags & 0xFFFFDFFF;
              v26->LockThread = 0LL;
              v26->Flags = v45;
              KeReleaseSpinLock(p_Lock, v29);
              ndisDereferenceRef(&v26->PnPRef.SpinLock, 8u);
              return;
            }
            goto LABEL_100;
          case 1073938515:
            ndisFilterIndicatePMCapabilities(v26, a2);
            goto LABEL_100;
          case 1073938513:
            if ( a2->StatusBufferSize < 4 )
              goto LABEL_100;
            if ( !LODWORD(a2->NdisReserved[2]) )
              goto LABEL_107;
            p_WOLPatternList = &v26->WOLPatternList;
            Next = v26->WOLPatternList.Next;
            if ( !Next )
            {
LABEL_100:
              ndisFIndicateStatusToFilter(v26, a2);
              if ( v57 )
                ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, v26);
              if ( v54 )
                ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, v26);
              goto LABEL_107;
            }
            while ( 1 )
            {
              v48 = Next->Next;
              if ( LODWORD(Next[5].Next) == *(_DWORD *)a2->StatusBuffer )
                break;
              p_WOLPatternList = Next;
              Next = Next->Next;
              if ( !v48 )
                goto LABEL_100;
            }
            break;
          case 1073938514:
            if ( a2->StatusBufferSize < 4 )
              goto LABEL_100;
            if ( !LODWORD(a2->NdisReserved[2]) )
              goto LABEL_107;
            p_WOLPatternList = &v26->PMProtocolOffloadList;
            Next = v26->PMProtocolOffloadList.Next;
            if ( !Next )
              goto LABEL_100;
            while ( 1 )
            {
              v48 = Next->Next;
              if ( LODWORD(Next[5].Next) == *(_DWORD *)a2->StatusBuffer )
                break;
              p_WOLPatternList = Next;
              Next = Next->Next;
              if ( !v48 )
                goto LABEL_100;
            }
            break;
          default:
            if ( (unsigned int)(StatusCode - 1074073600) > 1 )
              goto LABEL_100;
            v44 = ndisFIndicateTimestampChange(v26, StatusCode, StatusBuffer, StatusBufferSize);
            goto LABEL_106;
        }
        p_WOLPatternList->Next = v48;
        ExFreePoolWithTag(Next, 0);
        --LODWORD(a2->NdisReserved[2]);
        goto LABEL_100;
      }
      v56 = KfRaiseIrql(2u);
      v49 = v56;
      KeAcquireSpinLockAtDpcLevel(&Miniport->Lock);
      Miniport->MiniportThread = KeGetCurrentThread();
      SyncFlags = Miniport->SyncFlags;
      if ( (SyncFlags & 1) != 0 )
      {
        do
        {
          Miniport->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
          KeStallExecutionProcessor(1u);
          KeAcquireSpinLockAtDpcLevel(&Miniport->Lock);
          Miniport->MiniportThread = KeGetCurrentThread();
          SyncFlags = Miniport->SyncFlags;
        }
        while ( (SyncFlags & 1) != 0 );
        v49 = v56;
      }
      Miniport->SyncFlags = SyncFlags | 1;
      Miniport->StatusProcessingThread = KeGetCurrentThread();
      v51 = StatusBufferSize;
      if ( StatusCode != 1073807383 || !StatusBuffer || StatusBufferSize < 0x28 )
        goto LABEL_145;
      v52 = Miniport->MediaConnectState;
      v53 = *((_DWORD *)StatusBuffer + 1);
      if ( v52 == v53 )
        goto LABEL_144;
      if ( v52 == MediaConnectStateConnected )
      {
        a2->Flags |= 2u;
        ndisIndicateStatusInternal(Miniport, a2, 2u);
LABEL_139:
        ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
        goto LABEL_140;
      }
      if ( v53 == 1 )
      {
        a2->Flags |= 2u;
        v54 = 1;
        goto LABEL_138;
      }
LABEL_144:
      v51 = StatusBufferSize;
LABEL_145:
      a2->Flags |= 2u;
      if ( StatusCode != 1073872902 )
        goto LABEL_138;
      if ( v51 < 0x70
        || *(_BYTE *)StatusBuffer != 0xA7
        || *((_WORD *)StatusBuffer + 1) < 0x70u
        || !*((_BYTE *)StatusBuffer + 1) )
      {
        goto LABEL_152;
      }
      if ( !Miniport->Offload )
      {
        ndisMAllocateMiniportOffload(Miniport);
LABEL_152:
        ndisMReleaseStInLockAndSpinLock(Miniport, v49);
        return;
      }
LABEL_138:
      ndisIndicateStatusInternal(Miniport, a2, 2u);
      if ( v57 )
        goto LABEL_139;
LABEL_140:
      if ( v54 )
        ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
      Miniport->SyncFlags &= ~1u;
      Miniport->StatusProcessingThread = 0LL;
      Miniport->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
      KeLowerIrql(v49);
      return;
    default:
      goto LABEL_39;
  }
}
