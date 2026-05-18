/*
 * XREFs of sub_18007BB10 @ 0x18007BB10
 * Callers:
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 *     sub_18007C758 @ 0x18007C758 (sub_18007C758.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007BB10(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  sub_18007BFC4(a1, &v8);
  v2 = 0;
  v3 = v8;
  v4 = *(_QWORD *)(v8 + 56);
  result = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD *)(v8 + 64) - v4) >> 3);
  if ( (_DWORD)result )
  {
    do
    {
      v6 = v4 + 56LL * v2;
      if ( *(_DWORD *)(v6 + 36) == 8 )
      {
        v7 = 0LL;
        sub_18007C558(a1, v4 + 56LL * v2, &v7);
        v7 = 0LL;
        sub_18007C758(a1, v6, &v7);
      }
      ++v2;
      v4 = *(_QWORD *)(v3 + 56);
      result = v2;
    }
    while ( v2 < -1227133513 * (unsigned int)((*(_QWORD *)(v3 + 64) - v4) >> 3) );
  }
  if ( v9 )
    return sub_18001060C(v9);
  return result;
}
