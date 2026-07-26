/*
 * XREFs of NdisOpenAdapterEx @ 0x14018CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140016FE0 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140053C40 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x14006B350 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14006E230 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140071B10 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x140078910 (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007C4D0 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400A4F24 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x14014CB3C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x14016C400 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x14016D210 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140173070 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisFindRootDevice @ 0x140183630 (ndisFindRootDevice.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  PNDIS_HANDLE v5; // r13
  struct _NDIS_OPEN_BLOCK *v8; // r14
  int MediaType; // r9d
  int v11; // esi
  NDIS_STATUS v12; // edi
  int v13; // edx
  struct _NDIS_MINIPORT_BLOCK *v14; // rsi
  const struct _UNICODE_STRING *v15; // r12
  const struct _UNICODE_STRING *v16; // rdi
  int v17; // eax
  char v18; // bl
  struct PNDIS_PER_PROCESSOR_SLOT__ *OpenBlock; // rax
  unsigned int v20; // ecx
  unsigned int MediumArraySize; // edx
  unsigned int FrameTypeArraySize; // eax
  unsigned int i; // r8d
  __int64 v24; // rdx
  KIRQL v25; // al
  KSPIN_LOCK *p_Lock; // rbx
  KIRQL v27; // al
  void **p_MiniportThread; // rdi
  int v29; // r12d
  int v30; // edx
  _QWORD *v31; // rdi
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  void (__fastcall **BusInterface)(_QWORD); // rcx
  __int64 v34; // rbx
  KIRQL v35; // al
  KIRQL v36; // bl
  struct _GUID *v37; // [rsp+20h] [rbp-41h]
  char v38; // [rsp+50h] [rbp-11h]
  KIRQL v39; // [rsp+51h] [rbp-10h]
  int v40; // [rsp+54h] [rbp-Dh] BYREF
  int v41; // [rsp+58h] [rbp-9h]
  struct _NDIS_MINIPORT_BLOCK *v42; // [rsp+60h] [rbp-1h] BYREF
  const struct _UNICODE_STRING *v43; // [rsp+68h] [rbp+7h] BYREF
  const struct _UNICODE_STRING *v44; // [rsp+70h] [rbp+Fh] BYREF
  __int64 Pool2; // [rsp+78h] [rbp+17h]
  char v46; // [rsp+C0h] [rbp+5Fh]
  NDIS_HANDLE v47; // [rsp+C8h] [rbp+67h]

  v47 = ProtocolBindingContext;
  v5 = NdisBindingHandle;
  v46 = 0;
  v40 = -1073741823;
  v42 = 0LL;
  *NdisBindingHandle = 0LL;
  v8 = 0LL;
  Pool2 = 0LL;
  v43 = 0LL;
  LOBYTE(v41) = 0;
  v38 = 0;
  if ( !NdisProtocolHandle )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(ProtocolBindingContext) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)ProtocolBindingContext,
        6,
        61,
        (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids);
    }
    return -1073741823;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)ProtocolBindingContext,
      (__int64)OpenParameters,
      0x3Eu,
      (__int64)v37,
      (char)NdisProtocolHandle,
      (unsigned __int16 *)NdisProtocolHandle + 36,
      &OpenParameters->AdapterName->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = *((_DWORD *)NdisProtocolHandle + 16) & 0x20000000;
  if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
  {
    v14 = v42;
    v12 = v40;
    goto LABEL_82;
  }
  if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 9u) )
  {
    v15 = (const struct _UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 54);
    v46 = 1;
    v44 = v15;
    if ( v15 )
    {
      v16 = (const struct _UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 55);
      v14 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisProtocolHandle + 57);
      v43 = v16;
      v42 = v14;
    }
    else
    {
      ndisFindRootDevice(OpenParameters->AdapterName, v11 != 0, &v44, &v43, &v42, 45);
      v14 = v42;
      v15 = v44;
      v16 = v43;
      v17 = (unsigned __int8)v41;
      if ( v42 )
        v17 = 1;
      v41 = v17;
    }
    *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
    if ( !v14 )
      goto LABEL_16;
    OpenBlock = ndisAllocateOpenBlock(v14, (struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 1);
    v8 = (struct _NDIS_OPEN_BLOCK *)OpenBlock;
    if ( !OpenBlock )
    {
      v12 = -1073741670;
      v40 = -1073741670;
      v18 = 0;
      *NdisBindingHandle = 0LL;
      goto LABEL_83;
    }
    if ( (v14->PnPFlags & 0x100) != 0
      || !v14->InitMode && v14->State != NdisMiniportPaused && v14->MajorNdisVersion >= 6u )
    {
LABEL_16:
      v12 = -1073676282;
      v40 = -1073676282;
      v18 = 0;
      *NdisBindingHandle = 0LL;
      goto LABEL_83;
    }
    if ( !v14->Miniport5HasNdis6Component )
      v14->Miniport5HasNdis6Component = 1;
    *((_QWORD *)OpenBlock + 51) = v15;
    *((_QWORD *)OpenBlock + 52) = v16;
    v20 = 0;
    *((_QWORD *)OpenBlock + 2) = v14;
    *((_QWORD *)OpenBlock + 3) = NdisProtocolHandle;
    *((_QWORD *)OpenBlock + 4) = v47;
    *NdisBindingHandle = OpenBlock;
    MediumArraySize = OpenParameters->MediumArraySize;
    if ( (v14->MacOptions & 0x80000001) == 0x80000001 )
    {
      if ( MediumArraySize )
      {
        do
        {
          if ( OpenParameters->MediumArray[v20] == NdisMediumWan )
            break;
          ++v20;
        }
        while ( v20 < MediumArraySize );
      }
    }
    else if ( MediumArraySize )
    {
      MediaType = v14->MediaType;
      do
      {
        if ( OpenParameters->MediumArray[v20] == MediaType )
          break;
        ++v20;
      }
      while ( v20 < MediumArraySize );
    }
    if ( v20 == MediumArraySize )
    {
      v12 = -1073676263;
      *NdisBindingHandle = 0LL;
      v40 = -1073676263;
      v18 = 0;
      goto LABEL_83;
    }
    *OpenParameters->SelectedMediumIndex = v20;
    FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
    if ( FrameTypeArraySize > 4 )
    {
      v12 = -1073741670;
      *NdisBindingHandle = 0LL;
      v40 = -1073741670;
      v18 = 0;
      goto LABEL_83;
    }
    v8->FrameTypeArraySize = FrameTypeArraySize;
    for ( i = 0;
          i < OpenParameters->FrameTypeArraySize;
          v8->FrameTypeArray[v24] = __ROR2__(OpenParameters->FrameTypeArray[v24], 8) )
    {
      v24 = i++;
    }
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13)) || !ndisDriverVerifierNdisFlagEnabled() )
      {
LABEL_46:
        if ( v14->MajorNdisVersion < 6u )
          goto LABEL_53;
        if ( ndisNblContextVerifierMode == 1 )
        {
          if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13))
            || !ndisDriverVerifierNdisFlagEnabled() )
          {
LABEL_53:
            v25 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
            v8->NextGlobalOpen = ndisGlobalOpenList;
            ndisGlobalOpenList = v8;
            KeReleaseSpinLock(&ndisGlobalOpenListLock, v25);
            p_Lock = &v14->Lock;
            v27 = KeAcquireSpinLockRaiseToDpc(&v14->Lock);
            p_MiniportThread = &v14->MiniportThread;
            v14 = v42;
            *p_MiniportThread = KeGetCurrentThread();
            v39 = v27;
            if ( (v14->Flags & 0x40000) == 0 )
            {
              if ( v14->LockAcquired )
              {
                do
                {
                  *p_MiniportThread = 0LL;
                  KeReleaseSpinLockFromDpcLevel(p_Lock);
                  KeStallExecutionProcessor(1u);
                  KeAcquireSpinLockAtDpcLevel(p_Lock);
                  *p_MiniportThread = KeGetCurrentThread();
                }
                while ( v14->LockAcquired );
                v14 = v42;
                v5 = NdisBindingHandle;
              }
              v14->LockAcquired = 1;
              v14 = v42;
              v42->LockThread = KeGetCurrentThread();
            }
            ndisMOpenAdapter(&v40, v8, v14);
            v29 = v40;
            if ( !v40 )
            {
              v38 = 1;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  v40 + 6,
                  v40 + 63,
                  (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
                  (char)v8,
                  (char)NdisProtocolHandle,
                  v14);
              if ( (v14->Flags & 0x20020000) == 0 )
                ndisMSwapOpenHandlers(v14, 2u);
              if ( (v14->Flags & 0x20000) != 0 && *((_QWORD *)NdisProtocolHandle + 25) )
              {
                Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
                v31 = (_QWORD *)Pool2;
                if ( Pool2 )
                {
                  ndisMReferenceOpen((__int64)v8, 0);
                  _InterlockedIncrement(&v8->PendingAfNotifications);
                  v14 = v42;
                  v29 = v40;
                  v31[3] = ndisMFinishQueuedPendingOpen;
                  *v31 = v8;
                  v31[4] = v31;
                  v31[1] = 0LL;
                }
                else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v30) = 2;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v30,
                    19,
                    64,
                    (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
                    (char)v8);
                }
              }
            }
            if ( (v14->Flags & 0x40000) == 0 )
            {
              v14->LockAcquired = 0;
              v14->LockThread = 0LL;
            }
            v14->MiniportThread = 0LL;
            KeReleaseSpinLock(p_Lock, v39);
            Ndis::BindEngine::BeginPolicyUpdates(&v14->BindEngine);
            CurrentLink = Ndis::BindEngine::GetCurrentLink(&v14->BindEngine);
            v8->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
            if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, v8) )
              v29 = -1073741670;
            v12 = v29;
            v40 = v29;
            Ndis::BindEngine::EndPolicyUpdates(&v14->BindEngine);
            if ( !v29 )
            {
              if ( (v14->PnPFlags & 0x2000) != 0 )
              {
                BusInterface = (void (__fastcall **)(_QWORD))v14->BusInterface;
                if ( BusInterface )
                  BusInterface[4](BusInterface[1]);
              }
              ndisPktMonOpenRegister((__int64)v8);
              v34 = Pool2;
              *((_QWORD *)BindContext + 2) = v8;
              if ( v34 )
              {
                (*((void (__fastcall **)(void *, _QWORD))NdisProtocolHandle + 14))(v8->ProtocolBindingContext, 0LL);
                ndisUpdateCheckForLoopbackFlag(v14);
                ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v34 + 8));
                v12 = 259;
              }
              goto LABEL_90;
            }
            if ( v29 == 259 )
            {
LABEL_90:
              ndisDereferencePackage((PVOID *)&ndisPkgs);
              if ( (_BYTE)v41 )
                ndisDereferenceMiniport(v14, 0x2Du);
              goto LABEL_92;
            }
LABEL_82:
            *v5 = 0LL;
            v18 = v46;
            if ( !v46 )
            {
LABEL_84:
              if ( v18 )
                ndisRemoveOpenFromGlobalList(v8);
              if ( v8 )
              {
                if ( v38 )
                {
                  v35 = KeAcquireSpinLockRaiseToDpc(&v14->Lock);
                  v14->MiniportThread = KeGetCurrentThread();
                  v36 = v35;
                  ndisMDereferenceOpenFromFailedCreationLocked(v8);
                  v14->MiniportThread = 0LL;
                  KeReleaseSpinLock(&v14->Lock, v36);
                  v14 = v42;
                  v12 = v40;
                }
                ndisFreeOpenBlock(v8);
                LOBYTE(v8) = 0;
              }
              goto LABEL_90;
            }
LABEL_83:
            ndisDereferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0, 9u, MediaType);
            goto LABEL_84;
          }
        }
        else if ( ndisNblContextVerifierMode != 2 )
        {
          goto LABEL_53;
        }
        v14 = v42;
        v8->OpenFlags |= 0x80000000;
        goto LABEL_53;
      }
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
      goto LABEL_46;
    }
    v14 = v42;
    v8->OpenFlags |= 1u;
    goto LABEL_46;
  }
  *NdisBindingHandle = 0LL;
  v12 = -1073676286;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  LOBYTE(v14) = (_BYTE)v42;
LABEL_92:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      6u,
      0x41u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)NdisProtocolHandle,
      (char)v14,
      (char)v8,
      v12);
  return v12;
}
