/*
 * XREFs of sub_180046758 @ 0x180046758
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_18004667C @ 0x18004667C (sub_18004667C.c)
 * Callees:
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 */

__int64 __fastcall sub_180046758(__int64 a1, int a2, int a3, char a4)
{
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v4 = *(_DWORD *)(a1 + 124);
  v7 = *(_QWORD *)(a1 + 72);
  v6 = *(_DWORD *)(a1 + 304);
  v8 = 1;
  return sub_180044734((__int64 *)(a1 + 160), a2, a3, v4, v6, v7, (__int64)&v8);
}
