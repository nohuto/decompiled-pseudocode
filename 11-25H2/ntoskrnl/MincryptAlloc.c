/*
 * XREFs of MincryptAlloc @ 0x140818B88
 * Callers:
 *     SymCryptCallbackAlloc @ 0x14069A5E0 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 MincryptAlloc()
{
  return ExAllocatePool2(0x102uLL);
}
