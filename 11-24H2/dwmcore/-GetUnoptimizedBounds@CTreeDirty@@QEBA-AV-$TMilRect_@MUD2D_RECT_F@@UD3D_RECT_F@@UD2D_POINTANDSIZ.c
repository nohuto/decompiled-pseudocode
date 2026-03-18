/*
 * XREFs of ?GetUnoptimizedBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180242C0C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18014CE50 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeDirty::GetUnoptimizedBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  float *v3; // r8
  float *v4; // r9
  float *v5; // r8
  float v6; // xmm1_4
  int v7; // ecx
  float v8; // xmm2_4
  int v9; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4

  v2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_BYTE *)(a1 + 2324) )
  {
    *(_OWORD *)a2 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    v3 = (float *)(a1 + 20);
    if ( a1 == -20 && MEMORY[0xFFFFFFFFFFFFFFFC] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v4 = &v3[4 * *(unsigned int *)(a1 + 16)];
    if ( v3 != v4 )
    {
      v5 = (float *)(a1 + 28);
      v6 = 0.0;
      do
      {
        if ( v6 <= *(float *)a2 || (v7 = v2, *(float *)(a2 + 12) <= *(float *)(a2 + 4)) )
          v7 = 1;
        v8 = *(v5 - 2);
        if ( *v5 <= v8 || (v9 = v2, v5[1] <= *(v5 - 1)) )
          v9 = 1;
        if ( v7 )
        {
          if ( v9 || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
          {
            *(_QWORD *)(a2 + 8) = v2;
            v6 = 0.0;
            *(_QWORD *)a2 = v2;
          }
          else
          {
            *(_OWORD *)a2 = *(_OWORD *)(v5 - 2);
            v6 = *(float *)(a2 + 8);
          }
        }
        else if ( !v9 )
        {
          if ( *(float *)a2 > v8 )
            *(float *)a2 = v8;
          v10 = *(v5 - 1);
          if ( *(float *)(a2 + 4) > v10 )
            *(float *)(a2 + 4) = v10;
          v11 = *v5;
          v6 = *(float *)(a2 + 8);
          if ( *v5 > v6 )
          {
            *(float *)(a2 + 8) = v11;
            v6 = v11;
          }
          v12 = v5[1];
          if ( v12 > *(float *)(a2 + 12) )
            *(float *)(a2 + 12) = v12;
        }
        v5 += 4;
      }
      while ( v5 - 2 != v4 );
    }
  }
  return a2;
}
