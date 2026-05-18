/*
 * XREFs of sub_1800BADC0 @ 0x1800BADC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B258 @ 0x18001B258 (sub_18001B258.c)
 */

__int64 __fastcall sub_1800BADC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_18001B258(*(LPVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
