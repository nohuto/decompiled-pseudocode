/*
 * XREFs of PsDispatchIumService @ 0x14048D020
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeAlertThreadByThreadIdEx @ 0x140338518 (KeAlertThreadByThreadIdEx.c)
 *     PspIumFreePhysicalPages @ 0x14040F384 (PspIumFreePhysicalPages.c)
 *     MmLockLoadedModuleListExclusive @ 0x14042CA30 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042CA74 (MmUnlockLoadedModuleListExclusive.c)
 *     DbgkPostModuleMessage @ 0x140485670 (DbgkPostModuleMessage.c)
 *     PspIumReplenishPartitionPages @ 0x14049D824 (PspIumReplenishPartitionPages.c)
 *     VslAllocatePool @ 0x1404B0800 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1404B9180 (VslFreePoolTransferObject.c)
 *     PspMapView @ 0x1404BC73C (PspMapView.c)
 *     HvlpDepositPages @ 0x140584134 (HvlpDepositPages.c)
 *     VslHandleKsrCall @ 0x14058D56C (VslHandleKsrCall.c)
 *     PspIumAlertMultipleThreadByThreadId @ 0x1405E6164 (PspIumAlertMultipleThreadByThreadId.c)
 *     PspIumAllocatePartitionState @ 0x1405E61E8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E63B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E64D8 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x1405E6704 (PspIumFreePartitionState.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E6A10 (PsAdjustBasicEnclaveThreadList.c)
 *     MmFreeSecurePoolMemory @ 0x14067CCC0 (MmFreeSecurePoolMemory.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1406A6990 (ZwTerminateProcess.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspIumGetSystemData @ 0x14077A898 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14077A8D4 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14077B634 (PsTerminateVsmEnclave.c)
 *     MmCommitHotPatchTable @ 0x1407F5F98 (MmCommitHotPatchTable.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F6080 (MmInsertSecureImageActivePatch.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F6184 (MmPrepareImagePagesForHotPatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F62A8 (MmRemoveSecureImageActivePatch.c)
 *     MmGetSectionStrongImageReference @ 0x1407FB42C (MmGetSectionStrongImageReference.c)
 *     DbgkMapViewOfSection @ 0x140897F08 (DbgkMapViewOfSection.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 *     MmFreeVirtualMemory @ 0x1408DB8A0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MmUnmapViewOfSection @ 0x1408E4C50 (MmUnmapViewOfSection.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x140939394 (DbgkpSuspendProcess.c)
 *     DbgkpResumeProcess @ 0x14093A32C (DbgkpResumeProcess.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     MmAllocateVirtualMemory @ 0x1409E14D0 (MmAllocateVirtualMemory.c)
 *     PspIumResolveVirtualFault @ 0x1409F7A88 (PspIumResolveVirtualFault.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A8B784 (MmUnmapProtectedKernelPageRange.c)
 *     MmMapProtectedKernelPage @ 0x140AA1E4C (MmMapProtectedKernelPage.c)
 *     EtwSetInformation @ 0x140AA4AB0 (EtwSetInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     MmUpdateSlabRangeType @ 0x140C596EC (MmUpdateSlabRangeType.c)
 */

