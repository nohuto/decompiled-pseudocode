/*
 * XREFs of sub_1800C1458 @ 0x1800C1458
 * Callers:
 *     sub_1800C020C @ 0x1800C020C (sub_1800C020C.c)
 *     sub_1800C0334 @ 0x1800C0334 (sub_1800C0334.c)
 * Callees:
 *     sub_1800C1C48 @ 0x1800C1C48 (sub_1800C1C48.c)
 */

__int64 sub_1800C1458()
{
  __int64 result; // rax

  result = sub_1800C1C48();
  if ( (_DWORD)result == 45 )
    return 44LL;
  if ( (_DWORD)result == 40 )
    return 39LL;
  return result;
}
