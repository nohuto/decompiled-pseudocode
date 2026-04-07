/*
 * XREFs of ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x180034F34
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034C24 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x180034788 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x1800351CC (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x1800502FC (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetCaptionRegion(CLegacyNonClientBackground *this, HRGN hrgn)
{
  struct CRgnGeometryProxy **v2; // rbx
  int GeometryFromHRGN; // eax
  unsigned int v6; // ebx
  char *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct CRgnGeometryProxy **)((char *)this + 312);
  if ( !*((_QWORD *)this + 39) )
  {
    v8 = (char *)this + 312;
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v2 = 0LL;
    v10 = CCompositor::CreateProxy<CRgnGeometryProxy>(v9, v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v10,
        v12);
      return v11;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(hrgn, v2);
  v6 = GeometryFromHRGN;
  if ( GeometryFromHRGN >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)GeometryFromHRGN,
    v12);
  return v6;
}
