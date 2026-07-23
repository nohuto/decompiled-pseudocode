/*
 * XREFs of MiResolvePageTablePage @ 0x140239FB0
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiIsLazyStampedPte @ 0x1403F4D00 (MiIsLazyStampedPte.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolvePageTablePage(__int64 a1, unsigned __int64 a2, __int64 CurrentPrcb)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  int v6; // eax
  __int64 v7; // rdx
  char v9; // al
  unsigned int v10; // ecx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 i; // rbx
  __int64 v15; // r9
  ULONG_PTR v16; // r13
  __int64 v17; // rax
  char v18; // al
  unsigned int v19; // ecx
  ULONG *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  int v25; // ebx
  _KPROCESS *Process; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  signed __int64 v34; // rax
  _KPROCESS *v35; // rcx
  unsigned __int64 KernelWaitTime; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  struct _KPRCB *v39; // rdx
  char v40; // al
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // edi
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  volatile signed __int32 *v49; // rbx
  int v50; // r10d
  __int64 v51; // rcx
  unsigned __int32 v52; // eax
  signed __int64 v53; // rdi
  signed __int64 v54; // rax
  bool v55; // zf
  unsigned int v56; // ecx
  unsigned __int32 v57; // eax
  __int64 DemandZeroPte; // rax
  unsigned int v59; // esi
  ULONG_PTR v60; // r9
  ULONG_PTR v61; // rdx
  unsigned int v62; // [rsp+30h] [rbp-68h]
  int v63; // [rsp+34h] [rbp-64h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h]
  unsigned int v66; // [rsp+A0h] [rbp+8h]
  unsigned int v67; // [rsp+A8h] [rbp+10h]
  unsigned int v68; // [rsp+A8h] [rbp+10h]
  int v69; // [rsp+B0h] [rbp+18h]
  unsigned int v70; // [rsp+B8h] [rbp+20h]

  v3 = a1 + 56;
  v4 = *(_QWORD *)(a1 + 56);
  v65 = v4;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    a2 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v6 = MiFastLockLeafPageTable(v4, a2, 0LL);
      if ( v6 )
      {
        v7 = *(_QWORD *)(a1 + 8LL * v6 + 24);
        *(_QWORD *)(v3 + 16) = v7;
        if ( v6 == 1 )
          return 0LL;
        MiUnlockPageTableInternal(v4, v7);
        *(_QWORD *)(v3 + 16) = 0LL;
      }
    }
  }
  v69 = 0;
  if ( (*(_BYTE *)(v3 + 13) & 1) == 0 )
  {
    *(_QWORD *)(v3 + 16) = 0xFFFFF6FB7DBEDF68uLL;
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    v9 = *(_DWORD *)(v4 + 184) & 0xF;
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
      a2 = (unsigned __int64)(&MiState + 2 * v10 + 3232);
    }
    else
    {
      v10 = 2;
      a2 = v4 + 176;
    }
    v11 = (_QWORD *)(CurrentPrcb + 8 * (v10 + 2 * (v10 + 2500LL)));
    v11[1] = a2;
    *v11 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = _InterlockedExchange64((volatile __int64 *)a2, (__int64)v11);
      if ( v12 )
        KxWaitForLockOwnerShip(v11, v12);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v11, a2);
    }
  }
  v13 = 3;
  for ( i = 3LL; ; --i )
  {
    v15 = (__int64)&MiState;
    v64 = i;
    v66 = v13;
    if ( !v13 )
      break;
    v16 = *(_QWORD *)(a1 + 8 * i + 24);
    a2 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (a2 & 1) == 0 )
        goto LABEL_28;
      if ( ((a2 & 0x42) == 0 || (a2 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          CurrentPrcb = Process[2].KernelWaitTime;
          if ( CurrentPrcb )
          {
            v27 = *(_QWORD *)(CurrentPrcb + 8 * ((v16 >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              a2 |= 0x20uLL;
            v28 = a2;
            a2 |= 0x42uLL;
            if ( (v27 & 0x42) == 0 )
              a2 = v28;
          }
        }
      }
    }
    if ( (a2 & 1) == 0 )
    {
LABEL_28:
      v23 = *(_QWORD *)v16;
      if ( v16 < 0xFFFFF6FB7DBED000uLL || v16 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_32;
      if ( (v23 & 1) == 0 )
        goto LABEL_168;
      if ( ((v23 & 0x42) == 0 || (v23 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v35 = KeGetCurrentThread()->ApcState.Process;
        if ( v35->AddressPolicy != 1 )
        {
          KernelWaitTime = v35[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v37 = *(_QWORD *)(KernelWaitTime + 8 * ((v16 >> 3) & 0x1FF));
            if ( (v37 & 0x20) != 0 )
              v23 |= 0x20uLL;
            v38 = v23;
            v23 |= 0x42uLL;
            if ( (v37 & 0x42) == 0 )
              v23 = v38;
          }
        }
      }
LABEL_32:
      if ( (v23 & 1) == 0 )
      {
LABEL_168:
        if ( v23 && (v23 & 0x400) == 0 )
        {
          if ( (v23 & 0x800) != 0 )
          {
            v55 = ((v23 >> 5) & 0x1F) == 24;
          }
          else
          {
            DemandZeroPte = MiMakeDemandZeroPte(16LL, a2, v23, &MiState);
            v55 = v23 == DemandZeroPte;
          }
          if ( v55 || (unsigned int)MiIsLazyStampedPte(v23) )
            goto LABEL_105;
        }
      }
      if ( !a2 )
      {
        v24 = *(_QWORD *)(a1 + 16);
        if ( (v24 & 1) != 0 )
        {
          v44 = (_BYTE *)(v24 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( *v44 == 8 )
            goto LABEL_104;
        }
      }
      v69 = MiInPagePageTable(a1, v13, v23, v15);
      v25 = v69;
      if ( v69 < 0 )
        goto LABEL_37;
      ++v13;
      i = v64 + 1;
      goto LABEL_49;
    }
    if ( (a2 & 0x80u) != 0LL )
    {
      v60 = *(_QWORD *)(a1 + 16);
      if ( (v60 & 1) == 0 || *(_BYTE *)(v60 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      {
        v61 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v61 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v61, *(_QWORD *)(a1 + 8), v60, 8uLL);
      }
      v25 = MiLargePageFault(a1, *(_QWORD *)(a1 + 8 * i + 24));
      if ( v25 >= 0 )
        v25 = -1073740748;
      goto LABEL_37;
    }
    v17 = *(_QWORD *)(v3 + 16);
    if ( v17 && v16 != v17 )
    {
      if ( v16 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
        v18 = *(_DWORD *)(v4 + 184) & 0xF;
        if ( v18 )
        {
          if ( v18 == 7 )
          {
            v19 = 1;
            v20 = &MiState + 3234;
          }
          else
          {
            if ( v18 == 5 )
              v19 = 0;
            else
              v19 = 3;
            v20 = &MiState + 2 * v19 + 3232;
          }
        }
        else
        {
          v19 = 2;
          v20 = (ULONG *)(v4 + 176);
        }
        v21 = (_QWORD *)(CurrentPrcb + 8 * (v19 + 2 * (v19 + 2500LL)));
        v21[1] = v20;
        *v21 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v22 = _InterlockedExchange64((volatile __int64 *)v20, (__int64)v21);
          if ( v22 )
            KxWaitForLockOwnerShip(v21, v22);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v21, v20);
        }
      }
      else if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0
             && v16 >= 0xFFFFF6FB7DBED000uLL
             && v16 <= 0xFFFFF6FB7DBEDFFFuLL
             && (v29 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v29 + 4LL * (((unsigned int)v16 >> 3) & 0x1FF)));
      }
      else
      {
        if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 && v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v68 = 0;
          v45 = 2 * ((__int64)(v16 + 0x90482413000LL) >> 3);
          v46 = v45 & 0x1F;
          v47 = ((unsigned __int64)v45 >> 5) + 2459;
          LOBYTE(v45) = v45 & 0x1F;
          v48 = *(&MiState + v47);
          v49 = (volatile signed __int32 *)(&MiState + v47);
          CurrentPrcb = (unsigned int)(1 << v45);
          v50 = 2 << v45;
          v70 = 1 << v45;
          v15 = (unsigned int)~(2 << v45);
          v63 = 2 << v45;
          v62 = ~(2 << v45);
          do
          {
            while ( 1 )
            {
              v51 = v46;
              if ( (((unsigned int)v48 >> v46) & 1) == 0 )
                break;
              if ( (((unsigned int)v48 >> v46) & 2) != 0 )
              {
                v59 = v68;
                do
                {
                  if ( (++v59 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v51, v48, CurrentPrcb, v15) )
                  {
                    HvlNotifyLongSpinWait(v59);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v48 = *(unsigned int *)v49;
                  v51 = v46;
                }
                while ( (((unsigned __int32)*v49 >> v46) & 1) != 0 );
                CurrentPrcb = v70;
                v15 = v62;
                v50 = v63;
                v68 = v59;
                v3 = a1 + 56;
              }
              else
              {
                v56 = v50 | v48;
                v57 = _InterlockedCompareExchange(v49, v50 | v48, v48);
                v55 = (_DWORD)v48 == v57;
                v48 = v57;
                if ( v55 )
                  v48 = v56;
              }
            }
            v52 = _InterlockedCompareExchange(v49, v15 & (v48 | CurrentPrcb), v48);
            v55 = (_DWORD)v48 == v52;
            v48 = v52;
          }
          while ( !v55 );
        }
        else
        {
          v30 = 0;
          v67 = 0;
          v33 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 8 * i + 24), a2, CurrentPrcb);
          while ( (v33 & 1) != 0 )
          {
            if ( (v33 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v33 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v30 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32, v31, CurrentPrcb, v15) )
                  {
                    HvlNotifyLongSpinWait(v30);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v33 = *(_QWORD *)v16;
                }
                while ( (*(_QWORD *)v16 & 0x1000000000000000LL) != 0 );
                v67 = v30;
                v3 = a1 + 56;
              }
              else
              {
                v53 = v33 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v33 & 0x21) == 1 )
                  {
                    v32 = 0x4000000000LL;
                    if ( v16 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v16, v33 | 0x2000000000000000LL, 128LL);
                  }
                }
                v54 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v53, v33);
                v55 = v33 == v54;
                v33 = v54;
                if ( v55 )
                  v33 = v53;
                v30 = v67;
              }
            }
            else
            {
              v32 = v33 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v32, v33);
              v55 = v33 == v34;
              v33 = v34;
              if ( v55 )
                break;
            }
          }
          v4 = v65;
        }
        i = v64;
        v13 = v66;
      }
      a2 = *(_QWORD *)(v3 + 16);
      if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0
          || a2 < 0xFFFFF6FB7DBED000uLL
          || a2 > 0xFFFFF6FB7DBEDFFFuLL
          || (v42 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            CurrentPrcb = 2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3);
            a2 = (unsigned int)~(2 << ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F));
            LODWORD(a2) = a2 & ~(1 << (CurrentPrcb & 0x1F));
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState + ((unsigned __int64)(unsigned int)CurrentPrcb >> 5) + 2459,
              a2);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(
            (volatile signed __int32 *)(v42 + 4 * ((a2 >> 3) & 0x1FF)),
            (a2 >> 3) & 0x1FF,
            CurrentPrcb,
            v15);
        }
        goto LABEL_48;
      }
      v39 = KeGetCurrentPrcb();
      v40 = *(_DWORD *)(v4 + 184) & 0xF;
      if ( !v40 )
      {
        v41 = 2LL;
        goto LABEL_79;
      }
      if ( v40 == 7 )
      {
        KxReleaseQueuedSpinLock(&v39->SelfmapLockHandle[1]);
      }
      else
      {
        v41 = 3LL;
        if ( v40 == 5 )
          v41 = 0LL;
LABEL_79:
        KxReleaseQueuedSpinLock(&v39->SelfmapLockHandle[v41]);
      }
LABEL_48:
      *(_QWORD *)(v3 + 16) = v16;
    }
LABEL_49:
    --v13;
  }
  v25 = v69;
  if ( v69 < 0 )
    goto LABEL_37;
  v43 = *(_QWORD *)(a1 + 16);
  if ( (v43 & 1) != 0
    && *(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL) == 8
    && !MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 24), a2, CurrentPrcb) )
  {
    v44 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_104:
    v44[44] = 1;
LABEL_105:
    v25 = -1073741819;
LABEL_37:
    MiUnlockFaultPageTable(v3);
  }
  return (unsigned int)v25;
}
