/*
 * XREFs of ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x180239628
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18016F3DC (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18021FC34 (-RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessFreeze(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_FREEZE *a3)
{
  int v4; // r10d
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 204) || *((_BYTE *)this + 205) )
    return 0LL;
  v4 = *((_DWORD *)this + 50);
  v5 = *((_QWORD *)this + 10);
  *((_BYTE *)this + 205) = 1;
  v6 = CCachedVisualImage::UpdateFromVisualSurface(
         **((_DWORD ***)this + 11),
         v5,
         (float *)this + 44,
         (float *)this + 46,
         (float *)this + 48,
         v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = **((_QWORD **)this + 11);
  *(_BYTE *)(v9 + 2056) = 1;
  v10 = CComposition::RegisterRenderSnapshotToPerform(*(CComposition **)(v9 + 24), (struct CCachedVisualImage *)v9);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x15Au, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)v11);
  return v11;
}
