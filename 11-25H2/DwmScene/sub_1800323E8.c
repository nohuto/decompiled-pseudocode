/*
 * XREFs of sub_1800323E8 @ 0x1800323E8
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003385C @ 0x18003385C (sub_18003385C.c)
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 *     sub_180034548 @ 0x180034548 (sub_180034548.c)
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 *     sub_1800355DC @ 0x1800355DC (sub_1800355DC.c)
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 *     sub_180061990 @ 0x180061990 (sub_180061990.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800323E8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 968);
  a2[1] = *(_QWORD *)(a1 + 976);
  return a2;
}
