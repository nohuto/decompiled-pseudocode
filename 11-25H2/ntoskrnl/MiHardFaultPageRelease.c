/*
 * XREFs of MiHardFaultPageRelease @ 0x14023EBE8
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiHandleInPageError @ 0x1404541D4 (MiHandleInPageError.c)
 */

__int64 __fastcall MiHardFaultPageRelease(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rbp
  int v11; // [rsp+30h] [rbp+8h]

  v4 = *a1;
  v6 = a2;
  v7 = *(_QWORD *)(*a1 + 248);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    return MiRemoveLockedPageChargeAndDecRef(v6, a2, a3, a4);
  if ( (*(_BYTE *)(a2 + 35) & 0x10) != 0 )
  {
    if ( a2 == v7 && *(int *)(v4 + 80) >= 0 )
      *(_DWORD *)(v4 + 80) = -1073741761;
    goto LABEL_12;
  }
  if ( *(int *)(v4 + 80) < 0 )
  {
LABEL_11:
    v11 = *(_DWORD *)(a2 + 32);
    HIBYTE(v11) |= 0x10u;
    *(_DWORD *)(a2 + 32) = v11;
LABEL_12:
    if ( ((*(_DWORD *)(v4 + 192) & 0x40) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0
      && !(unsigned int)MiIsPfnCommitNotCharged(a2) )
    {
      MiChargeCommit(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL)), 1uLL, 4);
    }
    MiHandleInPageError(v6);
    return MiRemoveLockedPageChargeAndDecRef(v6, a2, a3, a4);
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( a2 == v7 )
      *((_DWORD *)a1 + 2) = -1073740748;
    goto LABEL_11;
  }
  if ( a2 != v7 )
    goto LABEL_6;
  v10 = *(_QWORD *)(v4 + 104);
  if ( v10 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v4 + 232), a2, *(_QWORD *)(v4 + 104));
    *(_QWORD *)(v4 + 104) = 0LL;
    v7 = v10;
    v6 = v10;
    *(_QWORD *)(v4 + 248) = v10;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v6 == v7 && *((int *)a1 + 2) >= 0 )
    return MiMakeFaultPfnActive(a1, v6);
LABEL_6:
  result = MiRemoveLockedPageCharge(v6);
  if ( (_DWORD)result )
  {
    v9 = a1[7];
    if ( v9 )
      return MiInsertProtectedStandbyPage(v9, v6);
    else
      return MiPfnReferenceCountIsZero(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4));
  }
  return result;
}
