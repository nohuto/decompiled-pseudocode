/*
 * XREFs of MiFastLockLeafPageTable @ 0x1402D90E0
 * Callers:
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiLockPoolCommitPageTable @ 0x1402EA640 (MiLockPoolCommitPageTable.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DA128 (KxTryToAcquireQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  BOOL v4; // r8d
  char v5; // cl
  _DWORD *MmInternal; // rcx
  _DWORD *v7; // r15
  unsigned __int64 v8; // r9
  __int64 *v9; // rcx
  char v10; // r12
  ULONG_PTR v11; // r14
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
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rbx
  bool v27; // zf
  signed __int64 v28; // rax
  _KPROCESS *v29; // rdx
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  char v32; // di
  struct _KPRCB *CurrentPrcb; // r8
  char v34; // al
  unsigned int v35; // ebx
  unsigned int v36; // r14d
  volatile __int64 *v37; // rdx
  char *v38; // rax
  __int64 v39; // rcx
  int v40; // r14d
  char v41; // r14
  volatile signed __int32 *v42; // r9
  unsigned __int32 v43; // r10d
  int v44; // eax
  int v45; // r8d
  int v46; // r11d
  signed __int32 v47; // eax
  _QWORD *v48; // rcx
  _KPROCESS *v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rbx
  signed __int64 v54; // rax
  signed __int64 v55; // rdi
  signed __int64 v56; // rax
  char v57; // r12
  volatile signed __int32 *v58; // r9
  unsigned __int32 v59; // r10d
  int v60; // eax
  int v61; // r8d
  int v62; // r11d
  signed __int32 v63; // eax
  _QWORD *v64; // rcx
  _KPROCESS *v65; // rcx
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // ebx
  signed __int64 v69; // rdi
  signed __int64 v70; // rax
  unsigned int v71; // ebx
  volatile LONG *v72; // rcx
  signed __int32 v73; // r8d
  signed __int32 v74; // eax
  signed __int32 v75; // r8d
  signed __int32 v76; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-128h]
  unsigned int v79; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v80; // [rsp+40h] [rbp-118h]
  int v81; // [rsp+44h] [rbp-114h]
  volatile signed __int32 *v82; // [rsp+50h] [rbp-108h]
  volatile signed __int32 *v83; // [rsp+50h] [rbp-108h]
  unsigned __int64 v84; // [rsp+78h] [rbp-E0h]
  __int64 v85; // [rsp+90h] [rbp-C8h]
  __int64 v86; // [rsp+A0h] [rbp-B8h]
  unsigned int v87; // [rsp+168h] [rbp+10h]
  char v88; // [rsp+170h] [rbp+18h]
  char v89; // [rsp+170h] [rbp+18h]
  unsigned int v90; // [rsp+178h] [rbp+20h]

  v88 = a3;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    KeBugCheckEx(0x1Au, 0x1380uLL, a2, a3, 0LL);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v5 != 7 && (unsigned __int8)(v5 - 1) > 1u )
  {
    if ( v5 == 5 )
    {
      if ( a2 >= qword_140E38B08 && a2 < qword_140E38B10 + qword_140E38B08 )
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
        v81 = 0;
        v8 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v84 = v8;
        v9 = (__int64 *)v8;
        BugCheckParameter2 = v8;
        v10 = v88 | 2;
        v89 = v88 | 2;
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
            v35 = 0;
LABEL_221:
            *v7 = 0;
            if ( !v35 || !v81 )
              return v35;
            if ( v81 == 3 )
              v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x81) == 0x81 )
              return (unsigned int)(v81 == 3) + 2;
            MiUnlockPageTableInternal(a1, BugCheckParameter2);
            return 0LL;
          }
          if ( (v12 & 0x80u) == 0LL )
          {
            if ( (v89 & 8) == 0 )
            {
              v9 = (__int64 *)v8;
              goto LABEL_19;
            }
            v32 = v89 & 0xF7;
            if ( ((v8 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v34 = *(_DWORD *)(a1 + 184) & 0xF;
              if ( v34 )
              {
                if ( v34 == 7 )
                {
                  v36 = 1;
                }
                else if ( v34 == 5 )
                {
                  v36 = 0;
                }
                else
                {
                  v36 = 3;
                }
                v37 = (volatile __int64 *)(&MiState + 2 * v36 + 3232);
                v35 = 2;
              }
              else
              {
                v35 = 2;
                v36 = 2;
                v37 = (volatile __int64 *)(a1 + 176);
              }
              v38 = (char *)CurrentPrcb + 24 * v36;
              v39 = (__int64)(v38 + 40000);
              v85 = (__int64)(v38 + 40000);
              *((_QWORD *)v38 + 5001) = v37;
              *((_QWORD *)v38 + 5000) = 0LL;
              if ( (v89 & 1) == 0 )
              {
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (v39 = (__int64)(v38 + 40000), PopHibernateInProgress) )
                {
                  v64 = (_QWORD *)_InterlockedExchange64(v37, v39);
                  if ( v64 )
                    KxWaitForLockOwnerShip(v85, v64);
                }
                else
                {
                  KiAcquireQueuedSpinLockInstrumented(v85, v37);
                }
                goto LABEL_71;
              }
              v40 = KxTryToAcquireQueuedSpinLock();
LABEL_70:
              if ( v40 )
              {
LABEL_71:
                v8 = v84;
                goto LABEL_221;
              }
LABEL_179:
              v35 = 0;
              goto LABEL_71;
            }
            if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              v52 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
              if ( v52 )
              {
                ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v52 + 4LL * (((unsigned int)v11 >> 3) & 0x1FF)));
                v35 = 2;
                goto LABEL_71;
              }
            }
            if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 || v11 < 0xFFFFF6FB7DBED000uLL || v11 > 0xFFFFF6FB7DBEDFFFuLL )
            {
              v79 = 0;
              v53 = *(_QWORD *)v11;
              if ( v11 >= 0xFFFFF6FB7DBED000uLL
                && v11 <= 0xFFFFF6FB7DBED7F8uLL
                && (v53 & 1) != 0
                && ((v53 & 0x42) == 0 || (v53 & 0x20) == 0)
                && (MiFlags & 0x600000) != 0 )
              {
                v65 = KeGetCurrentThread()->ApcState.Process;
                if ( v65->AddressPolicy != 1 )
                {
                  v66 = v65[2].KernelWaitTime;
                  if ( v66 )
                  {
                    v67 = *(_QWORD *)(v66 + 8 * ((v11 >> 3) & 0x1FF));
                    if ( (v67 & 0x20) != 0 )
                      v53 |= 0x20uLL;
                    if ( (v67 & 0x42) != 0 )
                      v53 |= 0x42uLL;
                  }
                }
              }
              while ( 1 )
              {
                while ( 1 )
                {
                  if ( (v53 & 1) == 0 )
                  {
LABEL_111:
                    v40 = 0;
                    goto LABEL_113;
                  }
                  if ( (v53 & 0x1000000000000000LL) == 0 )
                    break;
                  if ( (v32 & 1) != 0 )
                    goto LABEL_111;
                  if ( ((v53 >> 60) & 2) != 0 )
                  {
                    do
                    {
                      v71 = v79 + 1;
                      v79 = v71;
                      if ( (v71 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && KiCheckVpBackingLongSpinWaitHypercall() )
                      {
                        HvlNotifyLongSpinWait(v71);
                      }
                      else
                      {
                        _mm_pause();
                      }
                      v53 = *(_QWORD *)v11;
                    }
                    while ( (*(_QWORD *)v11 & 0x1000000000000000LL) != 0 );
                  }
                  else
                  {
                    v69 = v53 | 0x2000000000000000LL;
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    if ( (MiFlags & 0x1000000000LL) != 0 && (v53 & 0x21) == 1 && v11 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v11, v53 | 0x2000000000000000LL, 128);
                    v70 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v69, v53);
                    v27 = v53 == v70;
                    v53 = v70;
                    if ( v27 )
                      v53 = v69;
                    v32 = v89 & 0xF7;
                  }
                }
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                v54 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v11,
                        v53 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                        v53);
                v27 = v53 == v54;
                v53 = v54;
                if ( v27 )
                  break;
                if ( (v32 & 1) != 0 )
                  goto LABEL_111;
              }
              v40 = 1;
LABEL_113:
              v35 = 2;
              goto LABEL_70;
            }
            v87 = 0;
            v57 = (2 * ((__int64)(v11 + 0x90482413000LL) >> 3)) & 0x1F;
            v58 = (volatile signed __int32 *)(&MiState
                                            + ((unsigned __int64)(2
                                                                * (unsigned int)((__int64)(v11 + 0x90482413000LL) >> 3)) >> 5)
                                            + 2459);
            v83 = v58;
            v59 = *v58;
            v60 = v89 & 1;
            v35 = 2;
LABEL_131:
            while ( 2 )
            {
              v61 = 2 << v57;
              while ( 1 )
              {
                v62 = v60;
                if ( ((v59 >> v57) & 1) != 0 )
                  break;
                v63 = _InterlockedCompareExchange(v58, ~v61 & (v59 | (1 << v57)), v59);
                v27 = v59 == v63;
                v59 = v63;
                if ( v27 )
                  goto LABEL_71;
                v60 = v62;
                if ( v62 )
                {
                  v35 = 0;
                  goto LABEL_71;
                }
              }
              if ( v60 )
                goto LABEL_179;
              if ( ((v59 >> v57) & 2) == 0 )
              {
                v75 = v59 | v61;
                v76 = _InterlockedCompareExchange(v58, v75, v59);
                v27 = v59 == v76;
                v59 = v76;
                if ( v27 )
                  v59 = v75;
                v60 = v89 & 1;
                continue;
              }
              break;
            }
            while ( 1 )
            {
              if ( (++v87 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v87);
                  v58 = v83;
                  goto LABEL_206;
                }
                v58 = v83;
              }
              _mm_pause();
LABEL_206:
              v59 = *v58;
              if ( (((unsigned __int32)*v58 >> v57) & 1) == 0 )
              {
                v60 = v89 & 1;
                goto LABEL_131;
              }
            }
          }
          v81 = 3;
          v9 = (__int64 *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          BugCheckParameter2 = (ULONG_PTR)v9;
        }
LABEL_19:
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
            v29 = KeGetCurrentThread()->ApcState.Process;
            if ( v29->AddressPolicy != 1 )
            {
              v30 = v29[2].KernelWaitTime;
              if ( v30 )
              {
                v31 = *(_QWORD *)(v30 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                if ( (v31 & 0x20) != 0 )
                  LOBYTE(v14) = v14 | 0x20;
                if ( (v31 & 0x42) != 0 )
                  LOBYTE(v14) = v14 | 0x42;
              }
            }
          }
          if ( (v14 & 1) == 0 )
          {
            v35 = 0;
            v8 = v84;
            goto LABEL_221;
          }
          if ( (v14 & 0x80u) == 0LL )
            break;
          v81 = 2;
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
          v86 = (__int64)(v18 + 40000);
          *((_QWORD *)v18 + 5001) = v17;
          *((_QWORD *)v18 + 5000) = 0LL;
          if ( (v89 & 1) != 0 )
          {
            v20 = KxTryToAcquireQueuedSpinLock();
            goto LABEL_31;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (v19 = (__int64)(v18 + 40000), PopHibernateInProgress) )
          {
            v48 = (_QWORD *)_InterlockedExchange64(v17, v19);
            if ( v48 )
              KxWaitForLockOwnerShip(v86, v48);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(v86, v17);
          }
          goto LABEL_220;
        }
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
          || BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL
          || BugCheckParameter2 > 0xFFFFF6FB7DBEDFFFuLL
          || (v24 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
          {
            v25 = (unsigned __int64 *)BugCheckParameter2;
            goto LABEL_46;
          }
          v25 = (unsigned __int64 *)BugCheckParameter2;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v90 = 0;
            v41 = (2 * ((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
            v42 = (volatile signed __int32 *)(&MiState
                                            + ((unsigned __int64)(2
                                                                * (unsigned int)((__int64)(BugCheckParameter2
                                                                                         + 0x90482413000LL) >> 3)) >> 5)
                                            + 2459);
            v82 = v42;
            v43 = *v42;
            v44 = v10 & 1;
            while ( 2 )
            {
              while ( 2 )
              {
                v45 = 2 << v41;
                while ( 1 )
                {
                  v46 = v44;
                  if ( ((v43 >> v41) & 1) != 0 )
                    break;
                  v47 = _InterlockedCompareExchange(v42, ~v45 & (v43 | (1 << v41)), v43);
                  v27 = v43 == v47;
                  v43 = v47;
                  if ( v27 )
                    goto LABEL_220;
                  v44 = v46;
                  if ( v46 )
                    goto LABEL_142;
                }
                if ( v44 )
                  goto LABEL_142;
                if ( ((v43 >> v41) & 2) == 0 )
                {
                  v73 = v43 | v45;
                  v74 = _InterlockedCompareExchange(v42, v73, v43);
                  v27 = v43 == v74;
                  v43 = v74;
                  if ( v27 )
                    v43 = v73;
                  v44 = v10 & 1;
                  continue;
                }
                break;
              }
LABEL_190:
              if ( (++v90 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v90);
                  v42 = v82;
LABEL_192:
                  v43 = *v42;
                  if ( (((unsigned __int32)*v42 >> v41) & 1) == 0 )
                  {
                    v44 = v10 & 1;
                    continue;
                  }
                  goto LABEL_190;
                }
                v42 = v82;
              }
              break;
            }
            _mm_pause();
            goto LABEL_192;
          }
LABEL_46:
          v80 = 0;
          v26 = *v25;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
            && (v26 & 1) != 0
            && ((v26 & 0x42) == 0 || (v26 & 0x20) == 0)
            && (MiFlags & 0x600000) != 0 )
          {
            v49 = KeGetCurrentThread()->ApcState.Process;
            if ( v49->AddressPolicy != 1 )
            {
              v50 = v49[2].KernelWaitTime;
              if ( v50 )
              {
                v51 = *(_QWORD *)(v50 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                if ( (v51 & 0x20) != 0 )
                  v26 |= 0x20uLL;
                if ( (v51 & 0x42) != 0 )
                  v26 |= 0x42uLL;
              }
            }
          }
          while ( 1 )
          {
            while ( 1 )
            {
              if ( (v26 & 1) == 0 )
              {
LABEL_56:
                v20 = 0;
                goto LABEL_31;
              }
              if ( (v26 & 0x1000000000000000LL) == 0 )
                break;
              if ( (v10 & 1) != 0 )
                goto LABEL_56;
              if ( ((v26 >> 60) & 2) != 0 )
              {
                do
                {
                  v68 = v80 + 1;
                  v80 = v68;
                  if ( (v68 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v68);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v26 = *(_QWORD *)BugCheckParameter2;
                }
                while ( (*(_QWORD *)BugCheckParameter2 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v55 = v26 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( (MiFlags & 0x1000000000LL) != 0 && (v26 & 0x21) == 1 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v26 | 0x2000000000000000LL, 128);
                v56 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v55, v26);
                v27 = v26 == v56;
                v26 = v56;
                if ( v27 )
                  v26 = v55;
              }
            }
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v28 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)BugCheckParameter2,
                    v26 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v26);
            v27 = v26 == v28;
            v26 = v28;
            if ( v27 )
              break;
            if ( (v10 & 1) != 0 )
              goto LABEL_56;
          }
          v20 = 1;
LABEL_31:
          if ( v20 )
            goto LABEL_220;
          goto LABEL_142;
        }
        v72 = (volatile LONG *)(v24 + 4LL * (((unsigned int)BugCheckParameter2 >> 3) & 0x1FF));
        if ( (v89 & 4) != 0 )
        {
          ExAcquireSpinLockSharedAtDpcLevel(v72);
          goto LABEL_220;
        }
        if ( (v89 & 1) == 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v72);
          goto LABEL_220;
        }
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
        {
LABEL_142:
          v35 = 0;
          v8 = v84;
          goto LABEL_221;
        }
LABEL_220:
        v35 = 1;
        v8 = v84;
        goto LABEL_221;
      }
    }
  }
  return 0LL;
}
