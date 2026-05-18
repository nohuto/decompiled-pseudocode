/*
 * XREFs of sub_18007E3AC @ 0x18007E3AC
 * Callers:
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

__int64 __fastcall sub_18007E3AC(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // r10
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || (result = a5 & 1, *(_BYTE *)(a1 + 125) != (_BYTE)result) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    *(_DWORD *)(a1 + 116) = a3;
    *(_DWORD *)(a1 + 120) = a4;
    *(_BYTE *)(a1 + 124) = v6;
    v8 = 0LL;
    sub_180011110((_QWORD *)(a1 + 48), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001060C(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011110((_QWORD *)(a1 + 64), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001060C(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011110((_QWORD *)(a1 + 80), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001060C(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    result = (__int64)sub_180011110((_QWORD *)(a1 + 96), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      return sub_18001060C(*((__int64 *)&v8 + 1));
  }
  return result;
}
