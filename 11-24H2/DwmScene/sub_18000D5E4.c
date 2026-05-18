/*
 * XREFs of sub_18000D5E4 @ 0x18000D5E4
 * Callers:
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D5E4(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = GetLastError();
  result = a1;
  *(_BYTE *)a1 = 0;
  return result;
}
