/*
 * XREFs of MiCombineWithStandbyExisting @ 0x140224A84
 * Callers:
 *     MiConvertStandbyToProto @ 0x140224810 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiStandbyPageStillCombineCandidate @ 0x140224D58 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x140224E0C (MiRecheckCombineVm.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x1402252E0 (MiConfirmCombinePageContents.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A6730 (MiWriteRepurposedTransitionPte.c)
 */

__int64 __fastcall MiCombineWithStandbyExisting(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // rbp
  unsigned __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  unsigned int PfnPriority; // eax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v26; // rbx
  __int64 v27; // [rsp+20h] [rbp-58h]
  unsigned int v28; // [rsp+80h] [rbp+8h]
  __int64 v29; // [rsp+88h] [rbp+10h] BYREF
  __int64 v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v29 = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = a1[14];
  v31 = *a1;
  v28 = *((_DWORD *)a1 + 35);
  v6 = a1[8];
  v7 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = a3 + 32;
  v27 = a3 + 32;
  v9 = *(_QWORD *)(a3 + 48) & 0x1FLL;
  v30 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v5 + 174));
  v10 = MiLockProtoPoolPage(a3 + 32, 0LL);
  v12 = v10;
  if ( !v10 )
    return 3221225557LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    LOBYTE(v11) = 17;
    MiUnlockProtoPoolPage(v10, v11);
    return 3221225557LL;
  }
  v14 = *v7;
  if ( (*(_QWORD *)a1[9] & 1) == 0 || (v14 & 0x400) != 0 || (v14 & 0x800) == 0 )
    goto LABEL_5;
  if ( qword_140E2D940 )
  {
    if ( (v14 & 0x10) != 0 )
      v14 &= ~0x10uLL;
    else
      v14 &= ~qword_140E2D940;
  }
  if ( ((v14 >> 12) & 0xFFFFFFFFFFLL) != 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4)
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v6, v30, v7, (unsigned int)v9)
    || !(unsigned int)MiRecheckCombineVm(v31, v28, v6, v5) )
  {
LABEL_5:
    LOBYTE(v11) = 18;
    MiUnlockProtoPoolPage(v12, v11);
LABEL_6:
    result = 3221225496LL;
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  MiTryLockLeafPage(v8, 1LL, &v29);
  if ( !v29 )
  {
    v21 = -1073741739;
    goto LABEL_23;
  }
  v16 = 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4);
  v17 = a1[12] + 4096;
  v18 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL));
  MiMapSinglePage(v17, v16, 3221225488LL, 0LL);
  v19 = MiConfirmCombinePageContents(a1, v16, v18);
  *(_QWORD *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( !v19 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = -1073741800;
LABEL_23:
    LOBYTE(v15) = 18;
    MiUnlockProtoPoolPage(v12, v15);
    result = v21;
    goto LABEL_7;
  }
  if ( (MiUnlinkPageFromListEx(v6, 0) & 3) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v20) = 18;
    MiUnlockProtoPoolPage(v12, v20);
    MiDiscardTransitionPteEx(v6, 0LL);
    goto LABEL_6;
  }
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  PfnPriority = MiGetPfnPriority(v6);
  v23 = v29;
  MiUpdatePfnPriority(v29, PfnPriority, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v24) = 18;
  MiUnlockProtoPoolPage(v12, v24);
  PrototypePteDirect = MiMakePrototypePteDirect(v27);
  MiWriteRepurposedTransitionPte(v6, PrototypePteDirect | 0x800);
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  v26 = *(_QWORD *)(v6 + 40);
  MiPfnReferenceCountIsZero(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(48 * (v26 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  ++*(_QWORD *)a1[13];
  return 0LL;
}
