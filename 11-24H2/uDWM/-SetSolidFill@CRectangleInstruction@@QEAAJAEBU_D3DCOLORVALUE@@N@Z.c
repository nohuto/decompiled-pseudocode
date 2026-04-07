/*
 * XREFs of ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180034454
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x1800331E0 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x180077AB8 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180063844 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x180063990 (-CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z.c)
 */

__int64 __fastcall CRectangleInstruction::SetSolidFill(
        CRectangleInstruction *this,
        const struct _D3DCOLORVALUE *a2,
        double a3)
{
  CBaseObject *v4; // rcx
  int SolidColorLegacyMilBrushProxy; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  if ( *((_QWORD *)this + 2)
    || (SolidColorLegacyMilBrushProxy = CCompositor::CreateSolidColorLegacyMilBrushProxy(
                                          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                          (struct CSolidColorLegacyMilBrushProxy **)this + 2),
        v7 = SolidColorLegacyMilBrushProxy,
        SolidColorLegacyMilBrushProxy >= 0) )
  {
    v8 = CSolidColorLegacyMilBrushProxy::Update(*((CSolidColorLegacyMilBrushProxy **)this + 2), a3, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x50u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SolidColorLegacyMilBrushProxy, 0x4Du, 0LL);
  }
  return v7;
}
