/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014D110
 * Callers:
 *     ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C750 (-HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800380C0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136530 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DB30 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CNineGridBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 (__fastcall *v8)(CNineGridBrush *, const struct D2D_SIZE_F *, __int128 *); // rax
  int Bounds; // eax
  unsigned int v10; // edi
  float y; // xmm1_4
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  char v15; // al
  CSurfaceBrush *v16; // rcx
  int v17; // eax
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  __int128 v25; // [rsp+38h] [rbp-29h] BYREF
  __int128 v26; // [rsp+48h] [rbp-19h] BYREF
  __int128 v27; // [rsp+58h] [rbp-9h]
  __int64 v28; // [rsp+68h] [rbp+7h]

  *a4 = 0;
  v8 = *(__int64 (__fastcall **)(CNineGridBrush *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 184LL);
  v25 = 0LL;
  if ( (char *)v8 == (char *)CNineGridBrush::GetBounds )
    Bounds = CNineGridBrush::GetBounds(this, a2, &v25);
  else
    Bounds = v8(this, a2, &v25);
  v10 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bounds, 0x89u, 0LL);
  }
  else if ( a3->x >= *(float *)&v25 && *((float *)&v25 + 2) > a3->x )
  {
    y = a3->y;
    if ( y >= *((float *)&v25 + 1) && *((float *)&v25 + 3) > y )
    {
      *a4 = 1;
      if ( *((_BYTE *)this + 168) )
      {
        v13 = *((_QWORD *)this + 13);
        v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 64LL);
        if ( (char *)v14 == (char *)CSurfaceBrush::IsOfType )
        {
          v15 = CSurfaceBrush::IsOfType(v13, 169);
        }
        else if ( (char *)v14 == (char *)CColorBrush::IsOfType )
        {
          v15 = CColorBrush::IsOfType(v13, 0xA9uLL);
        }
        else
        {
          v15 = v14(v13, 169LL);
        }
        if ( v15 )
        {
          v16 = (CSurfaceBrush *)*((_QWORD *)this + 13);
          v28 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          v17 = CSurfaceBrush::ComputeLayout(v16, a2, (struct CContent::LayoutData *)&v26, 0LL);
          v10 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x99u, 0LL);
            return v10;
          }
          v18 = (float)((float)(*((float *)&v26 + 2) * *((float *)&v28 + 1)) + (float)(*(float *)&v26 * *(float *)&v28))
              + *(float *)&v27;
          v19 = (float)(*((float *)this + 29) * *((float *)this + 28))
              + fminf(
                  (float)((float)(*((float *)&v26 + 2) * *((float *)&v27 + 3))
                        + (float)(*(float *)&v26 * *((float *)&v27 + 2)))
                + *(float *)&v27,
                  v18);
          v20 = (float)((float)(*((float *)&v26 + 3) * *((float *)&v28 + 1))
                      + (float)(*((float *)&v26 + 1) * *(float *)&v28))
              + *((float *)&v27 + 1);
          v21 = (float)(*((float *)this + 31) * *((float *)this + 30))
              + fminf(
                  (float)((float)(*((float *)&v26 + 3) * *((float *)&v27 + 3))
                        + (float)(*((float *)&v26 + 1) * *((float *)&v27 + 2)))
                + *((float *)&v27 + 1),
                  v20);
          v22 = fmaxf(
                  (float)((float)(*((float *)&v26 + 2) * *((float *)&v27 + 3))
                        + (float)(*(float *)&v26 * *((float *)&v27 + 2)))
                + *(float *)&v27,
                  v18)
              - (float)(*((float *)this + 33) * *((float *)this + 32));
          v23 = fmaxf(
                  (float)((float)(*((float *)&v26 + 3) * *((float *)&v27 + 3))
                        + (float)(*((float *)&v26 + 1) * *((float *)&v27 + 2)))
                + *((float *)&v27 + 1),
                  v20)
              - (float)(*((float *)this + 35) * *((float *)this + 34));
        }
        else
        {
          v22 = *((float *)&v25 + 2) - (float)(*((float *)this + 33) * *((float *)this + 32));
          v19 = (float)(*((float *)this + 29) * *((float *)this + 28)) + *(float *)&v25;
          v21 = (float)(*((float *)this + 31) * *((float *)this + 30)) + *((float *)&v25 + 1);
          v23 = *((float *)&v25 + 3) - (float)(*((float *)this + 35) * *((float *)this + 34));
        }
        if ( a3->x >= v19 && v22 > a3->x )
        {
          v24 = a3->y;
          if ( v24 >= v21 && v23 > v24 )
            *a4 = 0;
        }
      }
    }
  }
  return v10;
}
