/*
 * XREFs of sub_18004D98C @ 0x18004D98C
 * Callers:
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800CABE8 @ 0x1800CABE8 (sub_1800CABE8.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

_QWORD *__fastcall sub_18004D98C(_QWORD *a1, size_t a2)
{
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v4 = (void *)sub_18001B1F8(a2);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
