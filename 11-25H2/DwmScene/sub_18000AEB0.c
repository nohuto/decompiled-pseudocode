/*
 * XREFs of sub_18000AEB0 @ 0x18000AEB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AED4 @ 0x18000AED4 (sub_18000AED4.c)
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 */

__int64 sub_18000AEB0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_18000AED4();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_18000AEE4();
  *v1 |= 2uLL;
  return 0LL;
}
