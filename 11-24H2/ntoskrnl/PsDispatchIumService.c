/*
 * XREFs of PsDispatchIumService @ 0x1404E66B4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAlertThreadByThreadIdEx @ 0x1402DE598 (KeAlertThreadByThreadIdEx.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402EE530 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1402EE574 (MmUnlockLoadedModuleListExclusive.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 *     DbgkPostModuleMessage @ 0x140480C54 (DbgkPostModuleMessage.c)
 *     PspIumReplenishPartitionPages @ 0x140498624 (PspIumReplenishPartitionPages.c)
 *     VslAllocatePool @ 0x1404AB090 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1404B4020 (VslFreePoolTransferObject.c)
 *     PspMapView @ 0x1404B78A4 (PspMapView.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 *     VslHandleKsrCall @ 0x14058A85C (VslHandleKsrCall.c)
 *     PspIumAlertMultipleThreadByThreadId @ 0x1405E3764 (PspIumAlertMultipleThreadByThreadId.c)
 *     PspIumAllocatePartitionState @ 0x1405E37E8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E39B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E3AD8 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x1405E3D04 (PspIumFreePartitionState.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E4010 (PsAdjustBasicEnclaveThreadList.c)
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1406A7930 (ZwTerminateProcess.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspIumGetSystemData @ 0x14077A748 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14077A784 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14077B4E4 (PsTerminateVsmEnclave.c)
 *     MmCommitHotPatchTable @ 0x1407F6688 (MmCommitHotPatchTable.c)
 *     MmCreateSectionForHotpatch @ 0x1407F6770 (MmCreateSectionForHotpatch.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F67F4 (MmInsertSecureImageActivePatch.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F68F8 (MmPrepareImagePagesForHotPatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F6A1C (MmRemoveSecureImageActivePatch.c)
 *     MmGetSectionStrongImageReference @ 0x1407FBB9C (MmGetSectionStrongImageReference.c)
 *     MmUnmapViewOfSection @ 0x140896C60 (MmUnmapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1408A05A8 (DbgkMapViewOfSection.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x1408F3A64 (DbgkpSuspendProcess.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     MmAllocateVirtualMemory @ 0x1409DB280 (MmAllocateVirtualMemory.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     PspIumResolveVirtualFault @ 0x1409F03F8 (PspIumResolveVirtualFault.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 *     DbgkpResumeProcess @ 0x140A5A3B4 (DbgkpResumeProcess.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A87C74 (MmUnmapProtectedKernelPageRange.c)
 *     MmMapProtectedKernelPage @ 0x140A9D1DC (MmMapProtectedKernelPage.c)
 *     EtwSetInformation @ 0x140AD9290 (EtwSetInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MmUpdateSlabRangeType @ 0x140C5B87C (MmUpdateSlabRangeType.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  GUID *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rax
  int PartitionState; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _KPROCESS *v19; // r14
  _KPROCESS *v20; // rcx
  int VirtualMemory; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  _KPROCESS *v24; // rcx
  int v25; // ecx
  __int128 *v26; // r9
  unsigned __int64 v27; // rax
  int v28; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v30; // rbx
  _KPROCESS *v31; // rcx
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  void *v40; // r8
  __int64 v41; // rcx
  const GUID *ActivityId; // rcx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  void *v47; // rcx
  int SecurePool; // eax
  int v49; // ecx
  __int64 Pool2; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct _MDL *v60; // rbx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  _KPROCESS *v65; // rbx
  _KPROCESS *Process; // rsi
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r14
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  char v80; // r14
  __int64 v81; // rdx
  int SectionForHotpatch; // ebx
  ULONGLONG RegHandle; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v85; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v86; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v87; // [rsp+90h] [rbp-1C8h]
  _OWORD v88[3]; // [rsp+98h] [rbp-1C0h] BYREF
  _BYTE v89[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v90[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v91; // [rsp+230h] [rbp-28h]
  int v92; // [rsp+238h] [rbp-20h]
  __int16 v93; // [rsp+23Ch] [rbp-1Ch]
  char v94; // [rsp+23Eh] [rbp-1Ah]

  v84 = a1;
  memset(v88, 0, sizeof(v88));
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  RelatedActivityId = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x1B )
  {
    if ( v6 > 0x28 )
    {
      if ( v6 > 0x2F )
      {
        v76 = v6 - 48;
        if ( !v76 )
        {
          PartitionState = MmCommitHotPatchTable(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          goto LABEL_171;
        }
        v77 = v76 - 1;
        if ( !v77 )
        {
          MmInsertSecureImageActivePatch(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 40));
          return;
        }
        v78 = v77 - 1;
        if ( !v78 )
        {
          MmRemoveSecureImageActivePatch(*(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 16));
          return;
        }
        v79 = v78 - 1;
        if ( !v79 )
        {
          PartitionState = PspIumAlertMultipleThreadByThreadId(a1);
          goto LABEL_171;
        }
        if ( v79 != 1 )
          goto LABEL_161;
        v80 = *(_BYTE *)(a1 + 28);
        RegHandle = 0LL;
        v84 = 0LL;
        SectionForHotpatch = MmCreateSectionForHotpatch(
                               *(_QWORD *)(a1 + 8),
                               *(_DWORD *)(a1 + 16),
                               *(_DWORD *)(a1 + 20),
                               *(_DWORD *)(a1 + 24),
                               v80,
                               (unsigned int)&RegHandle);
        if ( SectionForHotpatch >= 0 )
        {
          LOBYTE(v81) = v80;
          SectionForHotpatch = MmGetSectionStrongImageReference(RegHandle, v81, 0LL, &v84);
          if ( SectionForHotpatch < 0 )
          {
            ObCloseHandle((HANDLE)RegHandle, v80);
            RegHandle = 0LL;
          }
        }
        *(_DWORD *)(a1 + 8) = SectionForHotpatch;
        *(_QWORD *)(a1 + 16) = RegHandle;
        v52 = v84;
        goto LABEL_166;
      }
      if ( v6 == 47 )
      {
        MmUnlockPages(*(PMDL *)(a1 + 8));
        IoFreeMdl(*(PMDL *)(a1 + 8));
        return;
      }
      v71 = v6 - 41;
      if ( !v71 )
      {
        MmUpdateSlabRangeType(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        return;
      }
      v72 = v71 - 1;
      if ( !v72 )
      {
        ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
        return;
      }
      v73 = v72 - 1;
      if ( !v73 )
      {
        PartitionState = PsAdjustBasicEnclaveThreadList(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 16),
                           *(unsigned int *)(a1 + 24));
        goto LABEL_171;
      }
      v74 = v73 - 1;
      if ( !v74 )
      {
        SecurePool = PspIumAllocateSecurePool(a1);
        goto LABEL_86;
      }
      v75 = v74 - 1;
      if ( !v75 )
      {
        MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
        return;
      }
      if ( v75 != 1 )
        goto LABEL_161;
      v65 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v65 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v88);
      v67 = MmPrepareImagePagesForHotPatch(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a1 + 16);
    }
    else
    {
      if ( v6 == 40 )
      {
        PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
        return;
      }
      if ( v6 <= 0x22 )
      {
        if ( v6 == 34 )
        {
          PartitionState = PspMapView(a1);
          goto LABEL_171;
        }
        v53 = v6 - 28;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( !v55 )
            {
              MmUnmapProtectedKernelPageRange(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
              return;
            }
            v56 = v55 - 1;
            if ( v56 )
            {
              v57 = v56 - 1;
              if ( !v57 )
              {
                DbgkPostModuleMessage(
                  *(PVOID *)(a1 + 8),
                  *(PVOID *)(a1 + 16),
                  *(void **)(a1 + 24),
                  *(_DWORD *)(a1 + 32),
                  *(_DWORD *)(a1 + 40),
                  *(PRKEVENT *)(a1 + 48));
                return;
              }
              if ( v57 == 1 )
              {
                DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
                return;
              }
              goto LABEL_161;
            }
            if ( *(_QWORD *)(a1 + 8) )
              MmLockLoadedModuleListExclusive();
            else
              MmUnlockLoadedModuleListExclusive(*(_BYTE *)(a1 + 16));
          }
          else
          {
            v58 = *(_QWORD *)(a1 + 16);
            v59 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) )
              MmMapDriverTablePage(v59, v58, a3, *(unsigned int *)(a1 + 32));
            else
              MmMapProtectedKernelPage(v59, v58);
          }
          return;
        }
        v60 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v60->MappedSystemVa, v60);
        v47 = v60;
        goto LABEL_118;
      }
      v61 = v6 - 35;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( !v62 )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
          return;
        }
        v63 = v62 - 1;
        if ( !v63 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v64 = v63 - 1;
        if ( !v64 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            PspIumFreePartitionState(*(PVOID *)(a1 + 16));
            return;
          }
          PartitionState = PspIumAllocatePartitionState(a1);
          goto LABEL_171;
        }
        if ( v64 == 1 )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
          if ( PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16)) )
            *(_QWORD *)(a1 + 24) = 1LL;
          return;
        }
        goto LABEL_161;
      }
      v65 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v65 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v88);
      v67 = MmUnmapViewOfSection(v65, *(_QWORD *)(a1 + 16));
    }
    v70 = v67;
    if ( Process != v65 )
      KiUnstackDetachProcess((__int64)v88, 0, v68, v69);
    *(_QWORD *)(a1 + 8) = v70;
    return;
  }
  if ( v6 == 27 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x646C6D4Du);
    v51 = Pool2;
    if ( !Pool2 )
    {
LABEL_94:
      v12 = 3221225626LL;
      goto LABEL_18;
    }
    *(_QWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 8) = 56;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 4096LL;
    *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 8);
    *(_WORD *)(Pool2 + 10) = 2;
    MmMapLockedPagesSpecifyCache((PMDL)Pool2, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (*(_BYTE *)(v51 + 10) & 1) == 0 )
    {
      ExFreePoolWithTag((PVOID)v51, 0);
      goto LABEL_94;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = v51;
    v52 = *(_QWORD *)(v51 + 24);
LABEL_166:
    *(_QWORD *)(a1 + 24) = v52;
    return;
  }
  if ( v6 > 0xE )
  {
    if ( v6 <= 0x15 )
    {
      if ( v6 == 21 )
      {
        ActivityId = (const GUID *)(a1 + 32);
        if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
          ActivityId = 0LL;
        if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
          RelatedActivityId = (GUID *)(a1 + 48);
        PartitionState = EtwWriteEx(
                           *(_QWORD *)(a1 + 8),
                           (PCEVENT_DESCRIPTOR)(a1 + 16),
                           0LL,
                           0,
                           ActivityId,
                           RelatedActivityId,
                           *(_DWORD *)(a1 + 64),
                           *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
        goto LABEL_171;
      }
      v35 = v6 - 15;
      if ( !v35 )
      {
        LOBYTE(v12) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_17;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
        return;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        memset_0(v89, 0, sizeof(v89));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v89);
        goto LABEL_171;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        RegHandle = 0LL;
        v40 = *(void **)(a1 + 24);
        if ( v40 )
          RelatedActivityId = (GUID *)VslIumEtwEnableCallback;
        v41 = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v40, &RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle;
        goto LABEL_172;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
        goto LABEL_171;
      }
      if ( v39 == 1 )
      {
        PartitionState = EtwSetInformation(
                           *(_QWORD *)(a1 + 8),
                           *(EVENT_INFO_CLASS *)(a1 + 16),
                           *(PVOID *)(a1 + 24),
                           *(_DWORD *)(a1 + 32));
        goto LABEL_171;
      }
      goto LABEL_161;
    }
    v43 = v6 - 22;
    if ( !v43 )
    {
      PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
      goto LABEL_171;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
      VslHandleKsrCall(a1);
      return;
    }
    v45 = v44 - 1;
    if ( !v45 )
    {
      v49 = *(_DWORD *)(a1 + 8);
      if ( v49 == -1070268299 || v49 == -1070268286 )
        LOBYTE(RelatedActivityId) = 1;
      LOBYTE(a3) = (_BYTE)RelatedActivityId;
      LOBYTE(a4) = (unsigned int)(v49 + 1070268287) <= 1;
      PartitionState = HvlpDepositPages(0LL, a2, a3, a4);
      goto LABEL_171;
    }
    v46 = v45 - 1;
    if ( v46 )
    {
      if ( v46 != 1 )
        goto LABEL_161;
      v47 = (void *)VslFreePoolTransferObject(*(__int64 ***)(a1 + 8), 0LL);
LABEL_118:
      ExFreePoolWithTag(v47, 0);
      return;
    }
    SecurePool = VslAllocatePool(
                   *(_QWORD *)(a1 + 8),
                   *(_DWORD *)(a1 + 16),
                   (_QWORD *)(a1 + 16),
                   (_QWORD *)(a1 + 24),
                   (_QWORD *)(a1 + 32));
LABEL_86:
    *(_DWORD *)(a1 + 8) = SecurePool;
    return;
  }
  if ( v6 == 14 )
  {
    v30 = KeGetCurrentThread()->ApcState.Process;
    v31 = *(_KPROCESS **)(a1 + 8);
    if ( v30 != v31 )
      KiStackAttachProcess(v31, 0, (__int64)v88);
    v32 = MmProtectVirtualMemory(
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 8),
            (int)a1 + 24,
            (int)a1 + 32,
            *(_DWORD *)(a1 + 40),
            a1 + 40);
    if ( v30 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess((__int64)v88, 0, v33, v34);
    *(_DWORD *)(a1 + 8) = v32;
    return;
  }
  if ( v6 > 7 )
  {
    v14 = v6 - 8;
    if ( !v14 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        RelatedActivityId = (GUID *)(a1 + 24);
      PartitionState = KeWaitForAlertByThreadId(*(_BYTE *)(a1 + 8), RelatedActivityId, 0LL);
      goto LABEL_171;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeLeaveCriticalRegion();
      return;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
      *(_QWORD *)(a1 + 8) = 0LL;
      return;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, *(_QWORD *)(a1 + 16), a1 + 16);
      goto LABEL_171;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v19 = KeGetCurrentThread()->ApcState.Process;
      v24 = *(_KPROCESS **)(a1 + 8);
      if ( v19 != v24 )
        KiStackAttachProcess(v24, 0, (__int64)v88);
      v25 = 0;
      v26 = 0LL;
      v27 = *(_QWORD *)(a1 + 48);
      if ( v27 || *(_QWORD *)(a1 + 56) )
      {
        *(_QWORD *)&v85 = 1LL;
        *((_QWORD *)&v85 + 1) = &v86;
        v86 = v27;
        v87 = *(_QWORD *)(a1 + 56);
        v25 = 1;
        v26 = &v85;
      }
      VirtualMemory = MmAllocateVirtualMemory(
                        -1,
                        (int)a1 + 24,
                        (int)a1 + 32,
                        *(_DWORD *)(a1 + 40),
                        4,
                        v26,
                        v25,
                        0,
                        0x10000000,
                        0,
                        0LL);
      goto LABEL_42;
    }
    if ( v18 == 1 )
    {
      v19 = KeGetCurrentThread()->ApcState.Process;
      v20 = *(_KPROCESS **)(a1 + 8);
      if ( v19 != v20 )
        KiStackAttachProcess(v20, 0, (__int64)v88);
      VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
      v28 = VirtualMemory;
      if ( v19 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((__int64)v88, 0, v22, v23);
      *(_DWORD *)(a1 + 8) = v28;
      return;
    }
LABEL_161:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v6 == 7 )
  {
    LOBYTE(v12) = KeAlertThreadByThreadIdEx(*(_QWORD *)(a1 + 8), 0LL);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(unsigned int *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(unsigned int *)(a1 + 24),
                       a1 + 16,
                       a1 + 24);
LABEL_171:
    v41 = PartitionState;
LABEL_172:
    *(_QWORD *)(a1 + 8) = v41;
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      PspIumResolveVirtualFault(a1);
      return;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    if ( v11 == 1 )
    {
      LOBYTE(a3) = *(_BYTE *)(a1 + 24);
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      LOBYTE(v12) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_17:
      v12 = (unsigned __int8)v12;
LABEL_18:
      *(_QWORD *)(a1 + 8) = v12;
      return;
    }
    goto LABEL_161;
  }
  v90[0] = *(_OWORD *)(a1 + 10);
  v90[1] = *(_OWORD *)(a1 + 26);
  v90[2] = *(_OWORD *)(a1 + 42);
  v90[3] = *(_OWORD *)(a1 + 58);
  v90[4] = *(_OWORD *)(a1 + 74);
  v91 = *(_QWORD *)(a1 + 90);
  v92 = *(_DWORD *)(a1 + 98);
  v93 = *(_WORD *)(a1 + 102);
  v94 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v90);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
