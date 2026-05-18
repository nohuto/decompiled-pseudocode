/*
 * XREFs of sub_18000AF00 @ 0x18000AF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 */

__int64 sub_18000AF00()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18000AED4();
  *v0 |= 0x18uLL;
  v1 = sub_18000AEE4();
  *v1 |= 4uLL;
  return 0LL;
}
