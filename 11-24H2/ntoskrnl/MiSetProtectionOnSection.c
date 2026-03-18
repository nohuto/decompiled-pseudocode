/*
 * XREFs of MiSetProtectionOnSection @ 0x140236630
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MiCommitPagefileBackedSection @ 0x1408F7B54 (MiCommitPagefileBackedSection.c)
 *     MiMarkSharedImageCfgBits @ 0x1408F9C78 (MiMarkSharedImageCfgBits.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A1AB7C (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiGetPfnProtection @ 0x140212E10 (MiGetPfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiSetWsleProtection @ 0x140232ACC (MiSetWsleProtection.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiMakePrototypePteVadLookup @ 0x140236340 (MiMakePrototypePteVadLookup.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402386B4 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x140238918 (MiUpdatePfnProtection.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiSanitizePfnProtection @ 0x140238DA0 (MiSanitizePfnProtection.c)
 *     MiTryDeleteTransitionPte @ 0x14023C7DC (MiTryDeleteTransitionPte.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUnlockVa @ 0x1402C7B34 (MiUnlockVa.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x140302DC0 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MiMakeProtoLeafValid @ 0x1404056C4 (MiMakeProtoLeafValid.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCharges @ 0x140430F60 (MiReturnFullProcessCharges.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A2C0F0 (MiGetImageExtensionBaseAddress.c)
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
  unsigned int ProtectionMask; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r12
  unsigned __int8 v28; // bl
  int v29; // esi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 result; // rax
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 *v40; // rcx
  __int64 v41; // rcx
  unsigned int *MmInternal; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  int updated; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  char v58; // di
  char v59; // al
  unsigned __int64 PrototypePteVadLookup; // rax
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 CloneAddress; // rax
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // r12
  unsigned __int64 v68; // rbx
  char v69; // al
  unsigned __int64 v70; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned __int64 *v76; // r12
  int v77; // esi
  unsigned __int64 v78; // r13
  unsigned __int64 v79; // rax
  char v80; // r11
  __int64 v81; // rax
  bool v82; // zf
  unsigned __int64 v83; // rax
  unsigned __int8 v84; // bl
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned __int8 v98; // [rsp+50h] [rbp-B0h]
  char v99; // [rsp+51h] [rbp-AFh]
  unsigned int PfnProtection; // [rsp+54h] [rbp-ACh] BYREF
  int v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+60h] [rbp-A0h]
  __int64 v103; // [rsp+68h] [rbp-98h]
  int v104; // [rsp+70h] [rbp-90h]
  unsigned int v105; // [rsp+74h] [rbp-8Ch]
  __int64 v106; // [rsp+78h] [rbp-88h]
  unsigned __int64 v107; // [rsp+80h] [rbp-80h] BYREF
  __int16 v108[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v109; // [rsp+8Ch] [rbp-74h]
  __int64 v110; // [rsp+90h] [rbp-70h]
  __int64 v111; // [rsp+98h] [rbp-68h]
  int v112; // [rsp+A0h] [rbp-60h]
  int v113; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v114; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v115; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v116; // [rsp+B8h] [rbp-48h]
  __int64 v117; // [rsp+C0h] [rbp-40h]
  int v118; // [rsp+C8h] [rbp-38h] BYREF
  int v119; // [rsp+CCh] [rbp-34h]
  int v120; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v121; // [rsp+D8h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v123; // [rsp+E8h] [rbp-18h]
  __int64 v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v126; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v127[7]; // [rsp+108h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(a2 + 48) & 0x70;
  v127[0] = 0LL;
  v126 = 0LL;
  v11 = a2;
  PfnProtection = 0;
  v118 = 0;
  v108[0] = 0;
  v125 = 0LL;
  if ( v9 == 32 && (*(_DWORD *)(a2 + 64) & 0x20) != 0 && MiGetImageExtensionBaseAddress(a2, a2, a1) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v109 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v15 = ProtectionMask & 0xFFFFFFFE;
  v115 = v14;
  v123 = v14;
  if ( (ProtectionMask & 5) != 5 )
    v15 = ProtectionMask;
  v102 = v14;
  v105 = v15;
  v16 = v14;
  v110 = v14;
  v101 = ProtectionMask & 5;
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v121 = v17;
  v18 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v113 = v14;
  v19 = v13 + 1024;
  CurrentThread = KeGetCurrentThread();
  v20 = *(_QWORD *)(v13 + 1040);
  v114 = v18;
  v107 = v14;
  v111 = v13 + 1024;
  if ( *(_QWORD *)(v20 + 1064) != v14
    && *(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32) )
  {
    v84 = MiLockWorkingSetShared(v13 + 1024);
    MiComputePageCommitment(a3, a4, v11, v84, 0, (__int64)&v107, 0LL);
    MiUnlockWorkingSetShared(v19, v84);
    if ( v107 )
    {
      result = MiChargeFullProcessCommitment(a1, v107);
      if ( (int)result < 0 )
        return result;
    }
    v18 = v114;
  }
  v21 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v19 + 174));
  v117 = v21;
  if ( v101 != 5 )
    goto LABEL_7;
  v34 = MiCountSharedPages(v11, v17, v18);
  v16 = v34;
  if ( !a6 )
  {
    if ( v34 )
    {
      v22 = a1;
      v35 = MiChargeFullProcessCommitment(a1, v34);
      if ( v35 < 0 )
      {
LABEL_29:
        if ( v107 )
          MiReturnFullProcessCommitment(v22, v107);
        return (unsigned int)v35;
      }
      goto LABEL_8;
    }
LABEL_7:
    v22 = a1;
LABEL_8:
    if ( MiVadPureReserve(v11) )
    {
      v113 = 1;
      LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v22);
      v35 = MiCommitPageTablesForVad(v11, a3, a4);
      if ( v35 < 0 )
      {
        UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v22);
        if ( v115 )
        {
          MiReturnCommit(v117, v16, 0LL);
        }
        else if ( v16 )
        {
          MiReturnFullProcessCommitment(v22, v16);
        }
        goto LABEL_29;
      }
    }
    if ( v16 )
    {
      v23 = *(unsigned int *)(v11 + 52);
      v24 = v16 + (v23 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32));
      *(_DWORD *)(v11 + 52) = v16 + v23;
      *(_BYTE *)(v11 + 34) = BYTE4(v24);
    }
    v25 = v111;
    v104 = 1;
    v26 = 0LL;
    v106 = 0LL;
    v27 = 0LL;
    v103 = 0LL;
    v28 = MiLockWorkingSetShared(v111);
    v98 = v28;
    MiQueryAddressState(a3, a3, v28, v11, 0LL, (__int64)&PfnProtection, (__int64)&v118, (__int64)v108, (__int64)v127);
    *a7 = MmProtectToValue[PfnProtection];
    v29 = (*(_DWORD *)(v11 + 48) >> 12) & 0x7F;
    v120 = v29;
    if ( v17 > v114 )
      goto LABEL_12;
    v37 = 0LL;
    v38 = 0xFFFFFFFFFFLL;
    v124 = 0LL;
    v39 = 0xFFFFDE0000000000uLL;
    while ( 1 )
    {
      if ( (v17 & 0xFFF) == 0 || v104 )
      {
        v104 = 0;
        if ( v27 )
        {
          if ( v102 )
          {
            MiFlushTbList(v102, 0xFFFFDE0000000000uLL);
            v102 = 0LL;
            MiReleaseProcessorFlushList(v91, v90, v92);
            v110 = 0LL;
          }
          MiUnlockPageTableInternal(v25, v27);
          v28 = v98;
        }
        if ( (*(_DWORD *)(v25 + 184) & 0xFu) <= 5
          && ((*(_DWORD *)(v25 + 184) & 0xF) != 1 ? (v40 = (__int64 *)(v25 + 192)) : (v40 = (__int64 *)&unk_140E38740),
              (v41 = *v40, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
            ? (v43 = 0LL)
            : (v43 = MmInternal[81]),
              (*(_DWORD *)(v41 + (v43 << 6)) & 0x40000000) != 0)
          || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v25, v28);
          MiLockWorkingSetShared(v25);
        }
        v103 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v17, v29, v28, 0);
        v37 = v124;
        v38 = 0xFFFFFFFFFFLL;
        v39 = 0xFFFFDE0000000000uLL;
      }
      v44 = *(_QWORD *)v17;
      v45 = (__int64)((v17 << 25) - v37) >> 16;
      if ( (*(_QWORD *)v17 & 1) == 0 )
        break;
      v116 = (v44 >> 12) & 0xFFFFFFFFFFLL;
      v46 = 48 * v116 - 0x220000000000LL;
      if ( *(__int64 *)(v46 + 40) >= 0 )
        goto LABEL_48;
      v61 = *(_QWORD *)(v46 + 8);
      if ( (v61 | 0x8000000000000000uLL) == MiGetProtoPteAddress(v11, v45 >> 12, 8LL, &v126) )
      {
        v25 = v111;
LABEL_48:
        v119 = a5 & 0x101;
        if ( (a5 & 0x101) != 0 || a6 && *(__int64 *)(v46 + 40) >= 0 )
        {
          v116 = v114;
          v70 = v17 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != (v114 & 0xFFFFFFFFFFFFF000uLL) )
            v116 = v70 + 4088;
          ProcessorFlushList = v110;
          v99 = 0;
          if ( v110 )
          {
            v112 = 0;
          }
          else
          {
            v112 = 1;
            ProcessorFlushList = MiGetProcessorFlushList(v70, v39);
            v110 = ProcessorFlushList;
          }
          v72 = ProcessorFlushList + 4136;
          MiInitializeTbFlushList(ProcessorFlushList + 4136, v25, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
          v76 = (unsigned __int64 *)v17;
          if ( v17 <= v116 )
          {
            v77 = v119;
            v78 = v116;
            while ( 1 )
            {
              v79 = *v76;
              if ( (*v76 & 1) == 0
                || !v77
                && (!a6
                 || (v74 = 6 * ((v79 >> 12) & 0xFFFFFFFFFFLL),
                     *(__int64 *)(48 * ((v79 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
              {
LABEL_121:
                v29 = v120;
                v17 = v121;
                v11 = a2;
                goto LABEL_122;
              }
              if ( (MiGetWsleContents(v74, v45) & 0xF) == 8 )
                break;
              MiInsertTbFlushEntry(v72, v45, 1LL);
              v80 = v99;
              if ( v99 || *(_DWORD *)(v72 + 28) == *(_DWORD *)(v72 + 12) )
                goto LABEL_168;
LABEL_120:
              ++v76;
              v45 += 4096LL;
              if ( (unsigned __int64)v76 > v78 )
                goto LABEL_121;
            }
            v80 = 1;
            *a8 = 1;
            v99 = 1;
LABEL_168:
            if ( *(_DWORD *)(v72 + 28) )
            {
              MiFreeWsleList(v25, v72, 0LL);
              v80 = v99;
            }
            if ( v80 )
            {
              MiUnlockVa(v25, v45);
              v99 = 0;
            }
            goto LABEL_120;
          }
LABEL_122:
          if ( *(_DWORD *)(v72 + 28) )
            MiFreeWsleList(v25, v72, 0LL);
          if ( v112 )
          {
            MiReleaseProcessorFlushList(v74, v73, v75);
            v110 = 0LL;
          }
          goto LABEL_60;
        }
        if ( *(__int64 *)(v46 + 40) < 0 )
        {
          if ( v101 != 5 && (v44 & 0x200) != 0 )
            ++v106;
          PfnProtection = MiGetPfnProtection(v38, v45, v46);
          updated = MiSanitizePfnProtection(v11, PfnProtection, v109);
          MiSetWsleProtection(v62, v45, updated);
        }
        else
        {
          updated = MiUpdatePfnProtection(v11, v46, v105);
        }
        v50 = v102;
        if ( !v102 )
        {
          v51 = MiGetProcessorFlushList(v48, v47);
          v110 = v51;
          v52 = v51;
          v102 = v51;
          *(_DWORD *)(v51 + 16) = 0;
          *(_DWORD *)(v51 + 20) = 32;
          *(_QWORD *)v51 = v25;
          *(_BYTE *)(v51 + 24) = (*(_DWORD *)(v25 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v25 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v25 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            if ( (*(_DWORD *)(v25 + 184) & 0xF) == 0 )
            {
              v53 = 1;
              goto LABEL_57;
            }
          }
          else
          {
            *(_DWORD *)(v51 + 16) |= 9u;
          }
          v53 = 0;
LABEL_57:
          *(_DWORD *)(v52 + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(v52 + 8) = v53;
          v50 = v52;
          *(_WORD *)(v52 + 25) = 0;
          *(_DWORD *)(v52 + 28) = 0;
          *(_QWORD *)(v52 + 32) = 0LL;
          *(_QWORD *)(v52 + 40) = 0LL;
        }
        MiRevertValidPte(v11, v17, updated, v116, v50);
LABEL_59:
        v17 += 8LL;
        v121 = v17;
        goto LABEL_60;
      }
      v63 = 0LL;
      if ( (*(_QWORD *)(v46 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v46 + 8) <= 0 )
      {
        CloneAddress = MiLocateCloneAddress(a1, *(_QWORD *)(v46 + 8) | 0x8000000000000000uLL, 0x8000000000000000uLL);
        v39 = *(_QWORD *)(v65 + 1040);
        v63 = CloneAddress;
        if ( *(_QWORD *)(v39 + 1064) <= *(_QWORD *)(CloneAddress + 96) )
          v63 = 0LL;
      }
      if ( v102 )
      {
        MiFlushTbList(v102, v39);
        v102 = 0LL;
        MiReleaseProcessorFlushList(v88, v87, v89);
        v110 = 0LL;
      }
      v66 = MiCopyOnWrite(v45, v17, (__int64)&v125);
      if ( v66 >= 0 )
      {
        if ( v63 )
          --v107;
        goto LABEL_60;
      }
      v67 = v111;
      MiUnlockPageTableInternal(v111, v103);
      MiUnlockWorkingSetShared(v67, v98);
      MiCopyOnWriteCheckConditions(v67, (unsigned int)v66, v125);
      v104 = 1;
      v103 = 0LL;
      v54 = 0LL;
      MiLockWorkingSetShared(v67);
LABEL_61:
      v38 = 0xFFFFFFFFFFLL;
      v25 = v111;
      v28 = v98;
      v37 = v124;
      v39 = 0xFFFFDE0000000000uLL;
      if ( v17 > v114 )
      {
        if ( v102 )
        {
          MiFlushTbList(v102, 0xFFFFDE0000000000uLL);
          MiReleaseProcessorFlushList(v56, v55, v57);
        }
        if ( v54 )
          MiUnlockPageTableInternal(v25, v54);
        v26 = v106;
LABEL_12:
        MiUnlockWorkingSetShared(v25, v28);
        if ( v113 )
          UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, a1);
        v30 = v123;
        v31 = v115;
        if ( v123 && v101 == 5 )
        {
          v31 = v115 - v123;
          v30 = 0LL;
        }
        v32 = v117;
        if ( v31 )
          MiReturnCommit(v117, v31, 0LL);
        if ( v26 )
        {
          v36 = (*(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32)) - v26;
          *(_DWORD *)(v11 + 52) -= v26;
          *(_BYTE *)(v11 + 34) = BYTE4(v36);
          MiReturnCommit(v32, v26 - v30, 0LL);
          MiReturnFullProcessCharges(a1, v26);
        }
        if ( v107 )
          MiReturnFullProcessCommitment(a1, v107);
        return 0LL;
      }
      v27 = v103;
    }
    if ( (v44 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)v17) )
        goto LABEL_102;
      v93 = v44;
      if ( qword_140E2DB80 )
      {
        if ( (v44 & 0x10) != 0 )
          v93 = v44 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v93 = v44 & ~qword_140E2DB80;
      }
      if ( v93 >> 16 == MiGetProtoPteAddress(v11, v45 >> 12, 8LL, &v126) )
      {
LABEL_102:
        if ( v101 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v44) && (v44 & 0xA0) == 0xA0 )
          ++v106;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v44) )
          v68 = v44 >> 5;
        else
          LODWORD(v68) = *(_DWORD *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1;
        PfnProtection = v68 & 0x1F;
        v69 = MiSanitizePfnProtection(v11, v68 & 0x1F, v109);
        *(_QWORD *)v17 = MiMakePrototypePteVadLookup(v69);
        goto LABEL_59;
      }
      if ( v102 )
      {
        MiFlushTbList(v102, v94);
        v102 = 0LL;
        MiReleaseProcessorFlushList(v96, v95, 0LL);
        v110 = v97;
      }
      if ( (int)MiMakeProtoLeafValid(v17) < 0 )
      {
        v17 += 8LL;
        v121 = v17;
      }
      v104 = 1;
LABEL_60:
      v54 = v103;
      goto LABEL_61;
    }
    if ( (v44 & 0x800) != 0 )
    {
      if ( !a6 )
      {
        if ( !(unsigned int)MiSetProtectionOnTransitionPte(v11, v17, v105, 1LL) )
          goto LABEL_59;
        goto LABEL_60;
      }
      v85 = MiTryDeleteTransitionPte(v17);
      if ( v85 == 3 )
      {
        ++v123;
      }
      else if ( v85 == 1 )
      {
        goto LABEL_60;
      }
    }
    else
    {
      v58 = 0;
      if ( !a6 )
      {
        if ( v44 )
        {
          PfnProtection = (v44 >> 5) & 0x1F;
          v105 = MiSanitizePfnProtection(v11, (v44 >> 5) & 0x1F, v105);
          PrototypePteVadLookup = (32LL * v105) ^ (v44 ^ (32LL * v105)) & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_73:
          *(_QWORD *)v17 = PrototypePteVadLookup;
          goto LABEL_59;
        }
LABEL_71:
        MiIncreaseUsedPtes(v38, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
        if ( v101 != 5 && (v58 || !(unsigned int)MiPteNeedsCommitCharge(v11, v17)) )
          ++v106;
        PfnProtection = (*(_DWORD *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
        v59 = MiSanitizePfnProtection(0LL, PfnProtection, v109);
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v59);
        goto LABEL_73;
      }
      if ( !v44 )
        goto LABEL_71;
      v127[1] = *(_QWORD *)v17;
      if ( (v44 & 4) != 0 || (v44 & 2) != 0 )
        MiReleasePageFileInfo(v117, v44, 1LL);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v44) )
      {
LABEL_135:
        *(_QWORD *)v17 = CLFS_LSN_NULL_EXT;
        MiDecreaseUsedPtes(v86, ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
        v58 = 1;
        goto LABEL_71;
      }
    }
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 648));
    goto LABEL_135;
  }
  v81 = ((__int64)(v18 - v17) >> 3) - v34;
  v82 = v81 == -1;
  v83 = v81 + 1;
  v115 = v83;
  if ( v82 || (unsigned int)MiChargeCommit(v21, v83, 0) )
  {
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( v107 )
    MiReturnFullProcessCommitment(a1, v107);
  return 3221225773LL;
}
