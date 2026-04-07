/*
 * XREFs of ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180034BB8
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18003B874 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x180034788 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18004F730 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x1800511EC (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderColor(
        CLegacyNonClientBackground *this,
        const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rax
  CSolidColorLegacyMilBrushProxy **v6; // rsi
  CBaseObject *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebp
  float a; // xmm1_4
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 36);
  if ( !*(_QWORD *)(v2 + 96) && !*(_DWORD *)(v2 + 108) && !CDesktopManager::IsHighContrastMode() )
    return 0LL;
  v6 = (CSolidColorLegacyMilBrushProxy **)((char *)this + 304);
  if ( a2->a == 0.0 )
  {
    if ( *v6 )
      CLegacyNonClientBackground::DirtyForRebuild(this);
    v7 = *v6;
    *v6 = 0LL;
    if ( v7 )
      CBaseObject::Release(v7);
    goto LABEL_14;
  }
  if ( *v6 )
  {
LABEL_14:
    a = a2->a;
    if ( a != *((float *)this + 89)
      || a2->r != *((float *)this + 86)
      || a2->g != *((float *)this + 87)
      || a2->b != *((float *)this + 88) )
    {
      if ( *v6 )
        CSolidColorLegacyMilBrushProxy::Update(*v6, a, a2);
      *(struct _D3DCOLORVALUE *)((char *)this + 344) = *(const struct _D3DCOLORVALUE *)&a2->r;
    }
    return 0LL;
  }
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  *v6 = 0LL;
  v9 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(v8, (char *)this + 304);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CLegacyNonClientBackground::DirtyForRebuild(this);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v9,
    v12);
  return v10;
}
