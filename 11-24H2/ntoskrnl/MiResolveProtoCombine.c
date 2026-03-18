/*
 * XREFs of MiResolveProtoCombine @ 0x140481604
 * Callers:
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiMakeTransitionPteValid @ 0x14021B700 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  unsigned __int64 v7; // rdx
  ULONG_PTR v8; // rdi
  __int64 v9; // r8
  ULONG_PTR TransitionPteValid; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v17; // r10
  ULONG_PTR v18; // rbp
  unsigned int v19; // r15d
  int v20; // ebx
  ULONG_PTR ValidPte; // rax
  int v24; // [rsp+98h] [rbp+20h]
  int v25; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x220000000000LL;
  v8 = MiLockLeafPage(a3, 0);
  if ( !v8 )
    goto LABEL_27;
  TransitionPteValid = *a3;
  if ( (*a3 & 1) == 0 )
  {
    if ( (*a3 & 0xC00) == 0x800 )
    {
      v11 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v8 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v8, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
          v24 = *(_DWORD *)(v8 + 32);
          LOWORD(v24) = v24 + 1;
          *(_DWORD *)(v8 + 32) = v24;
          v25 = *(_DWORD *)(v8 + 32);
          BYTE2(v25) = BYTE2(v25) & 0xF8 | 6;
          *(_DWORD *)(v8 + 32) = v25;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && MiIsPteInStore(v11, *(_QWORD *)(v8 + 16)) )
            v5 = MiCaptureDirtyBitToPfn(v8);
          if ( _bittest64(&MiFlags, 0x24u)
            && (TransitionPteValid & 0x20) == 0
            && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, TransitionPteValid, 128);
          }
          *a3 = TransitionPteValid;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v8, 0);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_27:
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(v6, v7, v9);
    return 0LL;
  }
  v11 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
LABEL_5:
  v12 = ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v8 + 24) ^ ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                     + 1)) & 0xC000000000000000uLL;
  *(_QWORD *)(v8 + 24) = v12;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v12) = 17;
  MiUnlockProtoPoolPage(v6, v12, v9);
  if ( v5 )
    MiReleasePageFileInfo(v11, v5, 1LL);
  v13 = (TransitionPteValid >> 12) & 0xFFFFFFFFFFLL;
  v14 = 48 * v13 - 0x220000000000LL;
  v15 = *(_QWORD *)(v14 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v18 = v17 + 48 * ContainingPageTable;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v19 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v19);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_QWORD *)(v18 + 24) = ((*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v18 + 24) ^ ((*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = (unsigned __int8)v15 >> 5;
  if ( (HIWORD(*(_DWORD *)(v14 + 32)) & 0xC0) != 0x40 )
  {
    if ( BYTE2(*(_DWORD *)(v14 + 32)) < 0x40u )
    {
      v20 |= 8u;
    }
    else if ( (HIWORD(*(_DWORD *)(v14 + 32)) & 0xC0) == 0x80 )
    {
      v20 |= 0x18u;
    }
  }
  ValidPte = MiMakeValidPte(a1, v13, v20);
  if ( (unsigned int)MiAllocateWsle(a2, a1, 48 * v13 - 0x220000000000LL, 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v13 - 0x220000000000LL, 2);
  MiLockAndDecrementShareCount(v18, 2);
  return 0LL;
}
