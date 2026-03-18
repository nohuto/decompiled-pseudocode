/*
 * XREFs of MiMapViewOfDataSection @ 0x1408FEC20
 * Callers:
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiWriteVadFlags2 @ 0x1402A3350 (MiWriteVadFlags2.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3F10 (MiDecrementVadsBeingDeleted.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiGetControlAreaPtes @ 0x1402BBFC0 (MiGetControlAreaPtes.c)
 *     MiLocatePagefileSubsection @ 0x1402BC3A0 (MiLocatePagefileSubsection.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiComputeContiguousSubsectionPte @ 0x14043EAA0 (MiComputeContiguousSubsectionPte.c)
 *     MiAweControlArea @ 0x140440EC0 (MiAweControlArea.c)
 *     MiUpdateVadStartVpn @ 0x14044B674 (MiUpdateVadStartVpn.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     MiLocateExclusiveSecure @ 0x1404819D0 (MiLocateExclusiveSecure.c)
 *     MiDereferenceExtendInfo @ 0x140483CAC (MiDereferenceExtendInfo.c)
 *     MiFindPlaceholderVadToReplace @ 0x14049EEB8 (MiFindPlaceholderVadToReplace.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C92E4 (MiIncrementLargeSubsections.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CE0C0 (MiUnlockAndDereferenceNestedVad.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiCreatePlaceholderStorage @ 0x1408F9230 (MiCreatePlaceholderStorage.c)
 *     MiReferenceFileObjectForMap @ 0x1408FF8F0 (MiReferenceFileObjectForMap.c)
 *     MiSelectUserAddress @ 0x1408FF930 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140900910 (MiAdvanceVadHint.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MiIsVaRangeAvailable @ 0x140902548 (MiIsVaRangeAvailable.c)
 *     MiLogMapFileEvent @ 0x140903AB0 (MiLogMapFileEvent.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A68E90 (MiPreparePlaceholderVadReplacement.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 *     MiFreePlaceholderStorage @ 0x140A90928 (MiFreePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  bool v23; // bl
  unsigned int *SubsectionNode; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r12
  bool v28; // zf
  __int64 *v29; // rbx
  unsigned int v30; // r13d
  unsigned __int64 v31; // r13
  __int64 Pool; // rax
  __int16 v33; // cx
  int v34; // ebx
  int v35; // ecx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // r12
  __int64 v41; // r13
  __int64 v42; // r9
  __int64 v43; // r8
  int v44; // ebx
  __int64 v46; // r8
  PVOID v47; // rdi
  __int64 v48; // rcx
  void *v49; // r12
  __int64 v50; // rax
  int v51; // r9d
  int v52; // eax
  PVOID v53; // rdi
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 *v60; // r12
  __int64 v61; // rax
  unsigned __int64 v62; // r8
  __int64 *v63; // rax
  __int64 *v64; // r13
  __int64 v65; // r13
  unsigned __int64 v66; // rcx
  unsigned int v67; // edx
  void *v68; // rcx
  int v69; // ecx
  unsigned int v70; // eax
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-99h]
  PVOID P; // [rsp+58h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-89h]
  unsigned __int64 v77; // [rsp+68h] [rbp-81h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+70h] [rbp-79h]
  unsigned __int64 v79; // [rsp+78h] [rbp-71h]
  unsigned __int64 ControlAreaPtes; // [rsp+80h] [rbp-69h]
  int v81; // [rsp+88h] [rbp-61h]
  int v82; // [rsp+8Ch] [rbp-5Dh]
  unsigned __int64 v83; // [rsp+90h] [rbp-59h]
  unsigned __int64 v84; // [rsp+98h] [rbp-51h]
  __int64 v85; // [rsp+A0h] [rbp-49h]
  __int64 v86; // [rsp+A8h] [rbp-41h]
  __int64 v87; // [rsp+B0h] [rbp-39h]
  __int64 v88; // [rsp+B8h] [rbp-31h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-29h]
  __int64 v90; // [rsp+C8h] [rbp-21h] BYREF
  unsigned __int64 v91; // [rsp+D0h] [rbp-19h]
  __int64 v92; // [rsp+D8h] [rbp-11h] BYREF
  unsigned __int64 v93; // [rsp+E0h] [rbp-9h] BYREF
  int PlaceholderStorage; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned __int64 *v95; // [rsp+140h] [rbp+57h]
  unsigned __int64 *v96; // [rsp+148h] [rbp+5Fh]

  v96 = a4;
  v95 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v77 = 0LL;
  v92 = 0LL;
  v82 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( (unsigned int)MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *(_QWORD *)(v12 + 88);
  v16 = *(_DWORD *)(v12 + 40);
  v17 = *v13;
  v79 = v15;
  v87 = (__int64)v14;
  v85 = v17;
  if ( (v16 & 0x2000) != 0 && (void *)v13[8] == v14 )
    return 3221225485LL;
  v18 = v16 & 0x40000000;
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v18 || (v16 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
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
  if ( v18 && ((v16 & 0x2000) != 0 || *(void **)(v15 + 1600) == v14 && (*(_DWORD *)(a2 + 60) & 1) == 0) )
    return 3221225485LL;
LABEL_6:
  v19 = *(_QWORD *)(a2 + 16);
  if ( v19 >= 0x200000 && ((v19 - 1) & *(_QWORD *)(a2 + 32)) != 0 )
    return 3221225503LL;
  CurrentThread = KeGetCurrentThread();
  v20 = (__int64)v14;
  v86 = *(_QWORD *)(v15 + 1040) + 768LL;
  PlaceholderVadToReplace = v14;
  P = v14;
  v81 = (int)v14;
  MiCheckPurgeAndUpMapCount(a1);
  v21 = *a4 >> 12;
  v22 = (*a4 + *(_QWORD *)(a2 + 24)) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v21 >= ControlAreaPtes )
  {
    MiDereferenceControlArea(a1);
    return 3221225503LL;
  }
  v23 = 0;
  if ( *(_QWORD *)(a1 + 64) == v20 )
  {
    v93 = v21;
    SubsectionNode = MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v93);
    BugCheckParameter2 = (ULONG_PTR)SubsectionNode;
    if ( a8 == v20 && a7 == 24 )
      v23 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v96, 0);
    BugCheckParameter2 = (ULONG_PTR)SubsectionNode;
  }
  v25 = SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26);
  v26 = v22 - v25;
  v27 = v21 - v25;
  v28 = !v23;
  v29 = (__int64 *)BugCheckParameter2;
  if ( !v28 )
    v26 = 1LL;
  v89 = v26;
  PlaceholderStorage = MiAddViewsForSection((int **)BugCheckParameter2, v26, 8);
  v30 = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
  {
    v49 = (void *)v20;
    goto LABEL_82;
  }
  v88 = *(_QWORD *)(BugCheckParameter2 + 8) + 8 * v27;
  if ( *(_QWORD *)(a1 + 64) == v20 && a8 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
  {
    v55 = v20;
    LOBYTE(v55) = (v54 & 0xFFF) != 0;
    v87 = (v54 >> 12) + v55;
  }
  v90 = v20;
  v31 = *(_QWORD *)(a5 + 24) << 12;
  ControlAreaPtes = v31;
  Pool = MiAllocatePool(0x40uLL, 0x88uLL, 543449430);
  v20 = Pool;
  if ( Pool )
  {
    v33 = a7;
    *(_QWORD *)(Pool + 16) = -2LL;
    *(_QWORD *)(Pool + 80) = v88;
    *(_QWORD *)(Pool + 72) = BugCheckParameter2;
    v34 = 0;
    if ( a6 == 1 )
      v34 = 4;
    v35 = *(_DWORD *)(Pool + 48) ^ ((unsigned __int16)*(_DWORD *)(Pool + 48) ^ (unsigned __int16)(v33 << 7)) & 0xF80;
    *(_DWORD *)(Pool + 48) = v35;
    *(_DWORD *)(Pool + 48) = v35 ^ (v35 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    if ( *(_DWORD *)(a2 + 52) )
      *(_BYTE *)(*(_QWORD *)(v15 + 1040) + 1060LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      v34 |= 2u;
    *(_QWORD *)(Pool + 40) = 0LL;
    if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(Pool);
      v30 = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
      {
LABEL_150:
        v29 = (__int64 *)BugCheckParameter2;
        goto LABEL_134;
      }
      v31 = ControlAreaPtes;
    }
    *(_QWORD *)(v20 + 128) = MiReferenceFileObjectForMap(a5);
    if ( (*(_DWORD *)(a2 + 40) & 0x20000000) == 0 )
      goto LABEL_25;
    if ( *(_QWORD *)(a1 + 64) )
    {
      v67 = MiIncrementLargeSubsections((__int64 *)BugCheckParameter2, v89);
      if ( v67 > 1 )
      {
        v30 = -1073741280;
        PlaceholderStorage = -1073741280;
        goto LABEL_150;
      }
      v69 = *(_DWORD *)(v20 + 48);
      v82 = 1;
      v70 = v69 & 0xFFE7FFFF | 0x100000;
      v71 = v69 | 0x180000;
      if ( v67 == 1 )
        v71 = v70;
      *(_DWORD *)(v20 + 48) = v71;
    }
    else
    {
      *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFE7FFFF | 0x100000;
    }
LABEL_25:
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
    if ( (*(_DWORD *)(v15 + 500) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
      {
        v36 = *v95;
      }
      else
      {
        if ( !v31 )
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
                                 (__int64)&v90,
                                 (__int64)&v77);
          v30 = PlaceholderStorage;
          if ( PlaceholderStorage >= 0 )
          {
            v36 = v77;
            v83 = v77;
            v84 = *(_QWORD *)(a2 + 24) + v77 - 1;
            goto LABEL_30;
          }
LABEL_165:
          v49 = P;
LABEL_77:
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
          if ( v81 )
            MiRemoveSharedCommitNode(a1, v15, 0);
          goto LABEL_79;
        }
        v36 = *v96 + v31;
      }
      v57 = *(_QWORD *)(a2 + 24) - 1LL;
      v83 = v36;
      v58 = v36 + v57;
      v77 = v36;
      v28 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
      v84 = v58;
      if ( v28 )
      {
        if ( !(unsigned int)MiIsVaRangeAvailable(v15, v36, (int)v58 - (int)v36 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        {
          v30 = -1073741800;
          PlaceholderStorage = -1073741800;
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
          v49 = P;
          goto LABEL_79;
        }
      }
      else
      {
        PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                           v36,
                                           v58,
                                           *(_BYTE *)(a2 + 57),
                                           &PlaceholderStorage);
        if ( !PlaceholderVadToReplace )
        {
          v30 = PlaceholderStorage;
          goto LABEL_165;
        }
      }
LABEL_30:
      ControlAreaPtes = v36 >> 12;
      v91 = v84 >> 12;
      MiUpdateVadStartVpn(v20, v36 >> 12);
      *(_DWORD *)(v20 + 28) = v37;
      *(_BYTE *)(v20 + 33) = BYTE4(v37);
      if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
      {
        --CurrentThread->SpecialApcDisable;
        v63 = KeAbPreAcquire((__int64)&qword_140E2C9D0, 0LL);
        v64 = v63;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2C9D0, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E2C9D0, v63, (__int64)&qword_140E2C9D0);
        if ( v64 )
          *((_BYTE *)v64 + 10) = 1;
        v65 = *(_QWORD *)(v85 + 32);
        if ( v65 )
        {
          ++*(_DWORD *)(v65 + 8);
        }
        else
        {
          v72 = MiAllocatePool(0x40uLL, 0x10uLL, 2017684813);
          v65 = v72;
          if ( !v72 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
            KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
            v48 = (__int64)CurrentThread;
            v28 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v28
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
              v48 = (__int64)CurrentThread;
            }
            v30 = -1073741670;
            PlaceholderStorage = -1073741670;
            goto LABEL_73;
          }
          v73 = v85;
          *(_DWORD *)(v72 + 8) = 1;
          *(_QWORD *)v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(v73 + 24), -1LL, -1LL);
          *(_QWORD *)(v73 + 32) = v72;
        }
        v66 = *(_QWORD *)(a5 + 48);
        if ( *(_QWORD *)v65 < v66 )
          *(_QWORD *)v65 = v66;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
        KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
        v28 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v28
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v37 = v91;
        v38 = ControlAreaPtes;
        *(_QWORD *)(v20 + 120) = v65;
        v36 = v77;
        v83 = v77;
      }
      if ( (a7 & 5) == 5 )
      {
        v61 = *(unsigned int *)(v20 + 24);
        v62 = (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32))
            - (v61 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
            + 1;
        *(_DWORD *)(v20 + 52) = *(_DWORD *)(v20 + 28) - v61 + 1;
        *(_BYTE *)(v20 + 34) = BYTE4(v62);
      }
      *(_QWORD *)(v20 + 88) = MiComputeContiguousSubsectionPte(BugCheckParameter2, v37 + v27 - v38);
      if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(v20 + 48) & 8) != 0 && MiLocateExclusiveSecure(v20)
          || (v50 = MiAllocatePool(0x40uLL, 0x58uLL, 1699966285), (P = (PVOID)v50) == 0LL) )
        {
          v48 = (__int64)CurrentThread;
          v30 = -1073741670;
          PlaceholderStorage = -1073741670;
          v49 = 0LL;
          goto LABEL_74;
        }
        *(_QWORD *)(v50 + 8) = v36;
        *(_DWORD *)(v50 + 80) = 2;
        *(_QWORD *)(v50 + 16) = v84;
        *(_DWORD *)(v50 + 8) = v36 | 4;
        MiInsertVadEvent(v20, (unsigned __int64 *)v50, 1);
        MiSetVadFlags(v20, 1LL, 1);
      }
      if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
      {
        *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFFFFF8F | 0x50;
        v34 |= 1u;
      }
      MiWriteVadFlags2(v20, v34, 1);
      v39 = v79;
      if ( !*(_QWORD *)(a1 + 64) )
      {
        PlaceholderStorage = MiInsertSharedCommitNode(a1, v79, 0LL);
        v30 = PlaceholderStorage;
        if ( PlaceholderStorage < 0 )
          goto LABEL_72;
        v81 = 1;
      }
      if ( v87 && !(unsigned int)MiChargeSegmentCommit(BugCheckParameter2, v88) )
      {
        v30 = -1073741523;
        PlaceholderStorage = -1073741523;
        goto LABEL_72;
      }
      PlaceholderStorage = MiInsertVadCharges(v20, v39);
      v30 = PlaceholderStorage;
      if ( PlaceholderStorage >= 0 )
      {
        if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
          *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFE7FFFF | 0x80000;
        if ( PlaceholderVadToReplace )
        {
          v41 = v79;
          MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v79, v86);
          v59 = KeAbPreAcquire(v20 + 40, 0LL);
          v60 = v59;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 40), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 40), v59, v20 + 40);
          if ( v60 )
            *((_BYTE *)v60 + 10) = 1;
          v40 = v77;
        }
        else
        {
          MiLockVad((__int64)CurrentThread, v20);
          v40 = v83;
          v41 = v79;
        }
        MiInsertVad(v20, v41, 0);
        if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v85 + 56) )
          *(_QWORD *)(v85 + 56) = v40;
        v43 = v90;
        if ( v90 )
          MiAdvanceVadHint(ControlAreaPtes, v91);
        if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
          v40 = v77;
        }
        if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
          MiLogMapFileEvent(v20, 1061LL, v43, v42);
        v44 = 0;
        PlaceholderStorage = 0;
        if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
        {
          if ( !PlaceholderVadToReplace )
          {
            MiUnlockVad((__int64)CurrentThread, v20);
            UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v41);
LABEL_61:
            *v95 = v40;
            return (unsigned int)v44;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 40));
          KeAbPostRelease(v20 + 40);
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v41);
          v40 = v77;
          v44 = PlaceholderStorage;
          v53 = PlaceholderVadToReplace;
          goto LABEL_105;
        }
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v41);
        MiReferenceVad(v20);
        v46 = *(unsigned int *)(a2 + 120);
        if ( (_DWORD)v46 )
        {
          v44 = MiCommitVadMetadataBits(v20, 0LL, v46);
          if ( v44 < 0 )
          {
LABEL_68:
            v47 = PlaceholderVadToReplace;
            MiUnmapVad(v20, (__int64)PlaceholderVadToReplace, 0);
            if ( v47 )
              MiFinishPlaceholderVadReplacement(v47);
            return (unsigned int)v44;
          }
        }
        if ( *(_QWORD *)(a2 + 72) )
        {
          v51 = *(_DWORD *)(a2 + 68);
          if ( (unsigned int)(v51 - 1) > 1 && v51 != 4 && v51 != -2147483647 )
          {
            v52 = -1073741755;
            goto LABEL_171;
          }
          v52 = MiSecureVad(v20, v40, *(_QWORD *)(a2 + 24), v51, 0, (__int64)&v92);
          if ( v52 < 0 )
          {
LABEL_171:
            v44 = v52;
            goto LABEL_68;
          }
          **(_QWORD **)(a2 + 72) = qword_140E2D840 ^ v92 ^ v41;
        }
        v53 = PlaceholderVadToReplace;
        if ( !PlaceholderVadToReplace )
        {
          MiUnlockAndDereferenceVad((char *)v20);
          goto LABEL_61;
        }
        MiUnlockAndDereferenceNestedVad((PVOID)v20);
LABEL_105:
        MiSetVadDeleted((__int64)v53);
        MiDeleteVad((__int64)v53, 0LL);
        MiDecrementVadsBeingDeleted(v86);
        goto LABEL_61;
      }
LABEL_72:
      v48 = (__int64)CurrentThread;
LABEL_73:
      v49 = P;
LABEL_74:
      if ( PlaceholderVadToReplace )
        MiUnlockVad(v48, (__int64)PlaceholderVadToReplace);
      v15 = v79;
      goto LABEL_77;
    }
    v30 = -1073741558;
    PlaceholderStorage = -1073741558;
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
    v49 = P;
LABEL_79:
    if ( v82 )
    {
      v56 = (__int64 *)MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v96 - 1, 0);
      v29 = (__int64 *)BugCheckParameter2;
      MiDecrementLargeSubsections((__int64 *)BugCheckParameter2, v56);
    }
    else
    {
      v29 = (__int64 *)BugCheckParameter2;
    }
    goto LABEL_81;
  }
  v30 = -1073741670;
  PlaceholderStorage = -1073741670;
LABEL_134:
  v49 = P;
LABEL_81:
  MiRemoveViewsFromSectionWithPfn(v29, v89, 8);
LABEL_82:
  MiDereferenceControlArea(a1);
  if ( v20 )
  {
    if ( *(__int64 *)(v20 + 120) < 0 )
      MiDereferenceExtendInfo(v20, a1);
    v68 = *(void **)(v20 + 128);
    if ( v68 )
      ObfDereferenceObjectWithTag(v68, 0x63536D4Du);
    MiFreePlaceholderStorage(v20);
    ExFreePoolWithTag((PVOID)v20, 0);
    v30 = PlaceholderStorage;
  }
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  return v30;
}
