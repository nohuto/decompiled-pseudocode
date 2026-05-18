/*
 * XREFs of sub_18001B7F4 @ 0x18001B7F4
 * Callers:
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18001B7F4 @ 0x18001B7F4 (sub_18001B7F4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B7F4 @ 0x18001B7F4 (sub_18001B7F4.c)
 *     sub_18001BE94 @ 0x18001BE94 (sub_18001BE94.c)
 *     sub_18001C2E4 @ 0x18001C2E4 (sub_18001C2E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B7F4(__int64 *a1, __int64 a2, __int64 a3)
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
    v7 = sub_18001B1F8(104LL);
    sub_18001BE94(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v11[1] = 0LL;
    sub_18001C2E4(v11);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = *(_BYTE *)(v6 + 25);
    *(_QWORD *)v7 = sub_18001B7F4(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_18001B7F4(a1, *(_QWORD *)(a2 + 16), v7);
    if ( !v9 )
      return v6;
    return v7;
  }
  return v6;
}
