/*
 * XREFs of MiSetProtectionOnSection @ 0x14037E180
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x140905BC4 (MiMarkSharedImageCfgBits.c)
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MiCommitPagefileBackedSection @ 0x1409FC6A4 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A14A8C (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x140246380 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiUnlockVa @ 0x1402CC790 (MiUnlockVa.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiTryDeleteTransitionPte @ 0x14033FEC4 (MiTryDeleteTransitionPte.c)
 *     MiGetPfnProtection @ 0x14037CFCC (MiGetPfnProtection.c)
 *     MiSetWsleProtection @ 0x14037D510 (MiSetWsleProtection.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiMakePrototypePteVadLookup @ 0x14037DD10 (MiMakePrototypePteVadLookup.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiSanitizePfnProtection @ 0x14037E100 (MiSanitizePfnProtection.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x14037F744 (MiUpdatePfnProtection.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCharges @ 0x140434620 (MiReturnFullProcessCharges.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A2BA60 (MiGetImageExtensionBaseAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  char v9; // al
  ULONG_PTR v11; // r13
  unsigned int ProtectionMask; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  int v21; // ebx
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // r15
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned int v30; // ebx
  __int64 *v31; // rcx
  __int64 v32; // rcx
  unsigned int *MmInternal; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r15
  __int64 v37; // r13
  __int64 v38; // rdx
  int v39; // r13d
  __int64 v40; // rdx
  __int64 v41; // rcx
  int updated; // ebx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 v53; // rdi
  __int64 result; // rax
  char v55; // di
  char v56; // al
  unsigned __int64 PrototypePteVadLookup; // rax
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // rdi
  __int64 ProtoPteAddress; // rax
  __int64 CloneAddress; // rdi
  __int64 v63; // rcx
  int v64; // ebx
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  int PfnProtection; // eax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  unsigned __int64 v71; // rbx
  char v72; // al
  unsigned __int64 v73; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v75; // rbx
  __int64 v76; // rcx
  unsigned __int64 *v77; // r13
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rax
  char v80; // r11
  __int64 v81; // rax
  bool v82; // zf
  unsigned __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // r8
  char v88; // bl
  unsigned __int8 v89; // [rsp+50h] [rbp-B0h]
  char v90; // [rsp+51h] [rbp-AFh]
  int v91; // [rsp+54h] [rbp-ACh] BYREF
  int v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h]
  unsigned int v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v96; // [rsp+70h] [rbp-90h]
  __int64 v97; // [rsp+78h] [rbp-88h] BYREF
  __int16 v98[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v99; // [rsp+84h] [rbp-7Ch]
  __int64 v100; // [rsp+88h] [rbp-78h]
  __int64 v101; // [rsp+90h] [rbp-70h]
  int v102; // [rsp+98h] [rbp-68h]
  int v103; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v104; // [rsp+A0h] [rbp-60h]
  __int64 v105; // [rsp+A8h] [rbp-58h]
  __int64 v106; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v107; // [rsp+B8h] [rbp-48h]
  int v108; // [rsp+C0h] [rbp-40h] BYREF
  int v109; // [rsp+C4h] [rbp-3Ch]
  unsigned __int64 v110; // [rsp+C8h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-30h]
  __int64 v112; // [rsp+D8h] [rbp-28h]
  __int64 v113; // [rsp+E0h] [rbp-20h]
  __int64 v114; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v115; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v116[7]; // [rsp+F8h] [rbp-8h] BYREF

  v9 = *(_DWORD *)(a2 + 48) & 0x70;
  v116[0] = 0LL;
  v115 = 0LL;
  v11 = a2;
  v91 = 0;
  v108 = 0;
  v98[0] = 0;
  v114 = 0LL;
  if ( v9 == 32 && (*(_DWORD *)(a2 + 64) & 0x20) != 0 && MiGetImageExtensionBaseAddress(a2) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v99 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v15 = ProtectionMask & 0xFFFFFFFE;
  v105 = v14;
  v112 = v14;
  if ( (ProtectionMask & 5) != 5 )
    v15 = ProtectionMask;
  v93 = v14;
  v94 = v15;
  v16 = v14;
  v100 = v14;
  v92 = ProtectionMask & 5;
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v110 = v17;
  v18 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v103 = v14;
  v19 = v13 + 1024;
  CurrentThread = KeGetCurrentThread();
  v20 = *(_QWORD *)(v13 + 1040);
  v104 = v18;
  v97 = v14;
  if ( *(_QWORD *)(v20 + 1064) != v14
    && *(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32) )
  {
    v88 = MiLockWorkingSetShared(v13 + 1024);
    MiComputePageCommitment(a3, a4, v11, v88, 0, &v97, 0LL);
    MiUnlockWorkingSetShared(v19, v88);
    if ( v97 )
    {
      result = MiChargeFullProcessCommitment(a1, v97);
      if ( (int)result < 0 )
        return result;
    }
    v18 = v104;
  }
  v106 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v19 + 174));
  if ( v92 != 5 )
    goto LABEL_7;
  v58 = MiCountSharedPages(v11, v17, v18);
  v16 = v58;
  if ( a6 )
  {
    v81 = ((__int64)(v18 - v17) >> 3) - v58;
    v82 = v81 == -1;
    v83 = v81 + 1;
    v105 = v83;
    if ( !v82 && !(unsigned int)MiChargeCommit(v106, v83, 0) )
    {
      if ( v97 )
        MiReturnFullProcessCommitment(a1, v97);
      return 3221225773LL;
    }
    v16 = 0LL;
LABEL_7:
    if ( (unsigned int)MiVadPureReserve(v11) )
    {
      v103 = 1;
      LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, a1);
      v59 = MiCommitPageTablesForVad(v11, a3, a4);
      if ( v59 < 0 )
      {
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
        if ( v105 )
        {
          MiReturnCommit(v106, v16, 0);
        }
        else if ( v16 )
        {
          MiReturnFullProcessCommitment(a1, v16);
        }
        if ( v97 )
          MiReturnFullProcessCommitment(a1, v97);
        return (unsigned int)v59;
      }
    }
    if ( v16 )
    {
      v65 = *(unsigned int *)(v11 + 52);
      v66 = v16 + (v65 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32));
      *(_DWORD *)(v11 + 52) = v16 + v65;
      *(_BYTE *)(v11 + 34) = BYTE4(v66);
    }
    v21 = 1;
    v95 = 1;
    v101 = 0LL;
    v22 = 0LL;
    v96 = 0LL;
    v23 = MiLockWorkingSetShared(v19);
    v89 = v23;
    MiQueryAddressState(a3, a3, v23, v11, 0LL, &v91, &v108, v98, v116);
    *a7 = MmProtectToValue[v91];
    v26 = (*(_DWORD *)(v11 + 48) >> 12) & 0x7F;
    v109 = v26;
    if ( v17 > v104 )
      goto LABEL_46;
    v27 = 0LL;
    v28 = 0xFFFFFFFFFFLL;
    v113 = 0LL;
    v29 = 0xFFFFDE0000000000uLL;
    while ( 1 )
    {
      if ( (v17 & 0xFFF) == 0 || v21 )
      {
        v30 = 0;
        v95 = 0;
        if ( v22 )
        {
          v30 = v93;
          if ( v93 )
          {
            MiFlushTbList(v93);
            v30 = 0;
            v93 = 0LL;
            MiReleaseProcessorFlushList();
            v100 = 0LL;
          }
          MiUnlockPageTable(v19, v22);
        }
        if ( (*(_DWORD *)(v19 + 184) & 0xFu) <= 5
          && ((*(_DWORD *)(v19 + 184) & 0xF) != 1 ? (v31 = (__int64 *)(v19 + 192)) : (v31 = (__int64 *)&unk_140E38500),
              (v32 = *v31, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
            ? (v34 = v30)
            : (v34 = MmInternal[81]),
              (*(_DWORD *)(v32 + (v34 << 6)) & 0x40000000) != 0)
          || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v19, v23);
          MiLockWorkingSetShared(v19);
        }
        v96 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v17, v26, v23, 0);
        v27 = v113;
        v28 = 0xFFFFFFFFFFLL;
        v29 = 0xFFFFDE0000000000uLL;
      }
      v35 = *(_QWORD *)v17;
      v36 = (__int64)((v17 << 25) - v27) >> 16;
      if ( (*(_QWORD *)v17 & 1) == 0 )
        break;
      v107 = (v35 >> 12) & 0xFFFFFFFFFFLL;
      v37 = 48 * v107 - 0x220000000000LL;
      if ( *(__int64 *)(v37 + 40) >= 0
        || (v60 = *(_QWORD *)(v37 + 8),
            ProtoPteAddress = MiGetProtoPteAddress(a2, v36 >> 12, 8, &v115),
            v24 = 0x8000000000000000uLL,
            (v60 | 0x8000000000000000uLL) == ProtoPteAddress) )
      {
        if ( (a5 & 0x101) != 0 || a6 != (a5 & 0x101) && *(__int64 *)(v37 + 40) >= 0 )
        {
          v107 = v104;
          v73 = v17 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != (v104 & 0xFFFFFFFFFFFFF000uLL) )
            v107 = v73 + 4088;
          ProcessorFlushList = v100;
          v90 = 0;
          if ( v100 )
          {
            v102 = 0;
          }
          else
          {
            v102 = 1;
            ProcessorFlushList = MiGetProcessorFlushList(v73, v29, v24, v25);
            v100 = ProcessorFlushList;
          }
          v75 = ProcessorFlushList + 4136;
          MiInitializeTbFlushList(ProcessorFlushList + 4136, v19, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
          v77 = (unsigned __int64 *)v17;
          if ( v17 > v107 )
          {
LABEL_124:
            if ( *(_DWORD *)(v75 + 28) )
              MiFreeWsleList(v19, v75, 0LL);
            if ( v102 )
            {
              MiReleaseProcessorFlushList();
              v100 = 0LL;
            }
            goto LABEL_39;
          }
          v78 = v107;
          while ( 2 )
          {
            v79 = *v77;
            if ( (*v77 & 1) == 0
              || (a5 & 0x101) == 0
              && (!a6
               || (v76 = 6 * ((v79 >> 12) & 0xFFFFFFFFFFLL),
                   *(__int64 *)(48 * ((v79 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
            {
LABEL_123:
              v26 = v109;
              v17 = v110;
              goto LABEL_124;
            }
            if ( (MiGetWsleContents(v76, v36) & 0xF) == 8 )
            {
              v80 = 1;
              *a8 = 1;
              v90 = 1;
            }
            else
            {
              MiInsertTbFlushEntry(v75, v36, 1LL, 0);
              v80 = v90;
              if ( !v90 && *(_DWORD *)(v75 + 28) != *(_DWORD *)(v75 + 12) )
                goto LABEL_122;
            }
            if ( *(_DWORD *)(v75 + 28) )
            {
              MiFreeWsleList(v19, v75, 0LL);
              v80 = v90;
            }
            if ( v80 )
            {
              MiUnlockVa(v19, v36);
              v90 = 0;
            }
LABEL_122:
            ++v77;
            v36 += 4096LL;
            if ( (unsigned __int64)v77 > v78 )
              goto LABEL_123;
            continue;
          }
        }
        if ( *(__int64 *)(v37 + 40) < 0 )
        {
          if ( v92 != 5 && (v35 & 0x200) != 0 )
            ++v101;
          PfnProtection = MiGetPfnProtection(v28, v36, v37);
          v39 = a2;
          v91 = PfnProtection;
          updated = MiSanitizePfnProtection(a2, PfnProtection, v99);
          MiSetWsleProtection(v68, v36, updated);
        }
        else
        {
          v38 = v37;
          v39 = a2;
          updated = MiUpdatePfnProtection(a2, v38, v94);
        }
        v45 = v93;
        if ( !v93 )
        {
          v46 = MiGetProcessorFlushList(v41, v40, v43, v44);
          v100 = v46;
          v47 = v46;
          v93 = v46;
          *(_DWORD *)(v46 + 16) = 0;
          *(_DWORD *)(v46 + 20) = 32;
          *(_QWORD *)v46 = v19;
          *(_BYTE *)(v46 + 24) = (*(_DWORD *)(v19 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v19 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0 )
            {
              v48 = 1;
              goto LABEL_36;
            }
          }
          else
          {
            *(_DWORD *)(v46 + 16) |= 9u;
          }
          v48 = 0;
LABEL_36:
          *(_DWORD *)(v47 + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(v47 + 8) = v48;
          v45 = v47;
          *(_WORD *)(v47 + 25) = 0;
          *(_DWORD *)(v47 + 28) = 0;
          *(_QWORD *)(v47 + 32) = 0LL;
          *(_QWORD *)(v47 + 40) = 0LL;
        }
        MiRevertValidPte(v39, v17, updated, v107, v45);
LABEL_38:
        v17 += 8LL;
        v110 = v17;
LABEL_39:
        v49 = v96;
        goto LABEL_40;
      }
      CloneAddress = 0LL;
      if ( (*(_QWORD *)(v37 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v37 + 8) <= 0 )
      {
        CloneAddress = MiLocateCloneAddress(a1, *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL, 0x8000000000000000uLL);
        if ( *(_QWORD *)(*(_QWORD *)(v63 + 1040) + 1064LL) <= *(_QWORD *)(CloneAddress + 96) )
          CloneAddress = 0LL;
      }
      if ( v93 )
      {
        MiFlushTbList(v93);
        v93 = 0LL;
        MiReleaseProcessorFlushList();
        v100 = 0LL;
      }
      v64 = MiCopyOnWrite(v36, v17, (__int64)&v114);
      if ( v64 >= 0 )
      {
        if ( CloneAddress )
          --v97;
        goto LABEL_39;
      }
      MiUnlockPageTable(v19, v96);
      MiUnlockWorkingSetShared(v19, v89);
      MiCopyOnWriteCheckConditions(v19, (unsigned int)v64, v114);
      v95 = 1;
      v96 = 0LL;
      v49 = 0LL;
      MiLockWorkingSetShared(v19);
LABEL_40:
      v28 = 0xFFFFFFFFFFLL;
      v11 = a2;
      v21 = v95;
      v23 = v89;
      v27 = v113;
      v29 = 0xFFFFDE0000000000uLL;
      if ( v17 > v104 )
      {
        if ( v93 )
        {
          MiFlushTbList(v93);
          MiReleaseProcessorFlushList();
        }
        if ( v49 )
          MiUnlockPageTable(v19, v49);
        v11 = a2;
LABEL_46:
        MiUnlockWorkingSetShared(v19, v23);
        if ( v103 )
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
        v50 = v112;
        v51 = v105;
        if ( v112 && v92 == 5 )
        {
          v51 = v105 - v112;
          v50 = 0LL;
        }
        v52 = v106;
        if ( v51 )
          MiReturnCommit(v106, v51, 0);
        v53 = v101;
        if ( v101 )
        {
          v69 = v101 - v50;
          v70 = (*(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32)) - v101;
          *(_DWORD *)(v11 + 52) -= v101;
          *(_BYTE *)(v11 + 34) = BYTE4(v70);
          MiReturnCommit(v52, v69, 0);
          MiReturnFullProcessCharges(a1, v53);
        }
        if ( v97 )
          MiReturnFullProcessCommitment(a1, v97);
        return 0LL;
      }
      v22 = v96;
    }
    if ( (v35 & 0x400) != 0 )
    {
      if ( !MiIsPrototypePteVadLookup(*(_QWORD *)v17) )
      {
        v86 = v35;
        if ( qword_140E2D940 )
        {
          if ( (v35 & 0x10) != 0 )
            v86 = v35 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v86 = v35 & ~qword_140E2D940;
        }
        if ( v86 >> 16 != MiGetProtoPteAddress(v11, v36 >> 12, 8, &v115) )
        {
          if ( v93 )
          {
            MiFlushTbList(v93);
            v93 = 0LL;
            MiReleaseProcessorFlushList();
            v100 = v87;
          }
          if ( (int)MiMakeProtoLeafValid(v17) < 0 )
          {
            v17 += 8LL;
            v110 = v17;
          }
          v95 = 1;
          goto LABEL_39;
        }
      }
      if ( v92 != 5 && MiIsPrototypePteVadLookup(v35) && (v35 & 0xA0) == 0xA0 )
        ++v101;
      if ( MiIsPrototypePteVadLookup(v35) )
        v71 = v35 >> 5;
      else
        LODWORD(v71) = *(_DWORD *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1;
      v91 = v71 & 0x1F;
      v72 = MiSanitizePfnProtection(v11, v91, v99);
      *(_QWORD *)v17 = MiMakePrototypePteVadLookup(v72);
      goto LABEL_38;
    }
    if ( (v35 & 0x800) != 0 )
    {
      if ( !a6 )
      {
        if ( !(unsigned int)MiSetProtectionOnTransitionPte(v11, v17, v94, 1LL) )
          goto LABEL_38;
        goto LABEL_39;
      }
      v84 = MiTryDeleteTransitionPte(v17);
      if ( v84 == 3 )
      {
        ++v112;
      }
      else if ( v84 == 1 )
      {
        goto LABEL_39;
      }
    }
    else
    {
      v55 = 0;
      if ( !a6 )
      {
        if ( v35 )
        {
          v91 = (v35 >> 5) & 0x1F;
          v94 = MiSanitizePfnProtection(v11, v91, v94);
          PrototypePteVadLookup = (32LL * v94) ^ (v35 ^ (32LL * v94)) & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_63:
          *(_QWORD *)v17 = PrototypePteVadLookup;
          goto LABEL_38;
        }
LABEL_61:
        MiIncreaseUsedPtes(v28, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
        if ( v92 != 5 && (v55 || !(unsigned int)MiPteNeedsCommitCharge(v11, v17)) )
          ++v101;
        v91 = (*(_DWORD *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
        v56 = MiSanitizePfnProtection(0LL, v91, v99);
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v56);
        goto LABEL_63;
      }
      if ( !v35 )
        goto LABEL_61;
      v116[1] = *(_QWORD *)v17;
      if ( (v35 & 4) != 0 || (v35 & 2) != 0 )
        MiReleasePageFileInfo(v106, v35, 1);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v35) )
      {
LABEL_133:
        *(_QWORD *)v17 = CLFS_LSN_NULL_EXT;
        MiDecreaseUsedPtes(v85, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
        v55 = 1;
        goto LABEL_61;
      }
    }
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 648));
    goto LABEL_133;
  }
  if ( !v58 )
    goto LABEL_7;
  v59 = MiChargeFullProcessCommitment(a1, v58);
  if ( v59 >= 0 )
    goto LABEL_7;
  if ( !v97 )
    return (unsigned int)v59;
  MiReturnFullProcessCommitment(a1, v97);
  return (unsigned int)v59;
}
