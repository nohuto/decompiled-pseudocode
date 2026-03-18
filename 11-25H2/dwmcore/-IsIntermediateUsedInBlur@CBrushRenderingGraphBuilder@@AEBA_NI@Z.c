/*
 * XREFs of ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1801EECDC
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1801EE820 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1801EECDC (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 * Callees:
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1801EECDC (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 */

bool __fastcall CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(CBrushRenderingGraphBuilder *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  bool v4; // r8
  unsigned int v7; // ebp
  __int64 v8; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // rax

  v2 = *(_QWORD *)this;
  v3 = (unsigned int)(a2 + 1);
  v4 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  if ( (unsigned int)v3 < v7 )
  {
    v8 = 8 * v3;
    do
    {
      if ( v4 )
        break;
      v10 = 0;
      v11 = *(_QWORD *)(v8 + *(_QWORD *)(v2 + 144));
      v12 = *(_DWORD *)(v11 + 260);
      if ( v12 )
      {
        v13 = v11 + 80;
        do
        {
          if ( *(_BYTE *)(v13 + 4) && *(_DWORD *)v13 == a2 )
            break;
          ++v10;
          v13 += 44LL;
        }
        while ( v10 < v12 );
      }
      if ( v10 < v12 )
        v4 = (*(_DWORD *)(v11 + 264) & 1) != 0 || CBrushRenderingGraphBuilder::IsIntermediateUsedInBlur(this, v3);
      LODWORD(v3) = v3 + 1;
      v8 += 8LL;
    }
    while ( (unsigned int)v3 < v7 );
  }
  return v4;
}
