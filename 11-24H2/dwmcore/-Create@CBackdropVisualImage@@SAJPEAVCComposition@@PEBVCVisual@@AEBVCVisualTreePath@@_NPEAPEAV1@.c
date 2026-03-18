/*
 * XREFs of ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x180007900
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800079E0 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x18006CDC0 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CBackdropVisualImage::Create(
        struct CComposition *a1,
        const struct CVisual *a2,
        const struct CVisualTreePath *a3,
        bool a4,
        struct CBackdropVisualImage **a5)
{
  CBackdropVisualImage *v9; // rax
  CBackdropVisualImage *v10; // rax
  CBackdropVisualImage *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a5 = 0LL;
  v9 = (CBackdropVisualImage *)DefaultHeap::AllocClear(0x8C8uLL);
  if ( v9 && (v10 = CBackdropVisualImage::CBackdropVisualImage(v9, a1, a2, a3, a4), (v11 = v10) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CBackdropVisualImage *)((char *)v10 + 8));
    v12 = CBackdropVisualImage::Initialize(v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
        (const char *)(unsigned int)v12,
        v15);
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v11);
      return v13;
    }
    else
    {
      *a5 = v11;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
      (const char *)0x8007000ELL,
      v15);
    return 2147942414LL;
  }
}
