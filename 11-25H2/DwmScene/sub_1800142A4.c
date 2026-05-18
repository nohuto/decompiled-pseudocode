/*
 * XREFs of sub_1800142A4 @ 0x1800142A4
 * Callers:
 *     sub_18001409C @ 0x18001409C (sub_18001409C.c)
 *     sub_1800142E0 @ 0x1800142E0 (sub_1800142E0.c)
 *     sub_180049900 @ 0x180049900 (sub_180049900.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 *__fastcall sub_1800142A4(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_18001244C((__int64 *)(a1 + 88), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_18001050C(v4);
  return result;
}
