/*
 * XREFs of HalpMceRecoveryMemoryError @ 0x1405522C0
 * Callers:
 *     HalpMceRecoveryRequired @ 0x14055263C (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x1405522E4 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x1405523F8 (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryError(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    return HalpMceRecoveryMemoryErrorIntel();
  else
    return HalpMceRecoveryMemoryErrorAmd();
}
