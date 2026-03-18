/*
 * XREFs of ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140055FD0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1400C265C (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1400D3770 (GrePolyBezierTo.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiEngCheckAbort @ 0x1400DD2C0 (NtGdiEngCheckAbort.c)
 *     NtGdiWidenPath @ 0x1400E4EA0 (NtGdiWidenPath.c)
 *     NtGdiArcInternal @ 0x1400E5070 (NtGdiArcInternal.c)
 *     NtGdiStrokePath @ 0x1400E5B80 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CE0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5E20 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1400E5F80 (NtGdiCloseFigure.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     NtGdiRoundRect @ 0x1400E62B0 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x1400E65B0 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E69C0 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400EC404 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140176F30 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1401A1B44 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401BAE44 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2B60 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     GrePolylineTo @ 0x1401D62E0 (GrePolylineTo.c)
 *     NtGdiSelectClipPath @ 0x1401F36D0 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1401F9420 (NtGdiStrokeAndFillPath.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vUnguard(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
