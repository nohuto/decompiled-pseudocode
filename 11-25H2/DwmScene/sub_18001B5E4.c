/*
 * XREFs of sub_18001B5E4 @ 0x18001B5E4
 * Callers:
 *     sub_18001BFD0 @ 0x18001BFD0 (sub_18001BFD0.c)
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 sub_18001B5E4()
{
  __int64 result; // rax

  result = sub_18001B098(104LL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
