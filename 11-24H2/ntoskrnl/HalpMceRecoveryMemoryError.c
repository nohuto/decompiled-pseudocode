/*
 * XREFs of HalpMceRecoveryMemoryError @ 0x140554BC0
 * Callers:
 *     HalpMceRecoveryRequired @ 0x140554F3C (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140554BE4 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x140554CF8 (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryError(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    return HalpMceRecoveryMemoryErrorIntel();
  else
    return HalpMceRecoveryMemoryErrorAmd();
}
