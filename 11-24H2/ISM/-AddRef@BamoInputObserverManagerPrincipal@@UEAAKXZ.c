/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x180079910
 * Callers:
 *     ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x1800AA900 (-AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x1801321E0 (-AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180133230 (-AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ.c)
 *     ?AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180133240 (-AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180134DD0 (-AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ.c)
 *     ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180134DF0 (-AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ.c)
 *     ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015AB90 (-AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
