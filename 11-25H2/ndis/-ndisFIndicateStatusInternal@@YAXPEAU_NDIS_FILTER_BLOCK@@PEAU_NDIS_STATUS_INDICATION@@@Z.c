/*
 * XREFs of ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920
 * Callers:
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069810 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x140069900 (-ndisFIndicateStatusWrapper@@YAXPEAX@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1400547B0 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140056F30 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005A010 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069810 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     WPP_RECORDER_SF_dDq @ 0x14006D1D0 (WPP_RECORDER_SF_dDq.c)
 *     WPP_RECORDER_SF_dq @ 0x14007F640 (WPP_RECORDER_SF_dq_ea_14007F640.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1400826A0 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008CCF0 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140090100 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x140093210 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_dDDDq @ 0x1400A4AE0 (WPP_RECORDER_SF_dDDDq.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400BA7A0 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400CBDA0 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisFIndicateStatusInternal(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int StatusCode; // r13d
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  __int64 *StatusBuffer; // r14
  _NDIS_IF_BLOCK *IfBlock; // r15
  unsigned int v8; // ebx
  KIRQL v9; // al
  KIRQL v10; // r15
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
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rbx
  KIRQL v26; // r12
  int v28; // r9d
  _QWORD *v29; // rax
  unsigned __int8 *v30; // rcx
  unsigned int v31; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *p_NicSwitchHwCapabilities; // r9
  _QWORD *SourceHandle; // rax
  unsigned __int8 *v34; // rcx
  unsigned int v35; // eax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *p_ReceiveFilterHwCapabilities; // r9
  size_t v37; // r8
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // edx
  _NET_IF_MEDIA_CONNECT_STATE v39; // ecx
  char v40; // al
  unsigned __int8 v41; // al
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rdx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v44; // rax
  KIRQL v45; // r15
  unsigned int SyncFlags; // ecx
  unsigned int v47; // eax
  _NET_IF_MEDIA_CONNECT_STATE v48; // ecx
  int v49; // eax
  char v50; // [rsp+50h] [rbp-C8h]
  unsigned int StatusBufferSize; // [rsp+54h] [rbp-C4h]
  KIRQL v52; // [rsp+58h] [rbp-C0h]
  bool v53; // [rsp+5Ch] [rbp-BCh]
  struct _KTIMER Timer; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-68h] BYREF
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // [rsp+B8h] [rbp-60h]
  int v58; // [rsp+BCh] [rbp-5Ch]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+C0h] [rbp-58h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+C8h] [rbp-50h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+D0h] [rbp-48h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+D4h] [rbp-44h]

  StatusCode = a2->StatusCode;
  Miniport = a1->Miniport;
  StatusBuffer = (__int64 *)a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  v53 = 0;
  v50 = 0;
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
  v56 = 2621824LL;
  v58 = 0;
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
      HIDWORD(v56) = 2;
LABEL_13:
      a2->StatusCode = 1073807383;
      a2->StatusBuffer = &v56;
      StatusBuffer = &v56;
      a2->StatusBufferSize = 40;
      StatusCode = 1073807383;
      StatusBufferSize = 40;
LABEL_15:
      MediaConnectStateIndicateUp = a1->MediaConnectStateIndicateUp;
      v12 = *((_DWORD *)StatusBuffer + 1);
      if ( MediaConnectStateIndicateUp != v12 )
      {
        if ( v12 == MediaConnectStateConnected )
          v50 = 1;
        else
          v53 = MediaConnectStateIndicateUp == MediaConnectStateConnected;
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
      HIDWORD(v56) = 1;
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
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_86;
          v17 = 53;
          goto LABEL_70;
        }
      }
      if ( v16 < 0x38 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_86;
        v18 = 54;
        goto LABEL_74;
      }
      v34 = (unsigned __int8 *)a2->StatusBuffer;
      v20 = *v34;
      if ( (_BYTE)v20 == 0x80 )
      {
        v35 = *((unsigned __int16 *)v34 + 1);
        if ( v35 >= 0x38 )
        {
          if ( v34[1] )
          {
            p_ReceiveFilterHwCapabilities = &a1->ReceiveFilterHwCapabilities;
            if ( v15 != 1073872928 )
              p_ReceiveFilterHwCapabilities = &a1->ReceiveFilterCurrentCapabilities;
            v37 = *((unsigned __int16 *)v34 + 1);
            if ( v35 >= 0x54 )
              v37 = 84LL;
            memmove(p_ReceiveFilterHwCapabilities, a2->StatusBuffer, v37);
            a1->LockThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v10);
            goto LABEL_40;
          }
        }
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_86;
      v28 = 55;
      goto LABEL_85;
    case 1073872960:
    case 1073872976:
      v29 = a2->SourceHandle;
      v15 = a2->StatusCode;
      v16 = a2->StatusBufferSize;
      if ( *(_BYTE *)v29 == 5 )
      {
        v13 = v29[2];
        if ( *(_BYTE *)(v13 + 100) <= 6u && (*(_BYTE *)(v13 + 100) != 6 || *(_BYTE *)(v13 + 101) < 0x59u) )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_86;
          v17 = 50;
          goto LABEL_70;
        }
      }
      if ( v16 < 0x20 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_86;
        v18 = 51;
        goto LABEL_74;
      }
      v30 = (unsigned __int8 *)a2->StatusBuffer;
      v20 = *v30;
      if ( (_BYTE)v20 == 0x80 )
      {
        v31 = *((unsigned __int16 *)v30 + 1);
        if ( v31 >= 0x20 )
        {
          if ( v30[1] )
          {
            p_NicSwitchHwCapabilities = &a1->NicSwitchHwCapabilities;
            if ( v15 != 1073872976 )
              p_NicSwitchHwCapabilities = &a1->NicSwitchCurrentCapabilities;
            v23 = 132LL;
            if ( (unsigned __int16)v31 < 0x84u )
              v23 = *((unsigned __int16 *)v30 + 1);
            v22 = a2->StatusBuffer;
            v24 = p_NicSwitchHwCapabilities;
            goto LABEL_38;
          }
        }
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_86;
      v28 = 52;
      goto LABEL_85;
    case 1073872978:
    case 1073872980:
      v14 = a2->SourceHandle;
      v15 = a2->StatusCode;
      v16 = a2->StatusBufferSize;
      if ( *(_BYTE *)v14 != 5 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v17 = 46;
LABEL_70:
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_dq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v13,
            26,
            v17,
            (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
            v15,
            (char)a1);
          goto LABEL_86;
        }
        goto LABEL_86;
      }
      v13 = v14[2];
      if ( *(_BYTE *)(v13 + 100) <= 6u && (*(_BYTE *)(v13 + 100) != 6 || *(_BYTE *)(v13 + 101) < 0x59u) )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v17 = 47;
          goto LABEL_70;
        }
LABEL_86:
        a1->LockThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v10);
        return;
      }
      if ( v16 < 0xC )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = 48;
LABEL_74:
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_dDq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v13,
            26,
            v18,
            (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
            v15,
            v16,
            (char)a1);
        }
        goto LABEL_86;
      }
      v19 = (unsigned __int8 *)a2->StatusBuffer;
      v20 = *v19;
      if ( (_BYTE)v20 != 0x80 || *((_WORD *)v19 + 1) < 0xCu || !v19[1] )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = 49;
LABEL_85:
          WPP_RECORDER_SF_dDDDq(*((_QWORD *)WPP_GLOBAL_Control + 8), v20, v15, v28);
        }
        goto LABEL_86;
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
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, a1, 8u);
      if ( HigherFilterWithPnpRef )
      {
        while ( 1 )
        {
          v26 = KeAcquireSpinLockRaiseToDpc(&HigherFilterWithPnpRef->Lock);
          HigherFilterWithPnpRef->LockThread = KeGetCurrentThread();
          if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline()
             ? (HigherFilterWithPnpRef->Flags & 0x2000) == 0
             : (HigherFilterWithPnpRef->Flags & 0x2000) == 0 )
          {
            break;
          }
          HigherFilterWithPnpRef->LockThread = 0LL;
          KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v26);
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
        if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
          HigherFilterWithPnpRef->Flags |= 0x2000u;
        else
          HigherFilterWithPnpRef->Flags |= 0x2000u;
        HigherFilterWithPnpRef->LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&HigherFilterWithPnpRef->Lock);
        switch ( StatusCode )
        {
          case 1073807383:
            if ( StatusBuffer && StatusBufferSize >= 0x28 )
            {
              MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
              v39 = *((_DWORD *)StatusBuffer + 1);
              if ( MediaConnectState != v39 )
              {
                if ( v39 == MediaConnectStateConnected )
                {
                  v50 = 1;
                }
                else
                {
                  v40 = v53;
                  if ( MediaConnectState == MediaConnectStateConnected )
                    v40 = 1;
                  v53 = v40;
                }
              }
              HigherFilterWithPnpRef->MediaConnectState = v39;
              HigherFilterWithPnpRef->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
              HigherFilterWithPnpRef->RcvLinkSpeed = StatusBuffer[3];
              HigherFilterWithPnpRef->XmitLinkSpeed = StatusBuffer[2];
              HigherFilterWithPnpRef->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
              HigherFilterWithPnpRef->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
            }
            goto LABEL_105;
          case 1073872902:
            v41 = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, StatusBuffer, StatusBufferSize);
LABEL_130:
            if ( !v41 )
              break;
LABEL_105:
            ndisFIndicateStatusToFilter(HigherFilterWithPnpRef, a2);
            if ( v53 )
              ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, HigherFilterWithPnpRef);
            if ( v50 )
              ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, HigherFilterWithPnpRef);
            break;
          case 1073938515:
            ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, a2);
            goto LABEL_105;
          case 1073938513:
            if ( a2->StatusBufferSize < 4 )
              goto LABEL_105;
            if ( LODWORD(a2->NdisReserved[2]) )
            {
              p_WOLPatternList = &HigherFilterWithPnpRef->WOLPatternList;
              Next = HigherFilterWithPnpRef->WOLPatternList.Next;
              if ( !Next )
                goto LABEL_105;
              while ( 1 )
              {
                v44 = Next->Next;
                if ( LODWORD(Next[5].Next) == *(_DWORD *)a2->StatusBuffer )
                  break;
                p_WOLPatternList = Next;
                Next = Next->Next;
                if ( !v44 )
                  goto LABEL_105;
              }
LABEL_120:
              p_WOLPatternList->Next = v44;
              ExFreePoolWithTag(Next, 0);
              --LODWORD(a2->NdisReserved[2]);
              goto LABEL_105;
            }
            break;
          case 1073938514:
            if ( a2->StatusBufferSize < 4 )
              goto LABEL_105;
            if ( LODWORD(a2->NdisReserved[2]) )
            {
              p_WOLPatternList = &HigherFilterWithPnpRef->PMProtocolOffloadList;
              Next = HigherFilterWithPnpRef->PMProtocolOffloadList.Next;
              if ( !Next )
                goto LABEL_105;
              while ( 1 )
              {
                v44 = Next->Next;
                if ( LODWORD(Next[5].Next) == *(_DWORD *)a2->StatusBuffer )
                  goto LABEL_120;
                p_WOLPatternList = Next;
                Next = Next->Next;
                if ( !v44 )
                  goto LABEL_105;
              }
            }
            break;
          default:
            if ( (unsigned int)(StatusCode - 1074073600) > 1 )
              goto LABEL_105;
            v41 = ndisFIndicateTimestampChange(HigherFilterWithPnpRef, StatusCode, StatusBuffer, StatusBufferSize);
            goto LABEL_130;
        }
        KeAcquireSpinLockAtDpcLevel(&HigherFilterWithPnpRef->Lock);
        HigherFilterWithPnpRef->LockThread = KeGetCurrentThread();
        if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
          HigherFilterWithPnpRef->Flags &= ~0x2000u;
        else
          HigherFilterWithPnpRef->Flags &= ~0x2000u;
        HigherFilterWithPnpRef->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v26);
        ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 8u);
        return;
      }
      v52 = KfRaiseIrql(2u);
      v45 = v52;
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
        v45 = v52;
      }
      Miniport->SyncFlags = SyncFlags | 1;
      Miniport->StatusProcessingThread = KeGetCurrentThread();
      v47 = StatusBufferSize;
      if ( StatusCode != 1073807383 || !StatusBuffer || StatusBufferSize < 0x28 )
        goto LABEL_153;
      v48 = Miniport->MediaConnectState;
      v49 = *((_DWORD *)StatusBuffer + 1);
      if ( v48 == v49 )
        goto LABEL_152;
      if ( v48 == MediaConnectStateConnected )
      {
        a2->Flags |= 2u;
        ndisIndicateStatusInternal(Miniport, a2, 2u);
LABEL_147:
        ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
        goto LABEL_148;
      }
      if ( v49 == 1 )
      {
        a2->Flags |= 2u;
        v50 = 1;
        goto LABEL_146;
      }
LABEL_152:
      v47 = StatusBufferSize;
LABEL_153:
      a2->Flags |= 2u;
      if ( StatusCode != 1073872902 )
        goto LABEL_146;
      if ( v47 < 0x70
        || *(_BYTE *)StatusBuffer != 0xA7
        || *((_WORD *)StatusBuffer + 1) < 0x70u
        || !*((_BYTE *)StatusBuffer + 1) )
      {
        goto LABEL_160;
      }
      if ( !Miniport->Offload )
      {
        ndisMAllocateMiniportOffload(Miniport);
LABEL_160:
        ndisMReleaseStInLockAndSpinLock(Miniport, v45);
        return;
      }
LABEL_146:
      ndisIndicateStatusInternal(Miniport, a2, 2u);
      if ( v53 )
        goto LABEL_147;
LABEL_148:
      if ( v50 )
        ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
      Miniport->SyncFlags &= ~1u;
      Miniport->StatusProcessingThread = 0LL;
      Miniport->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&Miniport->Lock);
      KeLowerIrql(v45);
      return;
    default:
      goto LABEL_39;
  }
}
