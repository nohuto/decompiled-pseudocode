/*
 * XREFs of KiGetInterruptObjectFromVector @ 0x1403BF648
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 *     KeQueryWakeSource @ 0x1405B095C (KeQueryWakeSource.c)
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
