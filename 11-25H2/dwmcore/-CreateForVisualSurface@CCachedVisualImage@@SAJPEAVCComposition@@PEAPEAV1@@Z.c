/*
 * XREFs of ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180007F18
 * Callers:
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x180007904 (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18016F0D0 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 * Callees:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x180008028 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800080D0 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CreateForVisualSurface(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rax
  CCachedVisualImage *v6; // rbx
  unsigned int (__fastcall *v7)(CMILRefCountImpl *__hidden); // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x810uLL);
  if ( v4 && (v5 = CCachedVisualImage::CCachedVisualImage(v4, a1, 1), (v6 = v5) != 0LL) )
  {
    v7 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v5 + 8LL);
    if ( v7 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v6);
    else
      v7(v6);
    v8 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v6 + 56LL))(v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
        (const char *)(unsigned int)v8,
        v11);
      (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v6 + 16LL))(v6);
      return v9;
    }
    else
    {
      *((_DWORD *)v6 + 36) = 0;
      *((_DWORD *)v6 + 37) = 87;
      *((_DWORD *)v6 + 39) = 1;
      CCachedVisualImage::ChoosePixelFormat(v6);
      result = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)0x8007000ELL,
      v11);
    return 2147942414LL;
  }
  return result;
}
