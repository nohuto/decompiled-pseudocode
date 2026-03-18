/*
 * XREFs of MincryptAlloc @ 0x14082897C
 * Callers:
 *     SymCryptCallbackAlloc @ 0x1406A5810 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 MincryptAlloc()
{
  return ExAllocatePool2(0x102uLL);
}
