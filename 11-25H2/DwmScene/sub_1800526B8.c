/*
 * XREFs of sub_1800526B8 @ 0x1800526B8
 * Callers:
 *     sub_180051580 @ 0x180051580 (sub_180051580.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_180052160 @ 0x180052160 (sub_180052160.c)
 * Callees:
 *     sub_180037114 @ 0x180037114 (sub_180037114.c)
 */

__int64 (__fastcall ***__fastcall sub_1800526B8(_QWORD *a1, __int64 a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = a2;
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))sub_180037114((__int64)a1, result);
  return result;
}
