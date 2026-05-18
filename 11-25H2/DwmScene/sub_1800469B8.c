/*
 * XREFs of sub_1800469B8 @ 0x1800469B8
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_1800468DC @ 0x1800468DC (sub_1800468DC.c)
 * Callees:
 *     sub_1800447DC @ 0x1800447DC (sub_1800447DC.c)
 */

__int64 __fastcall sub_1800469B8(__int64 a1, int a2, int a3, char a4)
{
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x20u;
  *(_DWORD *)(a1 + 292) |= 0x20u;
  v4 = *(_DWORD *)(a1 + 124);
  v7 = *(_QWORD *)(a1 + 72);
  v6 = *(_DWORD *)(a1 + 304);
  v8 = 2;
  return sub_1800447DC((__int64 *)(a1 + 192), a2, a3, v4, v6, v7, (__int64)&v8);
}
