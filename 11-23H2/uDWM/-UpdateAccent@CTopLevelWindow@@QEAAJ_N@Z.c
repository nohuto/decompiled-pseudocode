/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FB4
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180008294 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000A1B8 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180006B58 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180019150 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001997C (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5C74 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18010B894 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CWindowBackgroundTreatmentVisual **this, char a2)
{
  unsigned int v2; // ebx
  struct CWindowData *v5; // rdx
  int v6; // eax
  bool v7; // al
  struct CVisual **v8; // rsi
  int v10; // eax
  int inserted; // eax
  CWindowBackgroundTreatmentVisual *v12; // rax
  struct CWindowData *v13; // rdx
  struct CVisual *v14; // rcx
  unsigned int v15; // eax
  int updated; // eax
  int v17; // eax
  bool v18; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)this[94] + 42) - 3) <= 2 )
    CWindowBackgroundTreatmentVisual::EnableTreatment(this[33]);
  v5 = this[94];
  v6 = *((_DWORD *)v5 + 42);
  v7 = v6 && (unsigned int)(v6 - 5) > 1;
  v8 = this + 37;
  if ( v7 )
  {
    if ( !*v8 )
    {
      v10 = CAccent::Create(this + 37);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xE46u, 0LL);
        return v2;
      }
      *((_BYTE *)*v8 + 600) = (*((_DWORD *)this[94] + 30) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative(
                   (CWindowBackgroundTreatmentVisual *)((char *)this[36] + 32),
                   *v8,
                   this[40],
                   1,
                   v18);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xE51u, 0LL);
        return v2;
      }
    }
    v12 = this[94];
    if ( !*((_DWORD *)v12 + 44) && (*((_BYTE *)v12 + 172) & 2) == 0 && *((_DWORD *)v12 + 42) == 2 )
      *((_DWORD *)this[94] + 44) = CTopLevelWindow::GetTransparentGradientColorForAccent((CTopLevelWindow *)this);
    v13 = this[94];
    if ( *((_DWORD *)v13 + 42) == 3 || (unsigned int)(*((_DWORD *)v13 + 42) - 4) < 2 )
      CWindowList::RegisterAccentState(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54));
    else
      CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), v13);
    v14 = *v8;
    if ( a2 != *((_BYTE *)*v8 + 381) )
    {
      v15 = *((_DWORD *)v14 + 72) - 3;
      *((_BYTE *)v14 + 381) = a2;
      if ( v15 <= 1 )
      {
        if ( a2 )
          (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 4096LL);
      }
    }
    updated = CAccent::UpdateAccentPolicy(
                *v8,
                (const struct tagRECT *)this[94] + 3,
                (CWindowBackgroundTreatmentVisual *)((char *)this[94] + 168),
                *((struct CBaseGeometryProxy **)this[94] + 53));
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE6Cu, 0LL);
  }
  else if ( *v8 )
  {
    CWindowList::UnregisterAccentState(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), v5);
    v17 = VisualCollection::Remove((CWindowBackgroundTreatmentVisual *)((char *)this[36] + 32), *v8);
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xE75u, 0LL);
    }
    else if ( *v8 )
    {
      CBaseObject::Release(*v8);
      *v8 = 0LL;
    }
  }
  return v2;
}
