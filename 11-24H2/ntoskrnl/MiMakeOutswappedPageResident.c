/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1402EF6F4
 * Callers:
 *     MmInSwapProcess @ 0x1402DFEE4 (MmInSwapProcess.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiInitializeUsedPtesCount @ 0x140432950 (MiInitializeUsedPtesCount.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 */

ULONG_PTR __fastcall MiMakeOutswappedPageResident(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  __int64 i; // r15
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // r8d
  ULONG_PTR ValidPte; // rbx
  ULONG_PTR *v20; // rdi
  unsigned __int8 v21; // dl
  unsigned __int32 v23; // eax
  unsigned int v24; // edi
  __int64 TransitionPte; // rsi
  unsigned int v26; // r14d
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // si
  __int64 v33; // rdx
  unsigned int v34; // esi
  unsigned __int64 v35; // rax
  unsigned __int8 v36; // dl
  __int64 *v37; // rcx
  volatile signed __int64 *v38; // rax
  ULONG_PTR *v39; // rdi
  int v40; // [rsp+20h] [rbp-38h]
  int v41; // [rsp+20h] [rbp-38h]
  __int64 v42; // [rsp+28h] [rbp-30h]
  __int64 v43; // [rsp+30h] [rbp-28h]
  __int128 v44; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v46; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v47; // [rsp+A8h] [rbp+50h] BYREF
  unsigned __int64 v48; // [rsp+B0h] [rbp+58h]
  unsigned __int8 v49; // [rsp+B8h] [rbp+60h] BYREF

  v48 = a3;
  v49 = 0;
  v44 = 0LL;
  v4 = a1;
  v5 = a1 + 808;
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
    v5 = a2;
  v6 = *(unsigned __int16 *)(a1 + 260);
  v7 = *(unsigned __int16 *)(a1 + 1198);
  v8 = (v5 >> 3) & 0x1FF;
  v42 = *((_QWORD *)qword_140E300C8 + v7);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, v4);
      v4 = a1;
    }
    v47 = CurrentIrql;
    if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
      break;
    v10 = (unsigned __int64 *)(v4 + 808);
    v11 = MiLockTransitionLeafPageEx(v4 + 808, &v49, 0);
    v12 = *v10;
    v13 = v11;
    if ( (v12 & 0x800) == 0 )
      goto LABEL_19;
    v49 = CurrentIrql;
    i = 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4);
    v15 = *(_BYTE *)(v11 + 34) & 7;
    v48 = 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4);
    if ( v15 == 6 )
    {
      *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
LABEL_10:
      v16 = a1;
      v12 = MiCaptureDirtyBitToPfn(v13);
      goto LABEL_11;
    }
    if ( (MiUnlinkPageFromListEx(v13) & 3) == 0 )
    {
      v40 = *(_DWORD *)(v13 + 32);
      LOWORD(v40) = v40 + 1;
      *(_DWORD *)(v13 + 32) = v40;
      v41 = *(_DWORD *)(v13 + 32);
      BYTE2(v41) = BYTE2(v41) & 0xF8 | 6;
      *(_DWORD *)(v13 + 32) = v41;
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
  MiInitializePageColorBase(0LL, 3LL, v6, &v44);
  v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v44, 1u);
  v24 = 0;
  TransitionPte = 0LL;
  v26 = DWORD2(v44) ^ (unsigned __int8)(BYTE8(v44) ^ (v23 % dword_140E2DD00[(*((_QWORD *)&v44 + 1) >> 16) & 3LL]));
  if ( v12 )
  {
    v43 = (v12 >> 5) & 0x1F;
  }
  else
  {
    v24 = 48;
    LODWORD(v43) = 4;
  }
  for ( i = MiGetPage(v42, v26, v24, dword_140E2DD00); i == -1; i = MiGetPage(v42, v26, v24, v27) )
    MiWaitForFreePage(v42, 0);
  v13 = 48 * i - 0x220000000000LL;
  if ( v12 )
    TransitionPte = MiMakeTransitionPte(i, (unsigned int)v43);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v16 = a1;
    v28 = 2560LL;
    v48 = i;
    *(_QWORD *)(a1 + 808) = TransitionPte;
  }
  else
  {
    if ( v12 )
    {
      v35 = MiMapPageInHyperSpaceWorker(v48, &v47, 0x80000000);
      v36 = v47;
      v37 = (__int64 *)(v35 + 8LL * v8);
      *v37 = TransitionPte;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v37, v36, 0x80000000);
    }
    v16 = a1;
    v28 = 512LL;
  }
  MiInitializePfnForOtherProcess(i, a2, v48, v28);
  *(_QWORD *)(v13 + 16) = v12;
  if ( v12 )
    MiReadPagefilePage(i, a2);
  v32 = KeGetCurrentIrql();
  v46 = v32;
  v33 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v29) = v32;
    KiRaiseIrqlProcessIrqlFlags(v29, 2LL);
  }
  v49 = v32;
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v34);
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
  *(_QWORD *)(v13 + 16) = MiMakeDemandZeroPte(4LL, v33, v30, v31);
  MiSetPfnModified(48 * i - 0x220000000000LL, 1);
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
  {
    MiInitializeUsedPtesCount(48 * i - 0x220000000000LL, 1LL);
    v38 = (volatile signed __int64 *)&unk_140E388B8;
    if ( (*(_DWORD *)(v16 + 1208) & 0xF) != 1 )
      v38 = (volatile signed __int64 *)(v16 + 1272);
    _InterlockedIncrement64(v38);
  }
  CurrentIrql = v46;
LABEL_11:
  MiUnlockPage(v13, CurrentIrql);
  if ( v12 )
    MiReleasePageFileInfo(v42, v12, 0LL, v17);
  v18 = -1744830460;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    v18 = -2147483644;
  ValidPte = MiMakeValidPte(a2, i, v18);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v39 = (ULONG_PTR *)(v16 + 808);
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v39 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v39, ValidPte, 128LL);
    *v39 = ValidPte;
    v8 = 493;
  }
  v20 = (ULONG_PTR *)(MiMapPageInHyperSpaceWorker(v48, &v47, 0x80000000) + 8LL * v8);
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v20 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v20, ValidPte, 128LL);
  v21 = v47;
  *v20 = ValidPte;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v20, v21, 0x80000000);
  return ValidPte;
}
