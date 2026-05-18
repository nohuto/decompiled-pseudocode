/*
 * XREFs of sub_18005726C @ 0x18005726C
 * Callers:
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

__int64 __fastcall sub_18005726C(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(sub_180078418(a1) + 512);
  result = **(_QWORD **)(a1 + 1616);
  v6 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    if ( *(_DWORD *)(result + 32) == -1 || *(_DWORD *)(result + 32) == a2 )
      sub_18004D1D8(v4, result + 40);
    sub_18001C2C0(&v6);
    result = v6;
  }
  return result;
}
