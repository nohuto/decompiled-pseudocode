/*
 * XREFs of unknown_libname_6 @ 0x180038660
 * Callers:
 *     sub_180037B7C @ 0x180037B7C (sub_180037B7C.c)
 *     sub_180037E6C @ 0x180037E6C (sub_180037E6C.c)
 *     sub_180037F9C @ 0x180037F9C (sub_180037F9C.c)
 *     sub_18003824C @ 0x18003824C (sub_18003824C.c)
 *     sub_180038570 @ 0x180038570 (sub_180038570.c)
 *     sub_18003AC70 @ 0x18003AC70 (sub_18003AC70.c)
 *     sub_1800533FC @ 0x1800533FC (sub_1800533FC.c)
 *     sub_18006CB14 @ 0x18006CB14 (sub_18006CB14.c)
 *     sub_1800D2444 @ 0x1800D2444 (sub_1800D2444.c)
 * Callees:
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

// Microsoft VisualC v7/14 64bit runtime
_QWORD *__fastcall unknown_libname_6(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    sub_180011010(a3, i);
    a3 += 2;
  }
  return a3;
}
