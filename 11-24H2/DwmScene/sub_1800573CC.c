/*
 * XREFs of sub_1800573CC @ 0x1800573CC
 * Callers:
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 * Callees:
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18004D338 @ 0x18004D338 (sub_18004D338.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

__int64 __fastcall sub_1800573CC(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(sub_180078578(a1) + 512);
  result = **(_QWORD **)(a1 + 1616);
  v6 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    if ( *(_DWORD *)(result + 32) == -1 || *(_DWORD *)(result + 32) == a2 )
      sub_18004D338(v4, result + 40);
    sub_18001C420(&v6);
    result = v6;
  }
  return result;
}
