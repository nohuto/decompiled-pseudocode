/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D8D0
 * Callers:
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DB30 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetContentBounds(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  CSurfaceBrush *v5; // rcx
  struct D2D_SIZE_F *v6; // rdx
  __int64 (__fastcall *v7)(CSurfaceBrush *, struct D2D_SIZE_F *); // rax
  int Bounds; // eax
  bool (__fastcall *v9)(CWindowNode *); // rax
  __int64 v11; // rax
  int v12; // edx
  int *v13; // rcx
  __m128 v14; // xmm1
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  int v18; // eax
  BOOL v19; // ecx
  __int128 v20; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  v4 = 0;
  v5 = (CSurfaceBrush *)a1[32];
  if ( v5 )
  {
    v6 = (struct D2D_SIZE_F *)(a1 + 18);
    v7 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct D2D_SIZE_F *))(*(_QWORD *)v5 + 184LL);
    if ( (char *)v7 == (char *)CBrush::GetBounds )
    {
      *(FLOAT *)(a2 + 8) = v6->width;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)a1 + 37);
    }
    else
    {
      if ( v7 == CSurfaceBrush::GetBounds )
      {
        Bounds = CSurfaceBrush::GetBounds(v5, v6);
      }
      else if ( (char *)v7 == (char *)CNineGridBrush::GetBounds )
      {
        Bounds = CNineGridBrush::GetBounds(v5, v6, a2);
      }
      else
      {
        Bounds = ((__int64 (__fastcall *)(CSurfaceBrush *, struct D2D_SIZE_F *, __int64))v7)(v5, v6, a2);
      }
      v4 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bounds, 0xE70u, 0LL);
    }
  }
  v9 = *(bool (__fastcall **)(CWindowNode *))(*a1 + 296LL);
  if ( v9 == CWindowNode::ShouldHitTest )
  {
    if ( *((_BYTE *)a1 + 753) || !a1[100] )
      return v4;
  }
  else if ( !v9((CWindowNode *)a1) )
  {
    return v4;
  }
  v11 = a1[28];
  if ( (*(_DWORD *)(v11 + 4) & 0x100000) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 12);
    v13 = (int *)(v11 + 12);
    if ( (v12 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v13 = (int *)((char *)v13 + (v12 & 0xFFFFFF) + 4);
        v12 = *v13;
      }
      while ( (*v13 & 0x7F000000) != 0xC000000 );
    }
    v14 = *(__m128 *)(v13 + 1);
    LODWORD(v20) = v14.m128_i32[0];
    v15 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
    LODWORD(v16) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    LODWORD(v17) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
    *((float *)&v20 + 1) = v16;
    *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v17), LODWORD(v15));
    if ( v15 > v14.m128_f32[0] && v17 > v16 )
    {
      v18 = 1;
      v19 = *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4);
      if ( v15 > v14.m128_f32[0] && v17 > v16 )
        v18 = 0;
      if ( v19 )
      {
        if ( v18 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(_OWORD *)a2 = v20;
        }
      }
      else if ( !v18 )
      {
        if ( *(float *)a2 > v14.m128_f32[0] )
          *(_DWORD *)a2 = v14.m128_i32[0];
        if ( *(float *)(a2 + 4) > v16 )
          *(float *)(a2 + 4) = v16;
        if ( v15 > *(float *)(a2 + 8) )
          *(float *)(a2 + 8) = v15;
        if ( v17 > *(float *)(a2 + 12) )
          *(float *)(a2 + 12) = v17;
      }
    }
  }
  return v4;
}
