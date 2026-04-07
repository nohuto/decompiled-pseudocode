/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002D1FC
 * Callers:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B514 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x1800521A8 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 * Callees:
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001BF88 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18002CF30 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800770B4 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180077248 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18007A9B0 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x18007E40C (-SetParentVisible@CAccent@@QEAAX_N@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800DB0CC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CWindowBackgroundTreatmentVisual **this, bool a2)
{
  unsigned int v2; // esi
  struct CVisual **v5; // rbx
  struct CWindowData *v6; // rdx
  CWindowBackgroundTreatmentVisual *v8; // rax
  struct CWindowData *v9; // rdx
  int updated; // eax
  int v11; // eax
  int inserted; // eax
  int v13; // eax

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)this[89] + 42) - 3) <= 2 )
    CWindowBackgroundTreatmentVisual::EnableTreatment(this[27]);
  v5 = this + 32;
  if ( CAccent::s_IsPolicyActive((CWindowBackgroundTreatmentVisual *)((char *)this[89] + 168)) )
  {
    if ( !*v5 )
    {
      v11 = CAccent::Create(this + 32);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE8Eu, 0LL);
        return v2;
      }
      *((_BYTE *)*v5 + 552) = (*((_DWORD *)this[89] + 30) & 0x400000) != 0;
      inserted = CContainerVisual::InsertChildAfter(this[31], *v5, this[35]);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xE99u, 0LL);
        return v2;
      }
      v5 = this + 32;
    }
    v8 = this[89];
    if ( !*((_DWORD *)v8 + 44) && (*((_BYTE *)v8 + 172) & 2) == 0 && *((_DWORD *)v8 + 42) == 2 )
    {
      v5 = this + 32;
      *((_DWORD *)this[89] + 44) = CTopLevelWindow::GetTransparentGradientColorForAccent((CTopLevelWindow *)this);
    }
    v9 = this[89];
    if ( *((_DWORD *)v9 + 42) == 3 || (unsigned int)(*((_DWORD *)v9 + 42) - 4) <= 1 )
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53));
    else
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v9);
    CAccent::SetParentVisible(this[32], a2);
    updated = CAccent::UpdateAccentPolicy(
                *v5,
                (const struct tagRECT *)this[89] + 3,
                (CWindowBackgroundTreatmentVisual *)((char *)this[89] + 168),
                *((struct CBaseGeometryProxy **)this[89] + 53));
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xEB4u, 0LL);
  }
  else if ( *v5 )
  {
    CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v6);
    v13 = CContainerVisual::RemoveChild(this[31], *v5);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xEBDu, 0LL);
    }
    else if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
  }
  return v2;
}
