/*
 * XREFs of sub_18004E420 @ 0x18004E420
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 * Callees:
 *     sub_18004DBE4 @ 0x18004DBE4 (sub_18004DBE4.c)
 *     sub_18004DCEC @ 0x18004DCEC (sub_18004DCEC.c)
 *     sub_18004E110 @ 0x18004E110 (sub_18004E110.c)
 *     sub_18004E4A4 @ 0x18004E4A4 (sub_18004E4A4.c)
 *     sub_18009854C @ 0x18009854C (sub_18009854C.c)
 *     sub_180098868 @ 0x180098868 (sub_180098868.c)
 */

void __fastcall sub_18004E420(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r9
  __m128 *v7; // r9
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[152]; // [rsp+30h] [rbp-98h] BYREF

  sub_18004DBE4((_DWORD *)(a1 + 108), a2);
  *(_DWORD *)(v2 + 252) = 2;
  sub_18009854C();
  *(_DWORD *)(v3 + 144) = 4;
  v4 = (_DWORD *)sub_180098868(v9, v3);
  sub_18004DCEC((_DWORD *)(v5 + 256), v4);
  sub_18004E4A4(v6);
  v8 = xmmword_1800F7600;
  sub_18004E110(v7, (__m128 *)&v8);
}
