/*
 * XREFs of cComputeGlyphSet @ 0x14017A064
 * Callers:
 *     EngComputeGlyphSet @ 0x140179CD0 (EngComputeGlyphSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGlyphSet(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // r10
  _DWORD *v6; // rdi
  unsigned int v11; // ebp
  unsigned int v12; // r9d
  __int64 v13; // r8
  unsigned __int16 *v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rbp
  unsigned __int16 v17; // dx
  _DWORD *v18; // rdx
  unsigned __int8 *v19; // rcx
  int v20; // eax
  int v22; // eax
  __int64 v23; // rdi

  v5 = 0LL;
  v6 = 0LL;
  if ( a5 )
  {
    a5[3] = a4;
    v22 = 2;
    v23 = a3 + 4 + 4 * a4;
    *a5 = v23 * 4;
    v6 = &a5[v23];
    if ( a3 == 256 )
      v22 = 4;
    a5[2] = 0;
    a5[1] = v22;
    v5 = &a5[4 * a4 + 4];
  }
  v11 = 0;
  v12 = 0;
  if ( a3 )
  {
    do
    {
      v13 = v11 + 1;
      if ( (unsigned int)v13 < a3 )
      {
        v14 = (unsigned __int16 *)(a1 + 2 * v13);
        do
        {
          if ( *v14 - *(unsigned __int16 *)(a1 + 2LL * (unsigned int)(v13 - 1)) > 1 )
            break;
          LODWORD(v13) = v13 + 1;
          ++v14;
        }
        while ( (unsigned int)v13 < a3 );
      }
      if ( a5 )
      {
        if ( v12 < a4 )
        {
          v15 = v11;
          v16 = 2LL * v12;
          LOWORD(a5[2 * v16 + 4]) = *(_WORD *)(a1 + 2 * v15);
          v17 = *(_WORD *)(a1 + 2LL * (unsigned int)(v13 - 1)) - *(_WORD *)(a1 + 2 * v15) + 1;
          *(_QWORD *)&a5[2 * v16 + 6] = v5;
          HIWORD(a5[2 * v16 + 4]) = v17;
          v18 = &v5[v17];
          if ( v18 <= v6 )
          {
            v19 = (unsigned __int8 *)(v15 + a2);
            while ( v5 < v18 )
            {
              v20 = *v19++;
              *v5++ = v20;
            }
            a5[2] += HIWORD(a5[4 * v12 + 4]);
          }
        }
      }
      ++v12;
      v11 = v13;
    }
    while ( (unsigned int)v13 < a3 );
  }
  return v12;
}
