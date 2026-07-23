/*
 * XREFs of IoGetInitialStack @ 0x140A66E30
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x140627730 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
