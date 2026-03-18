/*
 * XREFs of ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18016ED14
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18016E810 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1802694D8 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18016F0D0 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18016F3DC (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18016FF70 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::GetCVIForRealizationSize(
        CVisualSurface *this,
        int a2,
        struct CCachedVisualImage ***a3,
        struct D2D_VECTOR_2F *a4,
        struct CCachedVisualImage **a5)
{
  struct CCachedVisualImage **v5; // r14
  float v8; // xmm0_4
  float v9; // xmm2_4
  FLOAT *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct CCachedVisualImage *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  FLOAT v16; // xmm1_4
  int ExplicitRealizationSizeCVI; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CCachedVisualImage *v20; // [rsp+50h] [rbp+20h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 204) )
  {
    ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(this, a4, v5);
    v12 = ExplicitRealizationSizeCVI;
    if ( ExplicitRealizationSizeCVI >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)ExplicitRealizationSizeCVI);
    return v12;
  }
  a5 = *a3;
  v8 = *(float *)&a5;
  v9 = (float)a2;
  v10 = (FLOAT *)a3 + 1;
  if ( *(float *)&a5 > (float)a2 || *v10 > v9 )
  {
    if ( *(float *)&a5 <= *v10 )
    {
      *((float *)&a5 + 1) = (float)a2;
      *(float *)&a5 = (float)(v9 / *v10) * *(float *)&a5;
    }
    else
    {
      *(float *)&a5 = (float)a2;
      *((float *)&a5 + 1) = (float)(v9 / v8) * *v10;
    }
  }
  v20 = 0LL;
  v11 = CVisualSurface::GetOrCreateCVIForRealizationSize(this, (const struct D2D_VECTOR_2F *)&a5, &v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v11);
    if ( v20 )
      (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v20 + 16LL))(v20);
    return v12;
  }
  v13 = v20;
  v14 = CCachedVisualImage::UpdateFromVisualSurface(
          v20,
          *((_QWORD *)this + 10),
          (char *)this + 176,
          (char *)this + 184,
          &a5,
          1);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = *((float *)&a5 + 1);
    LODWORD(a4->x) = (_DWORD)a5;
    a4->y = v16;
    *v5 = v13;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x199,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v14);
  if ( v13 )
    (*(void (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v13 + 16LL))(v13);
  return v15;
}
