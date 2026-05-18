/*
 * XREFs of sub_18000EFC8 @ 0x18000EFC8
 * Callers:
 *     sub_18000E984 @ 0x18000E984 (sub_18000E984.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EFC8(int a1)
{
  dword_1801C43A4 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801C4414);
}
