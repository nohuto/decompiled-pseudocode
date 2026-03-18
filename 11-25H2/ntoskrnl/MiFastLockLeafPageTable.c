/*
 * XREFs of MiFastLockLeafPageTable @ 0x1402AF390
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiLockPoolCommitPageTable @ 0x1402C3CB8 (MiLockPoolCommitPageTable.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402B03EC (KxTryToAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  BOOL v4; // r8d
  char v5; // cl
  _DWORD *MmInternal; // rcx
  _DWORD *v7; // r14
  unsigned __int64 v8; // r9
  __int64 *v9; // rcx
  char v10; // r15
  ULONG_PTR v11; // r12
  volatile signed __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  struct _KPRCB *v15; // r8
  char v16; // al
  volatile __int64 *v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // rcx
  char v26; // r12
  volatile signed __int32 *v27; // r9
  unsigned __int32 v28; // r10d
  int v29; // eax
  int v30; // r8d
  int v31; // r11d
  __int64 v32; // rcx
  bool v33; // zf
  signed __int32 v34; // eax
  char v35; // di
  struct _KPRCB *CurrentPrcb; // r8
  char v37; // al
  unsigned int v38; // ebx
  unsigned int v39; // r15d
  volatile __int64 *v40; // rdx
  char *v41; // rax
  __int64 v42; // rcx
  int v43; // r15d
  unsigned __int64 v44; // rbx
  _KPROCESS *v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  signed __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r9
  unsigned int v53; // r12d
  volatile signed __int32 *v54; // r9
  unsigned __int32 v55; // r10d
  int v56; // eax
  int v57; // r8d
  int v58; // r11d
  __int64 v59; // rcx
  signed __int32 v60; // eax
  unsigned __int64 v61; // rbx
  _KPROCESS *v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  signed __int64 v66; // rax
  __int64 v67; // rcx
  signed __int64 v68; // rdi
  signed __int64 v69; // rax
  _KPROCESS *v70; // rdx
  unsigned __int64 v71; // r10
  __int64 v72; // rcx
  unsigned int v73; // ebx
  signed __int64 v74; // rdi
  signed __int64 v75; // rax
  unsigned int v76; // ebx
  volatile LONG *v77; // rcx
  signed __int32 v78; // r8d
  signed __int32 v79; // eax
  signed __int32 v80; // r8d
  signed __int32 v81; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-128h]
  unsigned int v84; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v85; // [rsp+40h] [rbp-118h]
  int v86; // [rsp+44h] [rbp-114h]
  volatile signed __int32 *v87; // [rsp+50h] [rbp-108h]
  volatile signed __int32 *v88; // [rsp+50h] [rbp-108h]
  unsigned __int64 v89; // [rsp+80h] [rbp-D8h]
  char *v90; // [rsp+90h] [rbp-C8h]
  char *v91; // [rsp+A0h] [rbp-B8h]
  unsigned int v92; // [rsp+168h] [rbp+10h]
  char v93; // [rsp+170h] [rbp+18h]
  char v94; // [rsp+170h] [rbp+18h]
  unsigned int v95; // [rsp+178h] [rbp+20h]

  v93 = a3;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    KeBugCheckEx(0x1Au, 0x1380uLL, a2, a3, 0LL);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v5 != 7 && (unsigned __int8)(v5 - 1) > 1u )
  {
    if ( v5 == 5 )
    {
      if ( a2 >= qword_140E388C8 && a2 < qword_140E388D0 + qword_140E388C8 )
        return 0LL;
      v4 = 1;
    }
    else if ( v5 == 3 )
    {
      if ( a2 >= MmPfnDatabase
        && a2 < ((MmPfnDatabase + (MxPfnAllocation << 12) + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) )
      {
        return 0LL;
      }
    }
    else
    {
      v4 = v5 == 0;
    }
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x800000) != 0 )
  {
    if ( MmInternal )
    {
      v7 = MmInternal + 80;
      if ( !MmInternal[80] )
      {
        *v7 = 1;
        v86 = 0;
        v8 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v89 = v8;
        v9 = (__int64 *)v8;
        BugCheckParameter2 = v8;
        v10 = v93 | 2;
        v94 = v93 | 2;
        if ( v4 )
        {
          v11 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v12 = *(_QWORD *)v11;
          if ( v11 >= 0xFFFFF6FB7DBED000uLL
            && v11 <= 0xFFFFF6FB7DBED7F8uLL
            && (v12 & 1) != 0
            && ((v12 & 0x42) == 0 || (v12 & 0x20) == 0)
            && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v23 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
                if ( (v23 & 0x20) != 0 )
                  LOBYTE(v12) = v12 | 0x20;
                if ( (v23 & 0x42) != 0 )
                  LOBYTE(v12) = v12 | 0x42;
              }
            }
          }
          if ( (v12 & 1) == 0 )
          {
            v38 = 0;
LABEL_224:
            *v7 = 0;
            if ( !v38 || !v86 )
              return v38;
            if ( v86 == 3 )
              v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x81) == 0x81 )
              return (unsigned int)(v86 == 3) + 2;
            MiUnlockPageTable(a1, BugCheckParameter2);
            return 0LL;
          }
          if ( (v12 & 0x80u) == 0LL )
          {
            if ( (v94 & 8) == 0 )
            {
              v9 = (__int64 *)v8;
              goto LABEL_16;
            }
            v35 = v94 & 0xF7;
            if ( ((v8 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v37 = *(_DWORD *)(a1 + 184) & 0xF;
              if ( v37 )
              {
                if ( v37 == 7 )
                {
                  v39 = 1;
                }
                else if ( v37 == 5 )
                {
                  v39 = 0;
                }
                else
                {
                  v39 = 3;
                }
                v40 = (volatile __int64 *)(&MiState + 2 * v39 + 3232);
                v38 = 2;
              }
              else
              {
                v38 = 2;
                v39 = 2;
                v40 = (volatile __int64 *)(a1 + 176);
              }
              v41 = (char *)CurrentPrcb + 24 * v39;
              v42 = (__int64)(v41 + 40000);
              v90 = v41 + 40000;
              *((_QWORD *)v41 + 5001) = v40;
              *((_QWORD *)v41 + 5000) = 0LL;
              if ( (v94 & 1) == 0 )
              {
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (v42 = (__int64)(v41 + 40000), PopHibernateInProgress) )
                {
                  v67 = _InterlockedExchange64(v40, v42);
                  if ( v67 )
                    KxWaitForLockOwnerShip(v90, v67, CurrentPrcb, v8);
                }
                else
                {
                  KiAcquireQueuedSpinLockInstrumented(v90, v40);
                }
                goto LABEL_55;
              }
              v43 = KxTryToAcquireQueuedSpinLock();
LABEL_54:
              if ( v43 )
              {
LABEL_55:
                v8 = v89;
                goto LABEL_224;
              }
LABEL_182:
              v38 = 0;
              goto LABEL_55;
            }
            if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              v51 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
              if ( v51 )
              {
                ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v51 + 4LL * (((unsigned int)v11 >> 3) & 0x1FF)));
                v38 = 2;
                goto LABEL_55;
              }
            }
            if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 || v11 < 0xFFFFF6FB7DBED000uLL || v11 > 0xFFFFF6FB7DBEDFFFuLL )
            {
              v84 = 0;
              v61 = *(_QWORD *)v11;
              if ( v11 >= 0xFFFFF6FB7DBED000uLL
                && v11 <= 0xFFFFF6FB7DBED7F8uLL
                && (v61 & 1) != 0
                && ((v61 & 0x42) == 0 || (v61 & 0x20) == 0)
                && (MiFlags & 0x600000) != 0 )
              {
                v62 = KeGetCurrentThread()->ApcState.Process;
                if ( v62->AddressPolicy != 1 )
                {
                  v63 = v62[2].KernelWaitTime;
                  if ( v63 )
                  {
                    v64 = *(_QWORD *)(v63 + 8 * ((v11 >> 3) & 0x1FF));
                    if ( (v64 & 0x20) != 0 )
                      v61 |= 0x20uLL;
                    if ( (v64 & 0x42) != 0 )
                      v61 |= 0x42uLL;
                  }
                }
              }
              while ( 1 )
              {
                while ( 1 )
                {
                  v65 = 0x1000000000LL;
                  if ( (v61 & 1) == 0 )
                  {
LABEL_119:
                    v43 = 0;
                    goto LABEL_121;
                  }
                  if ( (v61 & 0x1000000000000000LL) == 0 )
                    break;
                  if ( (v35 & 1) != 0 )
                    goto LABEL_119;
                  if ( ((v61 >> 60) & 2) != 0 )
                  {
                    do
                    {
                      v76 = v84 + 1;
                      v84 = v76;
                      if ( (v76 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v65) )
                      {
                        HvlNotifyLongSpinWait(v76);
                      }
                      else
                      {
                        _mm_pause();
                      }
                      v61 = *(_QWORD *)v11;
                    }
                    while ( (*(_QWORD *)v11 & 0x1000000000000000LL) != 0 );
                  }
                  else
                  {
                    v74 = v61 | 0x2000000000000000LL;
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    if ( (MiFlags & 0x1000000000LL) != 0 && (v61 & 0x21) == 1 && v11 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v11, v61 | 0x2000000000000000LL);
                    v75 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v74, v61);
                    v33 = v61 == v75;
                    v61 = v75;
                    if ( v33 )
                      v61 = v74;
                    v35 = v94 & 0xF7;
                  }
                }
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                v66 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v11,
                        v61 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                        v61);
                v33 = v61 == v66;
                v61 = v66;
                if ( v33 )
                  break;
                if ( (v35 & 1) != 0 )
                  goto LABEL_119;
              }
              v43 = 1;
LABEL_121:
              v38 = 2;
              goto LABEL_54;
            }
            v92 = 0;
            v52 = 2 * (unsigned int)((__int64)(v11 + 0x90482413000LL) >> 3);
            v53 = (2 * (unsigned __int8)((__int64)(v11 + 0x90482413000LL) >> 3)) & 0x1F;
            v54 = (volatile signed __int32 *)(&MiState + (v52 >> 5) + 2459);
            v88 = v54;
            v55 = *v54;
            v56 = v94 & 1;
            v38 = 2;
LABEL_93:
            while ( 2 )
            {
              v57 = 2 << v53;
              while ( 1 )
              {
                v58 = v56;
                v59 = v53;
                if ( ((v55 >> v53) & 1) != 0 )
                  break;
                v60 = _InterlockedCompareExchange(v54, ~v57 & (v55 | (1 << v53)), v55);
                v33 = v55 == v60;
                v55 = v60;
                if ( v33 )
                  goto LABEL_55;
                v56 = v58;
                if ( v58 )
                {
                  v38 = 0;
                  goto LABEL_55;
                }
              }
              if ( v56 )
                goto LABEL_182;
              if ( ((v55 >> v53) & 2) == 0 )
              {
                v80 = v55 | v57;
                v81 = _InterlockedCompareExchange(v54, v80, v55);
                v33 = v55 == v81;
                v55 = v81;
                if ( v33 )
                  v55 = v80;
                v56 = v94 & 1;
                continue;
              }
              break;
            }
            while ( 1 )
            {
              if ( (++v92 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v59) )
                {
                  HvlNotifyLongSpinWait(v92);
                  v54 = v88;
                  goto LABEL_206;
                }
                v54 = v88;
              }
              _mm_pause();
LABEL_206:
              v55 = *v54;
              v59 = v53;
              if ( (((unsigned __int32)*v54 >> v53) & 1) == 0 )
              {
                v56 = v94 & 1;
                goto LABEL_93;
              }
            }
          }
          v86 = 3;
          v9 = (__int64 *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          BugCheckParameter2 = (ULONG_PTR)v9;
        }
LABEL_16:
        v13 = 2;
        while ( 1 )
        {
          v14 = *v9;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
            && (v14 & 1) != 0
            && ((v14 & 0x42) == 0 || (v14 & 0x20) == 0)
            && (MiFlags & 0x600000) != 0 )
          {
            v70 = KeGetCurrentThread()->ApcState.Process;
            if ( v70->AddressPolicy != 1 )
            {
              v71 = v70[2].KernelWaitTime;
              if ( v71 )
              {
                v72 = *(_QWORD *)(v71 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                if ( (v72 & 0x20) != 0 )
                  LOBYTE(v14) = v14 | 0x20;
                if ( (v72 & 0x42) != 0 )
                  LOBYTE(v14) = v14 | 0x42;
              }
            }
          }
          if ( (v14 & 1) == 0 )
          {
            v38 = 0;
            goto LABEL_224;
          }
          if ( (v14 & 0x80u) == 0LL )
            break;
          v86 = 2;
          v9 = (__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          BugCheckParameter2 = (ULONG_PTR)v9;
        }
        if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *(_DWORD *)(a1 + 184) & 0xF;
          if ( v16 )
          {
            if ( v16 == 7 )
            {
              v13 = 1;
            }
            else if ( v16 == 5 )
            {
              v13 = 0;
            }
            else
            {
              v13 = 3;
            }
            v17 = (volatile __int64 *)(&MiState + 2 * v13 + 3232);
          }
          else
          {
            v17 = (volatile __int64 *)(a1 + 176);
          }
          v18 = (char *)v15 + 24 * v13;
          v19 = (__int64)(v18 + 40000);
          v91 = v18 + 40000;
          *((_QWORD *)v18 + 5001) = v17;
          *((_QWORD *)v18 + 5000) = 0LL;
          if ( (v94 & 1) != 0 )
          {
            v20 = KxTryToAcquireQueuedSpinLock();
            goto LABEL_25;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (v19 = (__int64)(v18 + 40000), PopHibernateInProgress) )
          {
            v50 = _InterlockedExchange64(v17, v19);
            if ( v50 )
              KxWaitForLockOwnerShip(v91, v50, v15, v8);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(v91, v17);
          }
          goto LABEL_223;
        }
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
          || BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL
          || BugCheckParameter2 > 0xFFFFF6FB7DBEDFFFuLL
          || (v24 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
          {
            v25 = (unsigned __int64 *)BugCheckParameter2;
            if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              v95 = 0;
              v26 = (2 * ((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
              v27 = (volatile signed __int32 *)(&MiState
                                              + ((unsigned __int64)(2
                                                                  * (unsigned int)((__int64)(BugCheckParameter2
                                                                                           + 0x90482413000LL) >> 3)) >> 5)
                                              + 2459);
              v87 = v27;
              v28 = *v27;
              v29 = v10 & 1;
              while ( 2 )
              {
                while ( 2 )
                {
                  v30 = 2 << v26;
                  while ( 1 )
                  {
                    v31 = v29;
                    v32 = (2 * (unsigned __int8)((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
                    if ( ((v28 >> v26) & 1) != 0 )
                      break;
                    v34 = _InterlockedCompareExchange(v27, ~v30 & (v28 | (1 << v26)), v28);
                    v33 = v28 == v34;
                    v28 = v34;
                    if ( v33 )
                      goto LABEL_223;
                    v29 = v31;
                    if ( v31 )
                      goto LABEL_149;
                  }
                  if ( v29 )
                    goto LABEL_149;
                  if ( ((v28 >> v26) & 2) == 0 )
                  {
                    v78 = v28 | v30;
                    v79 = _InterlockedCompareExchange(v27, v78, v28);
                    v33 = v28 == v79;
                    v28 = v79;
                    if ( v33 )
                      v28 = v78;
                    v29 = v10 & 1;
                    continue;
                  }
                  break;
                }
LABEL_190:
                if ( (++v95 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32) )
                  {
                    HvlNotifyLongSpinWait(v95);
                    v27 = v87;
LABEL_192:
                    v28 = *v27;
                    v32 = (2 * (unsigned __int8)((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
                    if ( (((unsigned __int32)*v27 >> v26) & 1) == 0 )
                    {
                      v29 = v10 & 1;
                      continue;
                    }
                    goto LABEL_190;
                  }
                  v27 = v87;
                }
                break;
              }
              _mm_pause();
              goto LABEL_192;
            }
          }
          else
          {
            v25 = (unsigned __int64 *)BugCheckParameter2;
          }
          v85 = 0;
          v44 = *v25;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
            && (v44 & 1) != 0
            && ((v44 & 0x42) == 0 || (v44 & 0x20) == 0)
            && (MiFlags & 0x600000) != 0 )
          {
            v45 = KeGetCurrentThread()->ApcState.Process;
            if ( v45->AddressPolicy != 1 )
            {
              v46 = v45[2].KernelWaitTime;
              if ( v46 )
              {
                v47 = *(_QWORD *)(v46 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                if ( (v47 & 0x20) != 0 )
                  v44 |= 0x20uLL;
                if ( (v47 & 0x42) != 0 )
                  v44 |= 0x42uLL;
              }
            }
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v48 = 0x1000000000LL;
              if ( (v44 & 1) == 0 )
              {
LABEL_79:
                v20 = 0;
                goto LABEL_25;
              }
              if ( (v44 & 0x1000000000000000LL) == 0 )
                break;
              if ( (v10 & 1) != 0 )
                goto LABEL_79;
              if ( ((v44 >> 60) & 2) != 0 )
              {
                do
                {
                  v73 = v85 + 1;
                  v85 = v73;
                  if ( (v73 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v48) )
                  {
                    HvlNotifyLongSpinWait(v73);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v44 = *(_QWORD *)BugCheckParameter2;
                }
                while ( (*(_QWORD *)BugCheckParameter2 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v68 = v44 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( (MiFlags & 0x1000000000LL) != 0 && (v44 & 0x21) == 1 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v44 | 0x2000000000000000LL);
                v69 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v68, v44);
                v33 = v44 == v69;
                v44 = v69;
                if ( v33 )
                  v44 = v68;
              }
            }
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v49 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)BugCheckParameter2,
                    v44 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v44);
            v33 = v44 == v49;
            v44 = v49;
            if ( v33 )
              break;
            if ( (v10 & 1) != 0 )
              goto LABEL_79;
          }
          v20 = 1;
LABEL_25:
          if ( v20 )
            goto LABEL_223;
          goto LABEL_149;
        }
        v77 = (volatile LONG *)(v24 + 4LL * (((unsigned int)BugCheckParameter2 >> 3) & 0x1FF));
        if ( (v94 & 4) != 0 )
        {
          ExAcquireSpinLockSharedAtDpcLevel(v77);
          goto LABEL_223;
        }
        if ( (v94 & 1) == 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v77);
          goto LABEL_223;
        }
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
        {
LABEL_149:
          v38 = 0;
          v8 = v89;
          goto LABEL_224;
        }
LABEL_223:
        v38 = 1;
        v8 = v89;
        goto LABEL_224;
      }
    }
  }
  return 0LL;
}
