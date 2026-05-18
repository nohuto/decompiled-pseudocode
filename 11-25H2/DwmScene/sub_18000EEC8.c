/*
 * XREFs of sub_18000EEC8 @ 0x18000EEC8
 * Callers:
 *     sub_18000E884 @ 0x18000E884 (sub_18000E884.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EEC8(int a1)
{
  dword_1801C338C = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801C3404);
}
