/*
 * XREFs of MiFastLockLeafPageTable @ 0x14023A9C0
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiLockPoolCommitPageTable @ 0x14034BC80 (MiLockPoolCommitPageTable.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14023BA08 (KxTryToAcquireQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // r14
  volatile signed __int64 v13; // rax
  unsigned __int64 CurrentPrcb; // r8
  unsigned int v15; // ebx
  __int64 v16; // rax
  char v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rcx
  bool v29; // zf
  signed __int64 v30; // rax
  _KPROCESS *v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rcx
  char v34; // di
  char v35; // al
  unsigned int v36; // ebx
  unsigned int v37; // r14d
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // r14d
  char v41; // r14
  volatile signed __int32 *v42; // r9
  unsigned __int32 v43; // r10d
  int v44; // eax
  int v45; // r11d
  __int64 v46; // rcx
  signed __int32 v47; // eax
  __int64 v48; // rcx
  _KPROCESS *v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rbx
  __int64 v54; // r9
  __int64 v55; // rcx
  signed __int64 v56; // rax
  signed __int64 v57; // rdi
  signed __int64 v58; // rax
  char v59; // r12
  volatile signed __int32 *v60; // r9
  unsigned __int32 v61; // r10d
  int v62; // eax
  int v63; // r11d
  __int64 v64; // rcx
  signed __int32 v65; // eax
  __int64 v66; // rcx
  _KPROCESS *v67; // rcx
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // ebx
  signed __int64 v71; // rdi
  signed __int64 v72; // rax
  unsigned int v73; // ebx
  volatile LONG *v74; // rcx
  signed __int32 v75; // r8d
  signed __int32 v76; // eax
  signed __int32 v77; // r8d
  signed __int32 v78; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-128h]
  unsigned int v81; // [rsp+3Ch] [rbp-11Ch]
  unsigned int v82; // [rsp+40h] [rbp-118h]
  int v83; // [rsp+44h] [rbp-114h]
  volatile signed __int32 *v84; // [rsp+50h] [rbp-108h]
  volatile signed __int32 *v85; // [rsp+50h] [rbp-108h]
  unsigned __int64 v86; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v87; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v88; // [rsp+A0h] [rbp-B8h]
  unsigned int v89; // [rsp+168h] [rbp+10h]
  char v90; // [rsp+170h] [rbp+18h]
  char v91; // [rsp+170h] [rbp+18h]
  unsigned int v92; // [rsp+178h] [rbp+20h]

  v90 = a3;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    KeBugCheckEx(0x1Au, 0x1380uLL, a2, a3, 0LL);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v5 != 7 && (unsigned __int8)(v5 - 1) > 1u )
  {
    if ( v5 == 5 )
    {
      if ( a2 >= qword_140E38C48 && a2 < qword_140E38C50 + qword_140E38C48 )
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
        v83 = 0;
        v8 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v86 = v8;
        v9 = (__int64 *)v8;
        BugCheckParameter2 = v8;
        v10 = v90 | 2;
        v91 = v90 | 2;
        v11 = 0x7FFFFFFFF8LL;
        if ( v4 )
        {
          v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v13 = *(_QWORD *)v12;
          CurrentPrcb = 0xFFFFF6FB7DBED7F8uLL;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL && (v13 & 1) != 0 )
          {
            if ( ((v13 & 0x42) == 0 || (v13 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v23 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
                  if ( (v23 & 0x20) != 0 )
                    LOBYTE(v13) = v13 | 0x20;
                  if ( (v23 & 0x42) != 0 )
                    LOBYTE(v13) = v13 | 0x42;
                }
              }
            }
            v11 = 0x7FFFFFFFF8LL;
          }
          if ( (v13 & 1) == 0 )
          {
            v36 = 0;
            goto LABEL_225;
          }
          if ( (v13 & 0x80u) == 0LL )
          {
            if ( (v91 & 8) == 0 )
            {
              v9 = (__int64 *)v8;
              goto LABEL_20;
            }
            v34 = v91 & 0xF7;
            if ( ((v8 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
            {
              CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
              v35 = *(_DWORD *)(a1 + 184) & 0xF;
              if ( v35 )
              {
                if ( v35 == 7 )
                {
                  v37 = 1;
                }
                else if ( v35 == 5 )
                {
                  v37 = 0;
                }
                else
                {
                  v37 = 3;
                }
                v11 = (unsigned __int64)(&MiState + 2 * v37 + 3232);
                v36 = 2;
              }
              else
              {
                v36 = 2;
                v37 = 2;
                v11 = a1 + 176;
              }
              v38 = CurrentPrcb + 24LL * v37;
              v39 = v38 + 40000;
              v87 = v38 + 40000;
              *(_QWORD *)(v38 + 40008) = v11;
              *(_QWORD *)(v38 + 40000) = 0LL;
              if ( (v91 & 1) == 0 )
              {
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (v39 = v38 + 40000, PopHibernateInProgress) )
                {
                  v66 = _InterlockedExchange64((volatile __int64 *)v11, v39);
                  if ( v66 )
                    KxWaitForLockOwnerShip(v87, v66);
                }
                else
                {
                  KiAcquireQueuedSpinLockInstrumented(v87, v11);
                }
                goto LABEL_74;
              }
              v40 = KxTryToAcquireQueuedSpinLock();
LABEL_73:
              if ( v40 )
              {
LABEL_74:
                v8 = v86;
                goto LABEL_225;
              }
LABEL_183:
              v36 = 0;
              goto LABEL_74;
            }
            if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              v52 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
              if ( v52 )
              {
                ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v52 + 4LL * (((unsigned int)v12 >> 3) & 0x1FF)));
                v36 = 2;
                goto LABEL_74;
              }
            }
            if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 || v12 < 0xFFFFF6FB7DBED000uLL || v12 > 0xFFFFF6FB7DBEDFFFuLL )
            {
              v81 = 0;
              v53 = *(_QWORD *)v12;
              if ( v12 >= 0xFFFFF6FB7DBED000uLL
                && v12 <= 0xFFFFF6FB7DBED7F8uLL
                && (v53 & 1) != 0
                && ((v53 & 0x42) == 0 || (v53 & 0x20) == 0)
                && (MiFlags & 0x600000) != 0 )
              {
                v67 = KeGetCurrentThread()->ApcState.Process;
                if ( v67->AddressPolicy != 1 )
                {
                  v68 = v67[2].KernelWaitTime;
                  if ( v68 )
                  {
                    v69 = *(_QWORD *)(v68 + 8 * ((v12 >> 3) & 0x1FF));
                    if ( (v69 & 0x20) != 0 )
                      v53 |= 0x20uLL;
                    if ( (v69 & 0x42) != 0 )
                      v53 |= 0x42uLL;
                  }
                }
              }
LABEL_108:
              v54 = 0x1000000000000020LL;
              CurrentPrcb = 0xDFFFFFFFFFFFFFFFuLL;
              v11 = v34 & 1;
              while ( 1 )
              {
                v55 = 0x1000000000LL;
                if ( (v53 & 1) == 0 )
                  goto LABEL_115;
                if ( (v53 & 0x1000000000000000LL) != 0 )
                {
                  if ( (v34 & 1) != 0 )
                  {
LABEL_115:
                    v40 = 0;
                    goto LABEL_117;
                  }
                  if ( ((v53 >> 60) & 2) != 0 )
                  {
                    do
                    {
                      v73 = v81 + 1;
                      v81 = v73;
                      if ( (v73 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v55, v11, CurrentPrcb, v54) )
                      {
                        HvlNotifyLongSpinWait(v73);
                      }
                      else
                      {
                        _mm_pause();
                      }
                      v53 = *(_QWORD *)v12;
                    }
                    while ( (*(_QWORD *)v12 & 0x1000000000000000LL) != 0 );
                  }
                  else
                  {
                    v71 = v53 | 0x2000000000000000LL;
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    if ( (MiFlags & 0x1000000000LL) != 0 && (v53 & 0x21) == 1 && v12 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v12, v53 | 0x2000000000000000LL, 128LL);
                    v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v71, v53);
                    v29 = v53 == v72;
                    v53 = v72;
                    if ( v29 )
                      v53 = v71;
                    v34 = v91 & 0xF7;
                  }
                  goto LABEL_108;
                }
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                v56 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v12,
                        v53 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                        v53);
                v29 = v53 == v56;
                v53 = v56;
                if ( v29 )
                  break;
                if ( (v34 & 1) != 0 )
                  goto LABEL_115;
              }
              v40 = 1;
LABEL_117:
              v36 = 2;
              goto LABEL_73;
            }
            v89 = 0;
            v59 = (2 * ((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F;
            v60 = (volatile signed __int32 *)(&MiState
                                            + ((unsigned __int64)(2
                                                                * (unsigned int)((__int64)(v12 + 0x90482413000LL) >> 3)) >> 5)
                                            + 2459);
            v85 = v60;
            v61 = *v60;
            v62 = v91 & 1;
            v36 = 2;
LABEL_135:
            while ( 2 )
            {
              CurrentPrcb = (unsigned int)(2 << v59);
              while ( 1 )
              {
                v63 = v62;
                v64 = (2 * (unsigned __int8)((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F;
                v11 = v61 >> v59;
                if ( (v11 & 1) != 0 )
                  break;
                v11 = ~(_DWORD)CurrentPrcb & (v61 | (1 << v59));
                v65 = _InterlockedCompareExchange(v60, v11, v61);
                v29 = v61 == v65;
                v61 = v65;
                if ( v29 )
                  goto LABEL_74;
                v62 = v63;
                if ( v63 )
                {
                  v36 = 0;
                  goto LABEL_74;
                }
              }
              if ( v62 )
                goto LABEL_183;
              if ( (v11 & 2) == 0 )
              {
                v77 = v61 | CurrentPrcb;
                v78 = _InterlockedCompareExchange(v60, v77, v61);
                v29 = v61 == v78;
                v61 = v78;
                if ( v29 )
                  v61 = v77;
                v62 = v91 & 1;
                continue;
              }
              break;
            }
            while ( 1 )
            {
              if ( (++v89 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v64, v11, CurrentPrcb, v60) )
                {
                  HvlNotifyLongSpinWait(v89);
                  v60 = v85;
                  goto LABEL_210;
                }
                v60 = v85;
              }
              _mm_pause();
LABEL_210:
              v61 = *v60;
              v64 = (2 * (unsigned __int8)((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( (((unsigned __int32)*v60 >> v59) & 1) == 0 )
              {
                v62 = v91 & 1;
                goto LABEL_135;
              }
            }
          }
          v83 = 3;
          v9 = (__int64 *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          BugCheckParameter2 = (ULONG_PTR)v9;
        }
        else
        {
          CurrentPrcb = 0xFFFFF6FB7DBED7F8uLL;
        }
LABEL_20:
        v15 = 2;
        while ( 1 )
        {
          v16 = *v9;
          if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
            && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
            && (v16 & 1) != 0 )
          {
            if ( ((v16 & 0x42) == 0 || (v16 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
            {
              v31 = KeGetCurrentThread()->ApcState.Process;
              if ( v31->AddressPolicy != 1 )
              {
                v32 = v31[2].KernelWaitTime;
                if ( v32 )
                {
                  v33 = *(_QWORD *)(v32 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                  if ( (v33 & 0x20) != 0 )
                    LOBYTE(v16) = v16 | 0x20;
                  if ( (v33 & 0x42) != 0 )
                    LOBYTE(v16) = v16 | 0x42;
                }
              }
            }
            v11 = 0x7FFFFFFFF8LL;
          }
          if ( (v16 & 1) == 0 )
          {
            v36 = 0;
            v8 = v86;
            goto LABEL_225;
          }
          if ( (v16 & 0x80u) == 0LL )
            break;
          v83 = 2;
          v9 = (__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          BugCheckParameter2 = (ULONG_PTR)v9;
        }
        if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
          v17 = *(_DWORD *)(a1 + 184) & 0xF;
          if ( v17 )
          {
            if ( v17 == 7 )
            {
              v15 = 1;
            }
            else if ( v17 == 5 )
            {
              v15 = 0;
            }
            else
            {
              v15 = 3;
            }
            v11 = (unsigned __int64)(&MiState + 2 * v15 + 3232);
          }
          else
          {
            v11 = a1 + 176;
          }
          v18 = CurrentPrcb + 24LL * v15;
          v19 = v18 + 40000;
          v88 = v18 + 40000;
          *(_QWORD *)(v18 + 40008) = v11;
          *(_QWORD *)(v18 + 40000) = 0LL;
          if ( (v91 & 1) != 0 )
          {
            v20 = KxTryToAcquireQueuedSpinLock();
            goto LABEL_33;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (v19 = v18 + 40000, PopHibernateInProgress) )
          {
            v48 = _InterlockedExchange64((volatile __int64 *)v11, v19);
            if ( v48 )
              KxWaitForLockOwnerShip(v88, v48);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(v88, v11);
          }
          goto LABEL_224;
        }
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
          && BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
          && BugCheckParameter2 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v24 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v24 )
          {
            v74 = (volatile LONG *)(v24 + 4LL * (((unsigned int)BugCheckParameter2 >> 3) & 0x1FF));
            if ( (v91 & 4) != 0 )
            {
              ExAcquireSpinLockSharedAtDpcLevel(v74);
              goto LABEL_224;
            }
            if ( (v91 & 1) == 0 )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel(v74);
              goto LABEL_224;
            }
            if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(
                                  v74,
                                  0xFFFFF6FB7DBEDFFFuLL,
                                  0xFFFFF6FB7DBED7F8uLL,
                                  v24) )
              goto LABEL_146;
LABEL_224:
            v36 = 1;
            v8 = v86;
            goto LABEL_225;
          }
        }
        if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
        {
          v25 = (unsigned __int64 *)BugCheckParameter2;
LABEL_48:
          v82 = 0;
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
LABEL_52:
          v27 = 0x1000000000000020LL;
          CurrentPrcb = v10 & 1;
          while ( 1 )
          {
            v11 = 0xDFFFFFFFFFFFFFFFuLL;
            v28 = 0x1000000000LL;
            if ( (v26 & 1) == 0 )
              goto LABEL_59;
            if ( (v26 & 0x1000000000000000LL) != 0 )
            {
              if ( (v10 & 1) != 0 )
              {
LABEL_59:
                v20 = 0;
                goto LABEL_33;
              }
              if ( ((v26 >> 60) & 2) != 0 )
              {
                do
                {
                  v70 = v82 + 1;
                  v82 = v70;
                  if ( (v70 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28, v11, CurrentPrcb, v27) )
                  {
                    HvlNotifyLongSpinWait(v70);
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
                v57 = v26 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( (MiFlags & 0x1000000000LL) != 0 && (v26 & 0x21) == 1 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v26 | 0x2000000000000000LL, 128LL);
                v58 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v57, v26);
                v29 = v26 == v58;
                v26 = v58;
                if ( v29 )
                  v26 = v57;
              }
              goto LABEL_52;
            }
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v11 = BugCheckParameter2;
            v30 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)BugCheckParameter2,
                    v26 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v26);
            v29 = v26 == v30;
            v26 = v30;
            if ( v29 )
              break;
            if ( (v10 & 1) != 0 )
              goto LABEL_59;
          }
          v20 = 1;
LABEL_33:
          if ( v20 )
            goto LABEL_224;
          goto LABEL_146;
        }
        v25 = (unsigned __int64 *)BugCheckParameter2;
        if ( BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL || BugCheckParameter2 > 0xFFFFF6FB7DBEDFFFuLL )
          goto LABEL_48;
        v92 = 0;
        v41 = (2 * ((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
        v42 = (volatile signed __int32 *)(&MiState
                                        + ((unsigned __int64)(2
                                                            * (unsigned int)((__int64)(BugCheckParameter2
                                                                                     + 0x90482413000LL) >> 3)) >> 5)
                                        + 2459);
        v84 = v42;
        v43 = *v42;
        v44 = v10 & 1;
LABEL_83:
        while ( 2 )
        {
          CurrentPrcb = (unsigned int)(2 << v41);
          while ( 1 )
          {
            v45 = v44;
            v46 = (2 * (unsigned __int8)((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
            v11 = v43 >> v41;
            if ( (v11 & 1) != 0 )
              break;
            v11 = ~(_DWORD)CurrentPrcb & (v43 | (1 << v41));
            v47 = _InterlockedCompareExchange(v42, v11, v43);
            v29 = v43 == v47;
            v43 = v47;
            if ( v29 )
              goto LABEL_224;
            v44 = v45;
            if ( v45 )
              goto LABEL_146;
          }
          if ( v44 )
          {
LABEL_146:
            v36 = 0;
            v8 = v86;
LABEL_225:
            *v7 = 0;
            if ( !v36 || !v83 )
              return v36;
            if ( v83 == 3 )
              v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( (MI_READ_PTE_LOCK_FREE(v8, v11, CurrentPrcb) & 0x81) == 0x81 )
              return (unsigned int)(v83 == 3) + 2;
            MiUnlockPageTableInternal(a1, BugCheckParameter2);
            return 0LL;
          }
          if ( (v11 & 2) == 0 )
          {
            v75 = v43 | CurrentPrcb;
            v76 = _InterlockedCompareExchange(v42, v75, v43);
            v29 = v43 == v76;
            v43 = v76;
            if ( v29 )
              v43 = v75;
            v44 = v10 & 1;
            continue;
          }
          break;
        }
        while ( 1 )
        {
          if ( (++v92 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v46, v11, CurrentPrcb, v42) )
            {
              HvlNotifyLongSpinWait(v92);
              v42 = v84;
              goto LABEL_196;
            }
            v42 = v84;
          }
          _mm_pause();
LABEL_196:
          v43 = *v42;
          v46 = (2 * (unsigned __int8)((__int64)(BugCheckParameter2 + 0x90482413000LL) >> 3)) & 0x1F;
          if ( (((unsigned __int32)*v42 >> v41) & 1) == 0 )
          {
            v44 = v10 & 1;
            goto LABEL_83;
          }
        }
      }
    }
  }
  return 0LL;
}
