/*
 * XREFs of IoGetInitialStack @ 0x140A6B400
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x14061D1B0 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
