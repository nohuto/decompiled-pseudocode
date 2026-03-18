/*
 * XREFs of MiActOnPte @ 0x14028B7E0
 * Callers:
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiClearResetPfn @ 0x140229254 (MiClearResetPfn.c)
 *     MI_CLEAR_RESET_PTE @ 0x140229FF4 (MI_CLEAR_RESET_PTE.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUpdateWsleAge @ 0x14022F78C (MiUpdateWsleAge.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiGetVaAge @ 0x1402871E0 (MiGetVaAge.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MI_IS_RESET_PTE @ 0x140368EE0 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiCapturePageFileInfoInline @ 0x14039D800 (MiCapturePageFileInfoInline.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     MiMakePageFilePte @ 0x14039F4D8 (MiMakePageFilePte.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiUpdatePageTableUseCount @ 0x1403E3650 (MiUpdatePageTableUseCount.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 *a4,
        int a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 *a8)
{
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // r15
  _KPROCESS *Process; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  char v16; // cl
  __int16 v17; // dx
  __int16 v18; // r10
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax
  unsigned int v33; // ebx
  char v34; // al
  char v35; // dl
  __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  __int64 v38; // rcx
  char VaAge; // al
  char updated; // al
  __int64 v41; // rax
  __int64 v42; // r8
  ULONG_PTR v43; // rbx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // r14
  unsigned int v47; // r15d
  char v48; // cl
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r10
  __int64 PageFilePte; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // [rsp+30h] [rbp-99h] BYREF
  int v57; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-89h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+48h] [rbp-81h]
  char v60[24]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-51h]
  unsigned __int64 v62; // [rsp+80h] [rbp-49h]
  int v65; // [rsp+128h] [rbp+5Fh]
  int v66; // [rsp+128h] [rbp+5Fh]
  int v67; // [rsp+148h] [rbp+7Fh]
  int v68; // [rsp+148h] [rbp+7Fh]

  LODWORD(v8) = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = a3;
  v58 = 0LL;
  v57 = 0;
  *a8 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *a7 = 0LL;
  p_Blink = &Process[2].ReadyListHead.Blink;
LABEL_2:
  if ( !a4 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(v11);
    v15 = v14;
    v56 = v14;
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
      v56 = *a4;
      v15 = v56;
      v17 = v56;
      v18 = v56;
      v14 = v56;
      v19 = v56;
LABEL_4:
      if ( (v16 & 1) == 0 )
        break;
      if ( !a4 )
      {
        v20 = (v14 >> 12) & 0xFFFFFFFFFFLL;
        if ( v20 > qword_140E2DBE0 )
          return 3221226548LL;
        v21 = 6 * v20;
        if ( (*(_QWORD *)(48 * v20 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 3221226548LL;
        v28 = 48 * v20 - 0x220000000000LL;
        if ( (*(_QWORD *)(v28 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v28 + 8) <= 0 )
        {
          v31 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
          memset_0(v60, 0, 0x70uLL);
          IdealProcessorAssignmentBlock = Process[1].IdealProcessorAssignmentBlock;
          if ( IdealProcessorAssignmentBlock )
          {
            v61 = v31;
            v62 = v31;
            do
            {
              if ( v31 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
              {
                IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
              }
              else
              {
                if ( v31 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
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
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v28 + 24) < 0 );
        }
        v30 = a3;
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(a3) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        LOBYTE(v29) = v56;
LABEL_47:
        if ( a5 == 2 )
        {
          LOBYTE(v8) = a4 == 0LL;
          updated = MiUpdatePfnPriority(v28, a6, (unsigned int)v8);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( updated != -1 && !a4 )
            MiUpdateWsleAge((__int64)p_Blink, v30, updated);
          if ( (*(_QWORD *)(v28 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v28 + 8) > 0 && !a4 )
            MiDemoteCombinedPte(p_Blink, v30, *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL);
          return 0LL;
        }
        v34 = *(_BYTE *)(v28 + 34);
        if ( (v34 & 8) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        v35 = v34 & 0x10;
        if ( a5 == 1 )
        {
          if ( !v35 && (a4 || (v29 & 0x42) == 0) || (LODWORD(v8) = -1073740748, (v34 & 0x10) == 0) )
          {
            if ( (*(_DWORD *)(v28 + 16) & 4) == 0 )
            {
              v67 = *(_DWORD *)(v28 + 32);
              if ( (v67 & 0x80000) != 0
                && (unsigned int)MiCanPfnOriginalPteBeLost(v28)
                && (((*(_QWORD *)(v28 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v28 + 34) >> 4)) != 0 )
              {
                *(_QWORD *)(v28 + 16) &= ~4uLL;
              }
              BYTE2(v67) |= 0x10u;
              *(_DWORD *)(v28 + 32) = v67;
            }
          }
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v28 + 16)) )
            MiClearResetPfn(v28);
          else
            LODWORD(v8) = -1073740748;
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return (unsigned int)v8;
        }
        if ( v35 )
        {
          v65 = *(_DWORD *)(v28 + 32);
          if ( (v65 & 0x80000) != 0
            && (unsigned int)MiCanPfnOriginalPteBeLost(v28)
            && (((*(_QWORD *)(v28 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v28 + 34) >> 4)) != 0 )
          {
            *(_QWORD *)(v28 + 16) &= ~4uLL;
          }
          BYTE2(v65) &= ~0x10u;
          *(_DWORD *)(v28 + 32) = v65;
        }
        v36 = *(_QWORD *)(v28 + 16);
        if ( (v36 & 4) != 0 )
        {
          *(_QWORD *)(v28 + 16) &= ~4uLL;
        }
        else if ( (v36 & 2) == 0 )
        {
          *a8 = 0LL;
          goto LABEL_23;
        }
        *a8 = v36;
        if ( v36 )
          *a7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
LABEL_23:
        v26 = *(_QWORD *)(v28 + 16);
        if ( v26 )
        {
          v8 = *(_QWORD *)(v28 + 16);
          if ( qword_140E2DB80 )
          {
            if ( (v26 & 0x10) != 0 )
              LODWORD(v8) = v26 & 0xFFFFFFEF;
            else
              LODWORD(v8) = v26 & ~(_DWORD)qword_140E2DB80;
          }
        }
        v58 = MiSwizzleInvalidPte((unsigned int)v8 | 0x100000000LL);
        v58 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v58) & 0xFFFFFFFFFFFFFFFDuLL;
        *(_QWORD *)(v28 + 16) = v58;
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !a4 && (v56 & 0x42) != 0 )
        {
          MiWriteValidPteNewProtection(v30, v56 & 0xFFFFFFFFFFFFFF9DuLL);
          v37 = (__int64)(v30 << 25) >> 16;
          VaAge = MiGetVaAge(v38, v37);
          if ( VaAge != 1 && (unsigned __int8)VaAge < 7u )
            MiSetVaAgeList((__int64)p_Blink, v37, 1u, 1u);
          return 3221225505LL;
        }
        return 0LL;
      }
      v27 = MiLockLeafPage(a4, 0LL, v15, v19);
      v28 = v27;
      if ( v27 )
      {
        v29 = *a4;
        v56 = v29;
        if ( (v29 & 1) != 0 )
        {
          v30 = a3;
          goto LABEL_47;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v11 = a3;
    }
    if ( (v17 & 0x400) != 0 )
      return 0LL;
    if ( (v18 & 0x800) == 0 )
      break;
    if ( a4 )
    {
      v46 = MiLockLeafPage(a4, 0LL, v15, v19);
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v41 = MI_READ_PTE_LOCK_FREE(v11);
          v43 = v41;
          if ( (v41 & 0x800) == 0 )
            goto LABEL_180;
          if ( (unsigned int)MiInvalidPteConforms(v41) )
          {
            if ( qword_140E2DB80 )
            {
              if ( (v43 & 0x10) != 0 )
                v44 &= ~0x10uLL;
              else
                v44 = v43 & ~qword_140E2DB80;
            }
            v45 = (v44 >> 12) & 0xFFFFFFFFFFLL;
            v46 = 48 * v45 - 0x220000000000LL;
            if ( v45 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v45 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
        v47 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v47 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v45) )
            {
              HvlNotifyLongSpinWait(v47);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v46 + 24) < 0 );
        }
        v11 = a3;
        if ( MI_READ_PTE_LOCK_FREE(a3) == v43 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v46 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v46 = MiLockSpecialPurposeMemoryCachedPage(v46, 0);
        if ( !v46 )
        {
LABEL_180:
          v46 = 0LL;
          goto LABEL_111;
        }
      }
      if ( (*(_QWORD *)(v46 + 8) | 0x8000000000000000uLL) != a3 && (*(_QWORD *)(v46 + 40) & 0x10000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x411uLL, a3, v43, *(_QWORD *)(v46 + 8));
    }
LABEL_111:
    if ( !v46 )
      goto LABEL_2;
    if ( !a4 || (v56 = *a4, (v56 & 1) == 0) )
    {
      if ( a5 == 2 )
      {
        MiUpdatePfnPriority(v46, a6, 1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
      v48 = *(_BYTE *)(v46 + 34);
      if ( (v48 & 7) == 2 )
      {
        if ( a5 != 1 )
        {
          if ( (v48 & 0x28) == 0 )
          {
            v49 = *(_QWORD *)(v46 + 16);
            if ( (v49 & 4) != 0 )
            {
              *(_QWORD *)(v46 + 16) &= ~4uLL;
            }
            else if ( (v49 & 2) == 0 )
            {
              *a8 = 0LL;
              goto LABEL_158;
            }
            *a8 = v49;
            if ( v49 )
              *a7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v46 + 40) >> 43) & 0x3FFLL));
LABEL_158:
            v56 = MiUpdatePageFileHighInPte(*(_QWORD *)(v46 + 16), 1LL, v42);
            MiClearPageFileReservation(&v56);
            *(_QWORD *)(v46 + 16) = v56;
          }
LABEL_159:
          _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return (unsigned int)v8;
        }
        if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v46 + 16)) )
          MiClearResetPfn(v46);
        else
          LODWORD(v8) = -1073740748;
        if ( (*(_DWORD *)(v46 + 16) & 4) != 0 )
          goto LABEL_159;
        MiSetPfnModified(v46, 1LL);
        if ( (unsigned __int16)*(_DWORD *)(v46 + 32) )
        {
          v68 = *(_DWORD *)(v46 + 32);
          BYTE2(v68) = BYTE2(v68) & 0xF8 | 3;
          *(_DWORD *)(v46 + 32) = v68;
          _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return (unsigned int)v8;
        }
        if ( (MiUnlinkPageFromListEx(v46, 0) & 3) == 0 )
        {
          MiInsertPageInList(v46, 8u);
          goto LABEL_159;
        }
        MiDiscardTransitionPteEx(v46, 0LL);
LABEL_195:
        LODWORD(v8) = -1073740748;
        goto LABEL_159;
      }
      if ( (v48 & 7) != 3 )
        goto LABEL_159;
      if ( a5 == 1 )
        goto LABEL_195;
      if ( (v48 & 8) != 0 || a5 || (v48 & 0x20) != 0 )
        goto LABEL_159;
      if ( (unsigned __int16)*(_DWORD *)(v46 + 32) )
      {
        v66 = *(_DWORD *)(v46 + 32);
        BYTE2(v66) = BYTE2(v66) & 0xF8 | 2;
        *(_DWORD *)(v46 + 32) = v66;
      }
      else
      {
        MiUnlinkPageFromListEx(v46, 0);
      }
      MiSetPfnModified(v46, 0LL);
      v55 = *(_QWORD *)(v46 + 16);
      if ( (v55 & 4) != 0 )
      {
        *(_QWORD *)(v46 + 16) &= ~4uLL;
      }
      else if ( (v55 & 2) == 0 )
      {
        *a8 = 0LL;
LABEL_172:
        v56 = MiUpdatePageFileHighInPte(*(_QWORD *)(v46 + 16), 1LL, v54);
        MiClearPageFileReservation(&v56);
        *(_QWORD *)(v46 + 16) = v56;
        if ( !(unsigned __int16)*(_DWORD *)(v46 + 32) )
          MiInsertPageInList(v46, 4u);
        goto LABEL_159;
      }
      *a8 = v55;
      if ( v55 )
        *a7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v46 + 40) >> 43) & 0x3FFLL));
      goto LABEL_172;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a5 == 2 )
    return 0LL;
  if ( !v19 )
  {
    if ( !a4 && !a5 && !MiCheckUserVirtualAddress((__int64)(v11 << 25) >> 16, a1, v15, &v57) && v57 != 24 )
    {
      MiUpdatePageTableUseCount((__int64)(v11 << 25) >> 16);
      PageFilePte = MiMakePageFilePte(1LL);
      *(_QWORD *)v11 = v53 ^ (v53 ^ PageFilePte) & 0xFFFFFFFFFFFFFC1FuLL;
      return 0LL;
    }
    return 3221226548LL;
  }
  if ( a4 && a2 )
  {
    MiSharedVaToPartition((__int64)&Process[2].ReadyListHead.Blink, (__int64)(v11 << 25) >> 16, a4);
    v15 = v56;
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
  {
    if ( a5 == 1 )
      return 3221226548LL;
    v50 = MiCapturePageFileInfoInline(&v56, 1LL);
    *a8 = v50;
    if ( v50 )
    {
      *a7 = v51;
      if ( !a4 )
      {
        _InterlockedDecrement64((volatile signed __int64 *)Process[1].Padding);
        a4 = (__int64 *)v11;
      }
      *a4 = v56;
    }
    return 0LL;
  }
  if ( a5 != 1 )
  {
    if ( (v23 & 2) != 0 )
    {
      if ( (v23 & 0x400) == 0 && ((v23 & 4) != 0 || (v23 & 2) != 0) && v23 )
        MiReleasePageFileInfo(v24, v23, 1LL);
      MiClearPageFileReservation(&v56);
      v23 = v56;
    }
    v25 = MiUpdatePageFileHighInPte(v23, 1LL, v23);
    v56 = v25;
    if ( a4 )
      v11 = (unsigned __int64)a4;
    *(_QWORD *)v11 = v25;
    return 0LL;
  }
  if ( !(unsigned int)MI_IS_RESET_PTE(v23) )
    return 3221226548LL;
  MI_CLEAR_RESET_PTE(&v56);
  if ( a4 )
    v11 = (unsigned __int64)a4;
  *(_QWORD *)v11 = v56;
  return 0LL;
}
