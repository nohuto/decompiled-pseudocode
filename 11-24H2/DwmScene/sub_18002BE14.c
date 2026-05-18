/*
 * XREFs of sub_18002BE14 @ 0x18002BE14
 * Callers:
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 * Callees:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18002BF3C @ 0x18002BF3C (sub_18002BF3C.c)
 */

void __fastcall sub_18002BE14(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 88);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = sub_180012444((__int64)v6, v4 + 32);
    sub_18002BF3C(a1, a2, v5);
    sub_18001C420(&v7);
    v4 = v7;
  }
}
