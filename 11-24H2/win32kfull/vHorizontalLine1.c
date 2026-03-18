/*
 * XREFs of vHorizontalLine1 @ 0x14031CC40
 * Callers:
 *     vDrawLine @ 0x140007688 (vDrawLine.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

char __fastcall vHorizontalLine1(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  _UNKNOWN **v4; // rax
  unsigned int v6; // edi
  _BYTE *v7; // rsi
  int v8; // r8d
  __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  v6 = a3 - a2;
  if ( a3 != a2 )
  {
    v7 = (_BYTE *)(((__int64)a2 >> 3) + a1);
    v8 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      if ( v6 < 8 - v8 )
      {
        LOBYTE(v4) = (255 >> v8) & (-1 << (8 - v8 - v6)) & a4 | *v7 & ~((255 >> v8) & (-1 << (8 - v8 - v6)));
        *v7 = (_BYTE)v4;
        return (char)v4;
      }
      *v7 = (255 >> v8) & a4 | *v7 & ~(255 >> v8);
      ++v7;
      v6 = v8 + v6 - 8;
    }
    LODWORD(v4) = v6 >> 3;
    if ( v6 >> 3 )
    {
      v9 = (unsigned int)v4;
      LOBYTE(v4) = (unsigned __int8)memset_0(v7, a4, (unsigned int)v4);
      v7 += v9;
      v6 &= 7u;
    }
    if ( v6 )
    {
      LOBYTE(v4) = (255 >> v6) & *v7;
      *v7 = (unsigned __int8)v4 | a4 & ~(255 >> v6);
    }
  }
  return (char)v4;
}
