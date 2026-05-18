/*
 * XREFs of sub_18004E580 @ 0x18004E580
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 * Callees:
 *     sub_18004DD44 @ 0x18004DD44 (sub_18004DD44.c)
 *     sub_18004DE4C @ 0x18004DE4C (sub_18004DE4C.c)
 *     sub_18004E270 @ 0x18004E270 (sub_18004E270.c)
 *     sub_18004E604 @ 0x18004E604 (sub_18004E604.c)
 *     sub_1800986AC @ 0x1800986AC (sub_1800986AC.c)
 *     sub_1800989C8 @ 0x1800989C8 (sub_1800989C8.c)
 */

void __fastcall sub_18004E580(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r9
  __m128 *v7; // r9
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[152]; // [rsp+30h] [rbp-98h] BYREF

  sub_18004DD44((_DWORD *)(a1 + 108), a2);
  *(_DWORD *)(v2 + 252) = 2;
  sub_1800986AC();
  *(_DWORD *)(v3 + 144) = 4;
  v4 = (_DWORD *)sub_1800989C8(v9, v3);
  sub_18004DE4C((_DWORD *)(v5 + 256), v4);
  sub_18004E604(v6);
  v8 = xmmword_1800F8600;
  sub_18004E270(v7, (__m128 *)&v8);
}
