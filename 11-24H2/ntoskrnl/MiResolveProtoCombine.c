/*
 * XREFs of MiResolveProtoCombine @ 0x14047C8C4
 * Callers:
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR TransitionPteValid; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v19; // r10
  ULONG_PTR v20; // rbp
  unsigned int v21; // r15d
  int v22; // ebx
  ULONG_PTR BugCheckParameter3; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  int v30; // [rsp+98h] [rbp+20h]
  int v31; // [rsp+98h] [rbp+20h]

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
      v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v8 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v8, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
          v30 = *(_DWORD *)(v8 + 32);
          LOWORD(v30) = v30 + 1;
          *(_DWORD *)(v8 + 32) = v30;
          v31 = *(_DWORD *)(v8 + 32);
          BYTE2(v31) = BYTE2(v31) & 0xF8 | 6;
          *(_DWORD *)(v8 + 32) = v31;
          TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
          if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && MiIsPteInStore(v12, *(_QWORD *)(v8 + 16)) )
            v5 = MiCaptureDirtyBitToPfn(v8);
          if ( _bittest64(&MiFlags, 0x24u)
            && (TransitionPteValid & 0x20) == 0
            && (unsigned __int64)a3 >= 0xFFFFF6C000000000uLL )
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a3, TransitionPteValid, 128LL);
          }
          *a3 = TransitionPteValid;
          goto LABEL_5;
        }
        MiDiscardTransitionPteEx(v8);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_27:
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(v6, v7, v9, v10);
    return 0LL;
  }
  v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
LABEL_5:
  v13 = ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v8 + 24) ^ ((*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                     + 1)) & 0xC000000000000000uLL;
  *(_QWORD *)(v8 + 24) = v13;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v13) = 17;
  MiUnlockProtoPoolPage(v6, v13, v9, v10);
  if ( v5 )
    MiReleasePageFileInfo(v12, v5, 1LL, v14);
  v15 = (TransitionPteValid >> 12) & 0xFFFFFFFFFFLL;
  v16 = 48 * v15 - 0x220000000000LL;
  v17 = *(_QWORD *)(v16 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v20 = v19 + 48 * ContainingPageTable;
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v21 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v21);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_QWORD *)(v20 + 24) = ((*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v20 + 24) ^ ((*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = (unsigned __int8)v17 >> 5;
  if ( (HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) != 0x40 )
  {
    if ( BYTE2(*(_DWORD *)(v16 + 32)) < 0x40u )
    {
      v22 |= 8u;
    }
    else if ( (HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) == 0x80 )
    {
      v22 |= 0x18u;
    }
  }
  BugCheckParameter3 = MiMakeValidPte(a1, v15, v22);
  if ( (unsigned int)MiAllocateWsle(a2, a1, 48 * v15 - 0x220000000000LL, 0, BugCheckParameter3, 0, 0LL) )
    return 1LL;
  MiLockAndDecrementShareCount(48 * v15 - 0x220000000000LL, 2LL, v24, v25);
  MiLockAndDecrementShareCount(v20, 2LL, v27, v28);
  return 0LL;
}
