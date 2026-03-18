/*
 * XREFs of DbgkpWerAllocatePool @ 0x1406FB5D8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057EAD8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocatePool()
{
  return ExAllocatePool2(0x100uLL);
}
