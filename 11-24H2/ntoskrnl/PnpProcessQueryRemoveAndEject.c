/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x140A0DB78
 * Callers:
 *     PnpShutdownDevices @ 0x14071AAA0 (PnpShutdownDevices.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409ED604 (PnpProcessTargetDeviceEvent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     PnpIsChainDereferenced @ 0x1404A1BD0 (PnpIsChainDereferenced.c)
 *     PipAreDriversLoaded @ 0x1404E6B3C (PipAreDriversLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x140721884 (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14072D5B8 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14072D5E8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072D86C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14072D92C (PpProfileQueryHardwareProfileChange.c)
 *     IopEjectDevice @ 0x140733A30 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x140733C7C (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x140739FD0 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14073A064 (PiProcessQueryRemoveNoFdo.c)
 *     PoGetLightestSystemStateForEject @ 0x140749144 (PoGetLightestSystemStateForEject.c)
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
 *     IoGetLegacyVetoList @ 0x1409B9120 (IoGetLegacyVetoList.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1409EE568 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpFinalizeVetoedRemove @ 0x140A0C4C4 (PnpFinalizeVetoedRemove.c)
 *     IopFreeRelationList @ 0x140A0CB00 (IopFreeRelationList.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x140A0D52C (PiEventAreDeviceRelationsExcluded.c)
 *     PnpResizeTargetDeviceBlock @ 0x140A0D5A4 (PnpResizeTargetDeviceBlock.c)
 *     PnpCompileDeviceInstancePaths @ 0x140A0D674 (PnpCompileDeviceInstancePaths.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140A0D8E8 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiDetermineDeleteType @ 0x140A0E118 (PiDetermineDeleteType.c)
 *     PiCheckRemovalPreconditions @ 0x140A0E1E8 (PiCheckRemovalPreconditions.c)
 *     PiEventAllocateVetoBuffer @ 0x140A0E248 (PiEventAllocateVetoBuffer.c)
 *     PnpBuildRemovalRelationList @ 0x140A0E2D8 (PnpBuildRemovalRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140A0E374 (PiEventRemovalPostSurpriseRemove.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x140A0E400 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140A0E460 (PiProcessQueryAndCancelRemoval.c)
 *     IopRemoveDeviceRelationsFromList @ 0x140A0E620 (IopRemoveDeviceRelationsFromList.c)
 *     PiEventBuildPdoList @ 0x140A0E694 (PiEventBuildPdoList.c)
 *     PnpInvalidateRelationsInList @ 0x140A0E800 (PnpInvalidateRelationsInList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     IopEnumerateRelations @ 0x140A56CE8 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140A73454 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiRestartRemovalRelations @ 0x140A9A270 (PiRestartRemovalRelations.c)
 *     PnpTrackQueryRemoveDevices @ 0x140AB4720 (PnpTrackQueryRemoveDevices.c)
 *     PiLogSurpriseRemoveEvent @ 0x140AB6DF4 (PiLogSurpriseRemoveEvent.c)
 *     PipSetDevNodeUserFlags @ 0x140AC3794 (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int128 *v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // rbx
  int v15; // eax
  __int64 VetoBuffer; // rax
  _QWORD *v17; // r14
  unsigned int v18; // ebx
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  char v24; // al
  unsigned int v25; // ecx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  UNICODE_STRING *v28; // r8
  __int64 i; // rbx
  PVOID v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  UNICODE_STRING *v41; // r8
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rbx
  _QWORD **v52; // rax
  __int64 v53; // rcx
  __int64 PendingEjectRelations; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  char v61; // r8
  bool v62; // dl
  char v63; // cl
  int LightestSystemStateForEject; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  PVOID v67; // [rsp+40h] [rbp-39h] BYREF
  PCWSTR SourceString; // [rsp+48h] [rbp-31h] BYREF
  PVOID v69; // [rsp+50h] [rbp-29h] BYREF
  __int64 v70; // [rsp+58h] [rbp-21h] BYREF
  PVOID Object; // [rsp+60h] [rbp-19h]
  PVOID P; // [rsp+68h] [rbp-11h] BYREF
  __int64 v73; // [rsp+70h] [rbp-9h] BYREF
  __int64 v74; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v76; // [rsp+E0h] [rbp+67h] BYREF
  int v77; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v78; // [rsp+F0h] [rbp+77h] BYREF
  PVOID v79; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *a1;
  SourceString = 0LL;
  v73 = 0LL;
  v70 = 0LL;
  v3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)v1 + 20);
  v5 = 7;
  v67 = 0LL;
  v78 = 0;
  v76 = 0;
  v74 = 0LL;
  v69 = 0LL;
  LOBYTE(v77) = 0;
  v79 = 0LL;
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
      PnpFinalizeVetoedRemove((__int64)v1, 8uLL, (UNICODE_STRING *)(v6 + 40));
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
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v69) < 0 )
  {
    v27 = *v3;
    v28 = (UNICODE_STRING *)(v3 + 2);
LABEL_49:
    PnpFinalizeVetoedRemove((__int64)v1, v27, v28);
    v8 = -2147483608;
    goto LABEL_5;
  }
  v17 = v69;
  v8 = PiEventBuildPdoList((_DWORD)v69, v5, (_DWORD)v1, (unsigned int)&v78, (__int64)&v67, (__int64)&v76, (__int64)&v77);
  if ( v8 >= 0 )
  {
    v23 = PnpResizeTargetDeviceBlock(a1, v5);
    v1 = *a1;
    v8 = v23;
    if ( v23 >= 0 )
    {
      v24 = PiEventAreDeviceRelationsExcluded(v5);
      v8 = PnpCompileDeviceInstancePaths(v25, (__int64)v17, v24, (__int64 *)&v79);
      if ( v5 == 3 )
        PnpBuildUnsafeRemovalDeviceList(v26, v17, &P);
    }
  }
  if ( v8 < 0 )
  {
    IopFreeRelationList(v17);
    if ( v8 != -2147483608 )
      PnpFinalizeVetoedRemove((__int64)v1, 0LL, 0LL);
    goto LABEL_5;
  }
  v10 = v78;
  if ( v76 )
  {
    PpProfileBeginHardwareProfileTransition(v77);
    for ( i = (int)(v10 - 1); i >= 0; --i )
    {
      v33 = *((_QWORD *)v67 + i);
      if ( v33 )
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
      else
        v34 = 0LL;
      if ( *(_DWORD *)(v34 + 568) == 1 )
        PpProfileIncludeInHardwareProfileTransition(v34, 3);
    }
    if ( v5 == 4 )
    {
      if ( (int)IoGetLegacyVetoList((const void **)&SourceString, v3) >= 0 && *v3 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v17);
        v35 = (_DWORD *)*((_QWORD *)v1 + 6);
        if ( v35 )
          *v35 = *v3;
        if ( *((_QWORD *)v1 + 7) )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlCopyUnicodeString(*((PUNICODE_STRING *)v1 + 7), &DestinationString);
        }
        ExFreePoolWithTag((PVOID)SourceString, 0);
        SourceString = 0LL;
        goto LABEL_88;
      }
      if ( (int)PpProfileQueryHardwareProfileChange(v77, 0, v3, (UNICODE_STRING *)(v3 + 2)) < 0 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v17);
        v40 = *v3;
        v41 = (UNICODE_STRING *)(v3 + 2);
LABEL_92:
        PnpFinalizeVetoedRemove((__int64)v1, v40, v41);
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
      v19 = (_DWORD *)*v17;
      if ( v18 >= *(_DWORD *)*v17 || !v19 )
        break;
      _mm_lfence();
      v20 = v18++;
      v21 = *(_QWORD *)&v19[6 * v20 + 4];
      if ( v21 )
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      else
        v22 = 0LL;
      PipSetDevNodeUserFlags(v22, 256LL);
      v17 = v69;
    }
    v10 = v78;
    v8 = PiProcessQueryAndCancelRemoval(v5, v1, v17, v78, v67, v3, &v79);
    if ( v8 >= 0 )
      goto LABEL_14;
    if ( v76 )
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
    v11 = (__int128 *)&GUID_DEVICE_REMOVE_PENDING;
    goto LABEL_16;
  }
  v14 = P;
  if ( P )
  {
    PnpNotifyUserModeDeviceRemoval((__int64)v1, P, (__int128 *)&GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
    ExFreePoolWithTag(v14, 0x4B706E50u);
  }
  v11 = (__int128 *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE;
LABEL_16:
  PnpNotifyUserModeDeviceRemoval((__int64)v1, v79, v11, 0LL, 0LL, 0LL);
  PiSendTargetDeviceRemoveCompleteNotification(v67, v10);
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
      IopQueryDockRemovalInterface((int)Object, &v73);
      v32 = v73;
      if ( v73 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v73 + 8), 3LL, v31, v13);
    }
    else
    {
      v32 = v73;
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
    v42 = *(_DWORD *)(v6 + 560) >> 3;
    v43 = HIWORD(*(_DWORD *)(v6 + 560));
    LOBYTE(v42) = (*(_DWORD *)(v6 + 560) & 8) != 0;
    LOBYTE(v43) = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
    v78 = v42;
    v77 = v43;
    if ( v5 == 4 )
    {
      if ( (_BYTE)v42 || (_BYTE)v43 )
      {
        v70 = 1LL;
        while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v17, (unsigned int)&v70, (unsigned int)&v74, 0, 0LL) )
        {
          if ( v74 )
          {
            v50 = *(_QWORD *)(v74 + 312);
            v51 = *(_QWORD *)(v50 + 40);
            if ( v51 )
            {
              PipSetDevNodeFlags(*(_QWORD *)(v50 + 40), 0x80000u);
              v52 = *(_QWORD ***)(v51 + 696);
              P = v52;
              if ( v52 )
              {
                IopFreeRelationList(v52[8]);
                *((_QWORD *)P + 8) = 0LL;
                *(_QWORD *)(v51 + 696) = 0LL;
              }
            }
          }
        }
        PnpUnlinkDeviceRemovalRelations(v53, v17);
        PendingEjectRelations = PiEventAllocatePendingEjectRelations((__int64)v1, (__int64)v17, v76, v32);
        v57 = (_QWORD *)PendingEjectRelations;
        if ( PendingEjectRelations )
        {
          v61 = v77;
          v62 = v78;
          v63 = v76;
          *(_QWORD *)(v6 + 696) = PendingEjectRelations;
          LightestSystemStateForEject = PoGetLightestSystemStateForEject(
                                          v63,
                                          v62,
                                          v61,
                                          (_DWORD *)(PendingEjectRelations + 92));
          if ( LightestSystemStateForEject >= 0 )
          {
            PpDevNodeUnlockTree(1LL);
            IopEjectDevice(Object, (__int64)v57, v65, v66);
            v8 = 259;
            goto LABEL_24;
          }
          v36 = 9LL;
          if ( LightestSystemStateForEject != -1073741090 )
            v36 = 0LL;
          PnpFinalizeVetoedRemove((__int64)v1, v36, 0LL);
          v57[6] = 0LL;
          *((_BYTE *)v57 + 89) = 0;
          v57[1] = v57;
          *v57 = v57;
          PnpProcessCompletedEject(v57, v37, v38, v39);
          goto LABEL_88;
        }
        if ( v32 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v32 + 8), 1LL, v55, v56);
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v32 + 8), v58, v59, v60);
        }
        if ( v76 )
          PpProfileCancelHardwareProfileTransition();
        LOBYTE(v56) = 1;
        PnpInvalidateRelationsInList(v17, 4LL, 0LL, v56);
        PnpTrackQueryRemoveDevices(v17, 0LL);
        IopFreeRelationList(v17);
        v41 = 0LL;
        v40 = 0LL;
        goto LABEL_92;
      }
      PnpUnlinkDeviceRemovalRelations(v42, v17);
      PnpTrackQueryRemoveDevices(v17, 0LL);
      IopFreeRelationList(v17);
    }
    else
    {
      PiRestartRemovalRelations(v1, v17, v30);
      PnpUnlinkDeviceRemovalRelations(v44, v17);
      if ( !v5 )
        PnpTrackQueryRemoveDevices(v17, 0LL);
      IopFreeRelationList(v17);
      if ( v5 == 2 )
      {
        PnpNotifyUserModeDeviceRemoval((__int64)v1, v79, (__int128 *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
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
    if ( v32 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v32 + 8), 1LL, v45, v46);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v32 + 8), v47, v48, v49);
    }
    goto LABEL_118;
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v69);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
  PnpIsChainDereferenced((__int64 *)v67, v10, 0, 1u, 0LL);
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
  if ( v79 )
    ExFreePoolWithTag(v79, 0);
  if ( v67 )
    ExFreePoolWithTag(v67, 0);
  return (unsigned int)v8;
}
