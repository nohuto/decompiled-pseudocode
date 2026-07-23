/*
 * XREFs of MiCanBatchHardFaultPages @ 0x140258170
 * Callers:
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiAreChargesNeededToLockPage @ 0x140345EF0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x14041CF80 (MiIsPageEligibleForProtectedStandby.c)
 */

__int64 __fastcall MiCanBatchHardFaultPages(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // eax
  int v8; // [rsp+30h] [rbp+8h]
  int v9; // [rsp+30h] [rbp+8h]
  int v10; // [rsp+30h] [rbp+8h]

  v2 = *a1;
  v3 = a2;
  v8 = *(_DWORD *)(a2 + 32);
  BYTE2(v8) &= ~0x20u;
  *(_DWORD *)(a2 + 32) = v8;
  *(_QWORD *)a2 = 0LL;
  if ( a1[7] && !(unsigned int)MiIsPageEligibleForProtectedStandby()
    || (*(_BYTE *)(a2 + 34) & 0x18) != 0
    || (unsigned int)MiGetPfnSlabType(v3) != 9
    || (*(_DWORD *)(v4 + 32) & 0x40000000) != 0
    || (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0
    || (*(_BYTE *)(v4 + 35) & 0x10) != 0
    || *(int *)(v2 + 80) < 0
    || *(_QWORD *)(v5 + 16) >= *(_QWORD *)(v5 + 24) )
  {
    return 2LL;
  }
  if ( (*(_DWORD *)(v2 + 192) & 0x20000) != 0 )
  {
    **(_QWORD **)(v5 + 16) |= 0x8000000000000000uLL;
  }
  else
  {
    if ( (unsigned __int16)*(_DWORD *)(v4 + 32) == 1 )
    {
      if ( _bittest64((const signed __int64 *)(v4 + 40), 0x35u)
        || (v9 = *(_DWORD *)(v4 + 32),
            LOWORD(v9) = v9 - 1,
            *(_DWORD *)(v4 + 32) = v9,
            v6 = MiAreChargesNeededToLockPage(v4),
            v10 = *(_DWORD *)(v4 + 32),
            LOWORD(v10) = v10 + 1,
            *(_DWORD *)(v4 + 32) = v10,
            v6) )
      {
        MiRemoveLockedPageCharge(v4);
        return 1LL;
      }
      return 2LL;
    }
    MiRemoveLockedPageCharge(v4);
  }
  return 0LL;
}
