/*
 * XREFs of sub_180038030 @ 0x180038030
 * Callers:
 *     sub_180038030 @ 0x180038030 (sub_180038030.c)
 *     sub_180039130 @ 0x180039130 (sub_180039130.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18002E360 @ 0x18002E360 (sub_18002E360.c)
 *     sub_18002FA00 @ 0x18002FA00 (sub_18002FA00.c)
 *     sub_180038030 @ 0x180038030 (sub_180038030.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180038030(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  char v9; // bl
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v11[0] = a1;
    v7 = sub_18001B098(96LL);
    sub_18002E360(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v11[1] = 0LL;
    sub_18002FA00((__int64)v11);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = *(_BYTE *)(v6 + 25);
    *(_QWORD *)v7 = sub_180038030(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180038030(a1, *(_QWORD *)(a2 + 16), v7);
    if ( !v9 )
      return v6;
    return v7;
  }
  return v6;
}
