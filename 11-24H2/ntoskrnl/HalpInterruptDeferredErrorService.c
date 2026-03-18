/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x14055A190
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1405434A8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
