/*
 * XREFs of unknown_libname_6 @ 0x1800387C0
 * Callers:
 *     sub_180037CDC @ 0x180037CDC (sub_180037CDC.c)
 *     sub_180037FCC @ 0x180037FCC (sub_180037FCC.c)
 *     sub_1800380FC @ 0x1800380FC (sub_1800380FC.c)
 *     sub_1800383AC @ 0x1800383AC (sub_1800383AC.c)
 *     sub_1800386D0 @ 0x1800386D0 (sub_1800386D0.c)
 *     sub_18003ADD0 @ 0x18003ADD0 (sub_18003ADD0.c)
 *     sub_18005355C @ 0x18005355C (sub_18005355C.c)
 *     sub_18006CC74 @ 0x18006CC74 (sub_18006CC74.c)
 *     sub_1800D25A4 @ 0x1800D25A4 (sub_1800D25A4.c)
 * Callees:
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall unknown_libname_6(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    sub_180011110(a3, i);
    a3 += 2;
  }
  return a3;
}
