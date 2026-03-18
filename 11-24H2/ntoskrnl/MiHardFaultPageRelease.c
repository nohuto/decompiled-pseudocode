/*
 * XREFs of MiHardFaultPageRelease @ 0x1402F303C
 * Callers:
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x140394570 (MiSwapHardFaultPage.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiHandleInPageError @ 0x1404802C4 (MiHandleInPageError.c)
 */

int __fastcall MiHardFaultPageRelease(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rcx
  int result; // eax
  __int64 v8; // rcx
  ULONG_PTR v9; // rbp
  int v10; // [rsp+30h] [rbp+8h]

  v3 = *a1;
  v5 = a2;
  v6 = *(_QWORD *)(*a1 + 248);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    return MiRemoveLockedPageChargeAndDecRef(v5, a2, a3);
  LOBYTE(a2) = 16;
  if ( (*(_BYTE *)(v5 + 35) & 0x10) != 0 )
  {
    if ( v5 == v6 && *(int *)(v3 + 80) >= 0 )
      *(_DWORD *)(v3 + 80) = -1073741761;
    goto LABEL_12;
  }
  if ( *(int *)(v3 + 80) < 0 )
  {
LABEL_11:
    v10 = *(_DWORD *)(v5 + 32);
    HIBYTE(v10) |= 0x10u;
    *(_DWORD *)(v5 + 32) = v10;
LABEL_12:
    if ( ((*(_DWORD *)(v3 + 192) & 0x40) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(v5 + 16) & 0x400LL) == 0
      && !(unsigned int)MiIsPfnCommitNotCharged(v5) )
    {
      MiChargeCommit(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)), 1uLL, 4);
    }
    MiHandleInPageError(v5);
    return MiRemoveLockedPageChargeAndDecRef(v5, a2, a3);
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( v5 == v6 )
      *((_DWORD *)a1 + 2) = -1073740748;
    goto LABEL_11;
  }
  if ( v5 != v6 )
    goto LABEL_6;
  v9 = *(_QWORD *)(v3 + 104);
  if ( v9 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v3 + 232), v5, *(_QWORD *)(v3 + 104));
    *(_QWORD *)(v3 + 104) = 0LL;
    v6 = v9;
    v5 = v9;
    *(_QWORD *)(v3 + 248) = v9;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v5 == v6 && *((int *)a1 + 2) >= 0 )
    return MiMakeFaultPfnActive(a1, v5);
LABEL_6:
  result = MiRemoveLockedPageCharge(v5, a2, a3);
  if ( result )
  {
    v8 = a1[7];
    if ( v8 )
      return MiInsertProtectedStandbyPage(v8, v5);
    else
      return MiPfnReferenceCountIsZero(v5, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4));
  }
  return result;
}
