/*
 * XREFs of sub_14000A060 @ 0x14000A060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14000A060(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  *a3 = *a1;
  *(_QWORD *)((char *)a3 + 4) = a2;
}
