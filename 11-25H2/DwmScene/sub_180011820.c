/*
 * XREFs of sub_180011820 @ 0x180011820
 * Callers:
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_18002C978 @ 0x18002C978 (sub_18002C978.c)
 *     sub_18002CA64 @ 0x18002CA64 (sub_18002CA64.c)
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 *     sub_18005A244 @ 0x18005A244 (sub_18005A244.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_180088FF0 @ 0x180088FF0 (sub_180088FF0.c)
 *     sub_18008C49C @ 0x18008C49C (sub_18008C49C.c)
 *     sub_18008C5F4 @ 0x18008C5F4 (sub_18008C5F4.c)
 *     sub_18008D6A0 @ 0x18008D6A0 (sub_18008D6A0.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011820(_QWORD *a1, unsigned __int64 a2)
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
