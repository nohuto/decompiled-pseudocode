/*
 * XREFs of ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18008A064
 * Callers:
 *     _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x180089B20 (_lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator().c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x18008B63C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18011C760 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1804DDC10 (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18059DB80 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x1805A40FC (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromWin32FromStatus@@YAJJ@Z @ 0x18008A0D4 (-ResultFromWin32FromStatus@@YAJJ@Z.c)
 */

__int64 __fastcall TabletModeHelpers::QueryTabletMode(TabletModeHelpers *this, enum _TABLETMODESTATE *a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)this = 0;
  v7 = 0;
  v2 = RtlQueryWnfStateData(&v7, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, this, 0LL);
  v3 = ResultFromWin32FromStatus(v2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\TabletModeHelpers.h",
      (const char *)(unsigned int)v3);
  return v4;
}
