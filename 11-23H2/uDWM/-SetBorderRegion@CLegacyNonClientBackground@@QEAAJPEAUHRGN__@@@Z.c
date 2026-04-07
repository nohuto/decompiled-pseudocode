/*
 * XREFs of ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800C5CDC
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034C24 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x180034788 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x1800351CC (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x1800502FC (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderRegion(CLegacyNonClientBackground *this, HRGN hrgn)
{
  struct CRgnGeometryProxy **v2; // rbx
  CBaseObject **v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int GeometryFromHRGN; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct CRgnGeometryProxy **)((char *)this + 320);
  if ( !*((_QWORD *)this + 40) )
  {
    v5 = (CBaseObject **)((char *)this + 320);
    v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v2 = 0LL;
    v7 = CCompositor::CreateProxy<CRgnGeometryProxy>(v6, v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(hrgn, v2);
  v11 = GeometryFromHRGN;
  if ( GeometryFromHRGN >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C,
    (__int64)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)GeometryFromHRGN);
  return v11;
}
