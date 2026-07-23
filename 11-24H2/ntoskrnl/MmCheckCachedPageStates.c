/*
 * XREFs of MmCheckCachedPageStates @ 0x140236420
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcMapAndRead @ 0x140236280 (CcMapAndRead.c)
 *     CcFetchDataForRead @ 0x140237680 (CcFetchDataForRead.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x140451570 (CcMapDataForOverwrite.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDirtyPte @ 0x1402092D4 (MiDirtyPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiSystemCacheVaControlArea @ 0x14034F790 (MiSystemCacheVaControlArea.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404CFEDC (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D1988 (MiFreeTransitionPageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v12; // r9
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
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned int v31; // ebx
  __int64 v32; // rax
  int v33; // eax
  int v34; // r8d
  int v35; // ecx
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v37; // rbx
  __int64 v38; // rax
  BOOL v39; // esi
  unsigned __int32 v40; // eax
  __int64 Page; // rax
  __int64 v42; // r8
  __int64 v43; // rbx
  ULONG_PTR v44; // rax
  __int64 AnyMultiplexedVm; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v47; // eax
  unsigned int Flink; // ecx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r14
  _SLIST_ENTRY *TransitionHeatBatch; // rbx
  char v55; // [rsp+21h] [rbp-127h]
  __int64 v56; // [rsp+28h] [rbp-120h]
  int v57; // [rsp+30h] [rbp-118h]
  unsigned int v58; // [rsp+30h] [rbp-118h]
  unsigned int v59; // [rsp+30h] [rbp-118h]
  _QWORD *BugCheckParameter2; // [rsp+38h] [rbp-110h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-110h]
  __int64 v63; // [rsp+40h] [rbp-108h]
  unsigned __int64 v64; // [rsp+40h] [rbp-108h]
  __int64 v65; // [rsp+40h] [rbp-108h]
  __int64 v66; // [rsp+50h] [rbp-F8h]
  __int64 v67; // [rsp+58h] [rbp-F0h]
  __int64 v68; // [rsp+60h] [rbp-E8h]
  __int128 v70; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v71[16]; // [rsp+80h] [rbp-C8h] BYREF

  v4 = a4;
  v5 = 1;
  v55 = 1;
  v70 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v56 = 0LL;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = MiSystemCacheVaControlArea(a1, (v9 >> 9) & 0x7FFFFFFFF8LL, 0LL, a3);
  v66 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v63 + 60) & 0x3FF));
  if ( v9 > v10 )
    goto LABEL_2;
  v53 = v63;
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
        MiUnlockProtoPoolPage(v11, 17LL);
        v15 = 0LL;
        v56 = 0LL;
      }
      else
      {
        v15 = v56;
      }
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
      MiDirtyPte(AnyMultiplexedVm, (__int64 *)v9, v14);
      goto LABEL_8;
    }
    v20 = v8;
    v21 = *(_QWORD *)v9;
    v68 = *(_QWORD *)v9 & 8LL;
    if ( qword_140E2DCC0 )
    {
      if ( (v14 & 0x10) != 0 )
        v21 = v14 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v21 = v14 & ~qword_140E2DCC0;
    }
    v8 = v21 >> 16;
    v22 = v20 & 0xFFFFFFFFFFFFF000uLL;
    v23 = v8 & 0xFFFFFFFFFFFFF000uLL;
    if ( v11 )
    {
      if ( v23 == v22 )
      {
        v25 = v56;
        goto LABEL_34;
      }
      MiUnlockProtoPoolPage(v11, 17LL);
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
      v56 = 0LL;
      goto LABEL_65;
    }
    v25 = MiLockProtoPoolPageForce(v8);
    v56 = v25;
    v17 = 0xFFFFFFFFFFLL;
    v18 = 0xFFFFDE0000000028uLL;
    v19 = 0x40000000000000LL;
LABEL_34:
    v24 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 1) == 0 && (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
      goto LABEL_65;
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)v8;
        v64 = *(_QWORD *)v8;
        v27 = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 1) != 0 )
          goto LABEL_41;
        if ( (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
        {
          v24 = *(_QWORD *)v8;
          goto LABEL_79;
        }
        if ( (unsigned int)MiInvalidPteConforms(v26) )
        {
          v27 = v26;
          if ( qword_140E2DCC0 )
          {
            if ( (v26 & 0x10) != 0 )
              v27 = v26 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v27 = v26 & ~qword_140E2DCC0;
          }
LABEL_41:
          v28 = v17 & (v27 >> 12);
          if ( v28 <= qword_140E2DD20 )
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29, v17, v11, v12) )
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
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
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
          v15 = v56;
          goto LABEL_61;
        }
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
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
            TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v30, 0LL, ((__int64)(v10 - v9) >> 3) + 1);
            if ( TransitionHeatBatch )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockProtoPoolPage(v56, 17LL);
              v56 = 0LL;
              if ( TransitionHeatBatch == (_SLIST_ENTRY *)-1LL )
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
          if ( (MiUnlinkPageFromListEx(v30) & 3) == 0 )
          {
            BugCheckParameter2 = (_QWORD *)(*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL);
            v33 = *(_DWORD *)(v30 + 32);
            LOWORD(v33) = v33 + 1;
            *(_DWORD *)(v30 + 32) = v33;
            v57 = *(_DWORD *)(v30 + 32);
            BYTE2(v57) = BYTE2(v57) & 0xF8 | 6;
            *(_DWORD *)(v30 + 32) = v57;
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
            if ( _bittest64(&MiFlags, 0x24u)
              && (ValidPte & 0x20) == 0
              && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, ValidPte, 128LL);
            }
            *BugCheckParameter2 = v37;
            *(_QWORD *)(v30 + 24) = *(_QWORD *)(v30 + 24) & 0xC000000000000000uLL | 1;
            v24 = *(_QWORD *)v8;
            goto LABEL_60;
          }
          MiDiscardTransitionPteEx(v30);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = 0LL;
LABEL_11:
          v11 = v56;
          goto LABEL_12;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_7:
      v15 = v56;
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
            MiUnlockProtoPoolPage(v15, 17LL);
            v56 = 0LL;
          }
          MiMakeSystemCacheRangeValid(v9 - 128, (__int64)v71, 0x10u);
          v7 = 0LL;
        }
      }
      goto LABEL_11;
    }
LABEL_79:
    v25 = v56;
LABEL_65:
    v38 = v24;
    if ( qword_140E2DCC0 && (v24 & 0x10) == 0 )
      v38 = v24 & ~qword_140E2DCC0;
    v67 = v38 >> 16;
    if ( (*(_BYTE *)(v53 + 62) & 0xC) != 0
      || (a3 & 1) == 0
      || (v39 = v25 != 0,
          MiInitializePageColorBase(0LL, 3LL, (*(_DWORD *)(v53 + 56) >> 20) & 0x7F, &v70),
          v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v70, 1u),
          Page = MiGetPage(
                   v66,
                   DWORD2(v70) ^ (unsigned int)(unsigned __int8)(BYTE8(v70) ^ (v40
                                                                             % dword_140E2DD00[(*((_QWORD *)&v70 + 1) >> 16) & 3LL])),
                   (unsigned int)(v39 + 16),
                   *((_QWORD *)&v70 + 1)),
          v65 = Page,
          Page == -1) )
    {
      v15 = v56;
      if ( (a3 & 2) == 0 )
      {
        if ( v56 )
        {
          MiUnlockProtoPoolPage(v56, 17LL);
          v15 = 0LL;
          v56 = 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        v47 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v59 = v47 + 2 * Flink;
        v49 = (__int64)(v10 - v9) >> 3;
        if ( (unsigned int)v49 > Flink )
        {
          if ( (unsigned int)v49 > 0xF )
            LODWORD(v49) = 15;
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v49;
        }
        v50 = MmAccessFault(0LL, (__int64)(v9 << 25) >> 16);
        if ( v50 < 0 && v6 >= 0 )
          v6 = v50;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v59 >> 1;
        BYTE4(CurrentThread[1].Queue) = v59 & 1;
      }
      v55 = 0;
      goto LABEL_8;
    }
    BugCheckParameter2a = 48 * Page - 0x220000000000LL;
    v58 = MiProtectionToCacheAttribute((v24 >> 5) & 0x1F);
    v15 = v56;
    if ( (unsigned int)MiPfnZeroingNeeded(v42, v58) )
    {
      if ( v56 )
        MiUnlockProtoPoolPage(v56, 17LL);
      MiZeroPhysicalPage(0LL, v65, 0LL, v58);
      *(_QWORD *)(BugCheckParameter2a + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    }
    else if ( v56 )
    {
      goto LABEL_73;
    }
    v51 = MiLockProtoPoolPageForce(v8);
    v24 = *(_QWORD *)v8;
    v15 = v51;
    v56 = v51;
    if ( (*(_QWORD *)v8 & 1) == 0 && ((v24 & 0x800) == 0 || (v24 & 0x400) != 0) )
    {
LABEL_73:
      MiReferenceControlAreaPfn(v53, v67, 1LL);
      v43 = (v24 >> 5) & 0x1F;
      MiInitializePfn(BugCheckParameter2a, v8, (unsigned int)v43, 18LL);
      v44 = MiMakeValidPte(v9, v65, (unsigned int)v43 | 0x20000000);
      v24 = v44;
      if ( _bittest64(&MiFlags, 0x24u) && (v44 & 0x20) == 0 && v8 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v8, v44, 128LL);
      *(_QWORD *)v8 = v24;
LABEL_61:
      if ( v68 )
      {
        v24 = MiMakeValidPte(v9, (v24 >> 12) & 0xFFFFFFFFFFLL, 536870913);
      }
      else if ( (a3 & 4) != 0 && (v24 & 0x42) == 0 && (v24 & 0x800) != 0 )
      {
        v24 |= 0x42uLL;
      }
      v16 = v24 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140E2EEC4 & 1) << 8);
      goto LABEL_9;
    }
    LOBYTE(v52) = 17;
    MiUnlockProtoPoolPage(v51, v52);
    MiReleaseFreshPageAtDpc(BugCheckParameter2a);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 17LL);
    __writecr8(0x11uLL);
    v11 = 0LL;
    v56 = 0LL;
    v8 = 0LL;
LABEL_12:
    v12 = a3;
    v17 = 0xFFFFFFFFFFLL;
    v18 = 0xFFFFDE0000000028uLL;
    v19 = 0x40000000000000LL;
  }
  while ( v9 <= v10 );
  v4 = a4;
  if ( v11 )
    MiUnlockProtoPoolPage(v11, 17LL);
  if ( (_DWORD)v7 )
    MiMakeSystemCacheRangeValid(v9 - 8LL * (unsigned int)v7, (__int64)v71, v7);
  v5 = v55;
LABEL_2:
  result = (unsigned int)v6;
  if ( v4 )
    *v4 = v5;
  return result;
}
