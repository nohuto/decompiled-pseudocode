/*
 * XREFs of MincryptAlloc @ 0x14082914C
 * Callers:
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall MincryptAlloc(ULONG_PTR a1)
{
  return ExAllocatePool2(0x102uLL, a1, 0x72634943u);
}
