/*
 * XREFs of KeHaltOnAddress @ 0x1404AE0FC
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 */

__int64 __fastcall KeHaltOnAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return KiHaltOnAddress(a1, a2, a3);
}
