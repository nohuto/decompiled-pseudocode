/*
 * XREFs of ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x1800BC7D4
 * Callers:
 *     ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800BDF10 (-InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x1800BE474 (-MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUpdated<long &,long &,unsigned int &,unsigned int &,unsigned long &,unsigned long &,enum InputType &>(
        int *a1,
        int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCGestureHandler_PointerUpdated_((ISMTracing *)*a5, *a1, *a2, *a3, *a4, *a5, *a6, *a7);
  }
}
