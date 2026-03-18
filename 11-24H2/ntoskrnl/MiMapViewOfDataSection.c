/*
 * XREFs of MiMapViewOfDataSection @ 0x1408E0820
 * Callers:
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x140274480 (MiDecrementVadsBeingDeleted.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiSetVadFlags @ 0x1402B8D5C (MiSetVadFlags.c)
 *     MiSetVadDeleted @ 0x1402B94A0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x140319FD0 (MiGetControlAreaPtes.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiLocatePagefileSubsection @ 0x1403E4EE0 (MiLocatePagefileSubsection.c)
 *     MiWriteVadFlags2 @ 0x1403FD470 (MiWriteVadFlags2.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiComputeContiguousSubsectionPte @ 0x14043F300 (MiComputeContiguousSubsectionPte.c)
 *     MiAweControlArea @ 0x140440AA0 (MiAweControlArea.c)
 *     MiUpdateVadStartVpn @ 0x140449454 (MiUpdateVadStartVpn.c)
 *     MiLocateExclusiveSecure @ 0x140481B8C (MiLocateExclusiveSecure.c)
 *     MiDereferenceExtendInfo @ 0x1404844BC (MiDereferenceExtendInfo.c)
 *     MiFindPlaceholderVadToReplace @ 0x140497E8C (MiFindPlaceholderVadToReplace.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CDEA0 (MiUnlockAndDereferenceNestedVad.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 *     MiReferenceFileObjectForMap @ 0x1408E1590 (MiReferenceFileObjectForMap.c)
 *     MiSelectUserAddress @ 0x1408E15D0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1408E25B0 (MiAdvanceVadHint.c)
 *     MiLogMapFileEvent @ 0x1408E2B54 (MiLogMapFileEvent.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 *     MiCreatePlaceholderStorage @ 0x1408F8210 (MiCreatePlaceholderStorage.c)
 *     MiCommitVadMetadataBits @ 0x1408FA9B0 (MiCommitVadMetadataBits.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 *     MiIsVaRangeAvailable @ 0x140A139AC (MiIsVaRangeAvailable.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6753C (MiPreparePlaceholderVadReplacement.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 *     MiFreePlaceholderStorage @ 0x140A94A68 (MiFreePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v8; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  void *v14; // r9
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r13
  bool v24; // bl
  unsigned int *SubsectionNode; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r12
  bool v29; // zf
  __int64 *v30; // rbx
  unsigned int v31; // r13d
  unsigned __int64 v32; // r13
  __int64 Pool; // rax
  __int16 v34; // cx
  int v35; // ebx
  int v36; // ecx
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r10
  __int64 v40; // r12
  __int64 v41; // r13
  unsigned __int64 v42; // rbx
  int v43; // r15d
  __int64 v45; // r8
  PVOID v46; // rbx
  __int64 v47; // rbx
  void *v48; // r12
  __int64 v49; // rax
  __int64 *v50; // rax
  int v51; // r9d
  int v52; // eax
  PVOID v53; // rdi
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned __int64 v59; // r8
  _QWORD *v60; // rax
  _QWORD *v61; // r13
  __int64 v62; // r13
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // r13
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // edx
  __int64 v70; // rdx
  __int64 v71; // rcx
  void *v72; // rcx
  int v73; // ecx
  unsigned int v74; // eax
  int v75; // ecx
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-99h]
  PVOID P; // [rsp+58h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-89h]
  unsigned __int64 v79; // [rsp+68h] [rbp-81h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+70h] [rbp-79h]
  unsigned __int64 ControlAreaPtes; // [rsp+78h] [rbp-71h]
  int v82; // [rsp+80h] [rbp-69h]
  int v83; // [rsp+84h] [rbp-65h]
  __int64 v84; // [rsp+88h] [rbp-61h]
  unsigned __int64 v85; // [rsp+90h] [rbp-59h]
  unsigned __int64 v86; // [rsp+98h] [rbp-51h]
  __int64 v87; // [rsp+A0h] [rbp-49h]
  __int64 v88; // [rsp+A8h] [rbp-41h]
  __int64 v89; // [rsp+B0h] [rbp-39h]
  __int64 v90; // [rsp+B8h] [rbp-31h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-29h]
  __int64 v92; // [rsp+C8h] [rbp-21h] BYREF
  unsigned __int64 v93; // [rsp+D0h] [rbp-19h]
  __int64 v94; // [rsp+D8h] [rbp-11h] BYREF
  unsigned __int64 v95; // [rsp+E0h] [rbp-9h] BYREF
  int PlaceholderStorage; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned __int64 *v97; // [rsp+140h] [rbp+57h]
  unsigned __int64 *v98; // [rsp+148h] [rbp+5Fh]

  v98 = a4;
  v97 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v79 = 0LL;
  v94 = 0LL;
  v83 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( (unsigned int)MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *(_QWORD *)(v12 + 88);
  v16 = *(_DWORD *)(v12 + 40);
  v17 = *v13;
  v84 = v15;
  v89 = (__int64)v14;
  v87 = v17;
  v18 = v16 & 0x2000;
  if ( (v16 & 0x2000) != 0 && (void *)v13[8] == v14 )
    return 3221225485LL;
  v19 = v16 & 0x40000000;
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v19 || (v16 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    if ( *(void **)(a1 + 64) == v14 )
    {
      if ( _bittest16((const signed __int16 *)(v17 + 12), 0xAu) )
        goto LABEL_6;
    }
    else if ( (*(_BYTE *)(a1 + 62) & 0xC) == 4 )
    {
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  if ( v19 && ((v16 & 0x2000) != 0 || *(void **)(v15 + 1600) == v14 && (*(_DWORD *)(a2 + 60) & 1) == 0) )
    return 3221225485LL;
LABEL_6:
  v20 = *(_QWORD *)(a2 + 16);
  if ( v20 >= 0x200000 && ((v20 - 1) & *(_QWORD *)(a2 + 32)) != 0 )
    return 3221225503LL;
  CurrentThread = KeGetCurrentThread();
  v21 = (__int64)v14;
  v88 = *(_QWORD *)(v15 + 1040) + 768LL;
  PlaceholderVadToReplace = v14;
  P = v14;
  v82 = (int)v14;
  MiCheckPurgeAndUpMapCount(a1, v18, v17);
  v22 = *a4 >> 12;
  v23 = (*a4 + *(_QWORD *)(a2 + 24)) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v22 >= ControlAreaPtes )
  {
    MiDereferenceControlArea(a1);
    return 3221225503LL;
  }
  v24 = 0;
  if ( *(_QWORD *)(a1 + 64) == v21 )
  {
    v95 = v22;
    SubsectionNode = MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v95);
    BugCheckParameter2 = (ULONG_PTR)SubsectionNode;
    if ( a8 == v21 && a7 == 24 )
      v24 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v98, 0);
    BugCheckParameter2 = (ULONG_PTR)SubsectionNode;
  }
  v26 = SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26);
  v27 = v23 - v26;
  v28 = v22 - v26;
  v29 = !v24;
  v30 = (__int64 *)BugCheckParameter2;
  if ( !v29 )
    v27 = 1LL;
  v91 = v27;
  PlaceholderStorage = MiAddViewsForSection((int **)BugCheckParameter2, v27, 8LL);
  v31 = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
  {
    v48 = (void *)v21;
    goto LABEL_82;
  }
  v90 = *(_QWORD *)(BugCheckParameter2 + 8) + 8 * v28;
  if ( *(_QWORD *)(a1 + 64) == v21 && a8 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
  {
    v55 = v21;
    LOBYTE(v55) = (v54 & 0xFFF) != 0;
    v89 = (v54 >> 12) + v55;
  }
  v92 = v21;
  v32 = *(_QWORD *)(a5 + 24) << 12;
  ControlAreaPtes = v32;
  Pool = MiAllocatePool(0x40uLL, 0x88uLL, 543449430);
  v21 = Pool;
  if ( !Pool )
  {
    v48 = P;
    v31 = -1073741670;
    PlaceholderStorage = -1073741670;
    goto LABEL_81;
  }
  v34 = a7;
  *(_QWORD *)(Pool + 16) = -2LL;
  *(_QWORD *)(Pool + 80) = v90;
  *(_QWORD *)(Pool + 72) = BugCheckParameter2;
  v35 = 0;
  if ( a6 == 1 )
    v35 = 4;
  v36 = *(_DWORD *)(Pool + 48) ^ ((unsigned __int16)*(_DWORD *)(Pool + 48) ^ (unsigned __int16)(v34 << 7)) & 0xF80;
  *(_DWORD *)(Pool + 48) = v36;
  *(_DWORD *)(Pool + 48) = v36 ^ (v36 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v15 + 1040) + 1060LL) = 1;
  if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
    v35 |= 2u;
  *(_QWORD *)(Pool + 40) = 0LL;
  if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(Pool);
    v31 = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_138;
    v32 = ControlAreaPtes;
  }
  *(_QWORD *)(v21 + 128) = MiReferenceFileObjectForMap(a5);
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) == 0 )
    goto LABEL_25;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x100000;
    goto LABEL_25;
  }
  v69 = MiIncrementLargeSubsections((__int64 *)BugCheckParameter2, v91);
  if ( v69 <= 1 )
  {
    v73 = *(_DWORD *)(v21 + 48);
    v83 = 1;
    v74 = v73 & 0xFFE7FFFF | 0x100000;
    v75 = v73 | 0x180000;
    if ( v69 == 1 )
      v75 = v74;
    *(_DWORD *)(v21 + 48) = v75;
LABEL_25:
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
    if ( (*(_DWORD *)(v15 + 500) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
      {
        v37 = *v97;
      }
      else
      {
        if ( !v32 )
        {
          PlaceholderStorage = MiSelectUserAddress(
                                 *(_DWORD *)(a2 + 40),
                                 *(_QWORD *)a2,
                                 *(_QWORD *)(a2 + 8),
                                 *(_QWORD *)(a2 + 24),
                                 *(_QWORD *)(a2 + 16),
                                 0LL,
                                 a7,
                                 0,
                                 (__int64)&v92,
                                 (__int64)&v79);
          v31 = PlaceholderStorage;
          if ( PlaceholderStorage >= 0 )
          {
            v37 = v79;
            v85 = v79;
            v86 = *(_QWORD *)(a2 + 24) + v79 - 1;
            goto LABEL_30;
          }
LABEL_172:
          v48 = P;
LABEL_77:
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
          if ( v82 )
            MiRemoveSharedCommitNode(a1, v15, 0LL);
          goto LABEL_79;
        }
        v37 = *v98 + v32;
      }
      v56 = *(_QWORD *)(a2 + 24) - 1LL;
      v85 = v37;
      v57 = v37 + v56;
      v79 = v37;
      v29 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
      v86 = v57;
      if ( v29 )
      {
        if ( !(unsigned int)MiIsVaRangeAvailable(v15, v37, (int)v57 - (int)v37 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        {
          v31 = -1073741800;
          PlaceholderStorage = -1073741800;
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
          v48 = P;
LABEL_79:
          if ( v83 )
          {
            v50 = (__int64 *)MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v98 - 1, 0);
            v30 = (__int64 *)BugCheckParameter2;
            MiDecrementLargeSubsections((__int64 *)BugCheckParameter2, v50);
          }
          else
          {
            v30 = (__int64 *)BugCheckParameter2;
          }
          goto LABEL_81;
        }
      }
      else
      {
        PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                           v37,
                                           v57,
                                           *(_BYTE *)(a2 + 57),
                                           &PlaceholderStorage);
        if ( !PlaceholderVadToReplace )
        {
          v31 = PlaceholderStorage;
          goto LABEL_172;
        }
      }
LABEL_30:
      ControlAreaPtes = v37 >> 12;
      v93 = v86 >> 12;
      MiUpdateVadStartVpn(v21, v37 >> 12);
      *(_DWORD *)(v21 + 28) = v38;
      *(_BYTE *)(v21 + 33) = BYTE4(v38);
      if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
      {
        --CurrentThread->SpecialApcDisable;
        v60 = KeAbPreAcquire((__int64)&qword_140E2CC10, 0LL);
        v61 = v60;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CC10, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E2CC10, (__int64)v60, (__int64)&qword_140E2CC10);
        if ( v61 )
          *((_BYTE *)v61 + 10) = 1;
        v62 = *(_QWORD *)(v87 + 32);
        if ( v62 )
        {
          ++*(_DWORD *)(v62 + 8);
        }
        else
        {
          v67 = MiAllocatePool(0x40uLL, 0x10uLL, 2017684813);
          v62 = v67;
          if ( !v67 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
            KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
            v47 = (__int64)CurrentThread;
            v29 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v29
              && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v71, v70);
            }
            v31 = -1073741670;
            PlaceholderStorage = -1073741670;
            goto LABEL_73;
          }
          v68 = v87;
          *(_DWORD *)(v67 + 8) = 1;
          *(_QWORD *)v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 24), -1LL, -1LL);
          *(_QWORD *)(v68 + 32) = v67;
        }
        v63 = *(_QWORD *)(a5 + 48);
        if ( *(_QWORD *)v62 < v63 )
          *(_QWORD *)v62 = v63;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
        KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
        v29 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v29
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery((__int64)CurrentThread, v64);
        }
        v38 = v93;
        v39 = ControlAreaPtes;
        *(_QWORD *)(v21 + 120) = v62;
        v37 = v79;
        v85 = v79;
      }
      if ( (a7 & 5) == 5 )
      {
        v58 = *(unsigned int *)(v21 + 24);
        v59 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
            - (v58 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
            + 1;
        *(_DWORD *)(v21 + 52) = *(_DWORD *)(v21 + 28) - v58 + 1;
        *(_BYTE *)(v21 + 34) = BYTE4(v59);
      }
      *(_QWORD *)(v21 + 88) = MiComputeContiguousSubsectionPte(BugCheckParameter2, v38 + v28 - v39);
      if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(v21 + 48) & 8) != 0 && MiLocateExclusiveSecure(v21)
          || (v49 = MiAllocatePool(0x40uLL, 0x58uLL, 1699966285), (P = (PVOID)v49) == 0LL) )
        {
          v47 = (__int64)CurrentThread;
          v31 = -1073741670;
          PlaceholderStorage = -1073741670;
          v48 = 0LL;
          goto LABEL_74;
        }
        *(_QWORD *)(v49 + 8) = v37;
        *(_DWORD *)(v49 + 80) = 2;
        *(_QWORD *)(v49 + 16) = v86;
        *(_DWORD *)(v49 + 8) = v37 | 4;
        MiInsertVadEvent(v21, (unsigned __int64 *)v49, 1);
        MiSetVadFlags(v21, 1LL, 1);
      }
      if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
      {
        *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFFFFF8F | 0x50;
        v35 |= 1u;
      }
      MiWriteVadFlags2(v21, v35, 1);
      v40 = v84;
      if ( !*(_QWORD *)(a1 + 64) )
      {
        PlaceholderStorage = MiInsertSharedCommitNode(a1, v84, 0LL);
        v31 = PlaceholderStorage;
        if ( PlaceholderStorage < 0 )
          goto LABEL_72;
        v82 = 1;
      }
      if ( v89 && !(unsigned int)MiChargeSegmentCommit(BugCheckParameter2, v90) )
      {
        v31 = -1073741523;
        PlaceholderStorage = -1073741523;
        goto LABEL_72;
      }
      PlaceholderStorage = MiInsertVadCharges(v21, v40);
      v31 = PlaceholderStorage;
      if ( PlaceholderStorage >= 0 )
      {
        if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
          *(_DWORD *)(v21 + 48) = *(_DWORD *)(v21 + 48) & 0xFFE7FFFF | 0x80000;
        if ( PlaceholderVadToReplace )
        {
          MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v40, v88);
          v65 = KeAbPreAcquire(v21 + 40, 0LL);
          v66 = v65;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 40), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v21 + 40), (__int64)v65, v21 + 40);
          v42 = v79;
          if ( v66 )
            *((_BYTE *)v66 + 10) = 1;
          v41 = (__int64)CurrentThread;
        }
        else
        {
          v41 = (__int64)CurrentThread;
          MiLockVad((__int64)CurrentThread, v21);
          v42 = v85;
        }
        MiInsertVad(v21, v40, 0);
        if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v87 + 56) )
          *(_QWORD *)(v87 + 56) = v42;
        if ( v92 )
          MiAdvanceVadHint(ControlAreaPtes, v93);
        if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
          v42 = v79;
        }
        if ( (PerfGlobalGroupMask & 0x8000) != 0 )
          MiLogMapFileEvent(v21, 1061LL);
        v43 = 0;
        PlaceholderStorage = 0;
        if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
        {
          if ( !PlaceholderVadToReplace )
          {
            MiUnlockVad(v41, v21);
            UNLOCK_ADDRESS_SPACE_UNORDERED(v41, v40);
LABEL_61:
            *v97 = v42;
            return (unsigned int)v43;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 40));
          KeAbPostRelease(v21 + 40);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v41, v40);
          v42 = v79;
          v43 = PlaceholderStorage;
          v53 = PlaceholderVadToReplace;
          goto LABEL_110;
        }
        UNLOCK_ADDRESS_SPACE_UNORDERED(v41, v40);
        MiReferenceVad(v21);
        v45 = *(unsigned int *)(a2 + 120);
        if ( (_DWORD)v45 )
        {
          v43 = MiCommitVadMetadataBits(v21, 0LL, v45);
          if ( v43 < 0 )
          {
LABEL_68:
            v46 = PlaceholderVadToReplace;
            MiUnmapVad((PVOID)v21);
            if ( v46 )
              MiFinishPlaceholderVadReplacement(v46);
            return (unsigned int)v43;
          }
        }
        if ( *(_QWORD *)(a2 + 72) )
        {
          v51 = *(_DWORD *)(a2 + 68);
          if ( (unsigned int)(v51 - 1) > 1 && v51 != 4 && v51 != -2147483647 )
          {
            v52 = -1073741755;
            goto LABEL_178;
          }
          v52 = MiSecureVad(v21, v42, *(_QWORD *)(a2 + 24), v51, 0, (__int64)&v94);
          if ( v52 < 0 )
          {
LABEL_178:
            v43 = v52;
            goto LABEL_68;
          }
          **(_QWORD **)(a2 + 72) = qword_140E2DA80 ^ v94 ^ v40;
        }
        v53 = PlaceholderVadToReplace;
        if ( !PlaceholderVadToReplace )
        {
          MiUnlockAndDereferenceVad((PVOID)v21);
          goto LABEL_61;
        }
        MiUnlockAndDereferenceNestedVad((PVOID)v21);
LABEL_110:
        MiSetVadDeleted((__int64)v53);
        MiDeleteVad(v53);
        MiDecrementVadsBeingDeleted(v88);
        goto LABEL_61;
      }
LABEL_72:
      v47 = (__int64)CurrentThread;
LABEL_73:
      v48 = P;
LABEL_74:
      if ( PlaceholderVadToReplace )
        MiUnlockVad(v47, (__int64)PlaceholderVadToReplace);
      v15 = v84;
      goto LABEL_77;
    }
    v31 = -1073741558;
    PlaceholderStorage = -1073741558;
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
    v48 = P;
    goto LABEL_79;
  }
  v31 = -1073741280;
  PlaceholderStorage = -1073741280;
LABEL_138:
  v30 = (__int64 *)BugCheckParameter2;
  v48 = P;
LABEL_81:
  MiRemoveViewsFromSectionWithPfn(v30, v91, 8);
LABEL_82:
  MiDereferenceControlArea(a1);
  if ( v21 )
  {
    if ( *(__int64 *)(v21 + 120) < 0 )
      MiDereferenceExtendInfo(v21, a1);
    v72 = *(void **)(v21 + 128);
    if ( v72 )
      ObfDereferenceObjectWithTag(v72, 0x63536D4Du);
    MiFreePlaceholderStorage(v21);
    ExFreePoolWithTag((PVOID)v21, 0);
    v31 = PlaceholderStorage;
  }
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  return v31;
}
