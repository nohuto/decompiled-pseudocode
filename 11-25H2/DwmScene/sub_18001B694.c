/*
 * XREFs of sub_18001B694 @ 0x18001B694
 * Callers:
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_18001B694 @ 0x18001B694 (sub_18001B694.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B694 @ 0x18001B694 (sub_18001B694.c)
 *     sub_18001BD34 @ 0x18001BD34 (sub_18001BD34.c)
 *     sub_18001C184 @ 0x18001C184 (sub_18001C184.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B694(__int64 *a1, __int64 a2, __int64 a3)
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
    v7 = sub_18001B098(104LL);
    sub_18001BD34(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v11[1] = 0LL;
    sub_18001C184(v11);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = *(_BYTE *)(v6 + 25);
    *(_QWORD *)v7 = sub_18001B694(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_18001B694(a1, *(_QWORD *)(a2 + 16), v7);
    if ( !v9 )
      return v6;
    return v7;
  }
  return v6;
}
