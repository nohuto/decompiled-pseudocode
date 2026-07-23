/*
 * XREFs of ObOpenObjectByNameEx @ 0x14085B430
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140593A48 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     NtOpenJobObject @ 0x1408DB200 (NtOpenJobObject.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x1408EF430 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1408EF6B0 (NtQueryAttributesFile.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     IoQueryInformationByName @ 0x1409870E0 (IoQueryInformationByName.c)
 *     IopReferenceDriverObjectByName @ 0x1409AE1B8 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     NtOpenSymbolicLinkObject @ 0x1409E0AA0 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x1409EDFF0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1409FCB90 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1409FCCB0 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140A040F0 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140A0F110 (NtOpenSemaphore.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     NtOpenSession @ 0x140A54C80 (NtOpenSession.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140A7D9A0 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA0AB0 (IopFastQueryNetworkAttributes.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
 *     SeClearLearningModeObjectInformation @ 0x140401830 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x140A2EC60 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r14d
  char *v11; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // rbx
  int Information; // edi
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v18; // rdi
  ULONG_PTR v19; // rax
  int v20; // r14d
  __int64 v21; // rcx
  _BYTE *v22; // rdi
  PVOID *v23; // rdi
  char *v24; // r14
  signed __int64 *v25; // r14
  signed __int64 v26; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // rtt
  struct _DMA_ADAPTER *v29; // rcx
  char *v30; // rdi
  __int64 v31; // rax
  void *v32; // rcx
  struct _KPRCB *v33; // r8
  _SLIST_ENTRY *v34; // rdx
  _GENERAL_LOOKASIDE *v35; // rcx
  signed __int64 v36; // r8
  _KPROCESS *v37; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v39; // rtt
  void *v40; // rcx
  void *v41; // rcx
  _SLIST_ENTRY *v42; // r8
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  __int64 *v48; // rdi
  struct _KPRCB *v49; // rax
  _GENERAL_LOOKASIDE *v50; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Type; // rcx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 *p_WaitBlockList; // [rsp+80h] [rbp-88h]
  __int64 v58; // [rsp+88h] [rbp-80h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v60; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-60h]
  struct _LIST_ENTRY *Flink; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v63; // [rsp+C0h] [rbp-48h]
  _KPROCESS *Process; // [rsp+C8h] [rbp-40h]
  __int128 v65; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v66; // [rsp+E8h] [rbp-20h]
  __int128 v67; // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+158h] [rbp+50h] BYREF
  __int64 v70; // [rsp+160h] [rbp+58h]

  v70 = a2;
  v8 = a1;
  v68 = 0LL;
  Object = 0LL;
  LODWORD(v69) = 0;
  v11 = 0LL;
  v58 = 0LL;
  *a8 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[8].L,
        ++L->TotalAllocates,
        (v14 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (Type = (unsigned int)L->Type, ++L->AllocateMisses, (v14 = guard_dispatch_icall_no_overrides(Type)) != 0) )
  {
    *(_DWORD *)v14 = CurrentPrcb->Number;
  }
  if ( !v14 )
    return 3221225626LL;
  Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)ListEntry, v14 + 160, 1);
  if ( Information < 0 )
  {
    v49 = KeGetCurrentPrcb();
    v50 = v49->PPLookasideList[8].P;
    ++v50->TotalFrees;
    if ( LOWORD(v50->ListHead.Alignment) < v50->Depth
      || (++v50->FreeMisses,
          v50 = v49->PPLookasideList[8].L,
          ++v50->TotalFrees,
          LOWORD(v50->ListHead.Alignment) < v50->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v50->ListHead, (PSLIST_ENTRY)v14);
    }
    else
    {
      ++v50->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v50->FreeEx == ExFreePool )
      {
        ExFreePool((PVOID)v14);
        return (unsigned int)Information;
      }
      guard_dispatch_icall_no_overrides(v14);
    }
    return (unsigned int)Information;
  }
  v16 = v70;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v61 = 0LL;
    Process = CurrentThread->ApcState.Process;
    Flink = Process[1].Header.WaitListHead.Flink;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v63 = KeGetCurrentThread();
      --v63->KernelApcDisable;
      p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
      v48 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v48,
          (unsigned __int64)&CurrentThread[1].WaitBlockList);
      if ( v48 )
        *((_BYTE *)v48 + 10) = 1;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v18 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v18, 0x75536553u);
        LODWORD(v61) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v18 = 0LL;
      }
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v63);
    }
    else
    {
      v18 = 0LL;
    }
    v60 = v18;
    v19 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
    *((_QWORD *)&v61 + 1) = v19;
    if ( SeTokenLeakTracking )
    {
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 1144) + 284LL));
        if ( v19 == SepTokenLeakToken )
          __debugbreak();
        v18 = v60;
      }
      if ( v18 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v18[143] + 284LL));
        if ( v60 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v20 = SepCreateAccessStateFromSubjectContext(&v60, (_QWORD *)v14, (_QWORD *)(v14 + 224), a5, (_DWORD *)(v16 + 76));
    if ( v20 < 0 )
      goto LABEL_44;
    a4 = v14;
  }
  v21 = *(_QWORD *)(v14 + 192);
  if ( v21 )
    *(_QWORD *)(a4 + 64) = v21;
  v22 = *(_BYTE **)(a4 + 64);
  if ( !v22 )
    goto LABEL_16;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v22[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v22);
LABEL_16:
    v23 = (PVOID *)(v14 + 448);
    LODWORD(p_WaitBlockList) = ObpLookupObjectName(
                                 *(_QWORD *)(v14 + 168),
                                 a3,
                                 a6,
                                 *(_QWORD *)(v14 + 200),
                                 0LL,
                                 a7,
                                 a4,
                                 v14 + 448,
                                 (__int64)&v69,
                                 (__int64)&Object);
    v20 = (int)p_WaitBlockList;
    if ( (int)p_WaitBlockList >= 0 )
    {
      if ( *v23 )
      {
        v11 = (char *)Object - 48;
        PsReferenceSiloContext(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v11[-ObpInfoMaskToOffset[v11[26] & 3] + 24]);
      }
      v24 = (char *)*v23;
      if ( *v23 )
      {
        v25 = (signed __int64 *)(v24 + 296);
        _m_prefetchw(v25);
        v26 = *v25;
        v27 = *v25 - 16;
        if ( (*v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v27 = 0LL;
        if ( (v26 & 2) != 0 || (v28 = *v25, v28 != _InterlockedCompareExchange64(v25, v27, v26)) )
          ExfReleasePushLock(v25);
        KeAbPostRelease((ULONG_PTR)v25);
        if ( *(_BYTE *)(v14 + 470) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*v23, 0x554C624Fu);
          *(_BYTE *)(v14 + 470) = 0;
        }
        LODWORD(v24) = 0;
        *v23 = 0LL;
        *(_BYTE *)(v14 + 469) = 0;
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      v29 = (struct _DMA_ADAPTER *)Object;
      v30 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v31 = *((_QWORD *)v30 + 4);
        if ( v31 )
        {
          v32 = *(void **)(v31 + 32);
          if ( v32 )
          {
            if ( *(_BYTE *)(v31 + 16) <= 1u )
              ExFreePoolWithTag(v32, 0);
            *(_QWORD *)(*((_QWORD *)v30 + 4) + 32LL) = 0LL;
          }
          v33 = KeGetCurrentPrcb();
          v34 = (_SLIST_ENTRY *)*((_QWORD *)v30 + 4);
          v35 = v33->PPLookasideList[4].P;
          ++v35->TotalFrees;
          if ( LOWORD(v35->ListHead.Alignment) < v35->Depth
            || (++v35->FreeMisses,
                v35 = v33->PPLookasideList[4].L,
                ++v35->TotalFrees,
                LOWORD(v35->ListHead.Alignment) < v35->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v35->ListHead, v34);
          }
          else
          {
            ++v35->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v35->FreeEx == ExFreePool )
              ExFreePool(v34);
            else
              guard_dispatch_icall_no_overrides(v34);
          }
          *((_QWORD *)v30 + 4) = 0LL;
          v29 = (struct _DMA_ADAPTER *)Object;
        }
      }
      else
      {
        LODWORD(v24) = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v30[24] ^ (unsigned __int64)BYTE1(v30)]
                      + 72) & *(_DWORD *)(v14 + 160)) != 0 )
      {
        HalPutDmaAdapter(v29);
        v20 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v66 + 1) = ListEntry;
          *(_QWORD *)&v66 = v16 + 16;
          *(_QWORD *)&v67 = *(_QWORD *)(v14 + 168);
          SeSetLearningModeObjectInformation((__int64)&v65);
          v29 = (struct _DMA_ADAPTER *)Object;
        }
        if ( ObpTraceFlags )
        {
          v53 = (__int64)&v29[-3];
          ObpPushStackInfo((__int64)&v29[-3], 0, 1u, 0x746C6644u);
          ObpPushStackInfo(v53, 1, 1u, 0x6E48624Fu);
          v29 = (struct _DMA_ADAPTER *)Object;
        }
        v20 = ObpCreateHandle((unsigned int)v24, (char *)v29, 0, a4, 0, *(_DWORD *)(v14 + 160), a3, 0LL, v69, 0LL, &v58);
        if ( v20 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        }
        else
        {
          v20 = (int)p_WaitBlockList;
          *a8 = v58;
        }
      }
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v11[-ObpInfoMaskToOffset[v11[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck((__int64)v11);
        ObfDereferenceObject(v11 + 48);
      }
    }
    goto LABEL_44;
  }
  v20 = -1073741703;
LABEL_44:
  if ( a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( SeTokenLeakTracking )
    {
      v54 = *(_QWORD *)(a4 + 48);
      if ( v54 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v54 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
          __debugbreak();
      }
      v55 = *(_QWORD *)(a4 + 32);
      if ( v55 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v55 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v36 = *(_QWORD *)(a4 + 48);
    v37 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v37[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v37[1].ActiveProcessors;
    do
    {
      if ( (v36 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v36, 0x75536553u);
        goto LABEL_51;
      }
      v39 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v37[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v39 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v36 - 48, 0, 1u, 0x75536553u);
LABEL_51:
    v40 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v40 )
      ObfDereferenceObjectWithTag(v40, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v41 = *(void **)(v14 + 192);
  if ( v41 )
  {
    if ( *(_BYTE *)(v14 + 176) <= 1u )
      ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(v14 + 192) = 0LL;
  }
  v42 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->PPLookasideList[5].P;
      ++v44->TotalFrees;
      if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
        || (++v44->FreeMisses,
            v44 = v43->PPLookasideList[5].L,
            ++v44->TotalFrees,
            LOWORD(v44->ListHead.Alignment) < v44->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v44->ListHead, v42);
      }
      else
      {
        ++v44->FreeMisses;
        if ( (void (__stdcall *)(PVOID))v44->FreeEx == ExFreePool )
          ExFreePool(v42);
        else
          guard_dispatch_icall_no_overrides(v42);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v45 = KeGetCurrentPrcb();
  v46 = v45->PPLookasideList[8].P;
  ++v46->TotalFrees;
  if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
    || (++v46->FreeMisses,
        v46 = v45->PPLookasideList[8].L,
        ++v46->TotalFrees,
        LOWORD(v46->ListHead.Alignment) < v46->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v46->ListHead, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++v46->FreeMisses;
    if ( (void (__stdcall *)(PVOID))v46->FreeEx == ExFreePool )
      ExFreePool((PVOID)v14);
    else
      guard_dispatch_icall_no_overrides(v14);
  }
  return (unsigned int)v20;
}
