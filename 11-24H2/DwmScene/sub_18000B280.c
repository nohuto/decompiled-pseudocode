/*
 * XREFs of sub_18000B280 @ 0x18000B280
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     sub_18000B2B4 @ 0x18000B2B4 (sub_18000B2B4.c)
 */

__int64 sub_18000B280()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_18000B2A4();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_18000B2B4();
  *v1 |= 2uLL;
  return 0LL;
}
