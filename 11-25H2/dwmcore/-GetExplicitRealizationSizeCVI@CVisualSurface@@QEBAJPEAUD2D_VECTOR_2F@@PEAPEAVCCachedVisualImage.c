/*
 * XREFs of ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18016FF70
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18016ED14 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18016F3DC (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::GetExplicitRealizationSizeCVI(
        CVisualSurface *this,
        struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  CMILRefCountImpl *v6; // rbx
  __int64 (__fastcall *v7)(CMILRefCountImpl *); // rax
  struct D2D_VECTOR_2F *v8; // rsi
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CMILRefCountImpl *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 204) )
  {
    v6 = (CMILRefCountImpl *)**((_QWORD **)this + 11);
    v13 = v6;
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v6 + 8LL);
      if ( v7 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v6);
      else
        v7(v6);
    }
    v8 = (struct D2D_VECTOR_2F *)((char *)this + 192);
    if ( *((_BYTE *)this + 205)
      || (v10 = CCachedVisualImage::UpdateFromVisualSurface(
                  v6,
                  *((_QWORD *)this + 10),
                  (float *)this + 44,
                  (float *)this + 46,
                  (float *)this + 48,
                  *((_DWORD *)this + 50)),
          v11 = v10,
          v10 >= 0) )
    {
      result = 0LL;
      *a2 = *v8;
      *a3 = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
