/*
 * XREFs of MiMapViewOfDataSection @ 0x1409173D0
 * Callers:
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     MiDecrementVadsBeingDeleted @ 0x140229A10 (MiDecrementVadsBeingDeleted.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiGetControlAreaPtes @ 0x1402C2B60 (MiGetControlAreaPtes.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFindPlaceholderVadToReplace @ 0x1403C6CE0 (MiFindPlaceholderVadToReplace.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiLocatePagefileSubsection @ 0x1403D2A80 (MiLocatePagefileSubsection.c)
 *     MiWriteVadFlags2 @ 0x1403DAD90 (MiWriteVadFlags2.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiComputeContiguousSubsectionPte @ 0x140435270 (MiComputeContiguousSubsectionPte.c)
 *     MiAweControlArea @ 0x140437570 (MiAweControlArea.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiLocateExclusiveSecure @ 0x14047CE4C (MiLocateExclusiveSecure.c)
 *     MiDereferenceExtendInfo @ 0x14047FA5C (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C2B90 (MiIncrementLargeSubsections.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404C7270 (MiUnlockAndDereferenceNestedVad.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiReferenceFileObjectForMap @ 0x140918140 (MiReferenceFileObjectForMap.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiLogMapFileEvent @ 0x140919704 (MiLogMapFileEvent.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6031C (MiPreparePlaceholderVadReplacement.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 *     MiFreePlaceholderStorage @ 0x140A91218 (MiFreePlaceholderStorage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  bool v27; // bl
  unsigned int *SubsectionNode; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // r12
  bool v32; // zf
  __int64 *v33; // rbx
  unsigned int v34; // r13d
  unsigned __int64 v35; // r13
  __int64 Pool; // rax
  __int16 v37; // cx
  int v38; // ebx
  int v39; // ecx
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r10
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // r9
  unsigned __int64 v46; // rbx
  __int64 v47; // r9
  __int64 v48; // r8
  int v49; // r15d
  __int64 v51; // r8
  PVOID v52; // rbx
  __int64 v53; // rbx
  void *v54; // r12
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 *v58; // rax
  int v59; // r9d
  int v60; // eax
  unsigned __int8 *v61; // rdi
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // r8
  char *v68; // rax
  char *v69; // r13
  __int64 v70; // r13
  unsigned __int64 v71; // rcx
  char *v72; // rax
  char *v73; // r13
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // edx
  void *v77; // rcx
  int v78; // ecx
  unsigned int v79; // eax
  int v80; // ecx
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-99h]
  PVOID P; // [rsp+58h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-89h]
  unsigned __int64 v84; // [rsp+68h] [rbp-81h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+70h] [rbp-79h]
  unsigned __int64 ControlAreaPtes; // [rsp+78h] [rbp-71h]
  int v87; // [rsp+80h] [rbp-69h]
  int v88; // [rsp+84h] [rbp-65h]
  unsigned __int64 v89; // [rsp+88h] [rbp-61h]
  unsigned __int64 v90; // [rsp+90h] [rbp-59h]
  unsigned __int64 v91; // [rsp+98h] [rbp-51h]
  __int64 v92; // [rsp+A0h] [rbp-49h]
  __int64 v93; // [rsp+A8h] [rbp-41h]
  __int64 v94; // [rsp+B0h] [rbp-39h]
  __int64 v95; // [rsp+B8h] [rbp-31h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-29h]
  __int64 v97; // [rsp+C8h] [rbp-21h] BYREF
  unsigned __int64 v98; // [rsp+D0h] [rbp-19h]
  __int64 v99; // [rsp+D8h] [rbp-11h] BYREF
  unsigned __int64 v100; // [rsp+E0h] [rbp-9h] BYREF
  int PlaceholderStorage; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned __int64 *v102; // [rsp+140h] [rbp+57h]
  unsigned __int64 *v103; // [rsp+148h] [rbp+5Fh]

  v103 = a4;
  v102 = a3;
  v8 = *(_DWORD *)(a2 + 64);
  v84 = 0LL;
  v99 = 0LL;
  v88 = 0;
  if ( (v8 & 2) != 0 )
    return 3221225485LL;
  if ( (unsigned int)MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *(_QWORD *)(v12 + 88);
  v16 = *(_DWORD *)(v12 + 40);
  v17 = *v13;
  v89 = v15;
  v94 = (__int64)v14;
  v92 = v17;
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
  v93 = *(_QWORD *)(v15 + 1040) + 768LL;
  PlaceholderVadToReplace = v14;
  P = v14;
  v87 = (int)v14;
  MiCheckPurgeAndUpMapCount(a1);
  v21 = *a4 >> 12;
  v22 = (*a4 + *(_QWORD *)(a2 + 24)) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1, v23, v24, v25);
  if ( v21 >= ControlAreaPtes )
  {
    MiDereferenceControlArea(a1);
    return 3221225503LL;
  }
  v27 = 0;
  if ( *(_QWORD *)(a1 + 64) == v20 )
  {
    v100 = v21;
    SubsectionNode = MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v100);
    BugCheckParameter2 = (ULONG_PTR)SubsectionNode;
    if ( a8 == v20 && a7 == 24 )
      v27 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v103, 0LL, v26);
    BugCheckParameter2 = (ULONG_PTR)SubsectionNode;
  }
  v29 = SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26);
  v30 = v22 - v29;
  v31 = v21 - v29;
  v32 = !v27;
  v33 = (__int64 *)BugCheckParameter2;
  if ( !v32 )
    v30 = 1LL;
  v96 = v30;
  PlaceholderStorage = MiAddViewsForSection((int **)BugCheckParameter2, v30, 8);
  v34 = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
  {
    v54 = (void *)v20;
    goto LABEL_82;
  }
  v95 = *(_QWORD *)(BugCheckParameter2 + 8) + 8 * v31;
  if ( *(_QWORD *)(a1 + 64) == v20 && a8 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
  {
    v63 = v20;
    LOBYTE(v63) = (v62 & 0xFFF) != 0;
    v94 = (v62 >> 12) + v63;
  }
  v97 = v20;
  v35 = *(_QWORD *)(a5 + 24) << 12;
  ControlAreaPtes = v35;
  Pool = MiAllocatePool(0x40uLL, 0x88uLL, 543449430);
  v20 = Pool;
  if ( !Pool )
  {
    v54 = P;
    v34 = -1073741670;
    PlaceholderStorage = -1073741670;
    goto LABEL_81;
  }
  v37 = a7;
  *(_QWORD *)(Pool + 16) = -2LL;
  *(_QWORD *)(Pool + 80) = v95;
  *(_QWORD *)(Pool + 72) = BugCheckParameter2;
  v38 = 0;
  if ( a6 == 1 )
    v38 = 4;
  v39 = *(_DWORD *)(Pool + 48) ^ ((unsigned __int16)*(_DWORD *)(Pool + 48) ^ (unsigned __int16)(v37 << 7)) & 0xF80;
  *(_DWORD *)(Pool + 48) = v39;
  *(_DWORD *)(Pool + 48) = v39 ^ (v39 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v15 + 1040) + 1060LL) = 1;
  if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
    v38 |= 2u;
  *(_QWORD *)(Pool + 40) = 0LL;
  if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(Pool);
    v34 = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_138;
    v35 = ControlAreaPtes;
  }
  *(_QWORD *)(v20 + 128) = MiReferenceFileObjectForMap(a5);
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) == 0 )
    goto LABEL_25;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFE7FFFF | 0x100000;
    goto LABEL_25;
  }
  v76 = MiIncrementLargeSubsections((__int64 *)BugCheckParameter2, v96);
  if ( v76 <= 1 )
  {
    v78 = *(_DWORD *)(v20 + 48);
    v88 = 1;
    v79 = v78 & 0xFFE7FFFF | 0x100000;
    v80 = v78 | 0x180000;
    if ( v76 == 1 )
      v80 = v79;
    *(_DWORD *)(v20 + 48) = v80;
LABEL_25:
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
    if ( (*(_DWORD *)(v15 + 500) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 1) != 0 )
      {
        v40 = *v102;
      }
      else
      {
        if ( !v35 )
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
                                 (__int64)&v97,
                                 (__int64)&v84);
          v34 = PlaceholderStorage;
          if ( PlaceholderStorage >= 0 )
          {
            v40 = v84;
            v90 = v84;
            v91 = *(_QWORD *)(a2 + 24) + v84 - 1;
            goto LABEL_30;
          }
LABEL_172:
          v54 = P;
LABEL_77:
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
          if ( v87 )
            MiRemoveSharedCommitNode(a1, v15, 0);
          goto LABEL_79;
        }
        v40 = *v103 + v35;
      }
      v64 = *(_QWORD *)(a2 + 24) - 1LL;
      v90 = v40;
      v65 = v40 + v64;
      v84 = v40;
      v32 = (*(_DWORD *)(a2 + 64) & 0x4000000) == 0;
      v91 = v65;
      if ( v32 )
      {
        if ( !(unsigned int)MiIsVaRangeAvailable(v15, v40, (int)v65 - (int)v40 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        {
          v34 = -1073741800;
          PlaceholderStorage = -1073741800;
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
          v54 = P;
LABEL_79:
          if ( v88 )
          {
            v58 = (__int64 *)MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v103 - 1, 0LL, v55);
            v33 = (__int64 *)BugCheckParameter2;
            MiDecrementLargeSubsections((__int64 *)BugCheckParameter2, v58);
          }
          else
          {
            v33 = (__int64 *)BugCheckParameter2;
          }
          goto LABEL_81;
        }
      }
      else
      {
        PlaceholderVadToReplace = MiFindPlaceholderVadToReplace(v40, v65, *(_BYTE *)(a2 + 57), &PlaceholderStorage);
        if ( !PlaceholderVadToReplace )
        {
          v34 = PlaceholderStorage;
          goto LABEL_172;
        }
      }
LABEL_30:
      ControlAreaPtes = v40 >> 12;
      v98 = v91 >> 12;
      MiUpdateVadStartVpn(v20, v40 >> 12);
      *(_DWORD *)(v20 + 28) = v41;
      *(_BYTE *)(v20 + 33) = BYTE4(v41);
      if ( (*(_DWORD *)(a2 + 40) & 0x2000) != 0 )
      {
        --CurrentThread->SpecialApcDisable;
        v68 = (char *)KeAbPreAcquire((__int64)&qword_140E2CD50, 0LL);
        v69 = v68;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CD50, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E2CD50, v68, (__int64)&qword_140E2CD50);
        if ( v69 )
          v69[10] = 1;
        v70 = *(_QWORD *)(v92 + 32);
        if ( v70 )
        {
          ++*(_DWORD *)(v70 + 8);
        }
        else
        {
          v74 = MiAllocatePool(0x40uLL, 0x10uLL, 2017684813);
          v70 = v74;
          if ( !v74 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
            KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
            v53 = (__int64)CurrentThread;
            v32 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v32
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            v34 = -1073741670;
            PlaceholderStorage = -1073741670;
            goto LABEL_73;
          }
          v75 = v92;
          *(_DWORD *)(v74 + 8) = 1;
          *(_QWORD *)v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 24), -1LL, -1LL);
          *(_QWORD *)(v75 + 32) = v74;
        }
        v71 = *(_QWORD *)(a5 + 48);
        if ( *(_QWORD *)v70 < v71 )
          *(_QWORD *)v70 = v71;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
        KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
        v32 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v32
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v41 = v98;
        v42 = ControlAreaPtes;
        *(_QWORD *)(v20 + 120) = v70;
        v40 = v84;
        v90 = v84;
      }
      if ( (a7 & 5) == 5 )
      {
        v66 = *(unsigned int *)(v20 + 24);
        v67 = (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32))
            - (v66 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
            + 1;
        *(_DWORD *)(v20 + 52) = *(_DWORD *)(v20 + 28) - v66 + 1;
        *(_BYTE *)(v20 + 34) = BYTE4(v67);
      }
      *(_QWORD *)(v20 + 88) = MiComputeContiguousSubsectionPte(BugCheckParameter2, v41 + v31 - v42);
      if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(v20 + 48) & 8) != 0 && MiLocateExclusiveSecure(v20)
          || (v56 = MiAllocatePool(0x40uLL, 0x58uLL, 1699966285), (P = (PVOID)v56) == 0LL) )
        {
          v53 = (__int64)CurrentThread;
          v34 = -1073741670;
          PlaceholderStorage = -1073741670;
          v54 = 0LL;
          goto LABEL_74;
        }
        *(_QWORD *)(v56 + 8) = v40;
        *(_DWORD *)(v56 + 80) = 2;
        *(_QWORD *)(v56 + 16) = v91;
        *(_DWORD *)(v56 + 8) = v40 | 4;
        MiInsertVadEvent(v20, (unsigned __int64 *)v56, 1);
        MiSetVadFlags(v20, 1LL, 1LL, v57);
      }
      if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
      {
        *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFFFFF8F | 0x50;
        v38 |= 1u;
      }
      MiWriteVadFlags2(v20, v38, 1);
      v43 = v89;
      if ( !*(_QWORD *)(a1 + 64) )
      {
        PlaceholderStorage = MiInsertSharedCommitNode(a1, v89, 0LL);
        v34 = PlaceholderStorage;
        if ( PlaceholderStorage < 0 )
          goto LABEL_72;
        v87 = 1;
      }
      if ( v94 && !(unsigned int)MiChargeSegmentCommit(BugCheckParameter2, v95) )
      {
        v34 = -1073741523;
        PlaceholderStorage = -1073741523;
        goto LABEL_72;
      }
      PlaceholderStorage = MiInsertVadCharges(v20, v43);
      v34 = PlaceholderStorage;
      if ( PlaceholderStorage >= 0 )
      {
        if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
          *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 48) & 0xFFE7FFFF | 0x80000;
        if ( PlaceholderVadToReplace )
        {
          MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v43, v93);
          v72 = (char *)KeAbPreAcquire(v20 + 40, 0LL);
          v73 = v72;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 40), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 40), v72, v20 + 40);
          v46 = v84;
          if ( v73 )
            v73[10] = 1;
          v44 = (__int64)CurrentThread;
        }
        else
        {
          v44 = (__int64)CurrentThread;
          MiLockVad((__int64)CurrentThread, v20);
          v46 = v90;
        }
        MiInsertVad(v20, v43, 0LL, v45);
        if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v92 + 56) )
          *(_QWORD *)(v92 + 56) = v46;
        v48 = v97;
        if ( v97 )
          MiAdvanceVadHint(ControlAreaPtes, v98);
        if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
          v46 = v84;
        }
        if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
          MiLogMapFileEvent(v20, 1061LL, v48, v47);
        v49 = 0;
        PlaceholderStorage = 0;
        if ( !*(_DWORD *)(a2 + 120) && !*(_QWORD *)(a2 + 72) )
        {
          if ( !PlaceholderVadToReplace )
          {
            MiUnlockVad(v44, v20);
            UNLOCK_ADDRESS_SPACE_UNORDERED(v44, v43);
LABEL_61:
            *v102 = v46;
            return (unsigned int)v49;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 40));
          KeAbPostRelease(v20 + 40);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v44, v43);
          v46 = v84;
          v49 = PlaceholderStorage;
          v61 = (unsigned __int8 *)PlaceholderVadToReplace;
          goto LABEL_110;
        }
        UNLOCK_ADDRESS_SPACE_UNORDERED(v44, v43);
        MiReferenceVad(v20);
        v51 = *(unsigned int *)(a2 + 120);
        if ( (_DWORD)v51 )
        {
          v49 = MiCommitVadMetadataBits(v20, 0LL, v51);
          if ( v49 < 0 )
          {
LABEL_68:
            v52 = PlaceholderVadToReplace;
            MiUnmapVad((unsigned __int8 *)v20, (__int64)PlaceholderVadToReplace);
            if ( v52 )
              MiFinishPlaceholderVadReplacement(v52);
            return (unsigned int)v49;
          }
        }
        if ( *(_QWORD *)(a2 + 72) )
        {
          v59 = *(_DWORD *)(a2 + 68);
          if ( (unsigned int)(v59 - 1) > 1 && v59 != 4 && v59 != -2147483647 )
          {
            v60 = -1073741755;
            goto LABEL_178;
          }
          v60 = MiSecureVad(v20, v46, *(_QWORD *)(a2 + 24), v59, 0, (__int64)&v99);
          if ( v60 < 0 )
          {
LABEL_178:
            v49 = v60;
            goto LABEL_68;
          }
          **(_QWORD **)(a2 + 72) = qword_140E2DBC0 ^ v99 ^ v43;
        }
        v61 = (unsigned __int8 *)PlaceholderVadToReplace;
        if ( !PlaceholderVadToReplace )
        {
          MiUnlockAndDereferenceVad((PVOID)v20);
          goto LABEL_61;
        }
        MiUnlockAndDereferenceNestedVad((PVOID)v20);
LABEL_110:
        MiSetVadDeleted((__int64)v61);
        MiDeleteVad(v61, 0LL);
        MiDecrementVadsBeingDeleted(v93);
        goto LABEL_61;
      }
LABEL_72:
      v53 = (__int64)CurrentThread;
LABEL_73:
      v54 = P;
LABEL_74:
      if ( PlaceholderVadToReplace )
        MiUnlockVad(v53, (__int64)PlaceholderVadToReplace);
      v15 = v89;
      goto LABEL_77;
    }
    v34 = -1073741558;
    PlaceholderStorage = -1073741558;
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v15);
    v54 = P;
    goto LABEL_79;
  }
  v34 = -1073741280;
  PlaceholderStorage = -1073741280;
LABEL_138:
  v33 = (__int64 *)BugCheckParameter2;
  v54 = P;
LABEL_81:
  MiRemoveViewsFromSectionWithPfn(v33, v96, 8);
LABEL_82:
  MiDereferenceControlArea(a1);
  if ( v20 )
  {
    if ( *(__int64 *)(v20 + 120) < 0 )
      MiDereferenceExtendInfo(v20, a1);
    v77 = *(void **)(v20 + 128);
    if ( v77 )
      ObfDereferenceObjectWithTag(v77, 0x63536D4Du);
    MiFreePlaceholderStorage(v20);
    ExFreePoolWithTag((PVOID)v20, 0);
    v34 = PlaceholderStorage;
  }
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  return v34;
}
