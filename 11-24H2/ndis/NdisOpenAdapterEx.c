/*
 * XREFs of NdisOpenAdapterEx @ 0x140182720
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140050980 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140052500 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140056EA0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x14005D4B0 (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140060A00 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007BBB0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007BD10 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009C094 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisRegisterCommonOpenTriageData @ 0x1400B8298 (ndisRegisterCommonOpenTriageData.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1401603A0 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x140160F70 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140166770 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisFindRootDevice @ 0x140175C60 (ndisFindRootDevice.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
  struct PNDIS_PER_PROCESSOR_SLOT__ *OpenBlock; // rax
  __int64 v19; // rdx
  TriageData *v20; // r8
  unsigned int v21; // ecx
  unsigned int MediumArraySize; // edx
  unsigned int FrameTypeArraySize; // eax
  unsigned int i; // r8d
  __int64 v25; // rdx
  KIRQL v26; // al
  KSPIN_LOCK *p_Lock; // rdi
  KIRQL v28; // al
  void **p_MiniportThread; // rbx
  int v30; // r12d
  unsigned int *v31; // rbx
  unsigned int *v32; // rcx
  int v33; // edx
  struct _NDIS_OPEN_BLOCK **v34; // rdx
  KIRQL v35; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  void (__fastcall **BusInterface)(_QWORD); // rcx
  struct _NDIS_OPEN_BLOCK **v38; // rbx
  KIRQL v39; // al
  KIRQL v40; // bl
  int v41; // [rsp+20h] [rbp-51h]
  char v42[8]; // [rsp+30h] [rbp-41h]
  int v43; // [rsp+50h] [rbp-21h] BYREF
  char v44; // [rsp+54h] [rbp-1Dh]
  char v45; // [rsp+55h] [rbp-1Ch]
  KIRQL v46; // [rsp+56h] [rbp-1Bh]
  struct _NDIS_MINIPORT_BLOCK *v47; // [rsp+58h] [rbp-19h] BYREF
  int v48; // [rsp+60h] [rbp-11h]
  const struct _UNICODE_STRING *v49; // [rsp+68h] [rbp-9h] BYREF
  struct _NDIS_OPEN_BLOCK **Pool2; // [rsp+70h] [rbp-1h]
  const struct _UNICODE_STRING *v51; // [rsp+78h] [rbp+7h] BYREF
  unsigned int *p_Flags; // [rsp+80h] [rbp+Fh]
  char v53; // [rsp+D0h] [rbp+5Fh]
  NDIS_HANDLE v54; // [rsp+D8h] [rbp+67h]

  v54 = ProtocolBindingContext;
  v5 = NdisBindingHandle;
  v47 = 0LL;
  Pool2 = 0LL;
  v49 = 0LL;
  v8 = 0LL;
  *NdisBindingHandle = 0LL;
  v53 = 0;
  v44 = 0;
  v43 = -1073741823;
  LOBYTE(v48) = 0;
  v45 = 0;
  if ( !NdisProtocolHandle )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(ProtocolBindingContext) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)ProtocolBindingContext,
        6,
        63,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids);
    }
    return -1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)ProtocolBindingContext,
      (__int64)OpenParameters,
      0x40u,
      v41,
      (char)NdisProtocolHandle,
      (unsigned __int16 *)NdisProtocolHandle + 36,
      &OpenParameters->AdapterName->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = *((_DWORD *)NdisProtocolHandle + 16) & 0x20000000;
  if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
  {
    v14 = v47;
    v12 = v43;
    goto LABEL_90;
  }
  if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 9u) )
  {
    v15 = (const struct _UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 54);
    v53 = 1;
    v51 = v15;
    if ( v15 )
    {
      v16 = (const struct _UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 55);
      v14 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisProtocolHandle + 57);
      v49 = v16;
      v47 = v14;
    }
    else
    {
      ndisFindRootDevice(OpenParameters->AdapterName, v11 != 0, &v51, &v49, &v47, 45);
      v14 = v47;
      v15 = v51;
      v16 = v49;
      v17 = (unsigned __int8)v48;
      if ( v47 )
        v17 = 1;
      v48 = v17;
    }
    *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
    if ( !v14 )
    {
      v12 = -1073676282;
      v43 = -1073676282;
      *NdisBindingHandle = 0LL;
      goto LABEL_91;
    }
    OpenBlock = ndisAllocateOpenBlock(v14, (struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 1);
    v8 = (struct _NDIS_OPEN_BLOCK *)OpenBlock;
    if ( !OpenBlock )
    {
      v12 = -1073741670;
      v43 = -1073741670;
      *NdisBindingHandle = 0LL;
      goto LABEL_91;
    }
    if ( (v14->PnPFlags & 0x100) != 0 )
    {
      v12 = -1073676282;
      v43 = -1073676282;
      *NdisBindingHandle = 0LL;
      goto LABEL_91;
    }
    if ( !v14->InitMode && v14->State != NdisMiniportPaused && v14->MajorNdisVersion >= 6u )
    {
      v12 = -1073676282;
      v43 = -1073676282;
      *NdisBindingHandle = 0LL;
      goto LABEL_91;
    }
    if ( !v14->Miniport5HasNdis6Component )
      v14->Miniport5HasNdis6Component = 1;
    *((_QWORD *)OpenBlock + 51) = v15;
    *((_QWORD *)OpenBlock + 52) = v16;
    *((_QWORD *)OpenBlock + 2) = v14;
    *((_QWORD *)OpenBlock + 3) = NdisProtocolHandle;
    *((_QWORD *)OpenBlock + 4) = v54;
    if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
    {
      v43 = ndisRegisterCommonOpenTriageData((__int64)v8, v19, v20);
      v12 = v43;
      if ( v43 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v42 = v43;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            6u,
            0x41u,
            (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
            (char)v8,
            *(_QWORD *)v42);
        }
        goto LABEL_31;
      }
    }
    *NdisBindingHandle = v8;
    v21 = 0;
    MediumArraySize = OpenParameters->MediumArraySize;
    if ( (v14->MacOptions & 0x80000001) == 0x80000001 )
    {
      if ( MediumArraySize )
      {
        do
        {
          if ( OpenParameters->MediumArray[v21] == NdisMediumWan )
            break;
          ++v21;
        }
        while ( v21 < MediumArraySize );
      }
    }
    else if ( MediumArraySize )
    {
      MediaType = v14->MediaType;
      do
      {
        if ( OpenParameters->MediumArray[v21] == MediaType )
          break;
        ++v21;
      }
      while ( v21 < MediumArraySize );
    }
    if ( v21 == MediumArraySize )
    {
      v12 = -1073676263;
      *NdisBindingHandle = 0LL;
      v43 = -1073676263;
      goto LABEL_91;
    }
    *OpenParameters->SelectedMediumIndex = v21;
    FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
    if ( FrameTypeArraySize > 4 )
    {
      v12 = -1073741670;
      *NdisBindingHandle = 0LL;
      v43 = -1073741670;
      goto LABEL_91;
    }
    v8->FrameTypeArraySize = FrameTypeArraySize;
    for ( i = 0;
          i < OpenParameters->FrameTypeArraySize;
          v8->FrameTypeArray[v25] = __ROR2__(OpenParameters->FrameTypeArray[v25], 8) )
    {
      v25 = i++;
    }
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13)) || !ndisDriverVerifierNdisFlagEnabled() )
      {
LABEL_54:
        if ( v14->MajorNdisVersion < 6u )
          goto LABEL_61;
        if ( ndisNblContextVerifierMode == 1 )
        {
          if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13))
            || !ndisDriverVerifierNdisFlagEnabled() )
          {
LABEL_61:
            v26 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
            v8->NextGlobalOpen = ndisGlobalOpenList;
            ndisGlobalOpenList = v8;
            v44 = 1;
            KeReleaseSpinLock(&ndisGlobalOpenListLock, v26);
            p_Lock = &v14->Lock;
            v28 = KeAcquireSpinLockRaiseToDpc(&v14->Lock);
            p_MiniportThread = &v14->MiniportThread;
            v14 = v47;
            v46 = v28;
            *p_MiniportThread = KeGetCurrentThread();
            p_Flags = &v14->Flags;
            if ( (mem::ReadNoFence<unsigned long,void>(&v14->Flags) & 0x40000) == 0 )
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
                v14 = v47;
                v5 = NdisBindingHandle;
              }
              v14->LockAcquired = 1;
              v14 = v47;
              v47->LockThread = KeGetCurrentThread();
            }
            ndisMOpenAdapter(&v43, v8, v14);
            v30 = v43;
            if ( v43 )
            {
              v31 = p_Flags;
            }
            else
            {
              v45 = 1;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  v43 + 6,
                  v43 + 66,
                  (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
                  (char)v8,
                  (char)NdisProtocolHandle,
                  v14);
              v31 = p_Flags;
              if ( (mem::ReadNoFence<unsigned long,void>(p_Flags) & 0x20000000) == 0
                && (mem::ReadNoFence<unsigned long,void>(v32) & 0x20000) == 0 )
              {
                ndisMSwapOpenHandlers(v14, 2u);
              }
              if ( (mem::ReadNoFence<unsigned long,void>(v31) & 0x20000) != 0 && *((_QWORD *)NdisProtocolHandle + 25) )
              {
                Pool2 = (struct _NDIS_OPEN_BLOCK **)ExAllocatePool2(64LL, 40LL, 1769423950LL);
                if ( Pool2 )
                {
                  ndisMReferenceOpen((__int64)v8, 0);
                  _InterlockedIncrement(&v8->PendingAfNotifications);
                  v34 = Pool2;
                  v14 = v47;
                  v30 = v43;
                  *Pool2 = v8;
                  v34[3] = (struct _NDIS_OPEN_BLOCK *)ndisMFinishQueuedPendingOpen;
                  v34[4] = (struct _NDIS_OPEN_BLOCK *)v34;
                  v34[1] = 0LL;
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v33) = 2;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v33,
                    19,
                    67,
                    (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
                    (char)v8);
                }
              }
            }
            if ( (mem::ReadNoFence<unsigned long,void>(v31) & 0x40000) == 0 )
            {
              v14->LockAcquired = 0;
              v14->LockThread = 0LL;
            }
            v35 = v46;
            v14->MiniportThread = 0LL;
            KeReleaseSpinLock(p_Lock, v35);
            Ndis::BindEngine::BeginPolicyUpdates(&v14->BindEngine);
            CurrentLink = Ndis::BindEngine::GetCurrentLink(&v14->BindEngine);
            v8->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
            if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, v8) )
              v30 = -1073741670;
            v12 = v30;
            v43 = v30;
            Ndis::BindEngine::EndPolicyUpdates(&v14->BindEngine);
            if ( !v30 )
            {
              if ( (v14->PnPFlags & 0x2000) != 0 )
              {
                BusInterface = (void (__fastcall **)(_QWORD))v14->BusInterface;
                if ( BusInterface )
                  BusInterface[4](BusInterface[1]);
              }
              ndisPktMonOpenRegister((__int64)v8);
              v38 = Pool2;
              *((_QWORD *)BindContext + 2) = v8;
              if ( v38 )
              {
                (*((void (__fastcall **)(void *, _QWORD))NdisProtocolHandle + 14))(v8->ProtocolBindingContext, 0LL);
                ndisUpdateCheckForLoopbackFlag(v14);
                ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v38 + 1));
                v12 = 259;
              }
              goto LABEL_98;
            }
LABEL_31:
            if ( v12 == 259 )
            {
LABEL_98:
              ndisDereferencePackage((PVOID *)&ndisPkgs);
              if ( (_BYTE)v48 )
                ndisDereferenceMiniport(v14, 0x2Du);
              goto LABEL_100;
            }
LABEL_90:
            *v5 = 0LL;
            if ( !v53 )
            {
LABEL_92:
              if ( v44 )
                ndisRemoveOpenFromGlobalList(v8);
              if ( v8 )
              {
                if ( v45 )
                {
                  v39 = KeAcquireSpinLockRaiseToDpc(&v14->Lock);
                  v14->MiniportThread = KeGetCurrentThread();
                  v40 = v39;
                  ndisMDereferenceOpenFromFailedCreationLocked(v8);
                  v14->MiniportThread = 0LL;
                  KeReleaseSpinLock(&v14->Lock, v40);
                  v14 = v47;
                  v12 = v43;
                }
                ndisFreeOpenBlock(v8);
                LOBYTE(v8) = 0;
              }
              goto LABEL_98;
            }
LABEL_91:
            ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0, 9u, MediaType);
            goto LABEL_92;
          }
        }
        else if ( ndisNblContextVerifierMode != 2 )
        {
          goto LABEL_61;
        }
        v14 = v47;
        v8->OpenFlags |= 0x80000000;
        goto LABEL_61;
      }
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
      goto LABEL_54;
    }
    v14 = v47;
    v8->OpenFlags |= 1u;
    goto LABEL_54;
  }
  *NdisBindingHandle = 0LL;
  v12 = -1073676286;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  LOBYTE(v14) = (_BYTE)v47;
LABEL_100:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      6u,
      0x44u,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)NdisProtocolHandle,
      (char)v14,
      (char)v8,
      v12);
  return v12;
}
