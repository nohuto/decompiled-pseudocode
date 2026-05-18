/*
 * XREFs of sub_180014FA0 @ 0x180014FA0
 * Callers:
 *     sub_180016F24 @ 0x180016F24 (sub_180016F24.c)
 *     sub_180023CA4 @ 0x180023CA4 (sub_180023CA4.c)
 *     sub_180040FD0 @ 0x180040FD0 (sub_180040FD0.c)
 *     sub_180058C4C @ 0x180058C4C (sub_180058C4C.c)
 *     sub_1800BC4BC @ 0x1800BC4BC (sub_1800BC4BC.c)
 *     sub_1800C25D0 @ 0x1800C25D0 (sub_1800C25D0.c)
 *     sub_1800C27A0 @ 0x1800C27A0 (sub_1800C27A0.c)
 *     sub_1800C2960 @ 0x1800C2960 (sub_1800C2960.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180014FA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
