/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001E0A8
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008BF80 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B564 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001D980 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x1800732C0 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnClipUpdated(CAccent **this)
{
  CAccent *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  CAccent *v6; // rdx

  if ( (*((_BYTE *)this[89] + 737) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[32];
  if ( v2 )
  {
    v6 = this[89];
    if ( (*((_BYTE *)v6 + 172) & 0x10) != 0 )
      CAccent::SetClipRegion(v2, *((struct CBaseGeometryProxy **)v6 + 53));
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity((CTopLevelWindow *)this);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x772u, 0LL);
  return v4;
}
