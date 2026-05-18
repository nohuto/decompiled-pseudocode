/*
 * XREFs of sub_18004D82C @ 0x18004D82C
 * Callers:
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800CAA88 @ 0x1800CAA88 (sub_1800CAA88.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

_QWORD *__fastcall sub_18004D82C(_QWORD *a1, size_t a2)
{
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v4 = (void *)sub_18001B098(a2);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