void __fastcall PsDispatchIumService(ULONGLONG a1, __int64 a2, __int64 a3, __int64 a4)
{
  ETWENABLECALLBACK *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int PartitionState; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _KPROCESS *v19; // r14
  _KPROCESS *v20; // rcx
  int v21; // ecx
  __int128 *v22; // r9
  unsigned __int64 v23; // rax
  int VirtualMemory; // eax
  int v25; // ebx
  _KPROCESS *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _MDL *v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _KPROCESS *v33; // rbx
  _KPROCESS *Process; // rsi
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  void *v44; // r8
  _KPROCESS *v45; // rbx
  _KPROCESS *v46; // rcx
  int v47; // esi
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  int SecurePool; // eax
  int v53; // ecx
  const GUID *ActivityId; // rcx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct _MDL *v62; // rbx
  __int64 Pool2; // rax
  __int64 v64; // rbx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  int v69; // eax
  __int64 v70; // r14
  ULONGLONG RegHandle; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v72; // [rsp+68h] [rbp-1E0h] BYREF
  __int128 v73; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v74; // [rsp+88h] [rbp-1C0h]
  _OWORD v75[3]; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v76[272]; // [rsp+C0h] [rbp-188h] BYREF
  _OWORD v77[5]; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v78; // [rsp+220h] [rbp-28h]
  int v79; // [rsp+228h] [rbp-20h]
  __int16 v80; // [rsp+22Ch] [rbp-1Ch]
  char v81; // [rsp+22Eh] [rbp-1Ah]

  RegHandle = a1;
  memset(v75, 0, sizeof(v75));
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
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
  if ( v6 > 0x1A )
  {
    if ( v6 <= 0x27 )
    {
      if ( v6 == 39 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
          *(_QWORD *)(a1 + 24) = 1LL;
        return;
      }
      if ( v6 <= 0x21 )
      {
        if ( v6 == 33 )
        {
          DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
          return;
        }
        v55 = v6 - 27;
        if ( !v55 )
        {
          Pool2 = ExAllocatePool2(0x40uLL);
          v64 = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)Pool2 = 0LL;
            *(_DWORD *)(Pool2 + 8) = 56;
            *(_QWORD *)(Pool2 + 32) = 0LL;
            *(_QWORD *)(Pool2 + 40) = 4096LL;
            *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 8);
            *(_WORD *)(Pool2 + 10) = 2;
            MmMapLockedPagesSpecifyCache((PMDL)Pool2, 0, MmCached, 0LL, 0, 0x40000010u);
            if ( (*(_BYTE *)(v64 + 10) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 8) = 0LL;
              *(_QWORD *)(a1 + 16) = v64;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(v64 + 24);
              return;
            }
            ExFreePoolWithTag((PVOID)v64, 0);
          }
          v27 = 3221225626LL;
LABEL_43:
          *(_QWORD *)(a1 + 8) = v27;
          return;
        }
        v56 = v55 - 1;
        if ( v56 )
        {
          v57 = v56 - 1;
          if ( v57 )
          {
            v58 = v57 - 1;
            if ( !v58 )
            {
              MmUnmapProtectedKernelPageRange(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
              return;
            }
            v59 = v58 - 1;
            if ( v59 )
            {
              if ( v59 == 1 )
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
              goto LABEL_70;
            }
            if ( *(_QWORD *)(a1 + 8) )
              MmLockLoadedModuleListExclusive();
            else
              MmUnlockLoadedModuleListExclusive(*(_BYTE *)(a1 + 16));
          }
          else
          {
            v60 = *(_QWORD *)(a1 + 16);
            v61 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) )
              MmMapDriverTablePage(v61, v60, a3, *(unsigned int *)(a1 + 32));
            else
              MmMapProtectedKernelPage(v61, v60);
          }
          return;
        }
        v62 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v62->MappedSystemVa, v62);
        v30 = v62;
