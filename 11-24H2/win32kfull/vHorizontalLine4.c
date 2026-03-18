/*
 * XREFs of vHorizontalLine4 @ 0x14026DC10
 * Callers:
 *     vDrawLine @ 0x140007688 (vDrawLine.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vHorizontalLine4(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v5; // ebp
  _BYTE *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rbx

  v5 = a3 - a2;
  if ( a3 != a2 )
  {
    v6 = (_BYTE *)(((__int64)a2 >> 1) + a1);
    if ( (a2 & 1) != 0 )
    {
      --v5;
      *v6 ^= (*v6 ^ a4) & 0xF;
      ++v6;
    }
    v7 = v5 >> 1;
    if ( v5 >> 1 )
    {
      v8 = v7;
      memset_0(v6, a4, v7);
      v6 += v8;
      v5 &= 1u;
    }
    if ( v5 )
      *v6 = a4 ^ (*v6 ^ a4) & 0xF;
  }
}
