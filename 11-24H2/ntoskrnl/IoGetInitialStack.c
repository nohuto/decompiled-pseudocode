/*
 * XREFs of IoGetInitialStack @ 0x140A6D770
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x140629170 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
