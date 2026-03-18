/*
 * XREFs of MiActOnPte @ 0x140237188
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14020D6D0 (MiCapturePageFileInfoInline.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiMakePageFilePte @ 0x14022828C (MiMakePageFilePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiUpdateWsleAge @ 0x140248264 (MiUpdateWsleAge.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiUpdatePageTableUseCount @ 0x1403DEED0 (MiUpdatePageTableUseCount.c)
 *     MI_IS_RESET_PTE @ 0x1403FB340 (MI_IS_RESET_PTE.c)
 *     MI_CLEAR_RESET_PTE @ 0x14045BA80 (MI_CLEAR_RESET_PTE.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  unsigned int v8; // r15d
  __int64 *v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  char v16; // cl
  __int16 v17; // r9
  __int16 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  ULONG_PTR v30; // rdi
  char v31; // cl
  int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  unsigned int v37; // ebx
  char v38; // dl
  char v39; // al
  __int64 v40; // rcx
  char updated; // al
  __int64 v42; // r8
  __int64 PageFilePte; // rax
  __int64 v44; // rdx
  unsigned int v45; // ebx
  __int64 v46; // rsi
  __int64 v47; // rcx
  unsigned __int8 VaAge; // al
  __int64 v49; // r9
  __int64 v50; // rcx
  char v51; // al
  ULONG_PTR v52; // rcx
  unsigned int v53; // edx
  __int64 v54; // [rsp+30h] [rbp-20h] BYREF
  __int64 v55; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-10h]
  struct _LIST_ENTRY **p_Blink; // [rsp+A8h] [rbp+58h]
  int v60; // [rsp+A8h] [rbp+58h]
  int v61; // [rsp+C0h] [rbp+70h]

  v8 = 0;
  v9 = a8;
  v55 = 0LL;
  LODWORD(a8) = 0;
  *a7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  *v9 = 0LL;
  Process = CurrentThread->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
LABEL_2:
  if ( !a4 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(a3);
    v15 = v14;
    v54 = v14;
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
      v54 = *a4;
      v15 = v54;
      v17 = v54;
      v18 = v54;
      v14 = v54;
      v19 = v54;
LABEL_4:
      if ( (v16 & 1) == 0 )
        break;
      if ( !a4 )
      {
        v24 = (v14 >> 12) & 0xFFFFFFFFFFLL;
        if ( v24 > qword_140E2D9A0 )
          return 3221226548LL;
        v25 = 6 * v24;
        if ( (*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 3221226548LL;
        v30 = 48 * v24 - 0x220000000000LL;
        if ( (*(_QWORD *)(v30 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v30 + 8) <= 0 )
        {
          if ( MiLocateCloneAddress(Process, *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL, v15) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        v37 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v37 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25) )
            {
              HvlNotifyLongSpinWait(v37);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v30 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(a3) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        LOBYTE(v36) = v54;
LABEL_65:
        if ( a5 == 2 )
        {
          updated = MiUpdatePfnPriority(v30, a6, a4 == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( updated != -1 && !a4 )
          {
            LOBYTE(v42) = updated;
            MiUpdateWsleAge(p_Blink, a3, v42);
          }
          if ( (*(_QWORD *)(v30 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v30 + 8) > 0 && !a4 )
            MiDemoteCombinedPte(p_Blink, a3, *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL);
          return 0LL;
        }
        v38 = *(_BYTE *)(v30 + 34);
        if ( (v38 & 8) != 0 )
        {
          v45 = -1073740748;
          goto LABEL_98;
        }
        v39 = v38 & 0x10;
        if ( a5 == 1 )
        {
          v32 = 0;
          if ( !v39 && (a4 || (v36 & 0x42) == 0) || (v32 = -1073740748, (v38 & 0x10) == 0) )
          {
            if ( (*(_DWORD *)(v30 + 16) & 4) == 0 )
              MiSetPfnModified(v30, 1LL);
          }
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v30 + 16)) )
          {
            *(_QWORD *)(v30 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), 0LL);
            goto LABEL_97;
          }
          goto LABEL_170;
        }
        if ( v39 )
          MiSetPfnModified(v30, 0LL);
        v40 = *(_QWORD *)(v30 + 16);
        if ( (v40 & 4) != 0 )
        {
          *(_QWORD *)(v30 + 16) &= ~4uLL;
        }
        else if ( (v40 & 2) == 0 )
        {
          *v9 = 0LL;
LABEL_102:
          v55 = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), 1LL);
          MiClearPageFileReservation(&v55);
          *(_QWORD *)(v30 + 16) = v55;
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( a4 || (v54 & 0x42) == 0 )
            return 0LL;
          v54 &= 0xFFFFFFFFFFFFFF9DuLL;
          MiWriteValidPteNewProtection(a3);
          v46 = (__int64)(a3 << 25) >> 16;
          VaAge = MiGetVaAge(v47, v46);
          if ( VaAge != 1 && VaAge < 7u )
          {
            LOBYTE(v49) = 1;
            MiSetVaAgeList(p_Blink, v46, 1LL, v49);
          }
          return 3221225505LL;
        }
        *v9 = v40;
        if ( v40 )
          *a7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
        goto LABEL_102;
      }
      v30 = MiLockLeafPage(a4, 0LL);
      if ( v30 )
      {
        v36 = *a4;
        v54 = v36;
        if ( (v36 & 1) != 0 )
          goto LABEL_65;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v8 = 0;
    }
    if ( (v17 & 0x400) != 0 )
      return 0LL;
    if ( (v18 & 0x800) == 0 )
    {
      if ( a5 == 2 )
        return 0LL;
      if ( v19 )
      {
        if ( a4 && a2 )
        {
          MiSharedVaToPartition(&Process[2].ReadyListHead.Blink, (__int64)(a3 << 25) >> 16, a4);
          v15 = v54;
        }
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
        {
          if ( a5 != 1 )
          {
            v34 = MiCapturePageFileInfoInline(&v54, 1, 0);
            *v9 = v34;
            if ( v34 )
            {
              *a7 = v35;
              if ( !a4 )
              {
                _InterlockedDecrement64((volatile signed __int64 *)Process[1].Padding);
                a4 = (__int64 *)a3;
              }
              *a4 = v54;
            }
            return 0LL;
          }
        }
        else
        {
          if ( a5 != 1 )
          {
            if ( (v20 & 2) != 0 )
            {
              v56 = v20;
              if ( (v20 & 0x400) == 0 && ((v56 & 4) != 0 || (v56 & 2) != 0) )
              {
                if ( v56 )
                  MiReleasePageFileInfo(v21, v56, 1);
              }
              MiClearPageFileReservation(&v54);
              v20 = v54;
            }
            v22 = MiUpdatePageFileHighInPte(v20, 1LL);
            v54 = v22;
LABEL_14:
            if ( a4 )
              a3 = (unsigned __int64)a4;
LABEL_16:
            *(_QWORD *)a3 = v22;
            return 0LL;
          }
          if ( (unsigned int)MI_IS_RESET_PTE(v20) )
          {
            MI_CLEAR_RESET_PTE(&v54);
            v22 = v54;
            goto LABEL_14;
          }
        }
      }
      else if ( !a4 && !a5 && !MiCheckUserVirtualAddress((__int64)(a3 << 25) >> 16, a1, v15, &a8) && (_DWORD)a8 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(a3 << 25) >> 16, 1LL);
        PageFilePte = MiMakePageFilePte(1LL);
        v22 = v44 ^ (v44 ^ PageFilePte) & 0xFFFFFFFFFFFFFC1FuLL;
        v54 = v22;
        goto LABEL_16;
      }
      return 3221226548LL;
    }
    if ( a4 )
    {
      v30 = MiLockLeafPage(a4, 0LL);
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = MI_READ_PTE_LOCK_FREE(a3);
          v27 = v26;
          if ( (v26 & 0x800) == 0 )
            goto LABEL_158;
          if ( MiInvalidPteConforms(v26) )
          {
            if ( qword_140E2D940 )
            {
              if ( (v27 & 0x10) != 0 )
                v28 &= ~0x10uLL;
              else
                v28 = v27 & ~qword_140E2D940;
            }
            v29 = (v28 >> 12) & 0xFFFFFFFFFFLL;
            v30 = 48 * v29 - 0x220000000000LL;
            if ( v29 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v29 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v8 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
            {
              HvlNotifyLongSpinWait(v8);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v30 + 24) < 0 );
        }
        if ( MI_READ_PTE_LOCK_FREE(a3) == v27 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v8 = 0;
      }
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v8 = 0;
        v30 = MiLockSpecialPurposeMemoryCachedPage(v30, 0LL);
        if ( !v30 )
        {
LABEL_158:
          v30 = 0LL;
          goto LABEL_39;
        }
      }
      else
      {
        v8 = 0;
      }
      if ( (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != a3 && (*(_QWORD *)(v30 + 40) & 0x10000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x411uLL, a3, v27, *(_QWORD *)(v30 + 8));
    }
LABEL_39:
    if ( !v30 )
      goto LABEL_2;
    if ( !a4 )
      break;
    v54 = *a4;
    if ( (v54 & 1) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a5 == 2 )
  {
    MiUpdatePfnPriority(v30, a6, 1LL);
    v45 = 0;
  }
  else
  {
    v31 = *(_BYTE *)(v30 + 34);
    v32 = 0;
    if ( (v31 & 7) == 2 )
    {
      if ( a5 != 1 )
      {
        if ( (v31 & 0x28) == 0 )
        {
          v33 = *(_QWORD *)(v30 + 16);
          if ( (v33 & 4) != 0 )
          {
            *(_QWORD *)(v30 + 16) &= ~4uLL;
          }
          else if ( (v33 & 2) == 0 )
          {
            *v9 = 0LL;
            goto LABEL_96;
          }
          *v9 = v33;
          if ( v33 )
            *a7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
LABEL_96:
          v54 = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), 1LL);
          MiClearPageFileReservation(&v54);
          *(_QWORD *)(v30 + 16) = v54;
        }
        goto LABEL_97;
      }
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v30 + 16)) )
        *(_QWORD *)(v30 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), 0LL);
      else
        v32 = -1073740748;
      if ( (*(_DWORD *)(v30 + 16) & 4) != 0 )
        goto LABEL_97;
      MiSetPfnModified(v30, 1LL);
      if ( (unsigned __int16)*(_DWORD *)(v30 + 32) )
      {
        v61 = *(_DWORD *)(v30 + 32);
        BYTE2(v61) = BYTE2(v61) & 0xF8 | 3;
        *(_DWORD *)(v30 + 32) = v61;
        goto LABEL_97;
      }
      v51 = MiUnlinkPageFromListEx(v30, 0);
      v52 = v30;
      if ( (v51 & 3) == 0 )
      {
        v53 = 8;
LABEL_156:
        MiInsertPageInList(v52, v53);
        goto LABEL_97;
      }
      MiDiscardTransitionPteEx(v30, 0LL);
LABEL_170:
      v32 = -1073740748;
      goto LABEL_97;
    }
    if ( (v31 & 7) != 3 )
      goto LABEL_97;
    if ( a5 == 1 )
    {
      v32 = -1073740748;
      goto LABEL_97;
    }
    if ( (v31 & 8) == 0 && !a5 && (v31 & 0x20) == 0 )
    {
      if ( (unsigned __int16)*(_DWORD *)(v30 + 32) )
      {
        v60 = *(_DWORD *)(v30 + 32);
        BYTE2(v60) = BYTE2(v60) & 0xF8 | 2;
        *(_DWORD *)(v30 + 32) = v60;
      }
      else
      {
        MiUnlinkPageFromListEx(v30, 0);
      }
      MiSetPfnModified(v30, 0LL);
      v50 = *(_QWORD *)(v30 + 16);
      if ( (v50 & 4) != 0 )
      {
        *(_QWORD *)(v30 + 16) &= ~4uLL;
      }
      else if ( (v50 & 2) == 0 )
      {
        *v9 = 0LL;
LABEL_154:
        v54 = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), 1LL);
        MiClearPageFileReservation(&v54);
        *(_QWORD *)(v30 + 16) = v54;
        if ( (unsigned __int16)*(_DWORD *)(v30 + 32) )
          goto LABEL_97;
        v53 = 4;
        v52 = v30;
        goto LABEL_156;
      }
      *v9 = v50;
      if ( v50 )
        *a7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
      goto LABEL_154;
    }
LABEL_97:
    v45 = v32;
  }
LABEL_98:
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v45;
}
