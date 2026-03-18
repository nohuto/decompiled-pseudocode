/*
 * XREFs of MiCombineWithStandbyExisting @ 0x140313D4C
 * Callers:
 *     MiConvertStandbyToProto @ 0x140313ACC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiTryLockLeafPage @ 0x14030245C (MiTryLockLeafPage.c)
 *     MiStandbyPageStillCombineCandidate @ 0x140314020 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x1403140D4 (MiRecheckCombineVm.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x140314938 (MiConfirmCombinePageContents.c)
 *     MiWriteRepurposedTransitionPte @ 0x14036D574 (MiWriteRepurposedTransitionPte.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 */

__int64 __fastcall MiCombineWithStandbyExisting(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // rbp
  unsigned __int64 *v7; // rdi
  unsigned __int64 *v8; // r14
  __int64 v9; // rbx
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // r15
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // ebx
  unsigned int PfnPriority; // eax
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 PrototypePteDirect; // rax
  __int64 v30; // rbx
  __int64 v31; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+80h] [rbp+8h]
  ULONG_PTR v33; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v33 = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = a1[14];
  v35 = *a1;
  v32 = *((_DWORD *)a1 + 35);
  v6 = a1[8];
  v7 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = (unsigned __int64 *)(a3 + 32);
  v31 = a3 + 32;
  v9 = *(_QWORD *)(a3 + 48) & 0x1FLL;
  v34 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v5 + 174));
  v10 = MiLockProtoPoolPage(a3 + 32, 0LL);
  v13 = v10;
  if ( !v10 )
    return 3221225557LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    LOBYTE(v11) = 17;
    MiUnlockProtoPoolPage(v10, v11, v12);
    return 3221225557LL;
  }
  v15 = *v7;
  if ( (*(_QWORD *)a1[9] & 1) == 0 || (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
    goto LABEL_5;
  if ( qword_140E2DB80 )
  {
    if ( (v15 & 0x10) != 0 )
      v15 &= ~0x10uLL;
    else
      v15 &= ~qword_140E2DB80;
  }
  if ( ((v15 >> 12) & 0xFFFFFFFFFFLL) != 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4)
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v6, v34, v7, (unsigned int)v9)
    || !(unsigned int)MiRecheckCombineVm(v35, v32, v6, v5) )
  {
LABEL_5:
    LOBYTE(v11) = 18;
    MiUnlockProtoPoolPage(v13, v11, v12);
LABEL_6:
    result = 3221225496LL;
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  MiTryLockLeafPage(v8, 1, &v33);
  if ( !v33 )
  {
    v24 = -1073741739;
    goto LABEL_23;
  }
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v33 + 0x220000000000LL) >> 4);
  v19 = a1[12] + 4096;
  v20 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL));
  MiMapSinglePage(v19, v18, 3221225488LL, 0LL);
  v21 = MiConfirmCombinePageContents(a1, v18, v20);
  *(_QWORD *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( !v21 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v24 = -1073741800;
LABEL_23:
    LOBYTE(v16) = 18;
    MiUnlockProtoPoolPage(v13, v16, v17);
    result = v24;
    goto LABEL_7;
  }
  if ( (MiUnlinkPageFromListEx(v6, 0) & 3) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v22) = 18;
    MiUnlockProtoPoolPage(v13, v22, v23);
    MiDiscardTransitionPteEx(v6, 0LL);
    goto LABEL_6;
  }
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  PfnPriority = MiGetPfnPriority(v6);
  v26 = v33;
  MiUpdatePfnPriority(v33, PfnPriority, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v27) = 18;
  MiUnlockProtoPoolPage(v13, v27, v28);
  PrototypePteDirect = MiMakePrototypePteDirect(v31);
  MiWriteRepurposedTransitionPte(v6, PrototypePteDirect | 0x800);
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  v30 = *(_QWORD *)(v6 + 40);
  MiPfnReferenceCountIsZero(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(48 * (v30 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  ++*(_QWORD *)a1[13];
  return 0LL;
}
