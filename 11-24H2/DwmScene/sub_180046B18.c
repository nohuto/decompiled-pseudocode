/*
 * XREFs of sub_180046B18 @ 0x180046B18
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_180046A3C @ 0x180046A3C (sub_180046A3C.c)
 * Callees:
 *     sub_18004493C @ 0x18004493C (sub_18004493C.c)
 */

__int64 __fastcall sub_180046B18(__int64 a1, int a2, int a3, char a4)
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
  return sub_18004493C((__int64 *)(a1 + 192), a2, a3, v4, v6, v7, (__int64)&v8);
}
