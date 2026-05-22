/*
 * XREFs of ??$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800BE944
 * Callers:
 *     ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800C00F0 (-InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x1800C0590 (-MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUp<long &,long &,unsigned int &,unsigned long &,unsigned long &>(
        int *a1,
        int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  ISMTracing *v9; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCGestureHandler_PointerUp_(v9, *a1, *a2, *a3, *a4, *a5);
  }
}
