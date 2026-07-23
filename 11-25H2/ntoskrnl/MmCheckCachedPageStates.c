/*
 * XREFs of MmCheckCachedPageStates @ 0x14025B020
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     CcMapAndRead @ 0x14025AE80 (CcMapAndRead.c)
 *     CcFetchDataForRead @ 0x14025BCE0 (CcFetchDataForRead.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x14045D4D0 (CcMapDataForOverwrite.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiReadyStandbyPageForActive @ 0x14020E430 (MiReadyStandbyPageForActive.c)
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiSystemCacheVaControlArea @ 0x14025D2D0 (MiSystemCacheVaControlArea.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceControlAreaPfn @ 0x14033BC94 (MiReferenceControlAreaPfn.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiDirtyPte @ 0x1404516E0 (MiDirtyPte.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D7C5C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D94B8 (MiFreeTransitionPageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r12
  char v5; // si
  __int64 v6; // r15
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned int v11; // r8d
  unsigned __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r11
  unsigned __int64 v16; // r10
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 result; // rax
  ULONG_PTR v20; // rsi
  __int64 v21; // r14
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  unsigned __int32 v34; // eax
  __int64 Page; // rax
  __int64 v36; // rsi
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  __int64 v39; // rbx
  ULONG_PTR ValidPte; // rax
  __int64 AnyMultiplexedVm; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v43; // eax
  unsigned int Flink; // ecx
  unsigned int v45; // esi
  __int64 v46; // rax
  int v47; // eax
  ULONG_PTR v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // r9
  int v51; // ecx
  _SLIST_ENTRY *TransitionHeatBatch; // rbx
  __int64 v53; // r8
  unsigned __int64 v54; // r9
  unsigned __int8 v55; // [rsp+20h] [rbp-128h] BYREF
  char v56; // [rsp+21h] [rbp-127h]
  unsigned int v57; // [rsp+24h] [rbp-124h]
  int v58; // [rsp+28h] [rbp-120h]
  __int64 v59; // [rsp+30h] [rbp-118h]
  int v60; // [rsp+38h] [rbp-110h]
  __int64 v61; // [rsp+40h] [rbp-108h]
  __int64 v62; // [rsp+48h] [rbp-100h]
  __int64 v63; // [rsp+50h] [rbp-F8h]
  __int64 v64; // [rsp+58h] [rbp-F0h]
  char *v65; // [rsp+60h] [rbp-E8h]
  __int128 v66; // [rsp+68h] [rbp-E0h] BYREF
  _QWORD v67[16]; // [rsp+80h] [rbp-C8h] BYREF

  v4 = a4;
  v5 = 1;
  v65 = a4;
  v6 = 0LL;
  v57 = a3;
  v56 = 1;
  v66 = 0LL;
  v58 = 0;
  v7 = 0LL;
  v55 = 17;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = MiSystemCacheVaControlArea(a1, (v9 >> 9) & 0x7FFFFFFFF8LL, 0LL, a3);
  v62 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v59 + 60) & 0x3FF));
  if ( v9 > v10 )
    goto LABEL_14;
  v13 = v59;
  v14 = 0xFFFFFFFFFFLL;
  v15 = 0x40000000000000LL;
  v16 = 0xFFFFDE0000000028uLL;
  do
  {
    v17 = *(_QWORD *)v9;
    if ( (*(_QWORD *)v9 & 1) != 0 )
    {
      if ( (v12 & 4) != 0 )
      {
        if ( v8 )
        {
          MiUnlockProtoPoolPage(v8, v55, 0xFFFFFFFFFFLL, v12);
          v8 = 0LL;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
        MiDirtyPte(AnyMultiplexedVm, v9);
      }
      goto LABEL_5;
    }
    v20 = v7;
    v21 = *(_QWORD *)v9;
    v64 = *(_QWORD *)v9 & 8LL;
    if ( qword_140E2D940 )
    {
      if ( (v17 & 0x10) != 0 )
        v21 = v17 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v21 = v17 & ~qword_140E2D940;
    }
    v7 = v21 >> 16;
    v22 = v20 & 0xFFFFFFFFFFFFF000uLL;
    v23 = v7 & 0xFFFFFFFFFFFFF000uLL;
    if ( !v8 )
      goto LABEL_21;
    if ( v23 != v22 )
    {
      MiUnlockProtoPoolPage(v8, v55, 0xFFFFFFFFFFLL, v12);
LABEL_21:
      if ( v23 != v22 && (_DWORD)v6 )
      {
        MiMakeSystemCacheRangeValid(v9 - 8LL * (unsigned int)v6, v67, (unsigned int)v6, v12);
        v6 = 0LL;
      }
      v24 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 1) == 0 && (*(_QWORD *)v7 & 0xC00LL) != 0x800 )
      {
        v8 = 0LL;
LABEL_61:
        v32 = v24;
        if ( qword_140E2D940 && (v24 & 0x10) == 0 )
          v32 = v24 & ~qword_140E2D940;
        v33 = (*(_BYTE *)(v13 + 62) & 0xC) == 0;
        v63 = v32 >> 16;
        if ( !v33
          || (v57 & 1) == 0
          || (MiInitializePageColorBase(0LL, 3, (*(_DWORD *)(v13 + 56) >> 20) & 0x7F, (__int64)&v66),
              v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v66, 1u),
              Page = MiGetPage(
                       v62,
                       DWORD2(v66) ^ (unsigned int)(unsigned __int8)(BYTE8(v66) ^ (v34
                                                                                 % dword_140E2D980[(*((_QWORD *)&v66 + 1) >> 16) & 3LL])),
                       (unsigned int)(v8 != 0) + 16),
              v59 = Page,
              Page == -1) )
        {
          if ( (v57 & 2) == 0 )
          {
            if ( v8 )
            {
              MiUnlockProtoPoolPage(v8, v55, v14, v12);
              v8 = 0LL;
            }
            CurrentThread = KeGetCurrentThread();
            v43 = BYTE4(CurrentThread[1].Queue);
            Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
            BYTE4(CurrentThread[1].Queue) = 1;
            v45 = v43 + 2 * Flink;
            v46 = (__int64)(v10 - v9) >> 3;
            if ( (unsigned int)v46 > Flink )
            {
              if ( (unsigned int)v46 > 0xF )
                LODWORD(v46) = 15;
              LODWORD(CurrentThread[1].WaitListEntry.Flink) = v46;
            }
            v47 = MmAccessFault(0LL, (__int64)(v9 << 25) >> 16);
            if ( v47 < 0 )
            {
              v51 = v58;
              if ( v58 >= 0 )
                v51 = v47;
              v58 = v51;
            }
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v45 >> 1;
            BYTE4(CurrentThread[1].Queue) = v45 & 1;
          }
          v56 = 0;
          goto LABEL_5;
        }
        v36 = 48 * Page - 0x220000000000LL;
        v60 = MiProtectionToCacheAttribute((v24 >> 5) & 0x1F);
        if ( MiPfnZeroingNeeded(v36, v60) )
        {
          if ( v8 )
            MiUnlockProtoPoolPage(v8, v55, v37, v38);
          MiZeroPhysicalPage(0LL, v59, 0, v60);
          *(_QWORD *)(v36 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        }
        else if ( v8 )
        {
          goto LABEL_69;
        }
        v48 = MiLockProtoPoolPageForce(v7, &v55);
        v24 = *(_QWORD *)v7;
        v8 = v48;
        if ( (*(_QWORD *)v7 & 1) != 0 || (v24 & 0x800) != 0 && (v24 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage(v48, 0x11u, v49, v50);
          MiReleaseFreshPageAtDpc(v36);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v55);
          __writecr8(v55);
          v8 = 0LL;
          v7 = 0LL;
          goto LABEL_8;
        }
LABEL_69:
        MiReferenceControlAreaPfn(v13, v63, 1LL);
        v39 = (v24 >> 5) & 0x1F;
        MiInitializePfn(v36, (__int64 *)v7, v39, 18);
        ValidPte = MiMakeValidPte(v9, v59, (unsigned int)v39 | 0x20000000);
        v24 = ValidPte;
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v7 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v7, ValidPte);
        *(_QWORD *)v7 = v24;
LABEL_57:
        if ( v64 )
        {
          v24 = MiMakeValidPte(v9, (v24 >> 12) & 0xFFFFFFFFFFLL, 536870913);
        }
        else if ( (v57 & 4) != 0 && (v24 & 0x42) == 0 && (v24 & 0x800) != 0 )
        {
          v24 |= 0x42uLL;
        }
        v18 = v24 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140E2EB44 & 1) << 8);
        goto LABEL_6;
      }
      v8 = MiLockProtoPoolPageForce(v7, &v55);
      v16 = 0xFFFFDE0000000028uLL;
      v14 = 0xFFFFFFFFFFLL;
      v15 = 0x40000000000000LL;
    }
    v61 = 0LL;
    v24 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 1) == 0 && (*(_QWORD *)v7 & 0xC00LL) != 0x800 )
      goto LABEL_61;
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)v7;
        v59 = v25;
        v26 = v25;
        if ( (v25 & 1) != 0 )
          goto LABEL_39;
        if ( (v25 & 0xC00) != 0x800 )
        {
          v24 = *(_QWORD *)v7;
          goto LABEL_61;
        }
        if ( MiInvalidPteConforms(v25) )
        {
          v26 = v25;
          if ( qword_140E2D940 )
          {
            if ( (v25 & 0x10) != 0 )
              v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v26 = v25 & ~qword_140E2D940;
          }
LABEL_39:
          v27 = v14 & (v26 >> 12);
          if ( v27 <= qword_140E2D9A0 )
          {
            v28 = 6 * v27;
            if ( (*(_QWORD *)(v16 + 48 * v27) & v15) != 0 )
              break;
          }
        }
      }
      v29 = 48 * v27 - 0x220000000000LL;
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v30 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28) )
          {
            HvlNotifyLongSpinWait(v30);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v29 + 24) < 0 );
      }
      if ( *(_QWORD *)v7 == v59 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = 0xFFFFFFFFFFLL;
      v16 = 0xFFFFDE0000000028uLL;
      v15 = 0x40000000000000LL;
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v29 = MiLockSpecialPurposeMemoryCachedPage(v29, 2LL);
    v24 = *(_QWORD *)v7;
    if ( !v29 )
      goto LABEL_61;
    if ( (v24 & 1) != 0 )
    {
      if ( (*(_DWORD *)(v29 + 32) & 0x40000000) == 0 )
      {
        *(_QWORD *)(v29 + 24) = (*(_QWORD *)(v29 + 24) + 1LL) ^ (*(_QWORD *)(v29 + 24) ^ (*(_QWORD *)(v29 + 24) + 1LL)) & 0xC000000000000000uLL;
        goto LABEL_56;
      }
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v29 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v9 << 25) >> 16, v7, v29);
        if ( !v29 )
        {
          v7 = 0LL;
          goto LABEL_8;
        }
      }
      if ( (*(_BYTE *)(v29 + 34) & 0x20) == 0 && (*(_DWORD *)(v29 + 32) & 0x40000000) == 0 )
      {
        v31 = *(_QWORD *)(v29 + 16) >> 3;
        if ( (*(_QWORD *)(v29 + 16) & 0x400LL) != 0 )
          LOBYTE(v31) = *(_QWORD *)(v29 + 16) >> 11;
        if ( (v31 & 1) != 0 )
        {
          TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v29, 0LL, ((__int64)(v10 - v9) >> 3) + 1);
          if ( TransitionHeatBatch )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v8, v55, v53, v54);
            v8 = 0LL;
            if ( TransitionHeatBatch == (_SLIST_ENTRY *)-1LL )
            {
              MiReplenishTransitionPageHeatList();
            }
            else
            {
              MiIssuePageHeatList(TransitionHeatBatch);
              MiFreeTransitionPageHeatList(TransitionHeatBatch);
            }
            v7 = 0LL;
            goto LABEL_8;
          }
        }
        if ( (MiUnlinkPageFromListEx(v29, 0) & 3) != 0 )
        {
          MiDiscardTransitionPteEx(v29, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = 0LL;
          goto LABEL_8;
        }
        MiReadyStandbyPageForActive(v29, v9);
        v24 = *(_QWORD *)v7;
LABEL_56:
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_57;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_5:
    v18 = 0LL;
LABEL_6:
    v9 += 8LL;
    if ( (_DWORD)v6 || v18 )
    {
      v67[v6] = v18;
      v6 = (unsigned int)(v6 + 1);
      if ( (_DWORD)v6 == 16 )
      {
        if ( v8 )
        {
          MiUnlockProtoPoolPage(v8, v55, v14, v12);
          v8 = 0LL;
        }
        MiMakeSystemCacheRangeValid(v9 - 128, v67, 16LL, v12);
        v6 = 0LL;
      }
    }
LABEL_8:
    v12 = v57;
    v14 = 0xFFFFFFFFFFLL;
    v16 = 0xFFFFDE0000000028uLL;
    v15 = 0x40000000000000LL;
  }
  while ( v9 <= v10 );
  v4 = v65;
  if ( v8 )
    MiUnlockProtoPoolPage(v8, v55, 0xFFFFFFFFFFLL, v57);
  if ( (_DWORD)v6 )
    MiMakeSystemCacheRangeValid(v9 - 8LL * (unsigned int)v6, v67, (unsigned int)v6, v12);
  v5 = v56;
  v11 = v58;
LABEL_14:
  result = v11;
  if ( v4 )
    *v4 = v5;
  return result;
}
