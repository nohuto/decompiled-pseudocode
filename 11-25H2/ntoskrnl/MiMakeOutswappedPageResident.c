/*
 * XREFs of MiMakeOutswappedPageResident @ 0x14040F088
 * Callers:
 *     MmInSwapProcess @ 0x1402F1540 (MmInSwapProcess.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiInitializeUsedPtesCount @ 0x1403859D0 (MiInitializeUsedPtesCount.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 */

ULONG_PTR __fastcall MiMakeOutswappedPageResident(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r12d
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  unsigned __int64 i; // r15
  char v15; // al
  __int64 v16; // rdi
  int v17; // r8d
  ULONG_PTR ValidPte; // rbx
  __int64 v19; // rdx
  ULONG_PTR *v20; // rdi
  unsigned __int32 v22; // eax
  unsigned int v23; // edi
  __int64 TransitionPte; // rsi
  unsigned int v25; // r14d
  __int16 v26; // r9
  __int64 v27; // rcx
  unsigned __int8 v28; // si
  int v29; // esi
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // rcx
  volatile signed __int64 *v33; // rax
  ULONG_PTR *v34; // rdi
  int v35; // [rsp+20h] [rbp-38h]
  int v36; // [rsp+20h] [rbp-38h]
  __int64 v37; // [rsp+28h] [rbp-30h]
  __int64 v38; // [rsp+30h] [rbp-28h]
  __int128 v39; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v41; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v42; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+58h]
  unsigned __int8 v44; // [rsp+B8h] [rbp+60h] BYREF

  v43 = a3;
  v44 = 0;
  v39 = 0LL;
  v4 = a1;
  v5 = a1 + 808;
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
    v5 = a2;
  v6 = *(unsigned __int16 *)(a1 + 260);
  v7 = *(unsigned __int16 *)(a1 + 1198);
  v8 = (v5 >> 3) & 0x1FF;
  v37 = *((_QWORD *)qword_140E2FD48 + v7);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7);
      v4 = a1;
    }
    v42 = CurrentIrql;
    if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
      break;
    v10 = (unsigned __int64 *)(v4 + 808);
    v11 = MiLockTransitionLeafPageEx(v4 + 808, &v44, 0);
    v12 = *v10;
    v13 = v11;
    if ( (v12 & 0x800) == 0 )
      goto LABEL_19;
    v44 = CurrentIrql;
    i = 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4);
    v15 = *(_BYTE *)(v11 + 34) & 7;
    v43 = 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4);
    if ( v15 == 6 )
    {
      *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
LABEL_10:
      v16 = a1;
      v12 = MiCaptureDirtyBitToPfn(v13);
      goto LABEL_11;
    }
    if ( (MiUnlinkPageFromListEx(v13, 0) & 3) == 0 )
    {
      v35 = *(_DWORD *)(v13 + 32);
      LOWORD(v35) = v35 + 1;
      *(_DWORD *)(v13 + 32) = v35;
      v36 = *(_DWORD *)(v13 + 32);
      BYTE2(v36) = BYTE2(v36) & 0xF8 | 6;
      *(_DWORD *)(v13 + 32) = v36;
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(v13 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_10;
    }
    MiDiscardTransitionPteEx(v13);
    MiUnlockPage(v13, CurrentIrql);
    v4 = a1;
  }
  v12 = 0LL;
LABEL_19:
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(CurrentIrql);
  MiInitializePageColorBase(0LL, 3, v6, (__int64)&v39);
  v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v39, 1u);
  v23 = 0;
  TransitionPte = 0LL;
  v25 = DWORD2(v39) ^ (unsigned __int8)(BYTE8(v39) ^ (v22 % dword_140E2D980[(*((_QWORD *)&v39 + 1) >> 16) & 3LL]));
  if ( v12 )
  {
    v38 = (v12 >> 5) & 0x1F;
  }
  else
  {
    v23 = 48;
    LOBYTE(v38) = 4;
  }
  for ( i = MiGetPage(v37, v25, v23); i == -1LL; i = MiGetPage(v37, v25, v23) )
    MiWaitForFreePage(v37, 0);
  v13 = 48 * i - 0x220000000000LL;
  if ( v12 )
    TransitionPte = MiMakeTransitionPte(i, v38);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v16 = a1;
    v26 = 2560;
    v43 = i;
    *(_QWORD *)(a1 + 808) = TransitionPte;
  }
  else
  {
    if ( v12 )
    {
      v30 = MiMapPageInHyperSpaceWorker(v43, &v42, 0x80000000);
      LOBYTE(v31) = v42;
      v32 = (__int64 *)(v30 + 8LL * v8);
      *v32 = TransitionPte;
      MiUnmapPageInHyperSpaceWorker(v32, v31, 0x80000000LL);
    }
    v16 = a1;
    v26 = 512;
  }
  MiInitializePfnForOtherProcess(i, a2, v43, v26);
  *(_QWORD *)(v13 + 16) = v12;
  if ( v12 )
    MiReadPagefilePage(i, a2);
  v28 = KeGetCurrentIrql();
  v41 = v28;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v27) = v28;
    KiRaiseIrqlProcessIrqlFlags(v27);
  }
  v44 = v28;
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v29 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  if ( v12 )
    v12 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 16) = MiMakeDemandZeroPte(4);
  MiSetPfnModified(48 * i - 0x220000000000LL, 1);
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
  {
    MiInitializeUsedPtesCount(48 * i - 0x220000000000LL, 1u);
    v33 = (volatile signed __int64 *)&unk_140E38538;
    if ( (*(_DWORD *)(v16 + 1208) & 0xF) != 1 )
      v33 = (volatile signed __int64 *)(v16 + 1272);
    _InterlockedIncrement64(v33);
  }
  CurrentIrql = v41;
LABEL_11:
  MiUnlockPage(v13, CurrentIrql);
  if ( v12 )
    MiReleasePageFileInfo(v37, v12, 0);
  v17 = -1744830460;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    v17 = -2147483644;
  ValidPte = MiMakeValidPte(a2, i, v17);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v34 = (ULONG_PTR *)(v16 + 808);
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v34 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v34, ValidPte, 128);
    *v34 = ValidPte;
    v8 = 493;
  }
  v20 = (ULONG_PTR *)(MiMapPageInHyperSpaceWorker(v43, &v42, 0x80000000) + 8LL * v8);
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v20 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v20, ValidPte, 128);
  LOBYTE(v19) = v42;
  *v20 = ValidPte;
  MiUnmapPageInHyperSpaceWorker(v20, v19, 0x80000000LL);
  return ValidPte;
}
