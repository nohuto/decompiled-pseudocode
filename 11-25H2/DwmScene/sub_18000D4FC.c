/*
 * XREFs of sub_18000D4FC @ 0x18000D4FC
 * Callers:
 *     sub_18000EF44 @ 0x18000EF44 (sub_18000EF44.c)
 *     sub_18000FCB4 @ 0x18000FCB4 (sub_18000FCB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D4FC(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = GetLastError();
  result = a1;
  *(_BYTE *)a1 = 0;
  return result;
}
