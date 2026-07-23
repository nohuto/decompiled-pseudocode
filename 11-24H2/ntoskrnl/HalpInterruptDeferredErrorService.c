/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x140557DC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x140540DF8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
