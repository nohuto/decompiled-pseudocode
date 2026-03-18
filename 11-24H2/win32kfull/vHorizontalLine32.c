/*
 * XREFs of vHorizontalLine32 @ 0x140194A70
 * Callers:
 *     vDrawLine @ 0x140007688 (vDrawLine.c)
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine32(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  unsigned int *v6; // r10

  if ( a3 != a2 )
  {
    v4 = 4LL * a2;
    v5 = (unsigned __int64)(4LL * a3 - v4) >> 2;
    v6 = (unsigned int *)(v4 + a1);
    if ( v5 )
    {
      if ( ((unsigned __int8)v6 & 4) != 0 )
      {
        *v6 = a4;
        if ( !--v5 )
          return;
        ++v6;
      }
      memset64(v6, a4 | ((unsigned __int64)a4 << 32), v5 >> 1);
      if ( (v5 & 1) != 0 )
        v6[v5 - 1] = a4;
    }
  }
}
