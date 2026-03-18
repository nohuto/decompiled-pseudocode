/*
 * XREFs of KeHaltOnAddress @ 0x1404B3F5C
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KiHaltOnAddress @ 0x1404F7BE4 (KiHaltOnAddress.c)
 */

__int64 __fastcall KeHaltOnAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return KiHaltOnAddress(a1, a2, a3);
}
