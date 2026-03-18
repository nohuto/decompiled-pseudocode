/*
 * XREFs of MiResolvePageTablePage @ 0x1402D86D0
 * Callers:
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiIsLazyStampedPte @ 0x1403114C0 (MiIsLazyStampedPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolvePageTablePage(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  char v9; // al
  unsigned int v10; // ecx
  volatile __int64 *v11; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // edi
  __int64 i; // rbx
  ULONG *v16; // r9
  ULONG_PTR v17; // r13
  volatile signed __int64 v18; // rdx
  __int64 v19; // rax
  struct _KPRCB *v20; // r8
  char v21; // al
  unsigned int v22; // ecx
  ULONG *v23; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v24; // rcx
  _QWORD *v25; // rax
  volatile unsigned __int64 v26; // r8
  __int64 v27; // rax
  int v28; // ebx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v31; // rax
  volatile signed __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned int v34; // edi
  unsigned __int64 v35; // rbx
  signed __int64 v36; // rax
  unsigned __int64 v37; // rdx
  _KPROCESS *v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  volatile unsigned __int64 v41; // rcx
  struct _KPRCB *v42; // rdx
  char v43; // al
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  _BYTE *v47; // rax
  unsigned int v48; // ecx
  char v49; // di
  unsigned __int64 v50; // rbx
  unsigned __int32 v51; // edx
  volatile signed __int32 *v52; // rbx
  int v53; // r8d
  int v54; // r10d
  int v55; // r9d
  signed __int32 v56; // eax
  signed __int64 v57; // rdi
  signed __int64 v58; // rax
  bool v59; // zf
  int v60; // ecx
  signed __int32 v61; // eax
  __int64 DemandZeroPte; // rax
  unsigned int v63; // esi
  ULONG_PTR v64; // r9
  ULONG_PTR v65; // rdx
  int v66; // [rsp+30h] [rbp-68h]
  int v67; // [rsp+34h] [rbp-64h]
  __int64 v68; // [rsp+38h] [rbp-60h]
  __int64 v69; // [rsp+40h] [rbp-58h]
  unsigned int v70; // [rsp+A0h] [rbp+8h]
  unsigned int v71; // [rsp+A8h] [rbp+10h]
  unsigned int v72; // [rsp+A8h] [rbp+10h]
  int v73; // [rsp+B0h] [rbp+18h]
  int v74; // [rsp+B8h] [rbp+20h]

  v1 = a1 + 56;
  v2 = *(_QWORD *)(a1 + 56);
  v69 = v2;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    v4 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v5 = MiFastLockLeafPageTable(v2, v4, 0LL);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 8LL * v5 + 24);
        *(_QWORD *)(v1 + 16) = v6;
        if ( v5 == 1 )
          return 0LL;
        MiUnlockPageTableInternal(v2, v6);
        *(_QWORD *)(v1 + 16) = 0LL;
      }
    }
  }
  v73 = 0;
  if ( (*(_BYTE *)(v1 + 13) & 1) == 0 )
  {
    *(_QWORD *)(v1 + 16) = 0xFFFFF6FB7DBEDF68uLL;
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(v2 + 184) & 0xF;
    if ( v9 )
    {
      if ( v9 == 7 )
      {
        v10 = 1;
      }
      else
      {
        v10 = 3;
        if ( v9 == 5 )
          v10 = 0;
      }
      v11 = (volatile __int64 *)(&MiState + 2 * v10 + 3232);
    }
    else
    {
      v10 = 2;
      v11 = (volatile __int64 *)(v2 + 176);
    }
    v12 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v10 + v10;
    *((_QWORD *)v12 + 1) = v11;
    *v12 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = (_QWORD *)_InterlockedExchange64(v11, (__int64)v12);
      if ( v13 )
        KxWaitForLockOwnerShip((__int64)v12, v13);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v12, v11);
    }
  }
  v14 = 3;
  for ( i = 3LL; ; --i )
  {
    v16 = &MiState;
    v68 = i;
    v70 = v14;
    if ( !v14 )
      break;
    v17 = *(_QWORD *)(a1 + 8 * i + 24);
    v18 = *(_QWORD *)v17;
    if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_28;
      if ( ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v31 = *(_QWORD *)(KernelWaitTime + 8 * ((v17 >> 3) & 0x1FF));
            if ( (v31 & 0x20) != 0 )
              v18 |= 0x20uLL;
            v32 = v18;
            v18 |= 0x42uLL;
            if ( (v31 & 0x42) == 0 )
              v18 = v32;
          }
        }
      }
    }
    if ( (v18 & 1) == 0 )
    {
LABEL_28:
      v26 = *(_QWORD *)v17;
      if ( v17 < 0xFFFFF6FB7DBED000uLL || v17 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_32;
      if ( (v26 & 1) == 0 )
        goto LABEL_168;
      if ( ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v38 = KeGetCurrentThread()->ApcState.Process;
        if ( v38->AddressPolicy != 1 )
        {
          v39 = v38[2].KernelWaitTime;
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * ((v17 >> 3) & 0x1FF));
            if ( (v40 & 0x20) != 0 )
              v26 |= 0x20uLL;
            v41 = v26;
            v26 |= 0x42uLL;
            if ( (v40 & 0x42) == 0 )
              v26 = v41;
          }
        }
      }
LABEL_32:
      if ( (v26 & 1) == 0 )
      {
LABEL_168:
        if ( v26 && (v26 & 0x400) == 0 )
        {
          if ( (v26 & 0x800) != 0 )
          {
            v59 = ((v26 >> 5) & 0x1F) == 24;
          }
          else
          {
            DemandZeroPte = MiMakeDemandZeroPte(16LL);
            v59 = v26 == DemandZeroPte;
          }
          if ( v59 || (unsigned int)MiIsLazyStampedPte(v26) )
            goto LABEL_105;
        }
      }
      if ( !v18 )
      {
        v27 = *(_QWORD *)(a1 + 16);
        if ( (v27 & 1) != 0 )
        {
          v47 = (_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( *v47 == 8 )
            goto LABEL_104;
        }
      }
      v73 = MiInPagePageTable(a1, v14, v26, v16);
      v28 = v73;
      if ( v73 < 0 )
        goto LABEL_37;
      ++v14;
      i = v68 + 1;
      goto LABEL_49;
    }
    if ( (v18 & 0x80u) != 0LL )
    {
      v64 = *(_QWORD *)(a1 + 16);
      if ( (v64 & 1) == 0 || *(_BYTE *)(v64 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      {
        v65 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v65 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v65, *(_QWORD *)(a1 + 8), v64, 8uLL);
      }
      v28 = MiLargePageFault(a1, *(_QWORD *)(a1 + 8 * i + 24));
      if ( v28 >= 0 )
        v28 = -1073740748;
      goto LABEL_37;
    }
    v19 = *(_QWORD *)(v1 + 16);
    if ( v19 && v17 != v19 )
    {
      if ( v17 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v20 = KeGetCurrentPrcb();
        v21 = *(_DWORD *)(v2 + 184) & 0xF;
        if ( v21 )
        {
          if ( v21 == 7 )
          {
            v22 = 1;
            v23 = &MiState + 3234;
          }
          else
          {
            if ( v21 == 5 )
              v22 = 0;
            else
              v22 = 3;
            v23 = &MiState + 2 * v22 + 3232;
          }
        }
        else
        {
          v22 = 2;
          v23 = (ULONG *)(v2 + 176);
        }
        v24 = &v20->SelfmapLockHandle[0].LockQueue.Next + 2 * v22 + v22;
        *((_QWORD *)v24 + 1) = v23;
        *v24 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v25 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v23, (__int64)v24);
          if ( v25 )
            KxWaitForLockOwnerShip((__int64)v24, v25);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)v24, (volatile __int64 *)v23);
        }
      }
      else if ( (*(_DWORD *)(v2 + 184) & 0xF) == 0
             && v17 >= 0xFFFFF6FB7DBED000uLL
             && v17 <= 0xFFFFF6FB7DBEDFFFuLL
             && (v33 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v33 + 4LL * (((unsigned int)v17 >> 3) & 0x1FF)));
      }
      else
      {
        if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v72 = 0;
          v48 = 2 * ((__int64)(v17 + 0x90482413000LL) >> 3);
          v49 = v48 & 0x1F;
          v50 = ((unsigned __int64)v48 >> 5) + 2459;
          LOBYTE(v48) = v48 & 0x1F;
          v51 = *(&MiState + v50);
          v52 = (volatile signed __int32 *)(&MiState + v50);
          v53 = 1 << v48;
          v54 = 2 << v48;
          v74 = 1 << v48;
          v55 = ~(2 << v48);
          v67 = 2 << v48;
          v66 = v55;
          do
          {
            while ( ((v51 >> v49) & 1) != 0 )
            {
              if ( ((v51 >> v49) & 2) != 0 )
              {
                v63 = v72;
                do
                {
                  if ( (++v63 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v63);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v51 = *v52;
                }
                while ( (((unsigned __int32)*v52 >> v49) & 1) != 0 );
                v53 = v74;
                v55 = v66;
                v54 = v67;
                v72 = v63;
                v1 = a1 + 56;
              }
              else
              {
                v60 = v54 | v51;
                v61 = _InterlockedCompareExchange(v52, v54 | v51, v51);
                v59 = v51 == v61;
                v51 = v61;
                if ( v59 )
                  v51 = v60;
              }
            }
            v56 = _InterlockedCompareExchange(v52, v55 & (v51 | v53), v51);
            v59 = v51 == v56;
            v51 = v56;
          }
          while ( !v59 );
        }
        else
        {
          v34 = 0;
          v71 = 0;
          v35 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 8 * i + 24));
          while ( (v35 & 1) != 0 )
          {
            if ( (v35 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v35 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v34 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v34);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v35 = *(_QWORD *)v17;
                }
                while ( (*(_QWORD *)v17 & 0x1000000000000000LL) != 0 );
                v71 = v34;
                v1 = a1 + 56;
              }
              else
              {
                v57 = v35 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) && (v35 & 0x21) == 1 && v17 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(v17, v35 | 0x2000000000000000LL, 128);
                v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v17, v57, v35);
                v59 = v35 == v58;
                v35 = v58;
                if ( v59 )
                  v35 = v57;
                v34 = v71;
              }
            }
            else
            {
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v36 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v17,
                      v35 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                      v35);
              v59 = v35 == v36;
              v35 = v36;
              if ( v59 )
                break;
            }
          }
          v2 = v69;
        }
        i = v68;
        v14 = v70;
      }
      v37 = *(_QWORD *)(v1 + 16);
      if ( v37 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0
          || v37 < 0xFFFFF6FB7DBED000uLL
          || v37 > 0xFFFFF6FB7DBEDFFFuLL
          || (v45 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState
            + ((unsigned __int64)(2 * (unsigned int)((__int64)(v37 + 0x90482413000LL) >> 3)) >> 5)
            + 2459,
              ~(2 << ((2 * ((__int64)(v37 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                      * ((__int64)(v37 + 0x90482413000LL) >> 3)) & 0x1F)));
          else
            _InterlockedAnd64((volatile signed __int64 *)v37, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v45 + 4 * ((v37 >> 3) & 0x1FF));
        }
        goto LABEL_48;
      }
      v42 = KeGetCurrentPrcb();
      v43 = *(_DWORD *)(v2 + 184) & 0xF;
      if ( !v43 )
      {
        v44 = 2LL;
        goto LABEL_79;
      }
      if ( v43 == 7 )
      {
        KxReleaseQueuedSpinLock(&v42->SelfmapLockHandle[1]);
      }
      else
      {
        v44 = 3LL;
        if ( v43 == 5 )
          v44 = 0LL;
LABEL_79:
        KxReleaseQueuedSpinLock(&v42->SelfmapLockHandle[v44]);
      }
LABEL_48:
      *(_QWORD *)(v1 + 16) = v17;
    }
LABEL_49:
    --v14;
  }
  v28 = v73;
  if ( v73 < 0 )
    goto LABEL_37;
  v46 = *(_QWORD *)(a1 + 16);
  if ( (v46 & 1) != 0 && *(_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFEuLL) == 8 && !MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 24)) )
  {
    v47 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_104:
    v47[44] = 1;
LABEL_105:
    v28 = -1073741819;
LABEL_37:
    MiUnlockFaultPageTable(v1);
  }
  return (unsigned int)v28;
}
