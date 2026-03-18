/*
 * XREFs of KiGetInterruptObjectAddress @ 0x140479B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall KiGetInterruptObjectAddress(int a1)
{
  return &KeGetCurrentPrcb()->InterruptObject[a1];
}
