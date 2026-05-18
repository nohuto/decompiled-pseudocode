/*
 * XREFs of sub_18000B2D0 @ 0x18000B2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B2A4 @ 0x18000B2A4 (sub_18000B2A4.c)
 *     sub_18000B2B4 @ 0x18000B2B4 (sub_18000B2B4.c)
 */

__int64 sub_18000B2D0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18000B2A4();
  *v0 |= 0x18uLL;
  v1 = sub_18000B2B4();
  *v1 |= 4uLL;
  return 0LL;
}
