/*
 * XREFs of HalpMceRecoveryMemoryError @ 0x140552500
 * Callers:
 *     HalpMceRecoveryRequired @ 0x14055287C (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140552524 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x140552638 (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryError(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    return HalpMceRecoveryMemoryErrorIntel();
  else
    return HalpMceRecoveryMemoryErrorAmd();
}
