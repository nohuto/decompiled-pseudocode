/*
 * XREFs of ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18002B8CC
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18002B768 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800CDEA0 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CE898 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CED94 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18002B94C (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180042444 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CGlobalLightSet *__fastcall CWindowList::GetGlobalLightSetForDesktop(CWindowList *this, unsigned __int64 a2)
{
  __int64 Element; // rbx
  int v4; // eax
  volatile signed __int32 *v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v9; // [rsp+30h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (char *)this + 8,
              a2);
  if ( *(_QWORD *)(Element + 56) )
    return *(struct CGlobalLightSet **)(Element + 56);
  v9 = 0LL;
  v4 = CGlobalLightSet::Create(a2, &v9);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DAF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v4,
      v7);
  }
  else
  {
    v5 = (volatile signed __int32 *)v9;
    *(_QWORD *)(Element + 56) = v9;
    if ( !v5 )
      goto LABEL_6;
    _InterlockedIncrement(v5 + 2);
  }
  v5 = (volatile signed __int32 *)v9;
LABEL_6:
  if ( v5 )
  {
    v9 = 0LL;
    CBaseObject::Release((CBaseObject *)v5);
  }
  return *(struct CGlobalLightSet **)(Element + 56);
}
