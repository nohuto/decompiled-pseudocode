/*
 * XREFs of DbgkpWerAllocatePool @ 0x1406F9218
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057BF68 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerAllocatePool(ULONG_PTR a1)
{
  return ExAllocatePool2(0x100uLL, a1, 0x57676244u);
}
