/*
 * XREFs of KiGetInterruptObjectFromVector @ 0x140207374
 * Callers:
 *     KiInterruptDispatchCommon @ 0x140206264 (KiInterruptDispatchCommon.c)
 *     KeQueryWakeSource @ 0x1405ACFCC (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

void *__fastcall KiGetInterruptObjectFromVector(unsigned int a1)
{
  void *result; // rax

  result = 0LL;
  if ( a1 <= 0xFF )
    return KeGetCurrentPrcb()->InterruptObject[a1];
  return result;
}
