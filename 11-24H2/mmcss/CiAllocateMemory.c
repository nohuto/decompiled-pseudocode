/*
 * XREFs of CiAllocateMemory @ 0x140003F60
 * Callers:
 *     CiTaskIndexCreate @ 0x14000E600 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiAllocateMemory(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1953658433LL);
}
