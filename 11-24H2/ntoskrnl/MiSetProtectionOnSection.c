/*
 * XREFs of MiSetProtectionOnSection @ 0x1402107C0
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MiMarkSharedImageCfgBits @ 0x14091C554 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x140974DD4 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A133BC (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiSetWsleProtection @ 0x140203240 (MiSetWsleProtection.c)
 *     MiTryDeleteTransitionPte @ 0x140204568 (MiTryDeleteTransitionPte.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiMakePrototypePteVadLookup @ 0x1402104D0 (MiMakePrototypePteVadLookup.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x140212AA8 (MiUpdatePfnProtection.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiSanitizePfnProtection @ 0x140212F30 (MiSanitizePfnProtection.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetPfnProtection @ 0x140306170 (MiGetPfnProtection.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x14030CCA0 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiUnlockVa @ 0x1403DB604 (MiUnlockVa.c)
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A1FFB0 (MiGetImageExtensionBaseAddress.c)
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
  __int64 v11; // r13
  __int64 v12; // r8
  unsigned int ProtectionMask; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r12
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r12
  unsigned __int8 v29; // bl
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // ebx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 *v42; // rcx
  __int64 v43; // rcx
  unsigned int *MmInternal; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r15
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int updated; // ebx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // r15
  char v58; // di
  char v59; // al
  unsigned __int64 PrototypePteVadLookup; // rax
  __int64 v61; // rdi
  __int64 ProtoPteAddress; // rax
  __int64 v63; // rcx
  __int64 CloneAddress; // rdi
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // r12
  __int64 v68; // rdx
  unsigned __int64 v69; // rbx
  char v70; // al
  unsigned __int64 v71; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v73; // rbx
  __int64 v74; // rcx
  unsigned __int64 *v75; // r12
  int v76; // esi
  unsigned __int64 v77; // r13
  unsigned __int64 v78; // rax
  char v79; // r11
  __int64 v80; // rax
  bool v81; // zf
  __int64 v82; // rax
  int v83; // ebx
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // r8
  unsigned __int8 v88; // [rsp+50h] [rbp-B0h]
  char v89; // [rsp+51h] [rbp-AFh]
  unsigned int PfnProtection; // [rsp+54h] [rbp-ACh] BYREF
  int v91; // [rsp+58h] [rbp-A8h]
  __int64 v92; // [rsp+60h] [rbp-A0h]
  __int64 v93; // [rsp+68h] [rbp-98h]
  int v94; // [rsp+70h] [rbp-90h]
  unsigned int v95; // [rsp+74h] [rbp-8Ch]
  __int64 v96; // [rsp+78h] [rbp-88h]
  __int64 v97; // [rsp+80h] [rbp-80h] BYREF
  __int16 v98[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v99; // [rsp+8Ch] [rbp-74h]
  __int64 v100; // [rsp+90h] [rbp-70h]
  __int64 v101; // [rsp+98h] [rbp-68h]
  int v102; // [rsp+A0h] [rbp-60h]
  int v103; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v104; // [rsp+A8h] [rbp-58h]
  __int64 v105; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v106; // [rsp+B8h] [rbp-48h]
  __int64 v107; // [rsp+C0h] [rbp-40h]
  int v108; // [rsp+C8h] [rbp-38h] BYREF
  int v109; // [rsp+CCh] [rbp-34h]
  int v110; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v111; // [rsp+D8h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-20h]
  __int64 v113; // [rsp+E8h] [rbp-18h]
  __int64 v114; // [rsp+F0h] [rbp-10h]
  __int64 v115; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v116; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v117[7]; // [rsp+108h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(a2 + 48) & 0x70;
  v117[0] = 0LL;
  v116 = 0LL;
  v11 = a2;
  PfnProtection = 0;
  v12 = a1;
  v108 = 0;
  v98[0] = 0;
  v115 = 0LL;
  if ( v9 == 32 && (*(_DWORD *)(a2 + 64) & 0x20) != 0 && MiGetImageExtensionBaseAddress(a2, a2, a1) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5, a2, v12);
  v99 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v16 = ProtectionMask & 0xFFFFFFFE;
  v105 = v15;
  v113 = v15;
  if ( (ProtectionMask & 5) != 5 )
    v16 = ProtectionMask;
  v92 = v15;
  v95 = v16;
  v17 = v15;
  v100 = v15;
  v91 = ProtectionMask & 5;
  v18 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = v18;
  v19 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v103 = v15;
  v20 = v14 + 1024;
  CurrentThread = KeGetCurrentThread();
  v21 = *(_QWORD *)(v14 + 1040);
  v104 = v19;
  v97 = v15;
  v101 = v14 + 1024;
  if ( *(_QWORD *)(v21 + 1064) != v15
    && *(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32) )
  {
    v83 = (unsigned __int8)MiLockWorkingSetShared(v14 + 1024);
    MiComputePageCommitment(a3, a4, v11, v83, 0, (__int64)&v97, 0LL);
    MiUnlockWorkingSetShared(v20, (unsigned __int8)v83);
    if ( v97 )
    {
      result = MiChargeFullProcessCommitment(a1);
      if ( (int)result < 0 )
        return result;
    }
    v19 = v104;
  }
  v22 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v20 + 174));
  v107 = v22;
  if ( v91 != 5 )
    goto LABEL_7;
  v35 = MiCountSharedPages(v11, v18, v19);
  v17 = v35;
  if ( !a6 )
  {
    if ( v35 )
    {
      v23 = a1;
      v37 = MiChargeFullProcessCommitment(a1);
      if ( v37 < 0 )
      {
LABEL_29:
        if ( v97 )
          MiReturnFullProcessCommitment(v23);
        return (unsigned int)v37;
      }
      goto LABEL_8;
    }
LABEL_7:
    v23 = a1;
LABEL_8:
    if ( MiVadPureReserve(v11) )
    {
      v103 = 1;
      LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v23);
      v37 = MiCommitPageTablesForVad(v11, a3, a4);
      if ( v37 < 0 )
      {
        UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v23);
        if ( v105 )
        {
          MiReturnCommit(v107, v17, 0LL);
        }
        else if ( v17 )
        {
          MiReturnFullProcessCommitment(v23);
        }
        goto LABEL_29;
      }
    }
    if ( v17 )
    {
      v24 = *(unsigned int *)(v11 + 52);
      v25 = v17 + (v24 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32));
      *(_DWORD *)(v11 + 52) = v17 + v24;
      *(_BYTE *)(v11 + 34) = BYTE4(v25);
    }
    v26 = v101;
    v94 = 1;
    v27 = 0LL;
    v96 = 0LL;
    v28 = 0LL;
    v93 = 0LL;
    v29 = MiLockWorkingSetShared(v101);
    v88 = v29;
    MiQueryAddressState(a3, a3, v29, v11, 0LL, (__int64)&PfnProtection, (__int64)&v108, (__int64)v98, (__int64)v117);
    *a7 = MmProtectToValue[PfnProtection];
    v110 = (*(_DWORD *)(v11 + 48) >> 12) & 0x7F;
    if ( v18 > v104 )
      goto LABEL_12;
    v39 = 0LL;
    v40 = 0xFFFFFFFFFFLL;
    v114 = 0LL;
    v41 = 0xFFFFDE0000000000uLL;
    while ( 1 )
    {
      if ( (v18 & 0xFFF) == 0 || v94 )
      {
        v94 = 0;
        if ( v28 )
        {
          if ( v92 )
          {
            MiFlushTbList(v92);
            v92 = 0LL;
            MiReleaseProcessorFlushList();
            v100 = 0LL;
          }
          MiUnlockPageTableInternal(v26, v28);
          v29 = v88;
        }
        if ( (*(_DWORD *)(v26 + 184) & 0xFu) <= 5
          && ((*(_DWORD *)(v26 + 184) & 0xF) != 1 ? (v42 = (__int64 *)(v26 + 192)) : (v42 = (__int64 *)&unk_140E38880),
              (v43 = *v42, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
            ? (v45 = 0LL)
            : (v45 = MmInternal[81]),
              (*(_DWORD *)(v43 + (v45 << 6)) & 0x40000000) != 0)
          || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v26, v29);
          MiLockWorkingSetShared(v26);
        }
        v93 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v18);
        v39 = v114;
        v40 = 0xFFFFFFFFFFLL;
        v41 = 0xFFFFDE0000000000uLL;
      }
      v46 = *(_QWORD *)v18;
      v47 = (__int64)((v18 << 25) - v39) >> 16;
      if ( (*(_QWORD *)v18 & 1) == 0 )
        break;
      v106 = (v46 >> 12) & 0xFFFFFFFFFFLL;
      v48 = 48 * v106 - 0x220000000000LL;
      if ( *(__int64 *)(v48 + 40) >= 0 )
        goto LABEL_48;
      v61 = *(_QWORD *)(v48 + 8);
      ProtoPteAddress = MiGetProtoPteAddress(v11, v47 >> 12, 8LL, &v116);
      v30 = 0x8000000000000000uLL;
      if ( (v61 | 0x8000000000000000uLL) == ProtoPteAddress )
      {
        v26 = v101;
LABEL_48:
        v109 = a5 & 0x101;
        if ( (a5 & 0x101) != 0 || a6 && *(__int64 *)(v48 + 40) >= 0 )
        {
          v106 = v104;
          v71 = v18 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v18 & 0xFFFFFFFFFFFFF000uLL) != (v104 & 0xFFFFFFFFFFFFF000uLL) )
            v106 = v71 + 4088;
          ProcessorFlushList = v100;
          v89 = 0;
          if ( v100 )
          {
            v102 = 0;
          }
          else
          {
            v102 = 1;
            ProcessorFlushList = MiGetProcessorFlushList(v71, v41, v30);
            v100 = ProcessorFlushList;
          }
          v73 = ProcessorFlushList + 4136;
          MiInitializeTbFlushList(ProcessorFlushList + 4136, v26, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
          v75 = (unsigned __int64 *)v18;
          if ( v18 <= v106 )
          {
            v76 = v109;
            v77 = v106;
            while ( 1 )
            {
              v78 = *v75;
              if ( (*v75 & 1) == 0
                || !v76
                && (!a6
                 || (v74 = 6 * ((v78 >> 12) & 0xFFFFFFFFFFLL),
                     *(__int64 *)(48 * ((v78 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
              {
LABEL_121:
                v18 = v111;
                v11 = a2;
                goto LABEL_122;
              }
              if ( (MiGetWsleContents(v74, v47) & 0xF) == 8 )
                break;
              MiInsertTbFlushEntry(v73, v47, 1LL);
              v79 = v89;
              if ( v89 || *(_DWORD *)(v73 + 28) == *(_DWORD *)(v73 + 12) )
                goto LABEL_168;
LABEL_120:
              ++v75;
              v47 += 4096LL;
              if ( (unsigned __int64)v75 > v77 )
                goto LABEL_121;
            }
            v79 = 1;
            *a8 = 1;
            v89 = 1;
LABEL_168:
            if ( *(_DWORD *)(v73 + 28) )
            {
              MiFreeWsleList(v26, v73, 0LL);
              v79 = v89;
            }
            if ( v79 )
            {
              MiUnlockVa(v26, v47);
              v89 = 0;
            }
            goto LABEL_120;
          }
LABEL_122:
          if ( *(_DWORD *)(v73 + 28) )
            MiFreeWsleList(v26, v73, 0LL);
          if ( v102 )
          {
            MiReleaseProcessorFlushList();
            v100 = 0LL;
          }
          goto LABEL_60;
        }
        if ( *(__int64 *)(v48 + 40) < 0 )
        {
          if ( v91 != 5 && (v46 & 0x200) != 0 )
            ++v96;
          PfnProtection = MiGetPfnProtection(v40, v47, v48);
          updated = MiSanitizePfnProtection(v11, PfnProtection, v99);
          MiSetWsleProtection(v63, v47, updated);
        }
        else
        {
          updated = MiUpdatePfnProtection(v11, v48, v95);
        }
        v53 = v92;
        if ( !v92 )
        {
          v54 = MiGetProcessorFlushList(v50, v49, v52);
          v100 = v54;
          v55 = v54;
          v92 = v54;
          *(_DWORD *)(v54 + 16) = 0;
          *(_DWORD *)(v54 + 20) = 32;
          *(_QWORD *)v54 = v26;
          *(_BYTE *)(v54 + 24) = (*(_DWORD *)(v26 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v26 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v26 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            if ( (*(_DWORD *)(v26 + 184) & 0xF) == 0 )
            {
              v56 = 1;
              goto LABEL_57;
            }
          }
          else
          {
            *(_DWORD *)(v54 + 16) |= 9u;
          }
          v56 = 0;
LABEL_57:
          *(_DWORD *)(v55 + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(v55 + 8) = v56;
          v53 = v55;
          *(_WORD *)(v55 + 25) = 0;
          *(_DWORD *)(v55 + 28) = 0;
          *(_QWORD *)(v55 + 32) = 0LL;
          *(_QWORD *)(v55 + 40) = 0LL;
        }
        MiRevertValidPte(v11, v18, updated, v106, v53);
LABEL_59:
        v18 += 8LL;
        v111 = v18;
        goto LABEL_60;
      }
      CloneAddress = 0LL;
      if ( (*(_QWORD *)(v48 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v48 + 8) <= 0 )
      {
        CloneAddress = MiLocateCloneAddress(a1, *(_QWORD *)(v48 + 8) | 0x8000000000000000uLL);
        if ( *(_QWORD *)(*(_QWORD *)(v65 + 1040) + 1064LL) <= *(_QWORD *)(CloneAddress + 96) )
          CloneAddress = 0LL;
      }
      if ( v92 )
      {
        MiFlushTbList(v92);
        v92 = 0LL;
        MiReleaseProcessorFlushList();
        v100 = 0LL;
      }
      v66 = MiCopyOnWrite(v47, v18, (__int64)&v115);
      if ( v66 >= 0 )
      {
        if ( CloneAddress )
          --v97;
        goto LABEL_60;
      }
      v67 = v101;
      MiUnlockPageTableInternal(v101, v93);
      MiUnlockWorkingSetShared(v67, v88);
      MiCopyOnWriteCheckConditions(v67, (unsigned int)v66, v115);
      v94 = 1;
      v93 = 0LL;
      v57 = 0LL;
      MiLockWorkingSetShared(v67);
LABEL_61:
      v40 = 0xFFFFFFFFFFLL;
      v26 = v101;
      v29 = v88;
      v39 = v114;
      v41 = 0xFFFFDE0000000000uLL;
      if ( v18 > v104 )
      {
        if ( v92 )
        {
          MiFlushTbList(v92);
          MiReleaseProcessorFlushList();
        }
        if ( v57 )
          MiUnlockPageTableInternal(v26, v57);
        v27 = v96;
LABEL_12:
        MiUnlockWorkingSetShared(v26, v29);
        if ( v103 )
          UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, a1);
        v31 = v113;
        v32 = v105;
        if ( v113 && v91 == 5 )
        {
          v32 = v105 - v113;
          v31 = 0LL;
        }
        v33 = v107;
        if ( v32 )
          MiReturnCommit(v107, v32, 0LL);
        if ( v27 )
        {
          v38 = (*(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32)) - v27;
          *(_DWORD *)(v11 + 52) -= v27;
          *(_BYTE *)(v11 + 34) = BYTE4(v38);
          MiReturnCommit(v33, v27 - v31, 0LL);
          MiReturnFullProcessCharges(a1, v27);
        }
        if ( v97 )
          MiReturnFullProcessCommitment(a1);
        return 0LL;
      }
      v28 = v93;
    }
    if ( (v46 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)v18, 0xFFFFDE0000000000uLL) )
        goto LABEL_102;
      v86 = v46;
      if ( qword_140E2DCC0 )
      {
        if ( (v46 & 0x10) != 0 )
          v86 = v46 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v86 = v46 & ~qword_140E2DCC0;
      }
      if ( v86 >> 16 == MiGetProtoPteAddress(v11, v47 >> 12, 8LL, &v116) )
      {
LABEL_102:
        if ( v91 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v46, v68) && (v46 & 0xA0) == 0xA0 )
          ++v96;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v46, v68) )
          v69 = v46 >> 5;
        else
          LODWORD(v69) = *(_DWORD *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1;
        PfnProtection = v69 & 0x1F;
        v70 = MiSanitizePfnProtection(v11, v69 & 0x1F, v99);
        *(_QWORD *)v18 = MiMakePrototypePteVadLookup(v70);
        goto LABEL_59;
      }
      if ( v92 )
      {
        MiFlushTbList(v92);
        v92 = 0LL;
        MiReleaseProcessorFlushList();
        v100 = v87;
      }
      if ( (int)MiMakeProtoLeafValid(v18) < 0 )
      {
        v18 += 8LL;
        v111 = v18;
      }
      v94 = 1;
LABEL_60:
      v57 = v93;
      goto LABEL_61;
    }
    if ( (v46 & 0x800) != 0 )
    {
      if ( !a6 )
      {
        if ( !(unsigned int)MiSetProtectionOnTransitionPte(v11, v18, v95, 1LL) )
          goto LABEL_59;
        goto LABEL_60;
      }
      v84 = MiTryDeleteTransitionPte(v18, 0xFFFFDE0000000000uLL, v30);
      if ( v84 == 3 )
      {
        ++v113;
      }
      else if ( v84 == 1 )
      {
        goto LABEL_60;
      }
    }
    else
    {
      v58 = 0;
      if ( !a6 )
      {
        if ( v46 )
        {
          PfnProtection = (v46 >> 5) & 0x1F;
          v95 = MiSanitizePfnProtection(v11, (v46 >> 5) & 0x1F, v95);
          PrototypePteVadLookup = (32LL * v95) ^ (v46 ^ (32LL * v95)) & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_73:
          *(_QWORD *)v18 = PrototypePteVadLookup;
          goto LABEL_59;
        }
LABEL_71:
        MiIncreaseUsedPtes(v40, ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
        if ( v91 != 5 && (v58 || !(unsigned int)MiPteNeedsCommitCharge(v11, v18)) )
          ++v96;
        PfnProtection = (*(_DWORD *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
        v59 = MiSanitizePfnProtection(0LL, PfnProtection, v99);
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v59);
        goto LABEL_73;
      }
      if ( !v46 )
        goto LABEL_71;
      v117[1] = *(_QWORD *)v18;
      if ( (v46 & 4) != 0 || (v46 & 2) != 0 )
        MiReleasePageFileInfo(v107, v46, 1LL);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v46) )
      {
LABEL_135:
        *(_QWORD *)v18 = CLFS_LSN_NULL_EXT;
        MiDecreaseUsedPtes(v85, ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
        v58 = 1;
        goto LABEL_71;
      }
    }
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 648));
    goto LABEL_135;
  }
  v80 = ((__int64)(v19 - v18) >> 3) - v35;
  v81 = v80 == -1;
  v82 = v80 + 1;
  v105 = v82;
  if ( v81 || (unsigned int)MiChargeCommit(v22, v82, 0LL, v36) )
  {
    v17 = 0LL;
    goto LABEL_7;
  }
  if ( v97 )
    MiReturnFullProcessCommitment(a1);
  return 3221225773LL;
}
