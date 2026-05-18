/*
 * XREFs of sub_18007302C @ 0x18007302C
 * Callers:
 *     sub_180072F7C @ 0x180072F7C (sub_180072F7C.c)
 *     sub_18007348C @ 0x18007348C (sub_18007348C.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 sub_18007302C()
{
  __int64 result; // rax

  result = sub_18001B1F8(96LL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
