/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x1409BBF7C
 * Callers:
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409EB044 (PnpProcessTargetDeviceEvent.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PnpIsChainDereferenced @ 0x14049CB60 (PnpIsChainDereferenced.c)
 *     PipAreDriversLoaded @ 0x1404DD238 (PipAreDriversLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x14071F414 (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14072B5C8 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072B5F8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072B87C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14072B93C (PpProfileQueryHardwareProfileChange.c)
 *     IopEjectDevice @ 0x140731964 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x140731BB0 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x140737F00 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140737F94 (PiProcessQueryRemoveNoFdo.c)
 *     PoGetLightestSystemStateForEject @ 0x140747470 (PoGetLightestSystemStateForEject.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     IopFreeRelationList @ 0x1409BAF04 (IopFreeRelationList.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x1409BB930 (PiEventAreDeviceRelationsExcluded.c)
 *     PnpResizeTargetDeviceBlock @ 0x1409BB9A8 (PnpResizeTargetDeviceBlock.c)
 *     PnpCompileDeviceInstancePaths @ 0x1409BBA78 (PnpCompileDeviceInstancePaths.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1409BBCEC (PnpRecordBlackboxPnpEventInformation.c)
 *     PiDetermineDeleteType @ 0x1409BC51C (PiDetermineDeleteType.c)
 *     PiCheckRemovalPreconditions @ 0x1409BC5EC (PiCheckRemovalPreconditions.c)
 *     PiEventAllocateVetoBuffer @ 0x1409BC64C (PiEventAllocateVetoBuffer.c)
 *     PnpBuildRemovalRelationList @ 0x1409BC6DC (PnpBuildRemovalRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1409BC778 (PiEventRemovalPostSurpriseRemove.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1409BC804 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409BC864 (PiProcessQueryAndCancelRemoval.c)
 *     IopRemoveDeviceRelationsFromList @ 0x1409BCA24 (IopRemoveDeviceRelationsFromList.c)
 *     PiEventBuildPdoList @ 0x1409BCA98 (PiEventBuildPdoList.c)
 *     PnpInvalidateRelationsInList @ 0x1409BCC04 (PnpInvalidateRelationsInList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1409EBFA8 (PnpNotifyUserModeDeviceRemoval.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     IopEnumerateRelations @ 0x140A4EB78 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A649E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140A6CA78 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiRestartRemovalRelations @ 0x140A957DC (PiRestartRemovalRelations.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AAF690 (PnpTrackQueryRemoveDevices.c)
 *     PiLogSurpriseRemoveEvent @ 0x140AB10CC (PiLogSurpriseRemoveEvent.c)
 *     PnpFinalizeVetoedRemove @ 0x140AB1A68 (PnpFinalizeVetoedRemove.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(const void **a1)
{
  const void *v1; // rsi
  unsigned int *v3; // r15
  _QWORD *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  unsigned int v10; // r13d
  GUID *v11; // r8
  __int64 v12; // r8
  int v13; // r9d
  PVOID v14; // rbx
  int v15; // eax
  __int64 VetoBuffer; // rax
  void **v17; // r14
  unsigned int v18; // ebx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  char v24; // al
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int *v28; // r8
  __int64 i; // rbx
  PVOID v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned int *v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  void ***v44; // rax
  __int64 v45; // rcx
  __int64 PendingEjectRelations; // rax
  __int64 v47; // r9
  _QWORD *v48; // rbx
  __int64 v49; // rdx
  char v50; // r8
  bool v51; // dl
  char v52; // cl
  int LightestSystemStateForEject; // eax
  PVOID v54; // [rsp+40h] [rbp-39h] BYREF
  PCWSTR SourceString; // [rsp+48h] [rbp-31h] BYREF
  PVOID v56; // [rsp+50h] [rbp-29h] BYREF
  __int64 v57; // [rsp+58h] [rbp-21h] BYREF
  PVOID Object; // [rsp+60h] [rbp-19h]
  PVOID P; // [rsp+68h] [rbp-11h] BYREF
  __int64 v60; // [rsp+70h] [rbp-9h] BYREF
  __int64 v61; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v63; // [rsp+E0h] [rbp+67h] BYREF
  int v64; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v65; // [rsp+F0h] [rbp+77h] BYREF
  PVOID v66; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *a1;
  SourceString = 0LL;
  v60 = 0LL;
  v57 = 0LL;
  v3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)v1 + 20);
  v5 = 7;
  v54 = 0LL;
  v65 = 0;
  v63 = 0;
  v61 = 0LL;
  v56 = 0LL;
  LOBYTE(v64) = 0;
  v66 = 0LL;
  P = 0LL;
  Object = v4;
  DestinationString = 0LL;
  if ( v4 )
    v6 = *(_QWORD *)(v4[39] + 40LL);
  else
    v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  if ( (unsigned int)(*(_DWORD *)(v6 + 300) - 789) <= 1 )
  {
    v8 = -1073741738;
    goto LABEL_5;
  }
  v15 = PiDetermineDeleteType(v1);
  v5 = v15;
  if ( v15 != 4 )
    PnpRecordBlackboxPnpEventInformation((__int64)v1, v15, 0LL, 1);
  v8 = PiCheckRemovalPreconditions(v5, v1);
  if ( v8 < 0 )
    goto LABEL_5;
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(v6 + 568) - 3) <= 1 )
    {
LABEL_118:
      v8 = 0;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(v6 + 560) & 0x10) == 0 )
    {
      v8 = -2147483608;
      PnpFinalizeVetoedRemove(v1, 8LL, v6 + 40);
      goto LABEL_5;
    }
  }
  else if ( !v5 && !(unsigned int)PipAreDriversLoaded(v6) )
  {
    v8 = PiProcessQueryRemoveNoFdo((__int64)v1);
    goto LABEL_5;
  }
  VetoBuffer = PiEventAllocateVetoBuffer(v5);
  v3 = (unsigned int *)VetoBuffer;
  if ( !VetoBuffer )
  {
    v28 = 0LL;
    v27 = 0LL;
    goto LABEL_49;
  }
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v56) < 0 )
  {
    v27 = *v3;
    v28 = v3 + 2;
LABEL_49:
    PnpFinalizeVetoedRemove(v1, v27, v28);
    v8 = -2147483608;
    goto LABEL_5;
  }
  v17 = (void **)v56;
  v8 = PiEventBuildPdoList((_DWORD)v56, v5, (_DWORD)v1, (unsigned int)&v65, (__int64)&v54, (__int64)&v63, (__int64)&v64);
  if ( v8 >= 0 )
  {
    v23 = PnpResizeTargetDeviceBlock(a1, v5);
    v1 = *a1;
    v8 = v23;
    if ( v23 >= 0 )
    {
      v24 = PiEventAreDeviceRelationsExcluded(v5);
      v8 = PnpCompileDeviceInstancePaths(v25, (__int64)v17, v24, (__int64 *)&v66);
      if ( v5 == 3 )
        PnpBuildUnsafeRemovalDeviceList(v26, v17, &P);
    }
  }
  if ( v8 < 0 )
  {
    IopFreeRelationList(v17);
    if ( v8 != -2147483608 )
      PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
    goto LABEL_5;
  }
  v10 = v65;
  if ( v63 )
  {
    PpProfileBeginHardwareProfileTransition(v64);
    for ( i = (int)(v10 - 1); i >= 0; --i )
    {
      v32 = *((_QWORD *)v54 + i);
      if ( v32 )
        v33 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
      else
        v33 = 0LL;
      if ( *(_DWORD *)(v33 + 568) == 1 )
        PpProfileIncludeInHardwareProfileTransition(v33, 3);
    }
    if ( v5 == 4 )
    {
      if ( (int)IoGetLegacyVetoList((const void **)&SourceString, v3) >= 0 && *v3 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v17);
        v34 = (_DWORD *)*((_QWORD *)v1 + 6);
        if ( v34 )
          *v34 = *v3;
        if ( *((_QWORD *)v1 + 7) )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlCopyUnicodeString(*((PUNICODE_STRING *)v1 + 7), &DestinationString);
        }
        ExFreePoolWithTag((PVOID)SourceString, 0);
        SourceString = 0LL;
        goto LABEL_88;
      }
      if ( (int)PpProfileQueryHardwareProfileChange(v64, 0, v3, (UNICODE_STRING *)(v3 + 2)) < 0 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v17);
        v36 = *v3;
        v37 = v3 + 2;
LABEL_92:
        PnpFinalizeVetoedRemove(v1, v36, v37);
LABEL_88:
        v8 = -2147483608;
        goto LABEL_5;
      }
      goto LABEL_40;
    }
  }
  if ( (v5 & 0xFFFFFFFB) == 0 )
  {
LABEL_40:
    v18 = 0;
    while ( 1 )
    {
      v19 = *v17;
      if ( v18 >= *(_DWORD *)*v17 || !v19 )
        break;
      _mm_lfence();
      v20 = v18++;
      v21 = v19[3 * v20 + 2];
      if ( v21 )
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      else
        v22 = 0LL;
      PipSetDevNodeUserFlags(v22, 256LL);
      v17 = (void **)v56;
    }
    v10 = v65;
    v8 = PiProcessQueryAndCancelRemoval(v5, v1, v17, v65, v54, v3, &v66);
    if ( v8 >= 0 )
      goto LABEL_14;
    if ( v63 )
      PpProfileCancelHardwareProfileTransition();
    PnpTrackQueryRemoveDevices(v17, 0LL);
    IopFreeRelationList(v17);
LABEL_5:
    ExReleaseResourceLite(&IopDeviceTreeLock);
    ExReleaseResourceLite(&PiEngineLock);
    KeLeaveCriticalRegion();
    if ( v8 == -1073741738 )
      goto LABEL_6;
    goto LABEL_21;
  }
  if ( ((v5 - 3) & 0xFFFFFFFD) != 0 )
    goto LABEL_15;
  PiLogSurpriseRemoveEvent(v1, v5, v17);
  PnpDeleteLockedDeviceNodes((int)Object, (int)v17, 3, 0, 0, 0, 0LL, 0LL);
LABEL_14:
  if ( v5 != 3 )
  {
LABEL_15:
    v11 = &GUID_DEVICE_REMOVE_PENDING;
    goto LABEL_16;
  }
  v14 = P;
  if ( P )
  {
    PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
    ExFreePoolWithTag(v14, 0x4B706E50u);
  }
  v11 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
LABEL_16:
  PnpNotifyUserModeDeviceRemoval(v1, v66, v11, 0LL, 0LL, 0LL);
  PiSendTargetDeviceRemoveCompleteNotification(v54, v10);
  if ( (*(_DWORD *)(v6 + 704) & 0x8000) != 0 && (*(_DWORD *)(v6 + 396) & 0x10) != 0 )
    PnpFinalizeDeviceRemovalForReset(v6, (int)v17);
  if ( ((v5 - 2) & 0xFFFFFFFC) != 0
    || v5 == 4
    || (LOBYTE(v12) = 1,
        PnpInvalidateRelationsInList(v17, v5, v12, 0LL),
        IopRemoveDeviceRelationsFromList(v17),
        ((v5 - 3) & 0xFFFFFFFD) != 0) )
  {
    v30 = Object;
    if ( *(_DWORD *)(v6 + 568) )
    {
      IopQueryDockRemovalInterface((int)Object, &v60);
      v31 = v60;
      if ( v60 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v60 + 8), 3LL);
    }
    else
    {
      v31 = v60;
    }
    if ( v5 )
    {
      if ( v5 != 4 )
      {
        LOBYTE(v13) = 0;
        goto LABEL_101;
      }
    }
    else
    {
      PipSetDevNodeFlags(v6, 0x2000000u);
    }
    LOBYTE(v13) = 1;
LABEL_101:
    PnpDeleteLockedDeviceNodes((int)v30, (int)v17, 2, v13, *((_DWORD *)v1 + 4), *((_DWORD *)v1 + 5), 0LL, 0LL);
    v38 = *(_DWORD *)(v6 + 560) >> 3;
    v39 = HIWORD(*(_DWORD *)(v6 + 560));
    LOBYTE(v38) = (*(_DWORD *)(v6 + 560) & 8) != 0;
    LOBYTE(v39) = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
    v65 = v38;
    v64 = v39;
    if ( v5 == 4 )
    {
      if ( (_BYTE)v38 || (_BYTE)v39 )
      {
        v57 = 1LL;
        while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v17, (unsigned int)&v57, (unsigned int)&v61, 0, 0LL) )
        {
          if ( v61 )
          {
            v42 = *(_QWORD *)(v61 + 312);
            v43 = *(_QWORD *)(v42 + 40);
            if ( v43 )
            {
              PipSetDevNodeFlags(*(_QWORD *)(v42 + 40), 0x80000u);
              v44 = *(void ****)(v43 + 696);
              P = v44;
              if ( v44 )
              {
                IopFreeRelationList(v44[8]);
                *((_QWORD *)P + 8) = 0LL;
                *(_QWORD *)(v43 + 696) = 0LL;
              }
            }
          }
        }
        PnpUnlinkDeviceRemovalRelations(v45, v17);
        PendingEjectRelations = PiEventAllocatePendingEjectRelations((__int64)v1, (__int64)v17, v63, v31);
        v48 = (_QWORD *)PendingEjectRelations;
        if ( PendingEjectRelations )
        {
          v50 = v64;
          v51 = v65;
          v52 = v63;
          *(_QWORD *)(v6 + 696) = PendingEjectRelations;
          LightestSystemStateForEject = PoGetLightestSystemStateForEject(
                                          v52,
                                          v51,
                                          v50,
                                          (_DWORD *)(PendingEjectRelations + 92));
          if ( LightestSystemStateForEject >= 0 )
          {
            PpDevNodeUnlockTree(1LL);
            IopEjectDevice(Object, (__int64)v48);
            v8 = 259;
            goto LABEL_24;
          }
          v35 = 9LL;
          if ( LightestSystemStateForEject != -1073741090 )
            v35 = 0LL;
          PnpFinalizeVetoedRemove(v1, v35, 0LL);
          v48[6] = 0LL;
          *((_BYTE *)v48 + 89) = 0;
          v48[1] = v48;
          *v48 = v48;
          PnpProcessCompletedEject(v48);
          goto LABEL_88;
        }
        if ( v31 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8), 1LL);
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8), v49);
        }
        if ( v63 )
          PpProfileCancelHardwareProfileTransition();
        LOBYTE(v47) = 1;
        PnpInvalidateRelationsInList(v17, 4LL, 0LL, v47);
        PnpTrackQueryRemoveDevices(v17, 0LL);
        IopFreeRelationList(v17);
        v37 = 0LL;
        v36 = 0LL;
        goto LABEL_92;
      }
      PnpUnlinkDeviceRemovalRelations(v38, v17);
      PnpTrackQueryRemoveDevices(v17, 0LL);
      IopFreeRelationList(v17);
    }
    else
    {
      PiRestartRemovalRelations(v1, v17, v30);
      PnpUnlinkDeviceRemovalRelations(v40, v17);
      if ( !v5 )
        PnpTrackQueryRemoveDevices(v17, 0LL);
      IopFreeRelationList(v17);
      if ( v5 == 2 )
      {
        PnpNotifyUserModeDeviceRemoval(v1, v66, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
      }
      else if ( !v5
             && (*((_DWORD *)v1 + 38) & 2) == 0
             && (*(_DWORD *)(v6 + 396) & 0x2000) != 0
             && *(_DWORD *)(v6 + 404) == 18 )
      {
        PipClearDevNodeProblem(v6);
        PnpRestartDeviceNode(v6);
        PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 0x10u, 1, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( v31 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8), 1LL);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8), v41);
    }
    goto LABEL_118;
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v56);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
  PnpIsChainDereferenced((__int64 *)v54, v10, 0, 1u, 0LL);
  v8 = 0;
LABEL_21:
  if ( v5 == 4 )
  {
LABEL_6:
    if ( !v3 )
      goto LABEL_7;
    goto LABEL_24;
  }
  if ( !v3 )
  {
    PnpRecordBlackboxPnpEventInformation((__int64)v1, v5, 0LL, 0);
    goto LABEL_7;
  }
  PnpRecordBlackboxPnpEventInformation((__int64)v1, v5, (__int64)v3, 0);
LABEL_24:
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(*((PVOID *)v3 + 2), 0x4D706E50u);
    *((_QWORD *)v3 + 2) = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
LABEL_7:
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  return (unsigned int)v8;
}
