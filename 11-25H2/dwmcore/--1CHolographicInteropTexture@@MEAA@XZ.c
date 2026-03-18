/*
 * XREFs of ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802DB974
 * Callers:
 *     ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x1802DBA40 (--_GCHolographicInteropTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall CHolographicInteropTexture::~CHolographicInteropTexture(CHolographicInteropTexture *this)
{
  bool v1; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 12) == 0LL;
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  if ( !v1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
      (const char *)0x8007029CLL);
  if ( *((_DWORD *)this + 539) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
      (const char *)0x8007029CLL);
  if ( *((_QWORD *)this + 13) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicinteroptexture.cpp",
      (const char *)0x8007029CLL);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 281);
  COcclusionContext::~COcclusionContext((CHolographicInteropTexture *)((char *)this + 112));
  CResource::~CResource(this);
}
