/*
 * XREFs of DbgkpWerAllocatePool @ 0x1406EF768
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057B7B8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocatePool()
{
  return ExAllocatePool2(0x100uLL);
}
