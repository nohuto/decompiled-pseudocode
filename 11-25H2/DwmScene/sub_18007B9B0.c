/*
 * XREFs of sub_18007B9B0 @ 0x18007B9B0
 * Callers:
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 *     sub_18007C3F8 @ 0x18007C3F8 (sub_18007C3F8.c)
 *     sub_18007C5F8 @ 0x18007C5F8 (sub_18007C5F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007B9B0(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  sub_18007BE64(a1, &v8);
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
        sub_18007C3F8(a1, v4 + 56LL * v2, &v7);
        v7 = 0LL;
        sub_18007C5F8(a1, v6, &v7);
      }
      ++v2;
      v4 = *(_QWORD *)(v3 + 56);
      result = v2;
    }
    while ( v2 < -1227133513 * (unsigned int)((*(_QWORD *)(v3 + 64) - v4) >> 3) );
  }
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
