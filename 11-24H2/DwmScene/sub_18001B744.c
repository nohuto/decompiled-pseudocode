/*
 * XREFs of sub_18001B744 @ 0x18001B744
 * Callers:
 *     sub_18001C130 @ 0x18001C130 (sub_18001C130.c)
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 sub_18001B744()
{
  __int64 result; // rax

  result = sub_18001B1F8(104LL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
