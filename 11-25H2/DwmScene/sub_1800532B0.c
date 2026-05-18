/*
 * XREFs of sub_1800532B0 @ 0x1800532B0
 * Callers:
 *     sub_180052C10 @ 0x180052C10 (sub_180052C10.c)
 * Callees:
 *     sub_18003055C @ 0x18003055C (sub_18003055C.c)
 *     sub_1800305F8 @ 0x1800305F8 (sub_1800305F8.c)
 *     sub_1800529AC @ 0x1800529AC (sub_1800529AC.c)
 */

__int64 __fastcall sub_1800532B0(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 378) = 0;
  *(_BYTE *)(a1 + 377) = 1;
  v4 = a1;
  v5 = sub_180053AB0;
  sub_1800529AC((__int64)&v3, &v5, &v4);
  sub_1800305F8(a1 + 104, &v3);
  return sub_18003055C((__int64)&v3);
}
