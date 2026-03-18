/*
 * XREFs of MiCanBatchHardFaultPages @ 0x1402F2630
 * Callers:
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiAreChargesNeededToLockPage @ 0x14023C190 (MiAreChargesNeededToLockPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140428E30 (MiIsPageEligibleForProtectedStandby.c)
 */

__int64 __fastcall MiCanBatchHardFaultPages(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // eax
  int v10; // [rsp+30h] [rbp+8h]
  int v11; // [rsp+30h] [rbp+8h]
  int v12; // [rsp+30h] [rbp+8h]

  v2 = *a1;
  v3 = a2;
  v10 = *(_DWORD *)(a2 + 32);
  BYTE2(v10) &= ~0x20u;
  *(_DWORD *)(a2 + 32) = v10;
  *(_QWORD *)a2 = 0LL;
  if ( a1[7] && !(unsigned int)MiIsPageEligibleForProtectedStandby()
    || (*(_BYTE *)(a2 + 34) & 0x18) != 0
    || (unsigned int)MiGetPfnSlabType(v3) != 9
    || (*(_DWORD *)(v6 + 32) & 0x40000000) != 0
    || (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0
    || (*(_BYTE *)(v6 + 35) & 0x10) != 0
    || *(int *)(v2 + 80) < 0
    || *(_QWORD *)(v7 + 16) >= *(_QWORD *)(v7 + 24) )
  {
    return 2LL;
  }
  if ( (*(_DWORD *)(v2 + 192) & 0x20000) != 0 )
  {
    **(_QWORD **)(v7 + 16) |= 0x8000000000000000uLL;
  }
  else
  {
    if ( (unsigned __int16)*(_DWORD *)(v6 + 32) == 1 )
    {
      if ( _bittest64((const signed __int64 *)(v6 + 40), 0x35u)
        || (v11 = *(_DWORD *)(v6 + 32),
            LOWORD(v11) = v11 - 1,
            *(_DWORD *)(v6 + 32) = v11,
            v8 = MiAreChargesNeededToLockPage(v6),
            v12 = *(_DWORD *)(v6 + 32),
            LOWORD(v12) = v12 + 1,
            *(_DWORD *)(v6 + 32) = v12,
            v8) )
      {
        MiRemoveLockedPageCharge(v6, v4, v5);
        return 1LL;
      }
      return 2LL;
    }
    MiRemoveLockedPageCharge(v6, v4, v5);
  }
  return 0LL;
}
