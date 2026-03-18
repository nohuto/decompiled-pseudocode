/*
 * XREFs of ObOpenObjectByNameEx @ 0x14089BB40
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x1408A2080 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1408A2300 (NtQueryAttributesFile.c)
 *     NtOpenJobObject @ 0x1408EA5D0 (NtOpenJobObject.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409708A0 (IoQueryInformationByName.c)
 *     IopReferenceDriverObjectByName @ 0x1409C711C (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     NtOpenSymbolicLinkObject @ 0x1409DF9A0 (NtOpenSymbolicLinkObject.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     NtOpenDirectoryObject @ 0x1409E7EB0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1409F7370 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1409F74F0 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140A03550 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140A17B60 (NtOpenSemaphore.c)
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 *     NtOpenSession @ 0x140A58620 (NtOpenSession.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140A81020 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA5A00 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 *     SeClearLearningModeObjectInformation @ 0x140408FE0 (SeClearLearningModeObjectInformation.c)
 *     HalPutDmaAdapter @ 0x1404833B0 (HalPutDmaAdapter.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     RtlValidSecurityDescriptor @ 0x140867870 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1408692BC (SeObjectCreateSaclAccessBits.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v16; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v20; // rdx
  int Information; // edi
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  _QWORD *v25; // rdi
  ULONG_PTR v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r14d
  __int64 v31; // rcx
  _BYTE *v32; // rdi
  PVOID *v33; // rdi
  char *v34; // rsi
  char *v35; // r14
  signed __int64 *v36; // r14
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  signed __int64 v39; // rtt
  struct _DMA_ADAPTER *v40; // rcx
  char *v41; // rdi
  __int64 v42; // rax
  void *v43; // rcx
  struct _KPRCB *v44; // r8
  struct _SLIST_ENTRY *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  signed __int64 v47; // r8
  _KPROCESS *v48; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v50; // rtt
  void *v51; // rcx
  void *v52; // rcx
  struct _SLIST_ENTRY *v53; // r8
  struct _KPRCB *v54; // rdx
  _GENERAL_LOOKASIDE *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct _KPRCB *v58; // rdx
  _GENERAL_LOOKASIDE *v59; // rcx
  _QWORD *v61; // rdi
  struct _KPRCB *v62; // rax
  _GENERAL_LOOKASIDE *v63; // r8
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 *p_WaitBlockList; // [rsp+80h] [rbp-88h]
  __int64 v69; // [rsp+88h] [rbp-80h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v71; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v72; // [rsp+A8h] [rbp-60h]
  __int64 v73; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v74; // [rsp+C0h] [rbp-48h]
  char *v75; // [rsp+C8h] [rbp-40h]
  __int128 v76; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v77; // [rsp+E8h] [rbp-20h]
  __int128 v78; // [rsp+F8h] [rbp-10h]
  __int64 v79; // [rsp+108h] [rbp+0h]
  __int64 v80; // [rsp+148h] [rbp+40h] BYREF

  v8 = a1;
  v79 = 0LL;
  Object = 0LL;
  LODWORD(v80) = 0;
  v69 = 0LL;
  *a8 = 0LL;
  v75 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
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
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v14 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v16)) != 0) )
  {
LABEL_6:
    *(_DWORD *)v14 = CurrentPrcb->Number;
  }
  if ( !v14 )
    return 3221225626LL;
  Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)ListEntry, v14 + 160, 1);
  if ( Information < 0 )
  {
    v62 = KeGetCurrentPrcb();
    v63 = v62->PPLookasideList[8].P;
    ++v63->TotalFrees;
    if ( LOWORD(v63->ListHead.Alignment) < v63->Depth
      || (++v63->FreeMisses,
          v63 = v62->PPLookasideList[8].L,
          ++v63->TotalFrees,
          LOWORD(v63->ListHead.Alignment) < v63->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v63->ListHead, (PSLIST_ENTRY)v14);
    }
    else
    {
      ++v63->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v63->FreeEx == ExFreePool )
      {
        ExFreePool((PVOID)v14);
        return (unsigned int)Information;
      }
      guard_dispatch_icall_no_overrides(v14, v20, v63, v22);
    }
    return (unsigned int)Information;
  }
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v72 = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v73 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v74 = KeGetCurrentThread();
      --v74->KernelApcDisable;
      p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
      v61 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v61,
          (__int64)&CurrentThread[1].WaitBlockList);
      if ( v61 )
        *((_BYTE *)v61 + 10) = 1;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v25 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v25, 0x75536553u);
        LODWORD(v72) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v25 = 0LL;
      }
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      KeLeaveCriticalRegionThread();
    }
    else
    {
      v25 = 0LL;
    }
    v71 = v25;
    v26 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    *((_QWORD *)&v72 + 1) = v26;
    if ( SeTokenLeakTracking )
    {
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 1144) + 284LL));
        if ( v26 == SepTokenLeakToken )
          __debugbreak();
        v25 = v71;
      }
      if ( v25 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25[143] + 284LL));
        if ( v71 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v30 = SepCreateAccessStateFromSubjectContext(&v71, (_QWORD *)v14, (_QWORD *)(v14 + 224), a5, (_DWORD *)(a2 + 76));
    if ( v30 < 0 )
      goto LABEL_49;
    a4 = v14;
  }
  v31 = *(_QWORD *)(v14 + 192);
  if ( v31 )
    *(_QWORD *)(a4 + 64) = v31;
  v32 = *(_BYTE **)(a4 + 64);
  if ( !v32 )
    goto LABEL_18;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v32[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v32);
LABEL_18:
    v33 = (PVOID *)(v14 + 448);
    LODWORD(p_WaitBlockList) = ObpLookupObjectName(
                                 *(_QWORD *)(v14 + 168),
                                 a3,
                                 a6,
                                 *(_QWORD *)(v14 + 200),
                                 0LL,
                                 a7,
                                 a4,
                                 v14 + 448,
                                 (__int64)&v80,
                                 (__int64)&Object);
    v30 = (int)p_WaitBlockList;
    if ( (int)p_WaitBlockList >= 0 )
    {
      if ( *v33 )
      {
        v34 = (char *)Object - 48;
        PsReferenceSiloContext(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v34[-ObpInfoMaskToOffset[v34[26] & 3] + 24]);
      }
      else
      {
        v34 = v75;
      }
      v35 = (char *)*v33;
      if ( *v33 )
      {
        v36 = (signed __int64 *)(v35 + 296);
        _m_prefetchw(v36);
        v37 = *v36;
        v38 = *v36 - 16;
        if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v38 = 0LL;
        if ( (v37 & 2) != 0 || (v39 = *v36, v39 != _InterlockedCompareExchange64(v36, v38, v37)) )
          ExfReleasePushLock(v36);
        KeAbPostRelease((ULONG_PTR)v36);
        if ( *(_BYTE *)(v14 + 470) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*v33, 0x554C624Fu);
          *(_BYTE *)(v14 + 470) = 0;
        }
        LODWORD(v35) = 0;
        *v33 = 0LL;
        *(_BYTE *)(v14 + 469) = 0;
        KeLeaveCriticalRegionThread();
      }
      v40 = (struct _DMA_ADAPTER *)Object;
      v41 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v42 = *((_QWORD *)v41 + 4);
        if ( v42 )
        {
          v43 = *(void **)(v42 + 32);
          if ( v43 )
          {
            if ( *(_BYTE *)(v42 + 16) <= 1u )
              ExFreePoolWithTag(v43, 0);
            *(_QWORD *)(*((_QWORD *)v41 + 4) + 32LL) = 0LL;
          }
          v44 = KeGetCurrentPrcb();
          v45 = (struct _SLIST_ENTRY *)*((_QWORD *)v41 + 4);
          v46 = v44->PPLookasideList[4].P;
          ++v46->TotalFrees;
          if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
            || (++v46->FreeMisses,
                v46 = v44->PPLookasideList[4].L,
                ++v46->TotalFrees,
                LOWORD(v46->ListHead.Alignment) < v46->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v46->ListHead, v45);
          }
          else
          {
            ++v46->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v46->FreeEx == ExFreePool )
              ExFreePool(v45);
            else
              guard_dispatch_icall_no_overrides(v45, v45, v44, v29);
          }
          *((_QWORD *)v41 + 4) = 0LL;
          v40 = (struct _DMA_ADAPTER *)Object;
        }
      }
      else
      {
        LODWORD(v35) = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v41[24] ^ (unsigned __int64)BYTE1(v41)]
                      + 72) & *(_DWORD *)(v14 + 160)) != 0 )
      {
        HalPutDmaAdapter(v40);
        v30 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v77 + 1) = ListEntry;
          *(_QWORD *)&v77 = a2 + 16;
          *(_QWORD *)&v78 = *(_QWORD *)(v14 + 168);
          SeSetLearningModeObjectInformation((__int64)&v76);
          v40 = (struct _DMA_ADAPTER *)Object;
        }
        if ( ObpTraceFlags )
        {
          v64 = (__int64)&v40[-3];
          ObpPushStackInfo((__int64)&v40[-3], 0, 1u, 0x746C6644u);
          ObpPushStackInfo(v64, 1, 1u, 0x6E48624Fu);
          v40 = (struct _DMA_ADAPTER *)Object;
        }
        v30 = ObpCreateHandle(
                (unsigned int)v35,
                (struct _FILE_OBJECT *)v40,
                0,
                a4,
                0,
                *(_DWORD *)(v14 + 160),
                a3,
                0LL,
                v80,
                0LL,
                &v69);
        if ( v30 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        }
        else
        {
          v30 = (int)p_WaitBlockList;
          *a8 = v69;
        }
      }
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v34[-ObpInfoMaskToOffset[v34[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck((__int64)v34);
        ObfDereferenceObject(v34 + 48);
      }
    }
    goto LABEL_49;
  }
  v30 = -1073741703;
LABEL_49:
  if ( a4 == v14 )
  {
    SepDeleteAccessState(a4, v27, v28, v29);
    if ( SeTokenLeakTracking )
    {
      v65 = *(_QWORD *)(a4 + 48);
      if ( v65 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v65 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
          __debugbreak();
      }
      v66 = *(_QWORD *)(a4 + 32);
      if ( v66 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v66 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v47 = *(_QWORD *)(a4 + 48);
    v48 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v48[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v48[1].ActiveProcessors;
    do
    {
      if ( (v47 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v47, 0x75536553u);
        goto LABEL_56;
      }
      v50 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v48[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v50 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v47 - 48, 0, 1u, 0x75536553u);
LABEL_56:
    v51 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v51 )
      ObfDereferenceObjectWithTag(v51, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v52 = *(void **)(v14 + 192);
  if ( v52 )
  {
    if ( *(_BYTE *)(v14 + 176) <= 1u )
      ExFreePoolWithTag(v52, 0);
    *(_QWORD *)(v14 + 192) = 0LL;
  }
  v53 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v54 = KeGetCurrentPrcb();
      v55 = v54->PPLookasideList[5].P;
      ++v55->TotalFrees;
      if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
        || (++v55->FreeMisses,
            v55 = v54->PPLookasideList[5].L,
            ++v55->TotalFrees,
            LOWORD(v55->ListHead.Alignment) < v55->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v55->ListHead, v53);
      }
      else
      {
        ++v55->FreeMisses;
        if ( (void (__stdcall *)(PVOID))v55->FreeEx == ExFreePool )
          ExFreePool(v53);
        else
          guard_dispatch_icall_no_overrides(v53, v54, v53, v29);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v58 = KeGetCurrentPrcb();
  v59 = v58->PPLookasideList[8].P;
  ++v59->TotalFrees;
  if ( LOWORD(v59->ListHead.Alignment) < v59->Depth
    || (++v59->FreeMisses,
        v59 = v58->PPLookasideList[8].L,
        ++v59->TotalFrees,
        LOWORD(v59->ListHead.Alignment) < v59->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v59->ListHead, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++v59->FreeMisses;
    if ( (void (__stdcall *)(PVOID))v59->FreeEx == ExFreePool )
      ExFreePool((PVOID)v14);
    else
      guard_dispatch_icall_no_overrides(v14, v58, v56, v57);
  }
  return (unsigned int)v30;
}