LABEL_135:
        ExFreePoolWithTag(v30, 0);
        return;
      }
      v65 = v6 - 34;
      if ( !v65 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_18;
      }
      v66 = v65 - 1;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( !v67 )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
          return;
        }
        v68 = v67 - 1;
        if ( !v68 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        if ( v68 != 1 )
          goto LABEL_70;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
        goto LABEL_18;
      }
      v33 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v33 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v75);
      v69 = MmUnmapViewOfSection(v33, *(_QWORD *)(a1 + 16));
    }
    else
    {
      if ( v6 > 0x2E )
      {
        v35 = v6 - 47;
        if ( !v35 )
        {
          MmUnlockPages(*(PMDL *)(a1 + 8));
          IoFreeMdl(*(PMDL *)(a1 + 8));
          return;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( !v37 )
          {
            MmInsertSecureImageActivePatch(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 40));
            return;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            MmRemoveSecureImageActivePatch(*(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 16));
            return;
          }
          if ( v38 != 1 )
            goto LABEL_70;
          PartitionState = PspIumAlertMultipleThreadByThreadId(a1);
        }
        else
        {
          PartitionState = MmCommitHotPatchTable(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        }
        goto LABEL_18;
      }
      if ( v6 != 46 )
      {
        v13 = v6 - 40;
        if ( !v13 )
        {
          PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
          return;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          MmUpdateSlabRangeType(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          return;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
          return;
        }
        v31 = v15 - 1;
        if ( !v31 )
        {
          PartitionState = PsAdjustBasicEnclaveThreadList(
                             *(_QWORD *)(a1 + 8),
                             *(_QWORD *)(a1 + 16),
                             *(unsigned int *)(a1 + 24));
          goto LABEL_18;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
            return;
          }
          goto LABEL_70;
        }
        SecurePool = PspIumAllocateSecurePool(a1);
        goto LABEL_103;
      }
      v33 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v33 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v75);
      v69 = MmPrepareImagePagesForHotPatch(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a1 + 16);
    }
    v70 = v69;
    if ( Process != v33 )
      KiUnstackDetachProcess((__int64)v75, 0);
    *(_QWORD *)(a1 + 8) = v70;
    return;
  }
  if ( v6 == 26 )
  {
    v30 = (struct _MDL *)VslFreePoolTransferObject(*(PVOID *)(a1 + 8));
    goto LABEL_135;
  }
  if ( v6 == 13 )
  {
    v19 = KeGetCurrentThread()->ApcState.Process;
    v26 = *(_KPROCESS **)(a1 + 8);
    if ( v19 != v26 )
      KiStackAttachProcess(v26, 0, (__int64)v75);
    VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
    goto LABEL_35;
  }
  if ( v6 > 0xD )
  {
    if ( v6 <= 0x14 )
    {
      if ( v6 == 20 )
      {
        PartitionState = EtwSetInformation(
                           *(_QWORD *)(a1 + 8),
                           *(EVENT_INFO_CLASS *)(a1 + 16),
                           *(PVOID *)(a1 + 24),
                           *(_DWORD *)(a1 + 32));
      }
      else
      {
        v39 = v6 - 14;
        if ( !v39 )
        {
          v45 = KeGetCurrentThread()->ApcState.Process;
          v46 = *(_KPROCESS **)(a1 + 8);
          if ( v45 != v46 )
            KiStackAttachProcess(v46, 0, (__int64)v75);
          v47 = MmProtectVirtualMemory(
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(a1 + 8),
                  (int)a1 + 24,
                  (int)a1 + 32,
                  *(_DWORD *)(a1 + 40),
                  a1 + 40);
          if ( v45 != *(_KPROCESS **)(a1 + 8) )
            KiUnstackDetachProcess((__int64)v75, 0);
          *(_DWORD *)(a1 + 8) = v47;
          return;
        }
        v40 = v39 - 1;
        if ( !v40 )
        {
          LOBYTE(v27) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
          goto LABEL_42;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
          return;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
          {
            RegHandle = 0LL;
            v44 = *(void **)(a1 + 24);
            if ( v44 )
              RelatedActivityId = VslIumEtwEnableCallback;
            *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v44, &RegHandle);
            *(_QWORD *)(a1 + 16) = RegHandle;
            return;
          }
          if ( v43 != 1 )
            goto LABEL_70;
          PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
        }
        else
        {
          memset_0(v76, 0, sizeof(v76));
          PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v76);
        }
      }
