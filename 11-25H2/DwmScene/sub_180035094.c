/*
 * XREFs of sub_180035094 @ 0x180035094
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 * Callees:
 *     sub_18002DA60 @ 0x18002DA60 (sub_18002DA60.c)
 *     sub_18003055C @ 0x18003055C (sub_18003055C.c)
 *     sub_1800305F8 @ 0x1800305F8 (sub_1800305F8.c)
 */

__int64 __fastcall sub_180035094(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  DWORD2(v3) = 0;
  *(_QWORD *)&v3 = sub_180034B90;
  v5 = a1;
  v4 = v3;
  sub_18002DA60((__int64)&v3, &v4, &v5);
  sub_1800305F8(a1 + 1184, &v3);
  return sub_18003055C((__int64)&v3);
}
