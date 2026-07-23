/*
 * XREFs of MiCommitExistingVad @ 0x140306380
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x140213A80 (MiIsPteDecommittedPage.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiInsertLargeUserMapping @ 0x14026AC6C (MiInsertLargeUserMapping.c)
 *     MiComputePreferredNode @ 0x14026AF48 (MiComputePreferredNode.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiPopLargePfnList @ 0x14048BDB4 (MiPopLargePfnList.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D1EB4 (MiLockWorkingSetForLargeMapping.c)
 *     MiGetVadLargePageMinimumIndex @ 0x1404F48A8 (MiGetVadLargePageMinimumIndex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A7DAFC (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x140A9CFC8 (MiReturnProcessPhysicalPages.c)
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
        __int64 *a9,
        _DWORD *a10,
        _WORD *a11)
{
  __int64 v12; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned __int64 v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // r10
  _KPROCESS *v24; // r11
  unsigned __int64 v25; // r12
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // r9
  unsigned __int64 v30; // r14
  _KPROCESS *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  volatile signed __int32 *p_ActiveGroupsMask; // rdi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r14
  unsigned __int16 v40; // si
  ULONG_PTR v41; // r13
  __int64 v42; // r15
  int v43; // r12d
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  char v49; // r8
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 result; // rax
  __int64 v57; // rdx
  int PageProtection; // eax
  char v59; // al
  __int64 **v60; // rdx
  unsigned __int8 v61; // si
  __int64 v62; // rdi
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // edx
  __int64 v72; // rax
  unsigned __int64 LockedVadEvent; // rax
  __int64 *v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // r9
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  int VadLargePageMinimumIndex; // eax
  __int64 v81; // r10
  int LargePfnList; // edi
  bool v83; // zf
  __int64 *v84; // rsi
  unsigned __int8 v85; // [rsp+50h] [rbp-B0h]
  _KPROCESS *Process; // [rsp+58h] [rbp-A8h]
  unsigned int ProtectionMask; // [rsp+60h] [rbp-A0h]
  __int64 *v88; // [rsp+68h] [rbp-98h]
  int v89; // [rsp+68h] [rbp-98h]
  unsigned __int64 v91; // [rsp+78h] [rbp-88h]
  unsigned int v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  unsigned __int64 v94; // [rsp+88h] [rbp-78h]
  _WORD *v95; // [rsp+90h] [rbp-70h]
  int v96; // [rsp+90h] [rbp-70h]
  unsigned __int64 v97; // [rsp+98h] [rbp-68h]
  __int16 v98; // [rsp+A0h] [rbp-60h] BYREF
  int v99; // [rsp+A4h] [rbp-5Ch]
  int v100; // [rsp+A8h] [rbp-58h]
  int v101; // [rsp+ACh] [rbp-54h]
  __int64 v102; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v103; // [rsp+B8h] [rbp-48h]
  __int64 v104; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v105; // [rsp+C8h] [rbp-38h] BYREF
  __int64 DemandZeroPte; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v107; // [rsp+D8h] [rbp-28h]
  __int64 v108; // [rsp+E0h] [rbp-20h]
  __int64 v109; // [rsp+E8h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v111; // [rsp+F8h] [rbp-8h]
  __int64 v112; // [rsp+100h] [rbp+0h]
  ULONG_PTR v113; // [rsp+108h] [rbp+8h]
  _QWORD *v114[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v115; // [rsp+120h] [rbp+20h] BYREF
  __int64 v116; // [rsp+130h] [rbp+30h]
  _QWORD v117[3]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v118[3]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v119[3]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v120[3]; // [rsp+198h] [rbp+98h] BYREF

  v12 = *(unsigned int *)(a1 + 48);
  v107 = a10;
  v116 = 0LL;
  v109 = 0LL;
  v99 = v12 & 0x4200000;
  v100 = 0;
  v115 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a4, a2, v12);
  v16 = ProtectionMask;
  v17 = ((unsigned int)v15 >> 7) & 0x1F;
  if ( ProtectionMask == 24 )
  {
    v16 = 24LL;
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
  v95 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *a11 = **((_WORD **)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
  v21 = *(unsigned int *)(a1 + 48);
  if ( (v21 & 0x2000000) != 0 )
    v103 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
         - 0x98000000000LL;
  else
    v103 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v16, v21, v15, v16);
  if ( (v22 & 0x14200000) == 0x10200000 )
  {
    v64 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&DemandZeroPte);
    v22 = *(unsigned int *)(a1 + 48);
    v23 = (__int64)a9;
    v24 = Process;
    DemandZeroPte = v64 | 0x4000000;
  }
  v108 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = (a2 + a3 - 1) | 0xFFF;
  v26 = v108;
  v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = 0LL;
  v113 = v27;
  v117[1] = v117;
  v117[2] = 0LL;
  v117[0] = v117;
  v29 = ((__int64)(v27 - v108) >> 3) + 1;
  v111 = v29;
  v118[1] = v118;
  v118[0] = v118;
  v119[1] = v119;
  v119[0] = v119;
  v120[1] = v120;
  v120[0] = v120;
  v118[2] = 0LL;
  v119[2] = 0LL;
  v120[2] = 0LL;
  v88 = 0LL;
  v105 = 0LL;
  if ( (v22 & 0xA00000) == 0xA00000 )
  {
    v68 = (v22 >> 19) & 3;
    v69 = 1LL;
    v70 = MiVadPageSizes[v68];
    v71 = MiVadPageIndices[v68];
    v93 = v70;
    if ( v70 == 16 )
      v69 = 16LL;
    v92 = v71;
    v112 = v69;
    v72 = a6 & 0x1A;
    if ( v71 <= 1 )
    {
      if ( v71 == 1 )
      {
        if ( v72 != 8 )
          return 3221225485LL;
      }
      else if ( v72 != 16 )
      {
        return 3221225485LL;
      }
      v29 = 0xFFFFF68000000000uLL;
      v78 = 2 - v71;
      v79 = v103;
      do
      {
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v79 = ((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v78;
      }
      while ( v78 );
      v103 = v79;
      v113 = v27;
    }
    else if ( v72 != 2 )
    {
      return 3221225485LL;
    }
    if ( v23 == 1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a1, 16);
      if ( LockedVadEvent )
      {
        v74 = *(__int64 **)(LockedVadEvent + 24);
        v88 = v74;
        if ( v74 )
        {
LABEL_127:
          v28 = v74;
LABEL_128:
          v105 = v28;
          goto LABEL_103;
        }
      }
      else
      {
        v88 = 0LL;
      }
    }
    else if ( v23 )
    {
      v74 = (__int64 *)v23;
      v88 = (__int64 *)v23;
      goto LABEL_127;
    }
    v28 = *(__int64 **)(*((_QWORD *)qword_140E300C8 + HIWORD(v24[2].ProcessListEntry.Blink)) + 184LL);
    goto LABEL_128;
  }
  if ( (a6 & 0x1A) != 0 )
    return 3221225485LL;
  v93 = 1LL;
  v112 = 1LL;
  v92 = 3;
  if ( (int)MiChargeFullProcessCommitment(v24) >= 0 )
  {
    v91 = v111;
    v30 = v111;
    v101 = 1;
LABEL_16:
    v31 = Process;
LABEL_17:
    v96 = 0;
    if ( !MiVadPureReserve(a1) )
      goto LABEL_24;
    p_ActiveGroupsMask = (volatile signed __int32 *)&v31[1].ActiveGroupsMask;
    v96 = 1;
    --CurrentThread->SpecialApcDisable;
    v36 = KeAbPreAcquire(p_ActiveGroupsMask, 0LL, 0LL);
    v37 = v36;
    if ( _interlockedbittestandset64(p_ActiveGroupsMask, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_ActiveGroupsMask, v36, p_ActiveGroupsMask);
    if ( v37 )
      *(_BYTE *)(v37 + 10) = 1;
    if ( (int)MiCommitPageTablesForVad(a1, a2, v25) >= 0 )
    {
      v32 = a1;
LABEL_24:
      v38 = v112;
      v39 = v93;
      v40 = 0;
      v102 = 0LL;
      v41 = 0LL;
      v97 = 0LL;
      v42 = 0LL;
LABEL_25:
      v43 = 0;
      v94 = 0LL;
      v89 = 0;
      if ( v92
        || (v65 = MiComputePreferredNode((__int64)&Process[2].ReadyListHead.Blink, v32),
            v89 = 1,
            v85 = MiLockWorkingSetForLargeMapping(v66 + 1024, v67, v65),
            v85 == 17) )
      {
        v85 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v32, v33, v34);
      }
      while ( 1 )
      {
        if ( v26 > v113 )
        {
          if ( v40 )
            MiIncreaseUsedPtes(v44, v97, v40, 2LL);
          if ( v99 == 69206016 && v42 )
            MiFlushGraphicsPtes(v41, v42);
          if ( v89 == 1 )
          {
            MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v85);
          }
          else
          {
            if ( v94 )
              MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v94);
            MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v85);
          }
          if ( v96 )
            UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
          if ( v101 )
          {
            v53 = v102;
            if ( v102 )
              MiReturnFullProcessCommitment(Process);
            v91 = v111 - v53;
          }
          v54 = *(unsigned int *)(a1 + 52);
          v55 = v91 + (v54 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32));
          *(_DWORD *)(a1 + 52) = v91 + v54;
          *(_BYTE *)(a1 + 34) = BYTE4(v55);
          return 0LL;
        }
        if ( !v43 || (v26 & 0xFFF) == 0 )
        {
          if ( v40 )
          {
            MiIncreaseUsedPtes(v44, v97, v40, 2LL);
            v40 = 0;
          }
          if ( v99 == 69206016 && v42 )
          {
            MiFlushGraphicsPtes(v41, v42);
            v41 = 0LL;
          }
          v49 = v89;
          if ( v89 != 1 )
          {
            if ( v94 )
            {
              MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v94);
              v49 = v89;
            }
            v94 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiMakeSystemAddressValid(v26, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v85, v49);
          if ( v26 < 0xFFFFF6FB7DBED000uLL || v26 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v44 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v97 = v44;
          }
          v43 = 1;
        }
        if ( v41 )
        {
          v42 += v38;
        }
        else
        {
          v41 = v26;
          v42 = v38;
        }
        v45 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL && v26 <= 0xFFFFF6FB7DBED7F8uLL && (v45 & 1) != 0 )
        {
          LOBYTE(v44) = (v45 & 0x42) != 0;
          if ( ((unsigned __int8)v44 & ((v45 & 0x20) != 0)) == 0 )
          {
            HasShadow = MiPteHasShadow(v44, v45, *(_QWORD *)v26, v34);
            if ( HasShadow )
            {
              v44 = *(_QWORD *)(HasShadow + 1288);
              if ( v44 )
              {
                v48 = *(_QWORD *)(v44 + 8 * ((v26 >> 3) & 0x1FF));
                if ( (v48 & 0x20) != 0 )
                  v47 |= 0x20uLL;
                v45 = v47 | 0x42;
                if ( (v48 & 0x42) == 0 )
                  v45 = v47;
              }
            }
          }
        }
        v104 = v45;
        if ( v45 )
        {
          if ( MiIsPteDecommittedPage(v45) )
          {
            if ( v39 != 1 )
              goto LABEL_61;
            v63 = (32LL * ProtectionMask) ^ ((32LL * ProtectionMask) ^ v57) & 0xFFFFFFFFFFFFFC1FuLL;
            v104 = v63;
            if ( (*(_DWORD *)(a1 + 48) & 0x14200000) == 0x10200000 )
            {
              v104 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v104) | 0x4000000;
              v63 = v104;
            }
            *(_QWORD *)v26 = v63;
          }
          else
          {
            v102 += v39;
            if ( !*v107 )
            {
              v98 = 0;
              PageProtection = MiGetPageProtection(a1, v26, (__int64)&v98);
              if ( v109 )
              {
                if ( v40 )
                {
                  MiIncreaseUsedPtes(v44, v97, v40, 2LL);
                  v40 = 0;
                }
                if ( v99 == 69206016 && v42 )
                {
                  MiFlushGraphicsPtes(v41, v42);
                  v41 = 0LL;
                }
                if ( v89 == 1 )
                {
                  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v85);
                }
                else
                {
                  MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v94);
                  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v85);
                }
                v32 = a1;
                goto LABEL_25;
              }
              if ( ProtectionMask != PageProtection || v100 != a5 )
                *v107 = 1;
            }
          }
        }
        else
        {
          if ( v26 <= v103 )
            v102 += v39;
          if ( v39 != 1 )
          {
LABEL_61:
            v50 = MiPopLargePfnList(v117, v92);
            v51 = v108;
            v52 = (_QWORD *)(48 * v50 - 0x220000000000LL);
            v114[0] = v52;
            v114[1] = v52;
            *v52 = v114;
            v52[1] = v114;
            MiInsertLargeUserMapping(a1, v51, v114, v92, ProtectionMask);
            goto LABEL_43;
          }
          if ( v26 < 0xFFFFF6FB7DBED000uLL || v26 > 0xFFFFF6FB7DBEDFFFuLL )
            v40 += v38;
          *(_QWORD *)v26 = DemandZeroPte;
        }
LABEL_43:
        v26 += 8 * v38;
        v108 += 8 * v39;
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
    if ( v30 )
    {
      if ( v93 != 1 )
      {
        MiFreeLargeZeroPages(v20, (__int64)v117, 1);
        MiReturnResident(v20, v91);
        if ( v88 )
        {
          MiReturnCommit(v20, v91, 0);
          MiReturnCrossPartitionCharges(v20, 2LL, 1LL, v91);
        }
        else
        {
          MiReturnFullProcessCommitment(Process);
        }
        MiReturnProcessPhysicalPages(Process, v91);
        return 3221225773LL;
      }
      MiReturnFullProcessCommitment(Process);
    }
    return 3221225773LL;
  }
  v24 = Process;
LABEL_103:
  v101 = 0;
  v59 = MiLockWorkingSetShared((__int64)&v24[2].ReadyListHead.Blink, 0LL, v27, v29);
  v60 = &v105;
  v61 = v59;
  if ( !v28 )
    v60 = 0LL;
  v62 = MiComputePageCommitment(a2 & 0xFFFFFFFFFFFFF000uLL, v25, a1, v59, 0, 0LL, v60);
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v61);
  v91 = v111 - v62;
  if ( v93 != 1 && !v105 )
    return 3221225496LL;
  if ( v111 == v62 )
  {
    v30 = 0LL;
LABEL_177:
    v20 = (unsigned __int64)v95;
    goto LABEL_16;
  }
  if ( v93 == 1 )
  {
    v31 = Process;
    result = MiChargeFullProcessCommitment(Process);
    if ( (int)result < 0 )
      return result;
    v20 = 0LL;
    v30 = v91;
    goto LABEL_17;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(Process, v111 - v62) )
    return 3221225773LL;
  if ( v88 )
  {
    v76 = (__int64)a9;
    if ( v88 != a9 && !PsReferencePartitionSafe((__int64)v88) )
    {
      MiReturnProcessPhysicalPages(Process, v77);
      return 3221226656LL;
    }
    v95 = (_WORD *)*v88;
    *a11 = *(_WORD *)*v88;
  }
  else
  {
    if ( (int)MiChargeFullProcessCommitment(v75) < 0 )
      return MiReturnProcessPhysicalPages(Process, v91);
    v76 = (__int64)a9;
    v95 = (_WORD *)*((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
  }
  VadLargePageMinimumIndex = MiGetVadLargePageMinimumIndex(a1);
  v30 = v91;
  *(_QWORD *)&v115 = v81;
  LargePfnList = MiCreateLargePfnList(
                   (__int64 *)&v115,
                   a2,
                   v91,
                   MiPageSizes[VadLargePageMinimumIndex],
                   a7,
                   a8,
                   v88,
                   0,
                   (__int64)v117);
  if ( v88 )
  {
    v83 = v88 == (__int64 *)v76;
    v84 = v88;
    if ( !v83 )
      PsDereferencePartition((__int64)v88);
  }
  else
  {
    v84 = 0LL;
  }
  if ( LargePfnList >= 0 )
    goto LABEL_177;
  if ( !v84 )
    MiReturnFullProcessCommitment(Process);
  MiReturnProcessPhysicalPages(Process, v91);
  return (unsigned int)LargePfnList;
}
