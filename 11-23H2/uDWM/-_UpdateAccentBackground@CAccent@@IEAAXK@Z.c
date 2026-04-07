/*
 * XREFs of ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800198D0
 * Callers:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x18000ADF0 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180050824 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

void __fastcall CAccent::_UpdateAccentBackground(CAccent *this, unsigned int a2)
{
  if ( CAccent::s_clrCurrentAccentBackground != a2 )
  {
    CAccent::s_clrCurrentAccentBackground = a2;
    if ( !CAccent::_AnyTransparentBackground(this) )
      CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 54));
  }
}
