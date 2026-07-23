/*
 * XREFs of MiHardFaultPageRelease @ 0x140258B7C
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     MiHandleInPageError @ 0x14047AF04 (MiHandleInPageError.c)
 */

__int64 __fastcall MiHardFaultPageRelease(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r9
  int v10; // [rsp+30h] [rbp+8h]

  v2 = *a1;
  v4 = a2;
  v5 = *(_QWORD *)(*a1 + 248);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    return MiRemoveLockedPageChargeAndDecRef(v4);
  if ( (*(_BYTE *)(a2 + 35) & 0x10) != 0 )
  {
    if ( a2 == v5 && *(int *)(v2 + 80) >= 0 )
      *(_DWORD *)(v2 + 80) = -1073741761;
    goto LABEL_12;
  }
  if ( *(int *)(v2 + 80) < 0 )
  {
LABEL_11:
    v10 = *(_DWORD *)(a2 + 32);
    HIBYTE(v10) |= 0x10u;
    *(_DWORD *)(a2 + 32) = v10;
LABEL_12:
    if ( ((*(_DWORD *)(v2 + 192) & 0x40) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0
      && !(unsigned int)MiIsPfnCommitNotCharged(a2) )
    {
      MiChargeCommit(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)), 1LL, 4LL, v9);
    }
    MiHandleInPageError(v4);
    return MiRemoveLockedPageChargeAndDecRef(v4);
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( a2 == v5 )
      *((_DWORD *)a1 + 2) = -1073740748;
    goto LABEL_11;
  }
  if ( a2 != v5 )
    goto LABEL_6;
  v8 = *(_QWORD *)(v2 + 104);
  if ( v8 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v2 + 232), a2, *(_QWORD *)(v2 + 104));
    *(_QWORD *)(v2 + 104) = 0LL;
    v5 = v8;
    v4 = v8;
    *(_QWORD *)(v2 + 248) = v8;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v4 == v5 && *((int *)a1 + 2) >= 0 )
    return MiMakeFaultPfnActive(a1, v4);
LABEL_6:
  result = MiRemoveLockedPageCharge(v4);
  if ( (_DWORD)result )
  {
    v7 = a1[7];
    if ( v7 )
      return MiInsertProtectedStandbyPage(v7, v4);
    else
      return MiPfnReferenceCountIsZero(v4, 0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4));
  }
  return result;
}
