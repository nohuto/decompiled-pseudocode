/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C2E0
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C790 (-GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CA10 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CAA0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, struct D2D_SIZE_F *a2, float *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 (*v9)(void); // rax
  int Bounds; // eax
  CSurfaceBrush *v11; // rcx
  __int64 (__fastcall *v12)(CSurfaceBrush *, struct D2D_SIZE_F *); // rax
  int v13; // eax
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    v9 = *(__int64 (**)(void))(*(_QWORD *)v6 + 184LL);
    if ( (char *)v9 == (char *)CBrush::GetBounds )
      Bounds = CBrush::GetBounds(v6, a2, a3, a4);
    else
      Bounds = v9();
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xAEu, 0LL);
    }
    else
    {
      v11 = *(CSurfaceBrush **)(a1 + 112);
      if ( v11 )
      {
        v23 = 0LL;
        v12 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct D2D_SIZE_F *))(*(_QWORD *)v11 + 184LL);
        if ( (char *)v12 == (char *)CNineGridBrush::GetBounds )
        {
          v13 = CNineGridBrush::GetBounds(v11, a2, &v23);
        }
        else if ( v12 == CSurfaceBrush::GetBounds )
        {
          v13 = CSurfaceBrush::GetBounds(v11, a2);
        }
        else
        {
          v13 = ((__int64 (__fastcall *)(CSurfaceBrush *, struct D2D_SIZE_F *, __int128 *))v12)(v11, a2, &v23);
        }
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB3u, 0LL);
        }
        else
        {
          v14 = *a3;
          v15 = *(float *)&v23;
          if ( *(float *)&v23 > *a3 )
          {
            *(_DWORD *)a3 = v23;
            v14 = v15;
          }
          v16 = a3[1];
          v17 = *((float *)&v23 + 1);
          if ( *((float *)&v23 + 1) > v16 )
          {
            a3[1] = *((float *)&v23 + 1);
            v16 = v17;
          }
          v18 = a3[2];
          v19 = *((float *)&v23 + 2);
          if ( v18 > *((float *)&v23 + 2) )
          {
            a3[2] = *((float *)&v23 + 2);
            v18 = v19;
          }
          v20 = a3[3];
          v21 = *((float *)&v23 + 3);
          if ( v20 > *((float *)&v23 + 3) )
          {
            a3[3] = *((float *)&v23 + 3);
            v20 = v21;
          }
          if ( v18 <= v14 || v20 <= v16 )
          {
            a3[3] = 0.0;
            a3[2] = 0.0;
            a3[1] = 0.0;
            *a3 = 0.0;
          }
        }
      }
    }
  }
  else
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  return v5;
}
