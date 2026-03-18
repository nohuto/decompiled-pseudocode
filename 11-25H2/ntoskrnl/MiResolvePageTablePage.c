/*
 * XREFs of MiResolvePageTablePage @ 0x1402AE990
 * Callers:
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiIsLazyStampedPte @ 0x14040AF1C (MiIsLazyStampedPte.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolvePageTablePage(__int64 a1, __int64 a2, unsigned __int64 CurrentPrcb, __int64 a4)
{
  ULONG_PTR *v4; // rsi
  __int64 v5; // rbp
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  char v12; // al
  unsigned int v13; // ecx
  _KSPIN_LOCK_QUEUE *volatile *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 i; // rbx
  ULONG *v18; // r9
  ULONG_PTR v19; // r13
  ULONG_PTR v20; // rax
  char v21; // al
  unsigned int v22; // ecx
  ULONG *v23; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // edi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  signed __int64 v30; // rax
  unsigned __int64 v31; // rcx
  struct _KPRCB *v32; // r8
  char v33; // al
  __int64 v34; // rcx
  int v35; // ebx
  ULONG_PTR v36; // rax
  _BYTE *v37; // rax
  ULONG_PTR v38; // rax
  _KPROCESS *v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  signed __int64 v42; // rdi
  signed __int64 v43; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rax
  __int64 v46; // rax
  struct _KPRCB *v47; // rcx
  unsigned int v48; // ecx
  unsigned int v49; // edi
  unsigned __int64 v50; // rbx
  unsigned __int32 v51; // edx
  volatile signed __int32 *v52; // rbx
  int v53; // r10d
  int v54; // r9d
  __int64 v55; // rcx
  signed __int32 v56; // eax
  bool v57; // zf
  int v58; // ecx
  signed __int32 v59; // eax
  __int64 DemandZeroPte; // rax
  unsigned int v61; // esi
  ULONG_PTR v62; // r9
  ULONG_PTR v63; // rdx
  unsigned int v64; // [rsp+30h] [rbp-68h]
  int v65; // [rsp+34h] [rbp-64h]
  int v66; // [rsp+38h] [rbp-60h]
  __int64 v67; // [rsp+40h] [rbp-58h]
  __int64 v68; // [rsp+48h] [rbp-50h]
  unsigned int v70; // [rsp+A8h] [rbp+10h]
  unsigned int v71; // [rsp+B0h] [rbp+18h]
  unsigned int v72; // [rsp+B0h] [rbp+18h]
  int v73; // [rsp+B8h] [rbp+20h]

  v4 = (ULONG_PTR *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = (ULONG_PTR *)a1;
  v68 = v5;
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0
    || (v7 = *(_QWORD *)a1, *(_QWORD *)a1 >= 0xFFFFF68000000000uLL) && v7 <= 0xFFFFF6FFFFFFFFFFuLL
    || (v8 = MiFastLockLeafPageTable(v5, v7, 0LL)) == 0 )
  {
    v11 = 0LL;
  }
  else
  {
    v9 = v6[v8 + 3];
    v4[2] = v9;
    if ( v8 == 1 )
      return 0LL;
    MiUnlockPageTable(v5, v9);
    v11 = 0LL;
    v4[2] = 0LL;
  }
  v73 = 0;
  if ( (*((_BYTE *)v4 + 13) & 1) == 0 )
  {
    v4[2] = 0xFFFFF6FB7DBEDF68uLL;
    CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
    v12 = *(_DWORD *)(v5 + 184) & 0xF;
    if ( v12 )
    {
      if ( v12 == 7 )
      {
        v13 = 1;
      }
      else
      {
        v13 = 3;
        if ( v12 == 5 )
          v13 = 0;
      }
      v11 = (unsigned __int64)(&MiState + 2 * v13 + 3232);
    }
    else
    {
      v13 = 2;
      v11 = v5 + 176;
    }
    v14 = (_KSPIN_LOCK_QUEUE *volatile *)(CurrentPrcb + 8 * (v13 + 2 * (v13 + 2500LL)));
    *((_QWORD *)v14 + 1) = v11;
    *v14 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v15 = _InterlockedExchange64((volatile __int64 *)v11, (__int64)v14);
      if ( v15 )
        KxWaitForLockOwnerShip(v14, v15, CurrentPrcb, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v14, v11);
    }
  }
  v16 = 3;
  for ( i = 3LL; ; --i )
  {
    v18 = &MiState;
    v67 = i;
    v70 = v16;
    if ( !v16 )
      break;
    v19 = v6[i + 3];
    v11 = *(_QWORD *)v19;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v11 & 1) == 0 )
      {
LABEL_70:
        CurrentPrcb = *(_QWORD *)v19;
        if ( v19 < 0xFFFFF6FB7DBED000uLL || v19 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_71;
        if ( (CurrentPrcb & 1) == 0 )
          goto LABEL_169;
        if ( ((CurrentPrcb & 0x42) == 0 || (CurrentPrcb & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v46 = *(_QWORD *)(KernelWaitTime + 8 * ((v19 >> 3) & 0x1FF));
              if ( (v46 & 0x20) != 0 )
                CurrentPrcb |= 0x20uLL;
              v47 = (struct _KPRCB *)CurrentPrcb;
              CurrentPrcb |= 0x42uLL;
              if ( (v46 & 0x42) == 0 )
                CurrentPrcb = (unsigned __int64)v47;
            }
          }
        }
LABEL_71:
        if ( (CurrentPrcb & 1) == 0 )
        {
LABEL_169:
          if ( CurrentPrcb && (CurrentPrcb & 0x400) == 0 )
          {
            if ( (CurrentPrcb & 0x800) != 0 )
            {
              v57 = ((CurrentPrcb >> 5) & 0x1F) == 24;
            }
            else
            {
              DemandZeroPte = MiMakeDemandZeroPte(16LL);
              v57 = CurrentPrcb == DemandZeroPte;
            }
            if ( v57 || (unsigned int)MiIsLazyStampedPte(CurrentPrcb) )
              goto LABEL_80;
          }
        }
        if ( !v11 )
        {
          v38 = v6[2];
          if ( (v38 & 1) != 0 )
          {
            v37 = (_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *v37 == 8 )
              goto LABEL_79;
          }
        }
        v73 = MiInPagePageTable(v6, v16, CurrentPrcb, v18);
        v35 = v73;
        if ( v73 < 0 )
          goto LABEL_76;
        ++v16;
        i = v67 + 1;
        goto LABEL_28;
      }
      if ( ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v39 = KeGetCurrentThread()->ApcState.Process;
        if ( v39->AddressPolicy != 1 )
        {
          CurrentPrcb = v39[2].KernelWaitTime;
          if ( CurrentPrcb )
          {
            v40 = *(_QWORD *)(CurrentPrcb + 8 * ((v19 >> 3) & 0x1FF));
            if ( (v40 & 0x20) != 0 )
              v11 |= 0x20uLL;
            v41 = v11;
            v11 |= 0x42uLL;
            if ( (v40 & 0x42) == 0 )
              v11 = v41;
          }
        }
      }
    }
    if ( (v11 & 1) == 0 )
      goto LABEL_70;
    if ( (v11 & 0x80u) != 0LL )
    {
      v62 = v6[2];
      if ( (v62 & 1) == 0 || *(_BYTE *)(v62 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      {
        v63 = *v6;
        if ( *v6 >= 0xFFFFF68000000000uLL && v63 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v63, v6[1], v62, 8uLL);
      }
      v35 = MiLargePageFault(v6, v6[i + 3]);
      if ( v35 >= 0 )
        v35 = -1073740748;
      goto LABEL_76;
    }
    v20 = v4[2];
    if ( v20 && v19 != v20 )
    {
      if ( v19 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v21 = *(_DWORD *)(v5 + 184) & 0xF;
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
          v23 = (ULONG *)(v5 + 176);
        }
        v24 = (_KSPIN_LOCK_QUEUE *volatile *)(CurrentPrcb + 8 * (v22 + 2 * (v22 + 2500LL)));
        *((_QWORD *)v24 + 1) = v23;
        *v24 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v25 = _InterlockedExchange64((volatile __int64 *)v23, (__int64)v24);
          if ( v25 )
            KxWaitForLockOwnerShip(v24, v25, CurrentPrcb, &MiState);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v24, v23);
        }
      }
      else if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0
             && v19 >= 0xFFFFF6FB7DBED000uLL
             && v19 <= 0xFFFFF6FB7DBEDFFFuLL
             && (v26 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v26 + 4LL * (((unsigned int)v19 >> 3) & 0x1FF)));
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v72 = 0;
          v48 = 2 * ((__int64)(v19 + 0x90482413000LL) >> 3);
          v49 = v48 & 0x1F;
          v50 = ((unsigned __int64)v48 >> 5) + 2459;
          LOBYTE(v48) = v48 & 0x1F;
          v51 = *(&MiState + v50);
          v52 = (volatile signed __int32 *)(&MiState + v50);
          CurrentPrcb = (unsigned int)(1 << v48);
          v53 = 2 << v48;
          v64 = 1 << v48;
          v54 = ~(2 << v48);
          v66 = 2 << v48;
          v65 = v54;
          do
          {
            while ( 1 )
            {
              v55 = v49;
              if ( ((v51 >> v49) & 1) == 0 )
                break;
              if ( ((v51 >> v49) & 2) != 0 )
              {
                v61 = v72;
                do
                {
                  if ( (++v61 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v55) )
                  {
                    HvlNotifyLongSpinWait(v61);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v51 = *v52;
                  v55 = v49;
                }
                while ( (((unsigned __int32)*v52 >> v49) & 1) != 0 );
                CurrentPrcb = v64;
                v54 = v65;
                v53 = v66;
                v72 = v61;
                v4 = v6 + 7;
              }
              else
              {
                v58 = v53 | v51;
                v59 = _InterlockedCompareExchange(v52, v53 | v51, v51);
                v57 = v51 == v59;
                v51 = v59;
                if ( v57 )
                  v51 = v58;
              }
            }
            v56 = _InterlockedCompareExchange(v52, v54 & (v51 | CurrentPrcb), v51);
            v57 = v51 == v56;
            v51 = v56;
          }
          while ( !v57 );
        }
        else
        {
          v27 = 0;
          v71 = 0;
          v29 = MI_READ_PTE_LOCK_FREE(v6[i + 3]);
          while ( (v29 & 1) != 0 )
          {
            if ( (v29 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v29 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v27 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28) )
                  {
                    HvlNotifyLongSpinWait(v27);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v29 = *(_QWORD *)v19;
                }
                while ( (*(_QWORD *)v19 & 0x1000000000000000LL) != 0 );
                v71 = v27;
              }
              else
              {
                v42 = v29 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v29 & 0x21) == 1 )
                  {
                    v28 = 0x4000000000LL;
                    if ( v19 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v19, v29 | 0x2000000000000000LL);
                  }
                }
                v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v19, v42, v29);
                v57 = v29 == v43;
                v29 = v43;
                if ( v57 )
                  v29 = v42;
                v27 = v71;
              }
            }
            else
            {
              v28 = v29 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v19, v28, v29);
              v57 = v29 == v30;
              v29 = v30;
              if ( v57 )
                break;
            }
          }
          v6 = (ULONG_PTR *)a1;
          v5 = v68;
          v4 = (ULONG_PTR *)(a1 + 56);
        }
        i = v67;
        v16 = v70;
      }
      v11 = v4[2];
      if ( v11 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0
          || v11 < 0xFFFFF6FB7DBED000uLL
          || v11 > 0xFFFFF6FB7DBEDFFFuLL
          || (v31 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            CurrentPrcb = 2 * (unsigned int)((__int64)(v11 + 0x90482413000LL) >> 3);
            v11 = (unsigned int)~(2 << ((2 * ((__int64)(v11 + 0x90482413000LL) >> 3)) & 0x1F));
            LODWORD(v11) = v11 & ~(1 << (CurrentPrcb & 0x1F));
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState + ((unsigned __int64)(unsigned int)CurrentPrcb >> 5) + 2459,
              v11);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v11, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v31 + 4 * ((v11 >> 3) & 0x1FF));
        }
        goto LABEL_27;
      }
      v32 = KeGetCurrentPrcb();
      v33 = *(_DWORD *)(v5 + 184) & 0xF;
      if ( !v33 )
      {
        v34 = 2LL;
        goto LABEL_56;
      }
      if ( v33 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32->SelfmapLockHandle[1]);
      }
      else
      {
        v34 = 3LL;
        if ( v33 == 5 )
          v34 = 0LL;
LABEL_56:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32->SelfmapLockHandle[v34]);
      }
LABEL_27:
      v4[2] = v19;
    }
LABEL_28:
    --v16;
  }
  v35 = v73;
  if ( v73 < 0 )
    goto LABEL_76;
  v36 = v6[2];
  if ( (v36 & 1) != 0 && *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL) == 8 && !MI_READ_PTE_LOCK_FREE(v6[3]) )
  {
    v37 = (_BYTE *)(v6[2] & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_79:
    v37[44] = 1;
LABEL_80:
    v35 = -1073741819;
LABEL_76:
    MiUnlockFaultPageTable(v4, v11, CurrentPrcb, v18);
  }
  return (unsigned int)v35;
}
