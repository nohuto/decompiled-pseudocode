/*
 * XREFs of MiCombineWithStandbyExisting @ 0x1403F1098
 * Callers:
 *     MiConvertStandbyToProto @ 0x1403F0D74 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MiStandbyPageStillCombineCandidate @ 0x1403F136C (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x1403F1420 (MiRecheckCombineVm.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x1403F1C84 (MiConfirmCombinePageContents.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A19F0 (MiWriteRepurposedTransitionPte.c)
 */

__int64 __fastcall MiCombineWithStandbyExisting(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // rbp
  unsigned __int64 *v7; // rdi
  unsigned __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  unsigned int PfnPriority; // eax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+20h] [rbp-58h]
  unsigned int v38; // [rsp+80h] [rbp+8h]
  unsigned __int64 v39; // [rsp+88h] [rbp+10h] BYREF
  __int64 v40; // [rsp+90h] [rbp+18h]
  __int64 v41; // [rsp+98h] [rbp+20h]

  v39 = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = a1[14];
  v41 = *a1;
  v38 = *((_DWORD *)a1 + 35);
  v6 = a1[8];
  v7 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = (unsigned __int64 *)(a3 + 32);
  v37 = a3 + 32;
  v9 = *(_QWORD *)(a3 + 48) & 0x1FLL;
  v40 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v5 + 174));
  v10 = MiLockProtoPoolPage(a3 + 32, 0LL);
  v14 = v10;
  if ( !v10 )
    return 3221225557LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    LOBYTE(v11) = 17;
    MiUnlockProtoPoolPage(v10, v11, v12, v13);
    return 3221225557LL;
  }
  v16 = *v7;
  if ( (*(_QWORD *)a1[9] & 1) == 0 || (v16 & 0x400) != 0 || (v16 & 0x800) == 0 )
    goto LABEL_5;
  if ( qword_140E2DCC0 )
  {
    if ( (v16 & 0x10) != 0 )
      v16 &= ~0x10uLL;
    else
      v16 &= ~qword_140E2DCC0;
  }
  if ( ((v16 >> 12) & 0xFFFFFFFFFFLL) != 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4)
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v6, v40, v7, (unsigned int)v9)
    || !(unsigned int)MiRecheckCombineVm(v41, v38, v6, v5) )
  {
LABEL_5:
    LOBYTE(v11) = 18;
    MiUnlockProtoPoolPage(v14, v11, v12, v13);
LABEL_6:
    result = 3221225496LL;
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  MiTryLockLeafPage(v8, 1, (__int64 *)&v39);
  if ( !v39 )
  {
    v27 = -1073741739;
    goto LABEL_23;
  }
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v39 + 0x220000000000LL) >> 4);
  v21 = a1[12] + 4096;
  v22 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v39 + 40) >> 43) & 0x3FFLL));
  MiMapSinglePage(v21, v20, 3221225488LL, 0LL);
  v23 = MiConfirmCombinePageContents(a1, v20, v22);
  *(_QWORD *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( !v23 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v27 = -1073741800;
LABEL_23:
    LOBYTE(v17) = 18;
    MiUnlockProtoPoolPage(v14, v17, v18, v19);
    result = v27;
    goto LABEL_7;
  }
  if ( (MiUnlinkPageFromListEx(v6, 0) & 3) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v24) = 18;
    MiUnlockProtoPoolPage(v14, v24, v25, v26);
    MiDiscardTransitionPteEx(v6);
    goto LABEL_6;
  }
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  PfnPriority = MiGetPfnPriority(v6);
  v29 = v39;
  MiUpdatePfnPriority(v39, PfnPriority, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v30) = 18;
  MiUnlockProtoPoolPage(v14, v30, v31, v32);
  PrototypePteDirect = MiMakePrototypePteDirect(v37);
  MiWriteRepurposedTransitionPte(v6, PrototypePteDirect | 0x800);
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  v34 = *(_QWORD *)(v6 + 40);
  MiPfnReferenceCountIsZero(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(48 * (v34 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2LL, v35, v36);
  ++*(_QWORD *)a1[13];
  return 0LL;
}
