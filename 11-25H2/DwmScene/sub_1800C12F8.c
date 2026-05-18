/*
 * XREFs of sub_1800C12F8 @ 0x1800C12F8
 * Callers:
 *     sub_1800C00AC @ 0x1800C00AC (sub_1800C00AC.c)
 *     sub_1800C01D4 @ 0x1800C01D4 (sub_1800C01D4.c)
 * Callees:
 *     sub_1800C1AE8 @ 0x1800C1AE8 (sub_1800C1AE8.c)
 */

__int64 sub_1800C12F8()
{
  __int64 result; // rax

  result = sub_1800C1AE8();
  if ( (_DWORD)result == 45 )
    return 44LL;
  if ( (_DWORD)result == 40 )
    return 39LL;
  return result;
}
