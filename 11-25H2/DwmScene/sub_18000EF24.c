/*
 * XREFs of sub_18000EF24 @ 0x18000EF24
 * Callers:
 *     sub_18000E884 @ 0x18000E884 (sub_18000E884.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EF24(int a1)
{
  dword_1801C3408 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801C3418);
}
