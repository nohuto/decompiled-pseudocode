/*
 * XREFs of sub_18002BCB4 @ 0x18002BCB4
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_180031D5C @ 0x180031D5C (sub_180031D5C.c)
 * Callees:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18002BDDC @ 0x18002BDDC (sub_18002BDDC.c)
 */

void __fastcall sub_18002BCB4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 88);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = sub_180012344((__int64)v6, v4 + 32);
    sub_18002BDDC(a1, a2, v5);
    sub_18001C2C0(&v7);
    v4 = v7;
  }
}
