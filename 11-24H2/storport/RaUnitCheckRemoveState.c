/*
 * XREFs of RaUnitCheckRemoveState @ 0x14000B160
 * Callers:
 *     RaUnitIncrementOutstandingIrpRequests @ 0x14000A98C (RaUnitIncrementOutstandingIrpRequests.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     RaUnitCheckRemoveStateForDisabled @ 0x140069070 (RaUnitCheckRemoveStateForDisabled.c)
 */

__int64 __fastcall RaUnitCheckRemoveState(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 56) == 5 )
  {
    if ( a2 )
    {
      v3 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v3 == 27 || *(_BYTE *)v3 == 14 && *(_DWORD *)(v3 + 24) == 266276 )
        return 0LL;
    }
    return 3221225558LL;
  }
  if ( *(_DWORD *)(a1 + 56) == 6 )
    return 3221225558LL;
  if ( *(_DWORD *)(a1 + 56) != 7 )
    return 0LL;
  return RaUnitCheckRemoveStateForDisabled(a1, a2);
}
