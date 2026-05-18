/*
 * XREFs of sub_180011920 @ 0x180011920
 * Callers:
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_18002CAD8 @ 0x18002CAD8 (sub_18002CAD8.c)
 *     sub_18002CBC4 @ 0x18002CBC4 (sub_18002CBC4.c)
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 *     sub_18005A3A4 @ 0x18005A3A4 (sub_18005A3A4.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     sub_18008C5FC @ 0x18008C5FC (sub_18008C5FC.c)
 *     sub_18008C754 @ 0x18008C754 (sub_18008C754.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011920(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
