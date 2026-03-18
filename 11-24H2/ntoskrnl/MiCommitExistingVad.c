/*
 * XREFs of MiCommitExistingVad @ 0x140213020
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x140238E20 (MiIsPteDecommittedPage.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiInsertLargeUserMapping @ 0x14036ECE0 (MiInsertLargeUserMapping.c)
 *     MiComputePreferredNode @ 0x14036EFC8 (MiComputePreferredNode.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     MiPopLargePfnList @ 0x1404912BC (MiPopLargePfnList.c)
 *     MiFlushGraphicsPtes @ 0x1404D6AE4 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D8A64 (MiLockWorkingSetForLargeMapping.c)
 *     MiGetVadLargePageMinimumIndex @ 0x1404F6FC4 (MiGetVadLargePageMinimumIndex.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A82FDC (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x140AA1C38 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        _WORD **a9,
        _DWORD *a10,
        _WORD *a11)
{
  int v12; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  __int64 v22; // r10
  _KPROCESS *v23; // r11
  unsigned __int64 v24; // r12
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // r8
  _WORD **v27; // rdi
  unsigned __int64 v28; // r14
  _KPROCESS *v29; // rdi
  ULONG_PTR v30; // rdx
  volatile signed __int32 *p_ActiveGroupsMask; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r14
  unsigned __int16 v36; // si
  ULONG_PTR v37; // r13
  __int64 v38; // r15
  int v39; // r12d
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rdx
  __int64 HasShadow; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edx
  _QWORD *v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 result; // rax
  __int64 v53; // rdx
  int PageProtection; // eax
  unsigned __int8 v55; // al
  _QWORD *v56; // rdx
  unsigned __int8 v57; // si
  __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 LockedVadEvent; // rax
  _WORD **v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // r9
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  int VadLargePageMinimumIndex; // eax
  __int64 v79; // r10
  int LargePfnList; // edi
  bool v81; // zf
  _WORD **v82; // rsi
  unsigned __int8 v83; // [rsp+50h] [rbp-B0h]
  _KPROCESS *Process; // [rsp+58h] [rbp-A8h]
  unsigned int ProtectionMask; // [rsp+60h] [rbp-A0h]
  _WORD **v86; // [rsp+68h] [rbp-98h]
  int v87; // [rsp+68h] [rbp-98h]
  unsigned __int64 v89; // [rsp+78h] [rbp-88h]
  unsigned int v90; // [rsp+80h] [rbp-80h]
  __int64 v91; // [rsp+88h] [rbp-78h]
  __int64 v92; // [rsp+88h] [rbp-78h]
  _WORD *v93; // [rsp+90h] [rbp-70h]
  int v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  __int16 v96; // [rsp+A0h] [rbp-60h] BYREF
  int v97; // [rsp+A4h] [rbp-5Ch]
  int v98; // [rsp+A8h] [rbp-58h]
  int v99; // [rsp+ACh] [rbp-54h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h] BYREF
  _WORD **v103; // [rsp+C8h] [rbp-38h] BYREF
  __int64 DemandZeroPte; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v105; // [rsp+D8h] [rbp-28h]
  __int64 v106; // [rsp+E0h] [rbp-20h]
  __int64 v107; // [rsp+E8h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  __int64 v109; // [rsp+F8h] [rbp-8h]
  __int64 v110; // [rsp+100h] [rbp+0h]
  ULONG_PTR v111; // [rsp+108h] [rbp+8h]
  _QWORD v112[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v113; // [rsp+120h] [rbp+20h] BYREF
  __int64 v114; // [rsp+130h] [rbp+30h]
  _QWORD v115[3]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v116[3]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v117[3]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v118[3]; // [rsp+198h] [rbp+98h] BYREF

  v12 = *(_DWORD *)(a1 + 48);
  v105 = a10;
  v114 = 0LL;
  v107 = 0LL;
  v97 = v12 & 0x4200000;
  v98 = 0;
  v113 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a4);
  v16 = ProtectionMask;
  v17 = (v15 >> 7) & 0x1F;
  if ( ProtectionMask == 24 )
  {
    v16 = 24;
    goto LABEL_7;
  }
  if ( v17 == 24 && ((v15 & 0x200000) != 0 || (v17 = (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1) & 0x1F, v17 == 24))
    || (v18 = v17 & 0x18) == 0 )
  {
    v19 = ProtectionMask & 0x18;
    if ( v19 == 24 )
    {
      v16 = ProtectionMask & 0xFFFFFFE7;
      goto LABEL_7;
    }
    if ( v19 != 8 )
      goto LABEL_8;
    goto LABEL_6;
  }
  switch ( v18 )
  {
    case 16:
LABEL_6:
      v16 = ProtectionMask & 0xFFFFFFF7;
LABEL_7:
      ProtectionMask = v16;
      break;
    case 8:
      v16 = ProtectionMask & 0xFFFFFFE7 | 8;
      goto LABEL_7;
    case 24:
      v16 = ProtectionMask | 0x18;
      goto LABEL_7;
  }
LABEL_8:
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v93 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *a11 = **((_WORD **)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
  if ( (*(_DWORD *)(a1 + 48) & 0x2000000) != 0 )
    v101 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
         - 0x98000000000LL;
  else
    v101 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(v16);
  if ( (v21 & 0x14200000) == 0x10200000 )
  {
    v60 = MI_READ_PTE_LOCK_FREE(&DemandZeroPte);
    v21 = *(unsigned int *)(a1 + 48);
    v22 = (__int64)a9;
    v23 = Process;
    DemandZeroPte = v60 | 0x4000000;
  }
  v106 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = (a2 + a3 - 1) | 0xFFF;
  v25 = v106;
  v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = 0LL;
  v111 = v26;
  v115[1] = v115;
  v115[2] = 0LL;
  v115[0] = v115;
  v109 = ((__int64)(v26 - v106) >> 3) + 1;
  v116[1] = v116;
  v116[0] = v116;
  v117[1] = v117;
  v117[0] = v117;
  v118[1] = v118;
  v118[0] = v118;
  v116[2] = 0LL;
  v117[2] = 0LL;
  v118[2] = 0LL;
  v86 = 0LL;
  v103 = 0LL;
  if ( (v21 & 0xA00000) == 0xA00000 )
  {
    v64 = (v21 >> 19) & 3;
    v65 = 1LL;
    v66 = MiVadPageSizes[v64];
    v67 = MiVadPageIndices[v64];
    v91 = v66;
    if ( v66 == 16 )
      v65 = 16LL;
    v90 = v67;
    v110 = v65;
    v68 = a6 & 0x1A;
    if ( v67 <= 1 )
    {
      if ( v67 == 1 )
      {
        if ( v68 != 8 )
          return 3221225485LL;
      }
      else if ( v68 != 16 )
      {
        return 3221225485LL;
      }
      v76 = 2 - v67;
      v77 = v101;
      do
      {
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v77 = ((v77 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v76;
      }
      while ( v76 );
      v101 = v77;
      v111 = v26;
    }
    else if ( v68 != 2 )
    {
      return 3221225485LL;
    }
    if ( v22 == 1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a1, 16LL);
      if ( LockedVadEvent )
      {
        v70 = *(_WORD ***)(LockedVadEvent + 24);
        v86 = v70;
        if ( v70 )
        {
LABEL_129:
          v27 = v70;
LABEL_130:
          v103 = v27;
          goto LABEL_105;
        }
      }
      else
      {
        v86 = 0LL;
      }
    }
    else if ( v22 )
    {
      v70 = (_WORD **)v22;
      v86 = (_WORD **)v22;
      goto LABEL_129;
    }
    v27 = *(_WORD ***)(*((_QWORD *)qword_140E2FF88 + HIWORD(v23[2].ProcessListEntry.Blink)) + 184LL);
    goto LABEL_130;
  }
  if ( (a6 & 0x1A) != 0 )
    return 3221225485LL;
  v91 = 1LL;
  v110 = 1LL;
  v90 = 3;
  if ( (int)MiChargeFullProcessCommitment(v23, ((__int64)(v26 - v106) >> 3) + 1) >= 0 )
  {
    v89 = v109;
    v28 = v109;
    v99 = 1;
LABEL_16:
    v29 = Process;
LABEL_17:
    v94 = 0;
    if ( !(unsigned int)MiVadPureReserve(a1) )
      goto LABEL_24;
    p_ActiveGroupsMask = (volatile signed __int32 *)&v29[1].ActiveGroupsMask;
    v94 = 1;
    --CurrentThread->SpecialApcDisable;
    v32 = KeAbPreAcquire(p_ActiveGroupsMask, 0LL, 0LL);
    v33 = v32;
    if ( _interlockedbittestandset64(p_ActiveGroupsMask, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_ActiveGroupsMask, v32, p_ActiveGroupsMask);
    if ( v33 )
      *(_BYTE *)(v33 + 10) = 1;
    if ( (int)MiCommitPageTablesForVad(a1, a2, v24) >= 0 )
    {
      v30 = a1;
LABEL_24:
      v34 = v110;
      v35 = v91;
      v36 = 0;
      v100 = 0LL;
      v37 = 0LL;
      v95 = 0LL;
      v38 = 0LL;
LABEL_25:
      v39 = 0;
      v92 = 0LL;
      v87 = 0;
      if ( v90
        || (v61 = MiComputePreferredNode(&Process[2].ReadyListHead.Blink, v30),
            v87 = 1,
            v83 = MiLockWorkingSetForLargeMapping(v62 + 1024, v63, v61),
            v83 == 17) )
      {
        v83 = MiLockWorkingSetShared(&Process[2].ReadyListHead.Blink);
      }
      while ( 1 )
      {
        if ( v25 > v111 )
        {
          if ( v36 )
            MiIncreaseUsedPtes(v40, v95, v36, 2LL);
          if ( v97 == 69206016 && v38 )
            MiFlushGraphicsPtes(v37, v38);
          if ( v87 == 1 )
          {
            MiUnlockWorkingSetExclusive(&Process[2].ReadyListHead.Blink, v83);
          }
          else
          {
            if ( v92 )
              MiUnlockPageTableInternal(&Process[2].ReadyListHead.Blink, v92);
            MiUnlockWorkingSetShared(&Process[2].ReadyListHead.Blink, v83);
          }
          if ( v94 )
            UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
          if ( v99 )
          {
            v49 = v100;
            if ( v100 )
              MiReturnFullProcessCommitment(Process, v100);
            v89 = v109 - v49;
          }
          v50 = *(unsigned int *)(a1 + 52);
          v51 = v89 + (v50 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32));
          *(_DWORD *)(a1 + 52) = v89 + v50;
          *(_BYTE *)(a1 + 34) = BYTE4(v51);
          return 0LL;
        }
        if ( v39 && (v25 & 0xFFF) != 0 )
        {
          v41 = 0xFFFFF6FB7DBED000uLL;
        }
        else
        {
          if ( v36 )
          {
            MiIncreaseUsedPtes(v40, v95, v36, 2LL);
            v36 = 0;
          }
          if ( v97 == 69206016 && v38 )
          {
            MiFlushGraphicsPtes(v37, v38);
            v37 = 0LL;
          }
          if ( v87 != 1 )
          {
            if ( v92 )
              MiUnlockPageTableInternal(&Process[2].ReadyListHead.Blink, v92);
            v92 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiMakeSystemAddressValid(v25);
          v41 = 0xFFFFF6FB7DBED000uLL;
          if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v40 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v95 = v40;
          }
          v39 = 1;
        }
        if ( v37 )
        {
          v38 += v34;
        }
        else
        {
          v37 = v25;
          v38 = v34;
        }
        v42 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (v42 & 1) != 0 )
          {
            LOBYTE(v40) = (v42 & 0x42) != 0;
            if ( ((unsigned __int8)v40 & ((v42 & 0x20) != 0)) == 0 )
            {
              HasShadow = MiPteHasShadow(v40, v42);
              if ( HasShadow )
              {
                v40 = *(_QWORD *)(HasShadow + 1288);
                if ( v40 )
                {
                  v45 = *(_QWORD *)(v40 + 8 * ((v25 >> 3) & 0x1FF));
                  if ( (v45 & 0x20) != 0 )
                    v44 |= 0x20uLL;
                  v42 = v44 | 0x42;
                  if ( (v45 & 0x42) == 0 )
                    v42 = v44;
                }
              }
            }
          }
          v41 = 0xFFFFF6FB7DBED000uLL;
        }
        v102 = v42;
        if ( v42 )
        {
          if ( (unsigned int)MiIsPteDecommittedPage(v42) )
          {
            if ( v35 != 1 )
              goto LABEL_63;
            v59 = (32LL * ProtectionMask) ^ ((32LL * ProtectionMask) ^ v53) & 0xFFFFFFFFFFFFFC1FuLL;
            v102 = v59;
            if ( (*(_DWORD *)(a1 + 48) & 0x14200000) == 0x10200000 )
            {
              v102 = MI_READ_PTE_LOCK_FREE(&v102) | 0x4000000;
              v59 = v102;
            }
            *(_QWORD *)v25 = v59;
          }
          else
          {
            v100 += v35;
            if ( !*v105 )
            {
              v96 = 0;
              PageProtection = MiGetPageProtection(a1, v25, (__int64)&v96);
              if ( v107 )
              {
                if ( v36 )
                {
                  MiIncreaseUsedPtes(v40, v95, v36, 2LL);
                  v36 = 0;
                }
                if ( v97 == 69206016 && v38 )
                {
                  MiFlushGraphicsPtes(v37, v38);
                  v37 = 0LL;
                }
                if ( v87 == 1 )
                {
                  MiUnlockWorkingSetExclusive(&Process[2].ReadyListHead.Blink, v83);
                }
                else
                {
                  MiUnlockPageTableInternal(&Process[2].ReadyListHead.Blink, v92);
                  MiUnlockWorkingSetShared(&Process[2].ReadyListHead.Blink, v83);
                }
                v30 = a1;
                goto LABEL_25;
              }
              if ( ProtectionMask != PageProtection || v98 != a5 )
                *v105 = 1;
            }
          }
        }
        else
        {
          if ( v25 <= v101 )
            v100 += v35;
          if ( v35 != 1 )
          {
LABEL_63:
            v46 = MiPopLargePfnList(v115, v90, v41);
            v47 = v106;
            v48 = (_QWORD *)(48 * v46 - 0x220000000000LL);
            v112[0] = v48;
            v112[1] = v48;
            *v48 = v112;
            v48[1] = v112;
            MiInsertLargeUserMapping(a1, v47, (unsigned int)v112, v90, ProtectionMask);
            goto LABEL_45;
          }
          if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
            v36 += v34;
          *(_QWORD *)v25 = DemandZeroPte;
        }
LABEL_45:
        v25 += 8 * v34;
        v106 += 8 * v35;
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
    if ( v28 )
    {
      if ( v91 != 1 )
      {
        MiFreeLargeZeroPages(v20, v115, 1LL);
        MiReturnResident(v20, v89);
        if ( v86 )
        {
          MiReturnCommit(v20, v89, 0LL);
          MiReturnCrossPartitionCharges(v20, 2u, 1, v89);
        }
        else
        {
          MiReturnFullProcessCommitment(Process, v89);
        }
        MiReturnProcessPhysicalPages(Process, v89);
        return 3221225773LL;
      }
      MiReturnFullProcessCommitment(Process, v89);
    }
    return 3221225773LL;
  }
  v23 = Process;
LABEL_105:
  v99 = 0;
  v55 = MiLockWorkingSetShared(&v23[2].ReadyListHead.Blink);
  v56 = &v103;
  v57 = v55;
  if ( !v27 )
    v56 = 0LL;
  v58 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v24, a1, v55, 0, 0LL, (__int64)v56);
  MiUnlockWorkingSetShared(&Process[2].ReadyListHead.Blink, v57);
  v89 = v109 - v58;
  if ( v91 != 1 && !v103 )
    return 3221225496LL;
  if ( v109 == v58 )
  {
    v28 = 0LL;
LABEL_179:
    v20 = (__int64)v93;
    goto LABEL_16;
  }
  v71 = v109 - v58;
  if ( v91 == 1 )
  {
    v29 = Process;
    result = MiChargeFullProcessCommitment(Process, v71);
    if ( (int)result < 0 )
      return result;
    v20 = 0LL;
    v28 = v89;
    goto LABEL_17;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(Process, v71) )
    return 3221225773LL;
  if ( v86 )
  {
    v74 = (__int64)a9;
    if ( v86 != a9 && !(unsigned __int8)PsReferencePartitionSafe(v86) )
    {
      MiReturnProcessPhysicalPages(Process, v75);
      return 3221226656LL;
    }
    v93 = *v86;
    *a11 = **v86;
  }
  else
  {
    if ( (int)MiChargeFullProcessCommitment(v73, v72) < 0 )
      return MiReturnProcessPhysicalPages(Process, v89);
    v74 = (__int64)a9;
    v93 = (_WORD *)*((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
  }
  VadLargePageMinimumIndex = MiGetVadLargePageMinimumIndex(a1);
  v28 = v89;
  *(_QWORD *)&v113 = v79;
  LargePfnList = MiCreateLargePfnList(
                   (unsigned int)&v113,
                   a2,
                   v89,
                   MiPageSizes[VadLargePageMinimumIndex],
                   a7,
                   a8,
                   (__int64)v86,
                   0,
                   (__int64)v115);
  if ( v86 )
  {
    v81 = v86 == (_WORD **)v74;
    v82 = v86;
    if ( !v81 )
      PsDereferencePartition(v86);
  }
  else
  {
    v82 = 0LL;
  }
  if ( LargePfnList >= 0 )
    goto LABEL_179;
  if ( !v82 )
    MiReturnFullProcessCommitment(Process, v89);
  MiReturnProcessPhysicalPages(Process, v89);
  return (unsigned int)LargePfnList;
}
