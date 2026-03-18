/*
 * XREFs of MmCheckCachedPageStates @ 0x140280E90
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcMapAndRead @ 0x140280CF0 (CcMapAndRead.c)
 *     CcFetchDataForRead @ 0x1402820F0 (CcFetchDataForRead.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x14045C1D0 (CcMapDataForOverwrite.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDirtyPte @ 0x140241184 (MiDirtyPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiPfnZeroingNeeded @ 0x140268E10 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceControlAreaPfn @ 0x1402E68C4 (MiReferenceControlAreaPfn.c)
 *     MiSystemCacheVaControlArea @ 0x1402EE150 (MiSystemCacheVaControlArea.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D6A8C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D8538 (MiFreeTransitionPageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r14
  char v5; // si
  int v6; // r13d
  __int64 v7; // r15
  ULONG_PTR v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // r8
  char v12; // r9
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  __int64 v19; // r11
  ULONG_PTR v20; // rsi
  __int64 v21; // r12
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned int v31; // ebx
  __int64 v32; // rax
  unsigned int v33; // eax
  int v34; // r8d
  int v35; // ecx
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v37; // rbx
  __int64 v38; // rax
  bool v39; // zf
  BOOL v40; // esi
  unsigned __int32 v41; // eax
  __int64 Page; // rax
  __int64 v43; // r8
  BOOL v44; // eax
  __int64 v45; // rbx
  ULONG_PTR v46; // rax
  __int64 AnyMultiplexedVm; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v49; // eax
  unsigned int Flink; // ecx
  __int64 v51; // rax
  int v52; // eax
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r14
  struct _SLIST_ENTRY *TransitionHeatBatch; // rbx
  unsigned __int8 v58; // [rsp+20h] [rbp-128h] BYREF
  char v59; // [rsp+21h] [rbp-127h]
  __int64 v60; // [rsp+28h] [rbp-120h]
  unsigned int v61; // [rsp+30h] [rbp-118h]
  unsigned int v62; // [rsp+34h] [rbp-114h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-110h]
  __int64 v64; // [rsp+40h] [rbp-108h]
  __int64 v65; // [rsp+48h] [rbp-100h]
  __int64 v66; // [rsp+50h] [rbp-F8h]
  __int64 v67; // [rsp+58h] [rbp-F0h]
  __int64 v68; // [rsp+60h] [rbp-E8h]
  char *v69; // [rsp+68h] [rbp-E0h]
  __int128 v70; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v71[16]; // [rsp+80h] [rbp-C8h] BYREF

  v4 = a4;
  v5 = 1;
  v69 = a4;
  v62 = a3;
  v59 = 1;
  v70 = 0LL;
  v6 = 0;
  v58 = 17;
  v7 = 0LL;
  v60 = 0LL;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = MiSystemCacheVaControlArea(a1, (v9 >> 9) & 0x7FFFFFFFF8LL, 0LL, a3);
  v66 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v64 + 60) & 0x3FF));
  if ( v9 > v10 )
    goto LABEL_2;
  v56 = v64;
  v17 = 0xFFFFFFFFFFLL;
  v19 = 0x40000000000000LL;
  v18 = 0xFFFFDE0000000028uLL;
  do
  {
    v14 = *(_QWORD *)v9;
    if ( (*(_QWORD *)v9 & 1) != 0 )
    {
      if ( (v12 & 4) == 0 )
        goto LABEL_7;
      if ( v11 )
      {
        MiUnlockProtoPoolPage(v11, v58);
        v15 = 0LL;
        v60 = 0LL;
      }
      else
      {
        v15 = v60;
      }
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
      MiDirtyPte(AnyMultiplexedVm, (__int64 *)v9, v14);
      goto LABEL_8;
    }
    v20 = v8;
    v21 = *(_QWORD *)v9;
    v68 = *(_QWORD *)v9 & 8LL;
    if ( qword_140E2DB80 )
    {
      if ( (v14 & 0x10) != 0 )
        v21 = v14 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v21 = v14 & ~qword_140E2DB80;
    }
    v8 = v21 >> 16;
    v22 = v20 & 0xFFFFFFFFFFFFF000uLL;
    v23 = v8 & 0xFFFFFFFFFFFFF000uLL;
    if ( v11 )
    {
      if ( v23 == v22 )
      {
        v25 = v60;
        goto LABEL_34;
      }
      MiUnlockProtoPoolPage(v11, v58);
    }
    if ( v23 != v22 && (_DWORD)v7 )
    {
      MiMakeSystemCacheRangeValid(v9 - 8LL * (unsigned int)v7, (__int64)v71, v7);
      v7 = 0LL;
    }
    v24 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 1) == 0 && (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
    {
      v25 = 0LL;
      v60 = 0LL;
      goto LABEL_65;
    }
    v25 = MiLockProtoPoolPageForce(v8, &v58);
    v60 = v25;
    v17 = 0xFFFFFFFFFFLL;
    v18 = 0xFFFFDE0000000028uLL;
    v19 = 0x40000000000000LL;
LABEL_34:
    v65 = 0LL;
    v24 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 1) == 0 && (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
      goto LABEL_65;
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)v8;
        v64 = v26;
        v27 = v26;
        if ( (v26 & 1) != 0 )
          goto LABEL_41;
        if ( (v26 & 0xC00) != 0x800 )
        {
          v24 = *(_QWORD *)v8;
          goto LABEL_79;
        }
        if ( (unsigned int)MiInvalidPteConforms(v26) )
        {
          v27 = v26;
          if ( qword_140E2DB80 )
          {
            if ( (v26 & 0x10) != 0 )
              v27 = v26 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v27 = v26 & ~qword_140E2DB80;
          }
LABEL_41:
          v28 = v17 & (v27 >> 12);
          if ( v28 <= qword_140E2DBE0 )
          {
            v29 = 6 * v28;
            if ( (*(_QWORD *)(v18 + 48 * v28) & v19) != 0 )
              break;
          }
        }
      }
      v30 = 48 * v28 - 0x220000000000LL;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v31 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
          {
            HvlNotifyLongSpinWait(v31);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      if ( *(_QWORD *)v8 == v64 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = 0xFFFFFFFFFFLL;
      v18 = 0xFFFFDE0000000028uLL;
      v19 = 0x40000000000000LL;
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v30 = MiLockSpecialPurposeMemoryCachedPage(v30, 2);
    v24 = *(_QWORD *)v8;
    if ( v30 )
    {
      if ( (v24 & 1) != 0 )
      {
        if ( (*(_DWORD *)(v30 + 32) & 0x40000000) == 0 )
        {
          *(_QWORD *)(v30 + 24) = (*(_QWORD *)(v30 + 24) + 1LL) ^ (*(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) + 1LL)) & 0xC000000000000000uLL;
LABEL_60:
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = v60;
          goto LABEL_61;
        }
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
        {
          v30 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v9 << 25) >> 16, v8, v30);
          if ( !v30 )
          {
            v8 = 0LL;
            goto LABEL_11;
          }
        }
        if ( (*(_BYTE *)(v30 + 34) & 0x20) == 0 && (*(_DWORD *)(v30 + 32) & 0x40000000) == 0 )
        {
          v32 = *(_QWORD *)(v30 + 16) >> 3;
          if ( (*(_QWORD *)(v30 + 16) & 0x400LL) != 0 )
            LOBYTE(v32) = *(_QWORD *)(v30 + 16) >> 11;
          if ( (v32 & 1) != 0 )
          {
            TransitionHeatBatch = (struct _SLIST_ENTRY *)MiMakeTransitionHeatBatch(
                                                           v30,
                                                           0LL,
                                                           ((__int64)(v10 - v9) >> 3) + 1);
            if ( TransitionHeatBatch )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockProtoPoolPage(v60, v58);
              v60 = 0LL;
              if ( TransitionHeatBatch == (struct _SLIST_ENTRY *)-1LL )
              {
                MiReplenishTransitionPageHeatList();
              }
              else
              {
                MiIssuePageHeatList(TransitionHeatBatch);
                MiFreeTransitionPageHeatList(TransitionHeatBatch);
              }
              v8 = 0LL;
              v11 = 0LL;
              goto LABEL_12;
            }
          }
          if ( (MiUnlinkPageFromListEx(v30, 0) & 3) == 0 )
          {
            BugCheckParameter2 = *(_QWORD *)(v30 + 8) | 0x8000000000000000uLL;
            v33 = *(_DWORD *)(v30 + 32);
            LOWORD(v33) = v33 + 1;
            v61 = v33;
            *(_DWORD *)(v30 + 32) = v33;
            v61 = *(_DWORD *)(v30 + 32);
            BYTE2(v61) = BYTE2(v61) & 0xF8 | 6;
            *(_DWORD *)(v30 + 32) = v61;
            v34 = (*(_DWORD *)(v30 + 16) >> 5) & 7;
            v35 = (unsigned __int8)BYTE2(*(_DWORD *)(v30 + 32)) >> 6;
            if ( v35 != 1 )
            {
              if ( v35 )
              {
                if ( v35 == 2 )
                  v34 |= 0x18u;
              }
              else
              {
                v34 |= 8u;
              }
            }
            ValidPte = MiMakeValidPte(v9, 0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4), v34 | 0x20000000u);
            v37 = ValidPte;
            if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
              MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, ValidPte, 128);
            *(_QWORD *)BugCheckParameter2 = v37;
            *(_QWORD *)(v30 + 24) = *(_QWORD *)(v30 + 24) & 0xC000000000000000uLL | 1;
            v24 = *(_QWORD *)v8;
            goto LABEL_60;
          }
          MiDiscardTransitionPteEx(v30, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = 0LL;
LABEL_11:
          v11 = v60;
          goto LABEL_12;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_7:
      v15 = v60;
LABEL_8:
      v16 = 0LL;
LABEL_9:
      v9 += 8LL;
      if ( (_DWORD)v7 || v16 )
      {
        v71[v7] = v16;
        v7 = (unsigned int)(v7 + 1);
        if ( (_DWORD)v7 == 16 )
        {
          if ( v15 )
          {
            MiUnlockProtoPoolPage(v15, v58);
            v60 = 0LL;
          }
          MiMakeSystemCacheRangeValid(v9 - 128, (__int64)v71, 0x10u);
          v7 = 0LL;
        }
      }
      goto LABEL_11;
    }
LABEL_79:
    v25 = v60;
LABEL_65:
    v38 = v24;
    if ( qword_140E2DB80 && (v24 & 0x10) == 0 )
      v38 = v24 & ~qword_140E2DB80;
    v39 = (*(_BYTE *)(v56 + 62) & 0xC) == 0;
    v67 = v38 >> 16;
    if ( !v39
      || (v62 & 1) == 0
      || (v40 = v25 != 0,
          MiInitializePageColorBase(0LL, 3LL, (*(_DWORD *)(v56 + 56) >> 20) & 0x7F, &v70),
          v41 = _InterlockedExchangeAdd((volatile signed __int32 *)v70, 1u),
          Page = MiGetPage(
                   v66,
                   DWORD2(v70) ^ (unsigned int)(unsigned __int8)(BYTE8(v70) ^ (v41
                                                                             % dword_140E2DBC0[(*((_QWORD *)&v70 + 1) >> 16) & 3LL])),
                   (unsigned int)(v40 + 16)),
          v64 = Page,
          Page == -1) )
    {
      v15 = v60;
      if ( (v62 & 2) == 0 )
      {
        if ( v60 )
        {
          MiUnlockProtoPoolPage(v60, v58);
          v15 = 0LL;
          v60 = 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        v49 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v61 = v49 + 2 * Flink;
        v51 = (__int64)(v10 - v9) >> 3;
        if ( (unsigned int)v51 > Flink )
        {
          if ( (unsigned int)v51 > 0xF )
            LODWORD(v51) = 15;
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v51;
        }
        v52 = MmAccessFault(0LL, (__int64)(v9 << 25) >> 16, 0, 0LL);
        if ( v52 < 0 && v6 >= 0 )
          v6 = v52;
        v53 = v61 & 1;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v61 >> 1;
        BYTE4(CurrentThread[1].Queue) = v53;
      }
      v59 = 0;
      goto LABEL_8;
    }
    BugCheckParameter2 = 48 * Page - 0x220000000000LL;
    v61 = MiProtectionToCacheAttribute((v24 >> 5) & 0x1F);
    v44 = MiPfnZeroingNeeded(v43, v61);
    v15 = v60;
    if ( v44 )
    {
      if ( v60 )
        MiUnlockProtoPoolPage(v60, v58);
      MiZeroPhysicalPage(0LL, v64, 0, v61);
      *(_QWORD *)(BugCheckParameter2 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    }
    else if ( v60 )
    {
      goto LABEL_73;
    }
    v54 = MiLockProtoPoolPageForce(v8, &v58);
    v24 = *(_QWORD *)v8;
    v15 = v54;
    v60 = v54;
    if ( (v24 & 1) == 0 && ((v24 & 0x800) == 0 || (v24 & 0x400) != 0) )
    {
LABEL_73:
      MiReferenceControlAreaPfn(v56, v67);
      v45 = (v24 >> 5) & 0x1F;
      MiInitializePfn(BugCheckParameter2, (__int64 *)v8, v45, 18);
      v46 = MiMakeValidPte(v9, v64, (unsigned int)v45 | 0x20000000);
      v24 = v46;
      if ( _bittest64(&MiFlags, 0x24u) && (v46 & 0x20) == 0 && v8 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v8, v46, 128);
      *(_QWORD *)v8 = v24;
LABEL_61:
      if ( v68 )
      {
        v24 = MiMakeValidPte(v9, (v24 >> 12) & 0xFFFFFFFFFFLL, 536870913);
      }
      else if ( (v62 & 4) != 0 && (v24 & 0x42) == 0 && (v24 & 0x800) != 0 )
      {
        v24 |= 0x42uLL;
      }
      v16 = v24 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140E2ED84 & 1) << 8);
      goto LABEL_9;
    }
    LOBYTE(v55) = 17;
    MiUnlockProtoPoolPage(v54, v55);
    MiReleaseFreshPageAtDpc(BugCheckParameter2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v58);
    __writecr8(v58);
    v11 = 0LL;
    v60 = 0LL;
    v8 = 0LL;
LABEL_12:
    v12 = v62;
    v17 = 0xFFFFFFFFFFLL;
    v18 = 0xFFFFDE0000000028uLL;
    v19 = 0x40000000000000LL;
  }
  while ( v9 <= v10 );
  v4 = v69;
  if ( v11 )
    MiUnlockProtoPoolPage(v11, v58);
  if ( (_DWORD)v7 )
    MiMakeSystemCacheRangeValid(v9 - 8LL * (unsigned int)v7, (__int64)v71, v7);
  v5 = v59;
LABEL_2:
  result = (unsigned int)v6;
  if ( v4 )
    *v4 = v5;
  return result;
}
