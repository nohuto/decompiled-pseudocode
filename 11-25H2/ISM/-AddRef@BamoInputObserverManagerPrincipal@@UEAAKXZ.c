/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x180079C70
 * Callers:
 *     ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x1800ABE00 (-AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x18012F9C0 (-AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180130A10 (-AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180130A20 (-AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180132C00 (-AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180132C20 (-AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x180159D60 (-AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
