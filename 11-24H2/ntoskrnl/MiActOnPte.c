/*
 * XREFs of MiActOnPte @ 0x14029B3E0
 * Callers:
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiCapturePageFileInfoInline @ 0x1402FAB00 (MiCapturePageFileInfoInline.c)
 *     MiClearResetPfn @ 0x1402FC454 (MiClearResetPfn.c)
 *     MI_CLEAR_RESET_PTE @ 0x1402FD264 (MI_CLEAR_RESET_PTE.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUpdateWsleAge @ 0x140303924 (MiUpdateWsleAge.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiUpdatePageTableUseCount @ 0x1403D1B50 (MiUpdatePageTableUseCount.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MI_IS_RESET_PTE @ 0x1403FE370 (MI_IS_RESET_PTE.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 **a7,
        __int64 *a8)
{
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // r15
  _KPROCESS *Process; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  __int16 v18; // r10
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  ULONG_PTR v33; // rsi
  unsigned __int64 v34; // rbx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax
  unsigned int v36; // ebx
  char v37; // al
  char v38; // dl
  __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  __int64 v41; // rcx
  char VaAge; // al
  __int64 v43; // r9
  unsigned __int8 updated; // al
  __int64 v45; // rax
  ULONG_PTR v46; // rbx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r14
  unsigned int v53; // r15d
  char v54; // cl
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 *v57; // r10
  __int64 PageFilePte; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // [rsp+30h] [rbp-99h] BYREF
  int v62; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v63; // [rsp+40h] [rbp-89h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+48h] [rbp-81h]
  char v65[24]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-51h]
  unsigned __int64 v67; // [rsp+80h] [rbp-49h]
  int v70; // [rsp+128h] [rbp+5Fh]
  int v71; // [rsp+128h] [rbp+5Fh]
  int v72; // [rsp+148h] [rbp+7Fh]
  int v73; // [rsp+148h] [rbp+7Fh]

  LODWORD(v8) = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = a3;
  v63 = 0LL;
  v62 = 0;
  *a8 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *a7 = 0LL;
  p_Blink = &Process[2].ReadyListHead.Blink;
LABEL_2:
  if ( !a4 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(v11);
    v15 = v14;
    v61 = v14;
    v16 = v14;
    v17 = v14;
    v18 = v14;
    v19 = v14;
    goto LABEL_4;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *a4;
      v61 = *a4;
      v15 = v61;
      v17 = v61;
      v18 = v61;
      v14 = v61;
      v19 = v61;
LABEL_4:
      if ( (v16 & 1) == 0 )
        break;
      if ( !a4 )
      {
        v20 = (v14 >> 12) & 0xFFFFFFFFFFLL;
        if ( v20 > qword_140E2DD20 )
          return 3221226548LL;
        v21 = 6 * v20;
        if ( (*(_QWORD *)(48 * v20 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 3221226548LL;
        v31 = 48 * v20 - 0x220000000000LL;
        if ( (*(_QWORD *)(v31 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v31 + 8) <= 0 )
        {
          v34 = *(_QWORD *)(v31 + 8) | 0x8000000000000000uLL;
          memset_0(v65, 0, 0x70uLL);
          IdealProcessorAssignmentBlock = Process[1].IdealProcessorAssignmentBlock;
          if ( IdealProcessorAssignmentBlock )
          {
            v66 = v34;
            v67 = v34;
            do
            {
              if ( v34 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
              {
                IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
              }
              else
              {
                if ( v34 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
                  break;
                IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
              }
            }
            while ( IdealProcessorAssignmentBlock );
            if ( IdealProcessorAssignmentBlock && *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16] )
              return 3221226548LL;
          }
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v36 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v17, v15, v19) )
            {
              HvlNotifyLongSpinWait(v36);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        v33 = a3;
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(a3) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        LOBYTE(v32) = v61;
LABEL_47:
        if ( a5 == 2 )
        {
          LOBYTE(v8) = a4 == 0LL;
          updated = MiUpdatePfnPriority(v31, a6, (unsigned int)v8);
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( updated != 0xFF && !a4 )
            MiUpdateWsleAge(p_Blink, v33, updated);
          if ( (*(_QWORD *)(v31 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v31 + 8) > 0 && !a4 )
            MiDemoteCombinedPte((__int64)p_Blink, v33, *(_QWORD *)(v31 + 8) | 0x8000000000000000uLL);
          return 0LL;
        }
        v37 = *(_BYTE *)(v31 + 34);
        if ( (v37 & 8) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        v38 = v37 & 0x10;
        if ( a5 == 1 )
        {
          if ( !v38 && (a4 || (v32 & 0x42) == 0) || (LODWORD(v8) = -1073740748, (v37 & 0x10) == 0) )
          {
            if ( (*(_DWORD *)(v31 + 16) & 4) == 0 )
            {
              v72 = *(_DWORD *)(v31 + 32);
              if ( (v72 & 0x80000) != 0
                && (unsigned int)MiCanPfnOriginalPteBeLost(v31)
                && (((*(_QWORD *)(v31 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v31 + 34) >> 4)) != 0 )
              {
                *(_QWORD *)(v31 + 16) &= ~4uLL;
              }
              BYTE2(v72) |= 0x10u;
              *(_DWORD *)(v31 + 32) = v72;
            }
          }
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v31 + 16)) )
            MiClearResetPfn(v31);
          else
            LODWORD(v8) = -1073740748;
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return (unsigned int)v8;
        }
        if ( v38 )
        {
          v70 = *(_DWORD *)(v31 + 32);
          if ( (v70 & 0x80000) != 0
            && (unsigned int)MiCanPfnOriginalPteBeLost(v31)
            && (((*(_QWORD *)(v31 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v31 + 34) >> 4)) != 0 )
          {
            *(_QWORD *)(v31 + 16) &= ~4uLL;
          }
          BYTE2(v70) &= ~0x10u;
          *(_DWORD *)(v31 + 32) = v70;
        }
        v39 = *(_QWORD *)(v31 + 16);
        if ( (v39 & 4) != 0 )
        {
          *(_QWORD *)(v31 + 16) &= ~4uLL;
        }
        else if ( (v39 & 2) == 0 )
        {
          v27 = a8;
          *a8 = 0LL;
          goto LABEL_23;
        }
        v27 = a8;
        *a8 = v39;
        if ( v39 )
        {
          v27 = (__int64 *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v31 + 40) >> 43) & 0x3FFLL));
          *a7 = v27;
        }
LABEL_23:
        v28 = *(_QWORD *)(v31 + 16);
        if ( v28 )
        {
          v8 = *(_QWORD *)(v31 + 16);
          if ( qword_140E2DCC0 )
          {
            if ( (v28 & 0x10) != 0 )
              LODWORD(v8) = v28 & 0xFFFFFFEF;
            else
              LODWORD(v8) = v28 & ~(_DWORD)qword_140E2DCC0;
          }
        }
        v63 = MiSwizzleInvalidPte((unsigned int)v8 | 0x100000000LL, v27);
        v63 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63) & 0xFFFFFFFFFFFFFFFDuLL;
        *(_QWORD *)(v31 + 16) = v63;
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !a4 && (v61 & 0x42) != 0 )
        {
          MiWriteValidPteNewProtection(v33, v61 & 0xFFFFFFFFFFFFFF9DuLL, v29);
          v40 = (__int64)(v33 << 25) >> 16;
          VaAge = MiGetVaAge(v41, v40);
          if ( VaAge != 1 && (unsigned __int8)VaAge < 7u )
          {
            LOBYTE(v43) = 1;
            MiSetVaAgeList(p_Blink, v40, 1LL, v43);
          }
          return 3221225505LL;
        }
        return 0LL;
      }
      v30 = MiLockLeafPage(a4, 0LL, v15, v19);
      v31 = v30;
      if ( v30 )
      {
        v32 = *a4;
        v61 = v32;
        if ( (v32 & 1) != 0 )
        {
          v33 = a3;
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v11 = a3;
    }
    if ( (v17 & 0x400) != 0 )
      return 0LL;
    if ( (v18 & 0x800) == 0 )
      break;
    if ( a4 )
    {
      v52 = MiLockLeafPage(a4, 0LL, v15, v19);
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v45 = MI_READ_PTE_LOCK_FREE(v11);
          v46 = v45;
          if ( (v45 & 0x800) == 0 )
            goto LABEL_180;
          if ( (unsigned int)MiInvalidPteConforms(v45) )
          {
            if ( qword_140E2DCC0 )
            {
              if ( (v46 & 0x10) != 0 )
                v47 &= ~0x10uLL;
              else
                v47 = v46 & ~qword_140E2DCC0;
            }
            v50 = (v47 >> 12) & 0xFFFFFFFFFFLL;
            v51 = 6 * v50;
            v52 = 48 * v50 - 0x220000000000LL;
            if ( v50 <= qword_140E2DD20 && (*(_QWORD *)(48 * v50 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
        v53 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v53 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v50, v51, v48, v49) )
            {
              HvlNotifyLongSpinWait(v53);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v52 + 24) < 0 );
        }
        v11 = a3;
        if ( MI_READ_PTE_LOCK_FREE(a3) == v46 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v52 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v52 = MiLockSpecialPurposeMemoryCachedPage(v52, 0);
        if ( !v52 )
        {
LABEL_180:
          v52 = 0LL;
          goto LABEL_111;
        }
      }
      if ( (*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL) != a3 && (*(_QWORD *)(v52 + 40) & 0x10000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x411uLL, a3, v46, *(_QWORD *)(v52 + 8));
    }
LABEL_111:
    if ( !v52 )
      goto LABEL_2;
    if ( !a4 || (v61 = *a4, (v61 & 1) == 0) )
    {
      if ( a5 == 2 )
      {
        MiUpdatePfnPriority(v52, a6, 1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
      v54 = *(_BYTE *)(v52 + 34);
      if ( (v54 & 7) == 2 )
      {
        if ( a5 != 1 )
        {
          if ( (v54 & 0x28) == 0 )
          {
            v55 = *(_QWORD *)(v52 + 16);
            if ( (v55 & 4) != 0 )
            {
              *(_QWORD *)(v52 + 16) &= ~4uLL;
            }
            else if ( (v55 & 2) == 0 )
            {
              *a8 = 0LL;
              goto LABEL_158;
            }
            *a8 = v55;
            if ( v55 )
              *a7 = (__int64 *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v52 + 40) >> 43) & 0x3FFLL));
LABEL_158:
            v61 = MiUpdatePageFileHighInPte(*(_QWORD *)(v52 + 16), 1LL);
            MiClearPageFileReservation(&v61);
            *(_QWORD *)(v52 + 16) = v61;
          }
LABEL_159:
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return (unsigned int)v8;
        }
        if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v52 + 16)) )
          MiClearResetPfn(v52);
        else
          LODWORD(v8) = -1073740748;
        if ( (*(_DWORD *)(v52 + 16) & 4) != 0 )
          goto LABEL_159;
        MiSetPfnModified(v52, 1);
        if ( (unsigned __int16)*(_DWORD *)(v52 + 32) )
        {
          v73 = *(_DWORD *)(v52 + 32);
          BYTE2(v73) = BYTE2(v73) & 0xF8 | 3;
          *(_DWORD *)(v52 + 32) = v73;
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return (unsigned int)v8;
        }
        if ( (MiUnlinkPageFromListEx(v52) & 3) == 0 )
        {
          MiInsertPageInList(v52, 8LL);
          goto LABEL_159;
        }
        MiDiscardTransitionPteEx(v52);
LABEL_195:
        LODWORD(v8) = -1073740748;
        goto LABEL_159;
      }
      if ( (v54 & 7) != 3 )
        goto LABEL_159;
      if ( a5 == 1 )
        goto LABEL_195;
      if ( (v54 & 8) != 0 || a5 || (v54 & 0x20) != 0 )
        goto LABEL_159;
      if ( (unsigned __int16)*(_DWORD *)(v52 + 32) )
      {
        v71 = *(_DWORD *)(v52 + 32);
        BYTE2(v71) = BYTE2(v71) & 0xF8 | 2;
        *(_DWORD *)(v52 + 32) = v71;
      }
      else
      {
        MiUnlinkPageFromListEx(v52);
      }
      MiSetPfnModified(v52, 0);
      v60 = *(_QWORD *)(v52 + 16);
      if ( (v60 & 4) != 0 )
      {
        *(_QWORD *)(v52 + 16) &= ~4uLL;
      }
      else if ( (v60 & 2) == 0 )
      {
        *a8 = 0LL;
LABEL_172:
        v61 = MiUpdatePageFileHighInPte(*(_QWORD *)(v52 + 16), 1LL);
        MiClearPageFileReservation(&v61);
        *(_QWORD *)(v52 + 16) = v61;
        if ( !(unsigned __int16)*(_DWORD *)(v52 + 32) )
          MiInsertPageInList(v52, 4LL);
        goto LABEL_159;
      }
      *a8 = v60;
      if ( v60 )
        *a7 = (__int64 *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v52 + 40) >> 43) & 0x3FFLL));
      goto LABEL_172;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a5 == 2 )
    return 0LL;
  if ( !v19 )
  {
    if ( !a4 && !a5 && !MiCheckUserVirtualAddress((__int64)(v11 << 25) >> 16, a1, v15, &v62) && v62 != 24 )
    {
      MiUpdatePageTableUseCount((__int64)(v11 << 25) >> 16);
      PageFilePte = MiMakePageFilePte(1LL);
      *(_QWORD *)v11 = v59 ^ (v59 ^ PageFilePte) & 0xFFFFFFFFFFFFFC1FuLL;
      return 0LL;
    }
    return 3221226548LL;
  }
  if ( a4 && a2 )
  {
    MiSharedVaToPartition(&Process[2].ReadyListHead.Blink, (__int64)(v11 << 25) >> 16, a4);
    v15 = v61;
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
  {
    if ( a5 == 1 )
      return 3221226548LL;
    v56 = MiCapturePageFileInfoInline(&v61, 1LL);
    *a8 = v56;
    if ( v56 )
    {
      *a7 = v57;
      if ( !a4 )
      {
        _InterlockedDecrement64((volatile signed __int64 *)Process[1].Padding);
        a4 = (__int64 *)v11;
      }
      *a4 = v61;
    }
    return 0LL;
  }
  if ( a5 != 1 )
  {
    if ( (v23 & 2) != 0 )
    {
      if ( (v23 & 0x400) == 0 && ((v23 & 4) != 0 || (v23 & 2) != 0) && v23 )
        MiReleasePageFileInfo(v25, v23, 1LL, v24);
      MiClearPageFileReservation(&v61);
      v23 = v61;
    }
    v26 = MiUpdatePageFileHighInPte(v23, 1LL);
    v61 = v26;
    if ( a4 )
      v11 = (unsigned __int64)a4;
    *(_QWORD *)v11 = v26;
    return 0LL;
  }
  if ( !(unsigned int)MI_IS_RESET_PTE(v23) )
    return 3221226548LL;
  MI_CLEAR_RESET_PTE(&v61);
  if ( a4 )
    v11 = (unsigned __int64)a4;
  *(_QWORD *)v11 = v61;
  return 0LL;
}
