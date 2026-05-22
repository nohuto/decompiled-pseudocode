/*
 * XREFs of ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC8BC
 * Callers:
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDB88 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BE600 (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_StartZoom<long &,long &,unsigned long const &,unsigned long>(
        int *a1,
        int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  ISMTracing *v8; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCGestureHandler_StartZoom_(v8, *a1, *a2, *a3, *a4);
  }
}
