/*
 * XREFs of MiResolveProtoCombine @ 0x14038AD20
 * Callers:
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiIsPteInStore @ 0x14037C500 (MiIsPteInStore.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  ULONG_PTR TransitionPteValid; // rsi
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v16; // r10
  ULONG_PTR v17; // rbp
  int v18; // r15d
  int v19; // ebx
  ULONG_PTR ValidPte; // rax
  int v23; // [rsp+98h] [rbp+20h]
  int v24; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x220000000000LL;
  v7 = MiLockLeafPage(a3, 0);
  if ( !v7 )
    goto LABEL_27;
  TransitionPteValid = *a3;
  if ( (*a3 & 1) == 0 )
  {
    if ( (*a3 & 0xC00) == 0x800 )
    {
      v11 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v7 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v7, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
          v23 = *(_DWORD *)(v7 + 32);
          LOWORD(v23) = v23 + 1;
          *(_DWORD *)(v7 + 32) = v23;
          v24 = *(_DWORD *)(v7 + 32);
          BYTE2(v24) = BYTE2(v24) & 0xF8 | 6;
          *(_DWORD *)(v7 + 32) = v24;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && MiIsPteInStore(v11, *(_QWORD *)(v7 + 16)) )
            v5 = MiCaptureDirtyBitToPfn(v7);
          if ( _bittest64(&MiFlags, 0x24u)
            && (TransitionPteValid & 0x20) == 0
            && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, TransitionPteValid, 128);
          }
          *a3 = TransitionPteValid;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v7);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_27:
    MiUnlockProtoPoolPage(v6, 0x11u, v8, v9);
    return 0LL;
  }
  v11 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
LABEL_5:
  *(_QWORD *)(v7 + 24) = ((*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v7 + 24) ^ ((*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v6, 0x11u, v8, v9);
  if ( v5 )
    MiReleasePageFileInfo(v11, v5, 1);
  v12 = (TransitionPteValid >> 12) & 0xFFFFFFFFFFLL;
  v13 = 48 * v12 - 0x220000000000LL;
  v14 = *(_QWORD *)(v13 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v17 = v16 + 48 * ContainingPageTable;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  *(_QWORD *)(v17 + 24) = ((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v17 + 24) ^ ((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = (unsigned __int8)v14 >> 5;
  if ( (HIWORD(*(_DWORD *)(v13 + 32)) & 0xC0) != 0x40 )
  {
    if ( BYTE2(*(_DWORD *)(v13 + 32)) < 0x40u )
    {
      v19 |= 8u;
    }
    else if ( (HIWORD(*(_DWORD *)(v13 + 32)) & 0xC0) == 0x80 )
    {
      v19 |= 0x18u;
    }
  }
  ValidPte = MiMakeValidPte(a1, v12, v19);
  if ( (unsigned int)MiAllocateWsle(a2, a1, 48 * v12 - 0x220000000000LL, 0, ValidPte, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v12 - 0x220000000000LL, 2);
  MiLockAndDecrementShareCount(v17, 2);
  return 0LL;
}
