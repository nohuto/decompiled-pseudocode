/*
 * XREFs of sub_180045CFC @ 0x180045CFC
 * Callers:
 *     sub_180045C58 @ 0x180045C58 (sub_180045C58.c)
 * Callees:
 *     sub_1800462C4 @ 0x1800462C4 (sub_1800462C4.c)
 *     sub_180046404 @ 0x180046404 (sub_180046404.c)
 *     sub_1800464DC @ 0x1800464DC (sub_1800464DC.c)
 *     sub_180046654 @ 0x180046654 (sub_180046654.c)
 *     sub_1800467DC @ 0x1800467DC (sub_1800467DC.c)
 *     sub_180046914 @ 0x180046914 (sub_180046914.c)
 *     sub_180046A3C @ 0x180046A3C (sub_180046A3C.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180046D30 @ 0x180046D30 (sub_180046D30.c)
 */

__int64 __fastcall sub_180045CFC(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_180046914(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_1800462C4(a1);
  if ( (v2 & 1) != 0 )
    result = sub_180046C08(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180046D30(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_1800464DC(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180046404(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_1800467DC(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_180046A3C(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_180046654(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
