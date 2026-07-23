/*
 * XREFs of ObOpenObjectByNameEx @ 0x1408A41E0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405940D8 (IoRevokeHandlesForProcess.c)
 *     NtOpenJobObject @ 0x14085BE00 (NtOpenJobObject.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x1408AA720 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1408AA9A0 (NtQueryAttributesFile.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409590B0 (IoQueryInformationByName.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1409BA838 (IopReferenceDriverObjectByName.c)
 *     NtOpenSymbolicLinkObject @ 0x1409D9750 (NtOpenSymbolicLinkObject.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     NtOpenDirectoryObject @ 0x1409E2E70 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1409EFCE0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1409EFE60 (NtOpenSection.c)
 *     NtOpenMutant @ 0x1409FFA80 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140A10CD0 (NtOpenSemaphore.c)
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 *     NtOpenSession @ 0x140A4FDD0 (NtOpenSession.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140A7BA80 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA0A70 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 *     SeClearLearningModeObjectInformation @ 0x1404014C0 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x14086D5AC (SeObjectCreateSaclAccessBits.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r14d
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Type; // rcx
  __int64 v18; // rdx
  int Information; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  _QWORD *v22; // rdi
  ULONG_PTR v23; // rax
  int v24; // r14d
  __int64 v25; // rcx
  _BYTE *v26; // rdi
  PVOID *v27; // rdi
  char *v28; // rsi
  char *v29; // r14
  signed __int64 *v30; // r14
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rtt
  struct _DMA_ADAPTER *v34; // rcx
  char *v35; // rdi
  __int64 v36; // rax
  void *v37; // rcx
  struct _KPRCB *v38; // r8
  _SLIST_ENTRY *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  signed __int64 v41; // r8
  _KPROCESS *v42; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v44; // rtt
  void *v45; // rcx
  void *v46; // rcx
  _SLIST_ENTRY *v47; // r8
  struct _KPRCB *v48; // rdx
  _GENERAL_LOOKASIDE *v49; // rcx
  struct _KPRCB *v50; // rdx
  _GENERAL_LOOKASIDE *v51; // rcx
  char *v53; // rdi
  struct _KPRCB *v54; // rax
  _GENERAL_LOOKASIDE *v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 *p_WaitBlockList; // [rsp+80h] [rbp-88h]
  __int64 v61; // [rsp+88h] [rbp-80h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v63; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v66; // [rsp+C0h] [rbp-48h]
  char *v67; // [rsp+C8h] [rbp-40h]
  __int128 v68; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-20h]
  __int128 v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+148h] [rbp+40h] BYREF

  v8 = a1;
  v71 = 0LL;
  Object = 0LL;
  LODWORD(v72) = 0;
  v61 = 0LL;
  *a8 = 0LL;
  v67 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14 )
    goto LABEL_6;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v14 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v14
    || (Size = L->Size,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v14 = guard_dispatch_icall_no_overrides(Type, Size)) != 0) )
  {
LABEL_6:
    *(_DWORD *)v14 = CurrentPrcb->Number;
  }
  if ( !v14 )
    return 3221225626LL;
  Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)ListEntry, v14 + 160, 1);
  if ( Information < 0 )
  {
    v54 = KeGetCurrentPrcb();
    v55 = v54->PPLookasideList[8].P;
    ++v55->TotalFrees;
    if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
      || (++v55->FreeMisses,
          v55 = v54->PPLookasideList[8].L,
          ++v55->TotalFrees,
          LOWORD(v55->ListHead.Alignment) < v55->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v55->ListHead, (PSLIST_ENTRY)v14);
    }
    else
    {
      ++v55->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v55->FreeEx == ExFreePool )
      {
        ExFreePool((PVOID)v14);
        return (unsigned int)Information;
      }
      guard_dispatch_icall_no_overrides(v14, v18);
    }
    return (unsigned int)Information;
  }
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v64 = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v65 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v66 = KeGetCurrentThread();
      --v66->KernelApcDisable;
      p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
      v53 = (char *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v53,
          (__int64)&CurrentThread[1].WaitBlockList);
      if ( v53 )
        v53[10] = 1;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v22 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v22, 0x75536553u);
        LODWORD(v64) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v22 = 0LL;
      }
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      KeLeaveCriticalRegionThread();
    }
    else
    {
      v22 = 0LL;
    }
    v63 = v22;
    v23 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    *((_QWORD *)&v64 + 1) = v23;
    if ( SeTokenLeakTracking )
    {
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v23 + 1144) + 284LL));
        if ( v23 == SepTokenLeakToken )
          __debugbreak();
        v22 = v63;
      }
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v22[143] + 284LL));
        if ( v63 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v24 = SepCreateAccessStateFromSubjectContext(&v63, (_QWORD *)v14, (_QWORD *)(v14 + 224), a5, (_DWORD *)(a2 + 76));
    if ( v24 < 0 )
      goto LABEL_49;
    a4 = v14;
  }
  v25 = *(_QWORD *)(v14 + 192);
  if ( v25 )
    *(_QWORD *)(a4 + 64) = v25;
  v26 = *(_BYTE **)(a4 + 64);
  if ( !v26 )
    goto LABEL_18;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v26[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v26);
LABEL_18:
    v27 = (PVOID *)(v14 + 448);
    LODWORD(p_WaitBlockList) = ObpLookupObjectName(
                                 *(_QWORD *)(v14 + 168),
                                 a3,
                                 a6,
                                 *(_QWORD *)(v14 + 200),
                                 0LL,
                                 a7,
                                 a4,
                                 v14 + 448,
                                 (__int64)&v72,
                                 (__int64)&Object);
    v24 = (int)p_WaitBlockList;
    if ( (int)p_WaitBlockList >= 0 )
    {
      if ( *v27 )
      {
        v28 = (char *)Object - 48;
        PsReferenceSiloContext(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v28[-ObpInfoMaskToOffset[v28[26] & 3] + 24]);
      }
      else
      {
        v28 = v67;
      }
      v29 = (char *)*v27;
      if ( *v27 )
      {
        v30 = (signed __int64 *)(v29 + 296);
        _m_prefetchw(v30);
        v31 = *v30;
        v32 = *v30 - 16;
        if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v32 = 0LL;
        if ( (v31 & 2) != 0 || (v33 = *v30, v33 != _InterlockedCompareExchange64(v30, v32, v31)) )
          ExfReleasePushLock(v30);
        KeAbPostRelease((ULONG_PTR)v30);
        if ( *(_BYTE *)(v14 + 470) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*v27, 0x554C624Fu);
          *(_BYTE *)(v14 + 470) = 0;
        }
        LODWORD(v29) = 0;
        *v27 = 0LL;
        *(_BYTE *)(v14 + 469) = 0;
        KeLeaveCriticalRegionThread();
      }
      v34 = (struct _DMA_ADAPTER *)Object;
      v35 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v36 = *((_QWORD *)v35 + 4);
        if ( v36 )
        {
          v37 = *(void **)(v36 + 32);
          if ( v37 )
          {
            if ( *(_BYTE *)(v36 + 16) <= 1u )
              ExFreePoolWithTag(v37, 0);
            *(_QWORD *)(*((_QWORD *)v35 + 4) + 32LL) = 0LL;
          }
          v38 = KeGetCurrentPrcb();
          v39 = (_SLIST_ENTRY *)*((_QWORD *)v35 + 4);
          v40 = v38->PPLookasideList[4].P;
          ++v40->TotalFrees;
          if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
            || (++v40->FreeMisses,
                v40 = v38->PPLookasideList[4].L,
                ++v40->TotalFrees,
                LOWORD(v40->ListHead.Alignment) < v40->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v40->ListHead, v39);
          }
          else
          {
            ++v40->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v40->FreeEx == ExFreePool )
              ExFreePool(v39);
            else
              guard_dispatch_icall_no_overrides(v39, v39);
          }
          *((_QWORD *)v35 + 4) = 0LL;
          v34 = (struct _DMA_ADAPTER *)Object;
        }
      }
      else
      {
        LODWORD(v29) = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v35[24] ^ (unsigned __int64)BYTE1(v35)]
                      + 72) & *(_DWORD *)(v14 + 160)) != 0 )
      {
        HalPutDmaAdapter(v34);
        v24 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v69 + 1) = ListEntry;
          *(_QWORD *)&v69 = a2 + 16;
          *(_QWORD *)&v70 = *(_QWORD *)(v14 + 168);
          SeSetLearningModeObjectInformation((__int64)&v68);
          v34 = (struct _DMA_ADAPTER *)Object;
        }
        if ( ObpTraceFlags )
        {
          v56 = (__int64)&v34[-3];
          ObpPushStackInfo((__int64)&v34[-3], 0, 1u, 0x746C6644u);
          ObpPushStackInfo(v56, 1, 1u, 0x6E48624Fu);
          v34 = (struct _DMA_ADAPTER *)Object;
        }
        v24 = ObpCreateHandle(
                (unsigned int)v29,
                (struct _FILE_OBJECT *)v34,
                0,
                a4,
                0,
                *(_DWORD *)(v14 + 160),
                a3,
                0LL,
                v72,
                0LL,
                &v61);
        if ( v24 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        }
        else
        {
          v24 = (int)p_WaitBlockList;
          *a8 = v61;
        }
      }
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v28[-ObpInfoMaskToOffset[v28[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck((__int64)v28);
        ObfDereferenceObject(v28 + 48);
      }
    }
    goto LABEL_49;
  }
  v24 = -1073741703;
LABEL_49:
  if ( a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( SeTokenLeakTracking )
    {
      v57 = *(_QWORD *)(a4 + 48);
      if ( v57 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v57 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
          __debugbreak();
      }
      v58 = *(_QWORD *)(a4 + 32);
      if ( v58 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v58 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v41 = *(_QWORD *)(a4 + 48);
    v42 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v42[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v42[1].ActiveProcessors;
    do
    {
      if ( (v41 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v41, 0x75536553u);
        goto LABEL_56;
      }
      v44 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v42[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v44 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v41 - 48, 0, 1u, 0x75536553u);
LABEL_56:
    v45 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v45 )
      ObfDereferenceObjectWithTag(v45, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v46 = *(void **)(v14 + 192);
  if ( v46 )
  {
    if ( *(_BYTE *)(v14 + 176) <= 1u )
      ExFreePoolWithTag(v46, 0);
    *(_QWORD *)(v14 + 192) = 0LL;
  }
  v47 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v48 = KeGetCurrentPrcb();
      v49 = v48->PPLookasideList[5].P;
      ++v49->TotalFrees;
      if ( LOWORD(v49->ListHead.Alignment) < v49->Depth
        || (++v49->FreeMisses,
            v49 = v48->PPLookasideList[5].L,
            ++v49->TotalFrees,
            LOWORD(v49->ListHead.Alignment) < v49->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v49->ListHead, v47);
      }
      else
      {
        ++v49->FreeMisses;
        if ( (void (__stdcall *)(PVOID))v49->FreeEx == ExFreePool )
          ExFreePool(v47);
        else
          guard_dispatch_icall_no_overrides(v47, v48);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v50 = KeGetCurrentPrcb();
  v51 = v50->PPLookasideList[8].P;
  ++v51->TotalFrees;
  if ( LOWORD(v51->ListHead.Alignment) < v51->Depth
    || (++v51->FreeMisses,
        v51 = v50->PPLookasideList[8].L,
        ++v51->TotalFrees,
        LOWORD(v51->ListHead.Alignment) < v51->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v51->ListHead, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++v51->FreeMisses;
    if ( (void (__stdcall *)(PVOID))v51->FreeEx == ExFreePool )
      ExFreePool((PVOID)v14);
    else
      guard_dispatch_icall_no_overrides(v14, v50);
  }
  return (unsigned int)v24;
}
