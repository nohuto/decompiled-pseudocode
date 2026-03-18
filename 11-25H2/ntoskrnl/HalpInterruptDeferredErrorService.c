/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x140557890
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x140540C78 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
