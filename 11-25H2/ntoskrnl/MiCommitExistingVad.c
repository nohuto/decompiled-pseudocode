/*
 * XREFs of MiCommitExistingVad @ 0x1403840D0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1408FA704 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1409CB8C0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiIsPteDecommittedPage @ 0x14037DD50 (MiIsPteDecommittedPage.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiPopLargePfnList @ 0x140384E4C (MiPopLargePfnList.c)
 *     MiInsertLargeUserMapping @ 0x140384EB8 (MiInsertLargeUserMapping.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiComputePreferredNode @ 0x140405DE8 (MiComputePreferredNode.c)
 *     MiFlushGraphicsPtes @ 0x1404D7CB4 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D99E4 (MiLockWorkingSetForLargeMapping.c)
 *     MiGetVadLargePageMinimumIndex @ 0x1404F4454 (MiGetVadLargePageMinimumIndex.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A7F608 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x140A9C348 (MiReturnProcessPhysicalPages.c)
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
        __int64 a9,
        _DWORD *a10,
        _WORD *a11)
{
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _WORD *v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned __int64 v24; // r12
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rdi
  ULONG_PTR v31; // rdx
  __int64 v32; // rsi
  unsigned __int16 v33; // di
  ULONG_PTR v34; // r13
  __int64 v35; // r15
  int v36; // r12d
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 result; // rax
  __int64 v44; // rax
  int v45; // edx
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  int PageProtection; // eax
  char v49; // al
  __int64 *v50; // rdx
  unsigned __int8 v51; // si
  __int64 v52; // rdi
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _WORD **v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned __int64 LockedVadEvent; // rax
  __int64 v64; // r8
  unsigned int v65; // eax
  __int64 v66; // r9
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // r10
  int LargePfnList; // edi
  unsigned __int8 v73; // [rsp+50h] [rbp-B0h]
  unsigned int ProtectionMask; // [rsp+54h] [rbp-ACh]
  __int64 Process; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  int v80; // [rsp+70h] [rbp-90h]
  unsigned int v81; // [rsp+78h] [rbp-88h]
  unsigned __int64 v82; // [rsp+80h] [rbp-80h]
  unsigned __int64 v83; // [rsp+88h] [rbp-78h]
  __int16 v84; // [rsp+90h] [rbp-70h] BYREF
  BOOL v85; // [rsp+94h] [rbp-6Ch]
  _WORD *v86; // [rsp+98h] [rbp-68h]
  int v87; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+A4h] [rbp-5Ch]
  __int64 v89; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v90; // [rsp+B0h] [rbp-50h]
  __int64 v91; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-40h] BYREF
  __int64 DemandZeroPte; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v94; // [rsp+D0h] [rbp-30h]
  __int64 v95; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v96; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-18h]
  __int64 v98; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v99; // [rsp+F8h] [rbp-8h]
  _QWORD v100[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v101; // [rsp+110h] [rbp+10h] BYREF
  __int64 v102; // [rsp+120h] [rbp+20h]
  _QWORD v103[3]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v104[3]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v105[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v106[3]; // [rsp+188h] [rbp+88h] BYREF

  v94 = a10;
  v102 = 0LL;
  v14 = *(_DWORD *)(a1 + 48) & 0x4200000;
  v96 = 0LL;
  v87 = 0;
  v85 = v14 == 69206016;
  v101 = 0LL;
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
  v86 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  *a11 = **((_WORD **)qword_140E2FD48 + *(unsigned __int16 *)(Process + 1198));
  if ( (*(_DWORD *)(a1 + 48) & 0x2000000) != 0 )
    v90 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  else
    v90 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(v16);
  if ( (v21 & 0x14200000) == 0x10200000 )
  {
    v55 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&DemandZeroPte);
    v21 = *(unsigned int *)(a1 + 48);
    v22 = a9;
    v23 = Process;
    DemandZeroPte = v55 | 0x4000000;
  }
  v95 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = (a2 + a3 - 1) | 0xFFF;
  v25 = v95;
  v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v103[1] = v103;
  v99 = v26;
  v103[2] = 0LL;
  v103[0] = v103;
  v98 = ((__int64)(((v24 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  v104[1] = v104;
  v104[0] = v104;
  v105[1] = v105;
  v105[0] = v105;
  v106[1] = v106;
  v106[0] = v106;
  v104[2] = 0LL;
  v105[2] = 0LL;
  v106[2] = 0LL;
  v79 = 0LL;
  v92 = 0LL;
  if ( (v21 & 0xA00000) == 0xA00000 )
  {
    v60 = (v21 >> 19) & 3;
    v27 = 1LL;
    v61 = MiVadPageIndices[v60];
    if ( MiVadPageSizes[v60] == 16 )
      v27 = 16LL;
    v77 = MiVadPageSizes[v60];
    v62 = a6 & 0x1A;
    v81 = MiVadPageIndices[v60];
    if ( v61 <= 1 )
    {
      if ( v61 == 1 )
      {
        if ( v62 != 8 )
          return 3221225485LL;
      }
      else if ( v62 != 16 )
      {
        return 3221225485LL;
      }
      v68 = v90;
      v69 = 2 - v61;
      do
      {
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v68 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v69;
      }
      while ( v69 );
      v90 = v68;
      v99 = v26;
    }
    else if ( v62 != 2 )
    {
      return 3221225485LL;
    }
    if ( v22 == 1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a1, 16);
      if ( LockedVadEvent )
      {
        v64 = *(_QWORD *)(LockedVadEvent + 24);
        v79 = v64;
        if ( v64 )
        {
LABEL_110:
          v28 = v64;
LABEL_111:
          v92 = v28;
          goto LABEL_77;
        }
      }
      else
      {
        v79 = 0LL;
      }
    }
    else if ( v22 )
    {
      v64 = v22;
      v79 = v22;
      goto LABEL_110;
    }
    v28 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v23 + 1198)) + 184LL);
    goto LABEL_111;
  }
  if ( (a6 & 0x1A) != 0 )
    return 3221225485LL;
  v27 = 1LL;
  v77 = 1LL;
  v81 = 3;
  v28 = 0LL;
  if ( (int)MiChargeFullProcessCommitment(
              v23,
              ((__int64)(((v24 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v29 = 0LL;
    v82 = v98;
    v30 = 1LL;
    v88 = 1;
LABEL_16:
    v80 = 0;
    if ( !(unsigned int)MiVadPureReserve(a1) )
      goto LABEL_19;
    v80 = 1;
    LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
    if ( (int)MiCommitPageTablesForVad(a1, a2, v24) >= 0 )
    {
      v31 = a1;
LABEL_19:
      v32 = v77;
      v33 = 0;
      v89 = 0LL;
      v86 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
LABEL_20:
      v36 = 0;
      v83 = 0LL;
      v78 = 0;
      if ( v81
        || (v65 = MiComputePreferredNode(Process + 1024, v31),
            v78 = 1,
            v73 = MiLockWorkingSetForLargeMapping(v66 + 1024, v67, v65),
            v73 == 17) )
      {
        v73 = MiLockWorkingSetShared(Process + 1024);
      }
      while ( 1 )
      {
        if ( v25 > v99 )
        {
          if ( v33 )
            MiIncreaseUsedPtes(v37, (unsigned __int64)v86, v33, 2);
          if ( v85 && v35 )
            MiFlushGraphicsPtes(v34);
          if ( v78 == 1 )
          {
            MiUnlockWorkingSetExclusive(Process + 1024, v73);
          }
          else
          {
            if ( v83 )
              MiUnlockPageTable(Process + 1024, v83);
            MiUnlockWorkingSetShared(Process + 1024, v73);
          }
          if ( v80 )
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
          if ( v88 )
          {
            v40 = v89;
            if ( v89 )
              MiReturnFullProcessCommitment(Process, v89);
            v82 = v98 - v40;
          }
          v41 = *(unsigned int *)(a1 + 52);
          v42 = v82 + (v41 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32));
          *(_DWORD *)(a1 + 52) = v82 + v41;
          *(_BYTE *)(a1 + 34) = BYTE4(v42);
          return 0LL;
        }
        if ( !v36 || (v25 & 0xFFF) == 0 )
        {
          if ( v33 )
          {
            MiIncreaseUsedPtes(v37, (unsigned __int64)v86, v33, 2);
            v33 = 0;
          }
          if ( v85 && v35 )
          {
            MiFlushGraphicsPtes(v34);
            v34 = 0LL;
          }
          v39 = v78;
          if ( v78 != 1 )
          {
            if ( v83 )
            {
              MiUnlockPageTable(Process + 1024, v83);
              v39 = v78;
            }
            v83 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiMakeSystemAddressValid(v25, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v73, v39);
          if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
            v86 = (_WORD *)(((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v36 = 1;
        }
        if ( v34 )
        {
          v35 += v27;
        }
        else
        {
          v34 = v25;
          v35 = v27;
        }
        v38 = MI_READ_PTE_LOCK_FREE(v25);
        v91 = v38;
        if ( v38 )
        {
          if ( MiIsPteDecommittedPage(v38) )
          {
            if ( v32 != 1 )
              goto LABEL_61;
            v54 = (32LL * ProtectionMask) ^ (v47 ^ (32LL * ProtectionMask)) & 0xFFFFFFFFFFFFFC1FuLL;
            v91 = v54;
            v37 = *(_DWORD *)(a1 + 48) & 0x14200000;
            if ( (_DWORD)v37 == 270532608 )
            {
              v91 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v91) | 0x4000000;
              v54 = v91;
            }
            *(_QWORD *)v25 = v54;
          }
          else
          {
            v89 += v32;
            if ( !*v94 )
            {
              v84 = 0;
              PageProtection = MiGetPageProtection(a1, v25, &v96, &v87, &v84);
              if ( v96 )
              {
                if ( v33 )
                {
                  MiIncreaseUsedPtes(v37, (unsigned __int64)v86, v33, 2);
                  v33 = 0;
                }
                if ( v85 && v35 )
                {
                  MiFlushGraphicsPtes(v34);
                  v34 = 0LL;
                }
                if ( v78 == 1 )
                {
                  MiUnlockWorkingSetExclusive(Process + 1024, v73);
                }
                else
                {
                  MiUnlockPageTable(Process + 1024, v83);
                  MiUnlockWorkingSetShared(Process + 1024, v73);
                }
                v31 = a1;
                goto LABEL_20;
              }
              if ( ProtectionMask != PageProtection || v87 != a5 )
                *v94 = 1;
            }
          }
        }
        else
        {
          if ( v25 <= v90 )
            v89 += v32;
          if ( v32 != 1 )
          {
LABEL_61:
            v44 = MiPopLargePfnList(v103, v81);
            v45 = v95;
            v46 = (_QWORD *)(48 * v44 - 0x220000000000LL);
            v100[0] = v46;
            v100[1] = v46;
            *v46 = v100;
            v46[1] = v100;
            MiInsertLargeUserMapping(a1, v45, (unsigned int)v100, v81, ProtectionMask);
            goto LABEL_34;
          }
          if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
            v33 += v27;
          *(_QWORD *)v25 = DemandZeroPte;
        }
LABEL_34:
        v25 += 8 * v27;
        v95 += 8 * v32;
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( v82 )
    {
      if ( v30 == 1 )
      {
        MiReturnFullProcessCommitment(Process, v82);
      }
      else
      {
        MiFreeLargeZeroPages(v20, v103, 1LL);
        MiReturnResident((__int64)v20, v82);
        if ( v29 )
        {
          MiReturnCommit((__int64)v20, v82, 0);
          MiReturnCrossPartitionCharges((__int64)v20, 2u, 1);
        }
        else
        {
          MiReturnFullProcessCommitment(Process, v82);
        }
        MiReturnProcessPhysicalPages(Process, v82);
      }
    }
    return 3221225773LL;
  }
  v23 = Process;
LABEL_77:
  v88 = 0;
  v49 = MiLockWorkingSetShared(v23 + 1024);
  v50 = &v92;
  v51 = v49;
  if ( !v28 )
    v50 = 0LL;
  v52 = MiComputePageCommitment(a2 & 0xFFFFFFFFFFFFF000uLL, v24, a1, v49, 0, 0LL, v50);
  MiUnlockWorkingSetShared(Process + 1024, v51);
  v53 = v98 - v52;
  v30 = v77;
  v82 = v53;
  if ( v77 != 1 && !v92 )
    return 3221225496LL;
  if ( !v53 )
  {
LABEL_135:
    v20 = v86;
    v29 = v79;
    goto LABEL_16;
  }
  if ( v77 == 1 )
  {
    result = MiChargeFullProcessCommitment(Process, v53);
    if ( (int)result < 0 )
      return result;
    goto LABEL_135;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(Process, v53) )
    return 3221225773LL;
  v58 = (_WORD **)v79;
  if ( v79 )
  {
    if ( v79 != a9 && !(unsigned __int8)PsReferencePartitionSafe(v79) )
    {
      MiReturnProcessPhysicalPages(Process, v59);
      return 3221226656LL;
    }
    v20 = *v58;
    *a11 = **v58;
  }
  else
  {
    if ( (int)MiChargeFullProcessCommitment(v57, v56) < 0 )
      return MiReturnProcessPhysicalPages(Process, v82);
    v20 = (_WORD *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(Process + 1198));
  }
  v29 = v79;
  v70 = MiPageSizes[(unsigned int)MiGetVadLargePageMinimumIndex(a1)];
  *(_QWORD *)&v101 = v71;
  LargePfnList = MiCreateLargePfnList((unsigned int)&v101, a2, v82, v70, a7, a8, v79, 0, (__int64)v103);
  if ( v79 && v79 != a9 )
    PsDereferencePartition(v79);
  if ( LargePfnList >= 0 )
  {
    v30 = v77;
    goto LABEL_16;
  }
  if ( !v79 )
    MiReturnFullProcessCommitment(Process, v82);
  MiReturnProcessPhysicalPages(Process, v82);
  return (unsigned int)LargePfnList;
}
