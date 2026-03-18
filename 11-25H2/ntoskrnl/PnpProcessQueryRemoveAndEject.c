/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x14082FB18
 * Callers:
 *     PnpShutdownDevices @ 0x14070E9A0 (PnpShutdownDevices.c)
 *     PnpProcessTargetDeviceEvent @ 0x140A1B0C8 (PnpProcessTargetDeviceEvent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpIsChainDereferenced @ 0x1404A2190 (PnpIsChainDereferenced.c)
 *     PipAreDriversLoaded @ 0x1404E6CA8 (PipAreDriversLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x140715784 (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140717AF0 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140721638 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140721668 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407218EC (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407219AC (PpProfileQueryHardwareProfileChange.c)
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1407279E4 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14072DD40 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14072DDD4 (PiProcessQueryRemoveNoFdo.c)
 *     PoGetLightestSystemStateForEject @ 0x14073D134 (PoGetLightestSystemStateForEject.c)
 *     IopFreeRelationList @ 0x14082F144 (IopFreeRelationList.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x14082F17C (PiEventAreDeviceRelationsExcluded.c)
 *     PnpResizeTargetDeviceBlock @ 0x14082F19C (PnpResizeTargetDeviceBlock.c)
 *     PnpCompileDeviceInstancePaths @ 0x14082F26C (PnpCompileDeviceInstancePaths.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x14082F4E0 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiDetermineDeleteType @ 0x1408300B8 (PiDetermineDeleteType.c)
 *     PiCheckRemovalPreconditions @ 0x140830188 (PiCheckRemovalPreconditions.c)
 *     PiEventAllocateVetoBuffer @ 0x1408301E8 (PiEventAllocateVetoBuffer.c)
 *     PnpBuildRemovalRelationList @ 0x140830278 (PnpBuildRemovalRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140830314 (PiEventRemovalPostSurpriseRemove.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1408303A0 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140830400 (PiProcessQueryAndCancelRemoval.c)
 *     IopRemoveDeviceRelationsFromList @ 0x1408305C0 (IopRemoveDeviceRelationsFromList.c)
 *     PiEventBuildPdoList @ 0x140830634 (PiEventBuildPdoList.c)
 *     PnpInvalidateRelationsInList @ 0x1408307A0 (PnpInvalidateRelationsInList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14096CA78 (PnpNotifyUserModeDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     IoGetLegacyVetoList @ 0x140A10B20 (IoGetLegacyVetoList.c)
 *     IopEnumerateRelations @ 0x140A53580 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A68A14 (PnpDeleteLockedDeviceNodes.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140A70D08 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiRestartRemovalRelations @ 0x140A945BC (PiRestartRemovalRelations.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AAF730 (PnpTrackQueryRemoveDevices.c)
 *     PiLogSurpriseRemoveEvent @ 0x140AB1E38 (PiLogSurpriseRemoveEvent.c)
 *     PnpFinalizeVetoedRemove @ 0x140AB2A7C (PnpFinalizeVetoedRemove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v41; // rax
  __int64 v42; // rbx
  void ***v43; // rax
  __int64 v44; // rcx
  __int64 PendingEjectRelations; // rax
  __int64 v46; // r9
  _QWORD *v47; // rbx
  char v48; // r8
  bool v49; // dl
  char v50; // cl
  int LightestSystemStateForEject; // eax
  PVOID v52; // [rsp+40h] [rbp-39h] BYREF
  PCWSTR SourceString; // [rsp+48h] [rbp-31h] BYREF
  PVOID v54; // [rsp+50h] [rbp-29h] BYREF
  __int64 v55; // [rsp+58h] [rbp-21h] BYREF
  PVOID Object; // [rsp+60h] [rbp-19h]
  PVOID P; // [rsp+68h] [rbp-11h] BYREF
  __int64 v58; // [rsp+70h] [rbp-9h] BYREF
  __int64 v59; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v61; // [rsp+E0h] [rbp+67h] BYREF
  int v62; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v63; // [rsp+F0h] [rbp+77h] BYREF
  PVOID v64; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *a1;
  SourceString = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)v1 + 20);
  v5 = 7;
  v52 = 0LL;
  v63 = 0;
  v61 = 0;
  v59 = 0LL;
  v54 = 0LL;
  LOBYTE(v62) = 0;
  v64 = 0LL;
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
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v54) < 0 )
  {
    v27 = *v3;
    v28 = v3 + 2;
LABEL_49:
    PnpFinalizeVetoedRemove(v1, v27, v28);
    v8 = -2147483608;
    goto LABEL_5;
  }
  v17 = (void **)v54;
  v8 = PiEventBuildPdoList((_DWORD)v54, v5, (_DWORD)v1, (unsigned int)&v63, (__int64)&v52, (__int64)&v61, (__int64)&v62);
  if ( v8 >= 0 )
  {
    v23 = PnpResizeTargetDeviceBlock(a1, v5);
    v1 = *a1;
    v8 = v23;
    if ( v23 >= 0 )
    {
      v24 = PiEventAreDeviceRelationsExcluded(v5);
      v8 = PnpCompileDeviceInstancePaths(v25, (__int64)v17, v24, (__int64 *)&v64);
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
  v10 = v63;
  if ( v61 )
  {
    PpProfileBeginHardwareProfileTransition(v62);
    for ( i = (int)(v10 - 1); i >= 0; --i )
    {
      v32 = *((_QWORD *)v52 + i);
      if ( v32 )
        v33 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
      else
        v33 = 0LL;
      if ( *(_DWORD *)(v33 + 568) == 1 )
        PpProfileIncludeInHardwareProfileTransition(v33, 3);
    }
    if ( v5 == 4 )
    {
      if ( (int)IoGetLegacyVetoList(&SourceString, v3) >= 0 && *v3 )
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
      if ( (int)PpProfileQueryHardwareProfileChange(v62, 0, v3, (UNICODE_STRING *)(v3 + 2)) < 0 )
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
      v17 = (void **)v54;
    }
    v10 = v63;
    v8 = PiProcessQueryAndCancelRemoval(v5, v1, v17, v63, v52, v3, &v64);
    if ( v8 >= 0 )
      goto LABEL_14;
    if ( v61 )
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
  PnpNotifyUserModeDeviceRemoval(v1, v64, v11, 0LL, 0LL, 0LL);
  PiSendTargetDeviceRemoveCompleteNotification(v52, v10);
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
      IopQueryDockRemovalInterface((int)Object, &v58);
      v31 = v58;
      if ( v58 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v58 + 8));
    }
    else
    {
      v31 = v58;
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
      PipSetDevNodeFlags(v6, 0x2000000LL);
    }
    LOBYTE(v13) = 1;
LABEL_101:
    PnpDeleteLockedDeviceNodes((int)v30, (int)v17, 2, v13, *((_DWORD *)v1 + 4), *((_DWORD *)v1 + 5), 0LL, 0LL);
    v38 = *(_DWORD *)(v6 + 560) >> 3;
    v39 = HIWORD(*(_DWORD *)(v6 + 560));
    LOBYTE(v38) = (*(_DWORD *)(v6 + 560) & 8) != 0;
    LOBYTE(v39) = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
    v63 = v38;
    v62 = v39;
    if ( v5 == 4 )
    {
      if ( (_BYTE)v38 || (_BYTE)v39 )
      {
        v55 = 1LL;
        while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v17, (unsigned int)&v55, (unsigned int)&v59, 0, 0LL) )
        {
          if ( v59 )
          {
            v41 = *(_QWORD *)(v59 + 312);
            v42 = *(_QWORD *)(v41 + 40);
            if ( v42 )
            {
              PipSetDevNodeFlags(*(_QWORD *)(v41 + 40), 0x80000LL);
              v43 = *(void ****)(v42 + 696);
              P = v43;
              if ( v43 )
              {
                IopFreeRelationList(v43[8]);
                *((_QWORD *)P + 8) = 0LL;
                *(_QWORD *)(v42 + 696) = 0LL;
              }
            }
          }
        }
        PnpUnlinkDeviceRemovalRelations(v44, v17);
        PendingEjectRelations = PiEventAllocatePendingEjectRelations((__int64)v1, (__int64)v17, v61, v31);
        v47 = (_QWORD *)PendingEjectRelations;
        if ( PendingEjectRelations )
        {
          v48 = v62;
          v49 = v63;
          v50 = v61;
          *(_QWORD *)(v6 + 696) = PendingEjectRelations;
          LightestSystemStateForEject = PoGetLightestSystemStateForEject(
                                          v50,
                                          v49,
                                          v48,
                                          (_DWORD *)(PendingEjectRelations + 92));
          if ( LightestSystemStateForEject >= 0 )
          {
            PpDevNodeUnlockTree(1LL);
            IopEjectDevice(Object, (__int64)v47);
            v8 = 259;
            goto LABEL_24;
          }
          v35 = 9LL;
          if ( LightestSystemStateForEject != -1073741090 )
            v35 = 0LL;
          PnpFinalizeVetoedRemove(v1, v35, 0LL);
          v47[6] = 0LL;
          *((_BYTE *)v47 + 89) = 0;
          v47[1] = v47;
          *v47 = v47;
          PnpProcessCompletedEject(v47);
          goto LABEL_88;
        }
        if ( v31 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8));
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8));
        }
        if ( v61 )
          PpProfileCancelHardwareProfileTransition();
        LOBYTE(v46) = 1;
        PnpInvalidateRelationsInList(v17, 4LL, 0LL, v46);
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
        PnpNotifyUserModeDeviceRemoval(v1, v64, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8));
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v31 + 8));
    }
    goto LABEL_118;
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v54);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
  PnpIsChainDereferenced((__int64 *)v52, v10, 0, 1u, 0LL);
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
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)v8;
}
