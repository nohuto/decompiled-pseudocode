/*
 * XREFs of RaUnitCheckRemoveStateForDisabled @ 0x140069070
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x14000B160 (RaUnitCheckRemoveState.c)
 * Callees:
 *     RaidSrbFunctionFromIrp @ 0x1400690E0 (RaidSrbFunctionFromIrp.c)
 */

__int64 __fastcall RaUnitCheckRemoveStateForDisabled(__int64 a1, __int64 a2)
{
  char *v2; // r10
  char v3; // r9
  char v4; // r8
  char v5; // al

  if ( !a2 )
    return 3221225558LL;
  v2 = *(char **)(a2 + 184);
  v3 = *v2;
  v4 = v2[1];
  if ( *v2 == 15 )
  {
    v5 = RaidSrbFunctionFromIrp(a2);
    if ( v4 == -16 || v5 == 1 )
      return 0LL;
  }
  if ( v3 == 27 )
    return 0LL;
  if ( v3 == 14 )
  {
    if ( *((_DWORD *)v2 + 6) != 266264 )
      return 3221225558LL;
    return 0LL;
  }
  if ( v3 != 22 )
    return 3221225558LL;
  return v4 != 2 ? 0xC0000056 : 0;
}
