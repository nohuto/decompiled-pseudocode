/*
 * XREFs of ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0
 * Callers:
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14002F320 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002F410 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1400403A0 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140040E30 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400CA184 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        char a4)
{
  int PcwDatapathCycleMask; // ebp
  unsigned int v5; // r14d
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  __int64 v8; // rax
  _NDIS_OBJECT_HEADER *SendNetBufferListsCompleteObject; // rdi
  void (__fastcall *SendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // r15
  void *SendNetBufferListsCompleteContext; // r12
  NDIS_NBL_TRACKER_HANDLE__ *SendNetBufferListsCompleteTracker; // rdi
  unsigned int v13; // r8d
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdx
  __int64 v15; // r15
  __int64 v16; // r9
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  struct _NET_BUFFER_LIST *Alignment; // r15
  unsigned __int64 v21; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdx
  _NET_BUFFER_LIST **v26; // rbx
  _NET_BUFFER_LIST *v27; // rdx
  _NDIS_OBJECT_HEADER *v28; // r14
  __int64 v29; // rsi
  _NET_BUFFER_LIST *v30; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v31; // rax
  __int64 ChildRefCount; // r8
  _NET_BUFFER_LIST *Scratch; // rsi
  _NET_BUFFER_LIST *v34; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v35; // rax
  __int64 v36; // r8
  _NET_BUFFER_LIST *v37; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v38; // rax
  __int64 v39; // r8
  _NET_BUFFER_LIST *v40; // rbx
  KIRQL CurrentIrql; // al
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned int v45; // eax
  char *v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  int v49; // ecx
  KSPIN_LOCK *p_FirstPendingPacket; // rbx
  KIRQL v51; // di
  unsigned __int16 *p_Processor; // rcx
  unsigned __int16 *v53; // rdx
  __int64 v54; // [rsp+30h] [rbp-D8h]
  char v55; // [rsp+40h] [rbp-C8h]
  KIRQL v56; // [rsp+41h] [rbp-C7h]
  char v57; // [rsp+44h] [rbp-C4h]
  __int64 v58; // [rsp+48h] [rbp-C0h]
  unsigned int Number; // [rsp+50h] [rbp-B8h]
  __int64 v60; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v61; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+60h] [rbp-A8h]
  wchar_t *Buffer; // [rsp+68h] [rbp-A0h]
  NDIS_NBL_TRACKER_HANDLE__ *v64; // [rsp+70h] [rbp-98h]
  unsigned __int64 LowLimit; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 HighLimit; // [rsp+80h] [rbp-88h] BYREF
  _QWORD Parameter[5]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp-58h]
  int v69; // [rsp+B4h] [rbp-54h]
  _QWORD v70[10]; // [rsp+B8h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v73; // [rsp+110h] [rbp+8h]
  unsigned int v74; // [rsp+110h] [rbp+8h]

  LOWORD(PcwDatapathCycleMask) = 0;
  Buffer = 0LL;
  v5 = a3;
  v7 = a1;
  Number = -1;
  if ( a1->PcwDatapathEventMask || a1->PcwDatapathCycleMask )
  {
    PcwDatapathCycleMask = a1->PcwDatapathCycleMask;
    Buffer = a1->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = a1->Reserved4.Buffer;
  }
  v8 = *(unsigned int *)ndisNblTrackerMode;
  v56 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    SendNetBufferListsCompleteTracker = a1->Next.SendNetBufferListsCompleteTracker;
    v13 = a3 & 1;
    v57 = v13;
    if ( a4 )
      NblTracker = a1->NblTracker;
    else
      NblTracker = 0LL;
    v15 = ndisNblTrackerEpoch;
    v16 = 0LL;
    v64 = NblTracker;
    v17 = 0LL;
    v60 = 0LL;
    v58 = 0LL;
    v55 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        (unsigned __int64)a2,
        (unsigned __int64)NblTracker,
        0x93u,
        SendNetBufferListsCompleteTracker,
        v13);
      LOBYTE(v13) = v57;
      v16 = 0LL;
    }
    v18 = (unsigned __int64)SendNetBufferListsCompleteTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((unsigned __int8)SendNetBufferListsCompleteTracker & 1) != 0 )
    {
      v8 = 2 * v15;
      v19 = *(_QWORD *)(((unsigned __int64)SendNetBufferListsCompleteTracker & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v18 = (2 * v15) ^ ((unsigned __int64)SendNetBufferListsCompleteTracker ^ (2 * v15)) & 0xFFFFFFFFFFFFFFFDuLL;
    }
    else
    {
      v19 = (unsigned __int64)SendNetBufferListsCompleteTracker & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v62 = v19;
    Alignment = a2;
    if ( a2 )
    {
      while ( 1 )
      {
        v21 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v21 )
        {
          if ( v21 )
          {
            if ( (v21 & 4) != 0 )
              goto LABEL_99;
          }
          else if ( !Alignment->SourceHandle )
          {
            v48 = (unsigned __int64)v64 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( ((unsigned __int8)v64 & 1) != 0 )
              v48 = *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            Alignment->SourceHandle = (void *)v48;
          }
          SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            LODWORD(NblTracker) = *SourceHandle;
            if ( (unsigned __int8)((_BYTE)NblTracker - 17) <= 1u || (_BYTE)NblTracker == 5 )
            {
              if ( SourceHandle != (unsigned __int8 *)v19 || Alignment->ParentNetBufferList )
              {
                ++v17;
                v8 = v18;
              }
              else
              {
                ++v16;
                v8 = 24LL;
                v58 = v16;
                ++v17;
              }
              goto LABEL_28;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v54) = *SourceHandle;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0x1Bu,
                0xCu,
                (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
                (char)Alignment,
                v54);
LABEL_123:
              v16 = v58;
              v19 = v62;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(NblTracker) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)NblTracker,
              27,
              11,
              (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
              (char)Alignment);
            goto LABEL_123;
          }
LABEL_99:
          v8 = v18 | 4;
LABEL_28:
          Alignment->NetBufferListInfo[27] = (void *)v8;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v23 = v60 - v17;
        LOBYTE(v13) = v57;
        v61 = v60 - v17;
        if ( (v21 & 1) == 0 || !v23 )
          goto LABEL_34;
        if ( v57 || v55 )
        {
          v8 = 16 * ((v21 >> 1) & 1);
          NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)(v8 + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( !v57 )
            goto LABEL_74;
          goto LABEL_33;
        }
        v55 = 1;
        CurrentIrql = KeGetCurrentIrql();
        v23 = v61;
        if ( CurrentIrql == 2 )
        {
          LOBYTE(v13) = 1;
          v57 = 1;
          NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_33:
          v8 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(*(_QWORD *)NblTracker + (unsigned int)v8) += v23;
          goto LABEL_34;
        }
        LOBYTE(v13) = 0;
        v8 = 16 * ((v21 >> 1) & 1);
        v57 = 0;
        NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)(v8 + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_74:
        _InterlockedAdd64((volatile signed __int64 *)NblTracker + 1, v23);
LABEL_34:
        v16 = v58;
        v19 = v62;
        v60 = v17;
        if ( !Alignment )
        {
          v7 = a1;
          v5 = a3;
          break;
        }
      }
    }
    v24 = v17 - v16;
    if ( (v18 & 1) == 0 || !v24 )
      goto LABEL_4;
    if ( (_BYTE)v13 || v55 )
    {
      v8 = 16 * ((v18 >> 1) & 1);
      v25 = v8 + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !(_BYTE)v13 )
        goto LABEL_42;
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v8 = 16 * ((v18 >> 1) & 1);
        v25 = v8 + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_42:
        _InterlockedAdd64((volatile signed __int64 *)(v25 + 8), v24);
        goto LABEL_4;
      }
      v25 = 16 * ((v18 >> 1) & 1) + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    v8 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(*(_QWORD *)v25 + (unsigned int)v8) += v24;
  }
LABEL_4:
  if ( byte_1401278B0 )
  {
    v8 = (__int64)a2;
    if ( a2 )
    {
      do
      {
        *(_QWORD *)(v8 + 248) = 0LL;
        v8 = *(_QWORD *)v8;
      }
      while ( v8 );
    }
  }
  if ( (PcwDatapathCycleMask & 0x100) != 0 )
  {
    if ( (v5 & 1) == 0 )
      v56 = KfRaiseIrql(2u);
    Number = KeGetPcr()->Prcb.Number;
    v8 = __rdtsc();
    *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData + 368) = v8;
  }
  SendNetBufferListsCompleteObject = v7->Next.SendNetBufferListsCompleteObject;
  SendNetBufferListsCompleteHandler = v7->Next.SendNetBufferListsCompleteHandler;
  SendNetBufferListsCompleteContext = v7->Next.SendNetBufferListsCompleteContext;
  if ( SendNetBufferListsCompleteObject->Type == 17 )
    goto LABEL_10;
  if ( (v5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    LODWORD(v8) = KeGetPcr()->Prcb.Number;
    v26 = (_NET_BUFFER_LIST **)v70;
    v73 = v8;
    v70[2] = 0LL;
    v70[0] = a2;
    v70[1] = a2;
    a2->Scratch = 0LL;
    a2->ChildRefCount = v5;
    while ( SendNetBufferListsCompleteObject->Type == 5 )
    {
      v27 = *v26;
      if ( !*v26 )
        break;
      v28 = SendNetBufferListsCompleteObject;
      v29 = *(_QWORD *)&SendNetBufferListsCompleteObject[106].Type + 96 * v8;
      if ( *(_BYTE *)(v29 + 40) )
      {
        *v26 = 0LL;
        do
        {
          v31 = ndisVerifierNdisDispatch;
          ChildRefCount = (unsigned int)v27->ChildRefCount;
          Scratch = (_NET_BUFFER_LIST *)v27->Scratch;
          v27->ChildRefCount = 0;
          if ( v31
            && SendNetBufferListsCompleteObject->Type == 5
            && *(_QWORD *)&SendNetBufferListsCompleteObject[194].Type )
          {
            (*((void (__fastcall **)(void *, _NET_BUFFER_LIST *, _QWORD))v31 + 13))(
              SendNetBufferListsCompleteContext,
              v27,
              0LL);
          }
          else
          {
            SendNetBufferListsCompleteHandler(SendNetBufferListsCompleteContext, v27, ChildRefCount);
          }
          v27 = Scratch;
        }
        while ( Scratch );
        break;
      }
      *(_BYTE *)(v29 + 40) = 1;
      v30 = *v26;
      *v26 = 0LL;
      if ( v30 )
      {
        do
        {
          v38 = ndisVerifierNdisDispatch;
          v39 = (unsigned int)v30->ChildRefCount;
          v40 = (_NET_BUFFER_LIST *)v30->Scratch;
          v30->ChildRefCount = 0;
          if ( v38
            && SendNetBufferListsCompleteObject->Type == 5
            && *(_QWORD *)&SendNetBufferListsCompleteObject[194].Type )
          {
            (*((void (__fastcall **)(void *, _NET_BUFFER_LIST *, _QWORD))v38 + 13))(
              SendNetBufferListsCompleteContext,
              v30,
              0LL);
          }
          else
          {
            SendNetBufferListsCompleteHandler(SendNetBufferListsCompleteContext, v30, v39);
          }
          v30 = v40;
        }
        while ( v40 );
      }
      v8 = v73;
      v26 = (_NET_BUFFER_LIST **)(v29 + 24);
      *(_BYTE *)(v29 + 40) = 0;
      SendNetBufferListsCompleteObject = *(_NDIS_OBJECT_HEADER **)&SendNetBufferListsCompleteObject[122].Type;
      SendNetBufferListsCompleteHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))&v28[116].Type;
      SendNetBufferListsCompleteContext = *(void **)&v28[118].Type;
    }
    v34 = *v26;
    if ( *v26 )
    {
      *v26 = 0LL;
      do
      {
        v35 = ndisVerifierNdisDispatch;
        v36 = (unsigned int)v34->ChildRefCount;
        v37 = (_NET_BUFFER_LIST *)v34->Scratch;
        v34->ChildRefCount = 0;
        if ( v35
          && SendNetBufferListsCompleteObject->Type == 5
          && *(_QWORD *)&SendNetBufferListsCompleteObject[194].Type )
        {
          (*((void (__fastcall **)(void *, _NET_BUFFER_LIST *, _QWORD))v35 + 13))(
            SendNetBufferListsCompleteContext,
            v34,
            0LL);
        }
        else
        {
          SendNetBufferListsCompleteHandler(SendNetBufferListsCompleteContext, v34, v36);
        }
        v34 = v37;
      }
      while ( v37 );
    }
  }
  else
  {
    if ( v7->Header.Type != 5 )
    {
LABEL_10:
      SendNetBufferListsCompleteHandler(SendNetBufferListsCompleteContext, a2, v5);
      goto LABEL_11;
    }
    v74 = Size;
    v42 = KeGetPcr()->Prcb.Number << 12;
    v43 = *(_QWORD *)(v42 + qword_1401270F8);
    LowLimit = v43;
    v44 = *(_QWORD *)(v42 + qword_1401270F0);
    HighLimit = v44;
    if ( v43 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v44 )
    {
      IoGetStackLimits(&LowLimit, &HighLimit);
      v43 = LowLimit;
    }
    if ( (unsigned __int64)&retaddr - v43 < v74 )
    {
      v49 = 24576;
      v69 = 0;
      Parameter[0] = SendNetBufferListsCompleteObject;
      Parameter[1] = SendNetBufferListsCompleteContext;
      Parameter[2] = SendNetBufferListsCompleteHandler;
      Parameter[3] = a2;
      Parameter[4] = 0LL;
      v68 = v5;
      if ( (unsigned int)Size > 0x6000 )
        v49 = Size;
      if ( KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>,
             Parameter,
             v49,
             0,
             0LL) < 0 )
      {
        if ( *(_DWORD *)ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            a2,
            (struct NDIS_NBL_TRACKER_HANDLE__ *)v7->Reserved30,
            0xA0uLL,
            1u,
            0);
        p_FirstPendingPacket = (KSPIN_LOCK *)&v7->FirstPendingPacket;
        v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v7->FirstPendingPacket);
        v7->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
        p_Processor = &v7->WakeUpDpcTimer.Timer.Processor;
        v53 = *(unsigned __int16 **)&v7->WakeUpDpcTimer.Timer.Processor;
        if ( v53 )
        {
          do
          {
            p_Processor = v53;
            v53 = *(unsigned __int16 **)v53;
          }
          while ( v53 );
          p_FirstPendingPacket = (KSPIN_LOCK *)&v7->FirstPendingPacket;
        }
        *(_QWORD *)p_Processor = a2;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v7);
        v7->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLock(p_FirstPendingPacket, v51);
      }
    }
    else
    {
      if ( !ndisVerifierNdisDispatch
        || SendNetBufferListsCompleteObject->Type != 5
        || !*(_QWORD *)&SendNetBufferListsCompleteObject[194].Type )
      {
        goto LABEL_10;
      }
      (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch + 13))(
        SendNetBufferListsCompleteContext,
        a2,
        0LL);
    }
  }
LABEL_11:
  if ( (PcwDatapathCycleMask & 0x100) != 0 )
  {
    v45 = Number;
    if ( Number == -1 )
      v45 = KeGetPcr()->Prcb.Number;
    v46 = (char *)Buffer + ndisPcwPerCpuDataStride * v45 + ndisPcwOffsetToPerCpuData;
    v47 = __rdtsc();
    *((_QWORD *)v46 + 21) += (((unsigned __int64)HIDWORD(v47) << 32) | (unsigned int)v47) - *((_QWORD *)v46 + 46);
    *((_QWORD *)v46 + 46) = 0LL;
    if ( v56 != 2 )
      KeLowerIrql(v56);
  }
}
