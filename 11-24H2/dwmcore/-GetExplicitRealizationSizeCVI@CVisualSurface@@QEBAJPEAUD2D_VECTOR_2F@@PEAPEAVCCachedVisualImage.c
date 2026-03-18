/*
 * XREFs of ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x180048AA0
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18006EF44 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18006F60C (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::GetExplicitRealizationSizeCVI(
        CVisualSurface *this,
        struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  CMILRefCountImpl *v6; // rbx
  unsigned int (__fastcall *v7)(CMILRefCountImpl *__hidden); // rax
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
      v7 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v6 + 8LL);
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
                  (char *)this + 176,
                  (char *)this + 184,
                  (char *)this + 192,
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