LABEL_18:
      *(_QWORD *)(a1 + 8) = PartitionState;
      return;
    }
    v48 = v6 - 21;
    if ( !v48 )
    {
      ActivityId = (const GUID *)(a1 + 32);
      if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
        ActivityId = 0LL;
      if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
        RelatedActivityId = (ETWENABLECALLBACK *)(a1 + 48);
      PartitionState = EtwWriteEx(
                         *(_QWORD *)(a1 + 8),
                         (PCEVENT_DESCRIPTOR)(a1 + 16),
                         0LL,
                         0,
                         ActivityId,
                         (LPCGUID)RelatedActivityId,
                         *(_DWORD *)(a1 + 64),
                         *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
      goto LABEL_18;
    }
    v49 = v48 - 1;
    if ( !v49 )
    {
      PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
      goto LABEL_18;
    }
    v50 = v49 - 1;
    if ( !v50 )
    {
      VslHandleKsrCall(a1);
      return;
    }
    v51 = v50 - 1;
    if ( !v51 )
    {
      v53 = *(_DWORD *)(a1 + 8);
      if ( v53 == -1070268299 || v53 == -1070268286 )
        LOBYTE(RelatedActivityId) = 1;
      LOBYTE(a3) = (_BYTE)RelatedActivityId;
      LOBYTE(a4) = (unsigned int)(v53 + 1070268287) <= 1;
      PartitionState = HvlpDepositPages(0LL, a2, a3, a4);
      goto LABEL_18;
    }
    if ( v51 != 1 )
      goto LABEL_70;
    SecurePool = VslAllocatePool(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), (int)a1 + 16, (int)a1 + 24, a1 + 32);
LABEL_103:
    *(_DWORD *)(a1 + 8) = SecurePool;
    return;
  }
  if ( v6 > 7 )
  {
    v11 = v6 - 8;
    if ( !v11 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        RelatedActivityId = (ETWENABLECALLBACK *)(a1 + 24);
      PartitionState = KeWaitForAlertByThreadId(*(_BYTE *)(a1 + 8), RelatedActivityId, 0LL);
      goto LABEL_18;
    }
    v16 = v11 - 1;
    if ( !v16 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeLeaveCriticalRegion();
      return;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
      *(_QWORD *)(a1 + 8) = 0LL;
      return;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, *(_QWORD *)(a1 + 16), a1 + 16);
      goto LABEL_18;
    }
    if ( v18 != 1 )
      goto LABEL_70;
    v19 = KeGetCurrentThread()->ApcState.Process;
    v20 = *(_KPROCESS **)(a1 + 8);
    if ( v19 != v20 )
      KiStackAttachProcess(v20, 0, (__int64)v75);
    v21 = 0;
    v22 = 0LL;
    v23 = *(_QWORD *)(a1 + 48);
    if ( v23 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v72 = 1LL;
      *((_QWORD *)&v72 + 1) = &v73;
      v73 = v23;
      v74 = *(_QWORD *)(a1 + 56);
      v21 = 1;
      v22 = &v72;
    }
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)a1 + 24,
                      (int)a1 + 32,
                      *(_DWORD *)(a1 + 40),
                      4,
                      v22,
                      v21,
                      0,
                      0x10000000,
                      0,
                      0LL);
LABEL_35:
    v25 = VirtualMemory;
    if ( v19 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess((__int64)v75, 0);
    *(_DWORD *)(a1 + 8) = v25;
    return;
  }
  if ( v6 == 7 )
  {
    LOBYTE(v27) = KeAlertThreadByThreadIdEx(*(_QWORD *)(a1 + 8), 0LL);
LABEL_42:
    v27 = (unsigned __int8)v27;
    goto LABEL_43;
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
    goto LABEL_18;
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
    v28 = v10 - 1;
    if ( !v28 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    if ( v28 == 1 )
    {
      LOBYTE(a3) = *(_BYTE *)(a1 + 24);
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      LOBYTE(v27) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
      goto LABEL_42;
    }
LABEL_70:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  v77[0] = *(_OWORD *)(a1 + 10);
  v77[1] = *(_OWORD *)(a1 + 26);
  v77[2] = *(_OWORD *)(a1 + 42);
  v77[3] = *(_OWORD *)(a1 + 58);
  v77[4] = *(_OWORD *)(a1 + 74);
  v78 = *(_QWORD *)(a1 + 90);
  v79 = *(_DWORD *)(a1 + 98);
  v80 = *(_WORD *)(a1 + 102);
  v81 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v77);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
