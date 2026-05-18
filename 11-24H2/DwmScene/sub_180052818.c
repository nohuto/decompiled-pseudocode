/*
 * XREFs of sub_180052818 @ 0x180052818
 * Callers:
 *     sub_1800516E0 @ 0x1800516E0 (sub_1800516E0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_1800522C0 @ 0x1800522C0 (sub_1800522C0.c)
 * Callees:
 *     sub_180037274 @ 0x180037274 (sub_180037274.c)
 */

__int64 (__fastcall ***__fastcall sub_180052818(_QWORD *a1, __int64 a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = a2;
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))sub_180037274((__int64)a1, result);
  return result;
}
