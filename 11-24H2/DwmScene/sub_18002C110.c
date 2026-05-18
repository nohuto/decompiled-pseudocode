/*
 * XREFs of sub_18002C110 @ 0x18002C110
 * Callers:
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 * Callees:
 *     sub_180010A18 @ 0x180010A18 (sub_180010A18.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18002FBDC @ 0x18002FBDC (sub_18002FBDC.c)
 */

__int64 __fastcall sub_18002C110(__int64 *a1, _BYTE *a2, _BYTE *a3, unsigned __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  a1[2] = 0LL;
  a1[3] = 15LL;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180011BA0();
  if ( a4 > 0xF )
  {
    v12 = sub_1800118EC(a4, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    *a1 = sub_180010A18(v7, &v12);
    a1[3] = v12;
  }
  while ( 1 )
  {
    v8 = sub_1800138F8((__int64)a1);
    if ( a2 == a3 )
      break;
    *(_BYTE *)(v8 + v10) = *a2;
    ++a1[2];
    a2 += 2;
  }
  v12 = 0LL;
  *(_BYTE *)(v8 + v9) = 0;
  return sub_18002FBDC(&v12);
}
