/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14057BB6C
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A95478 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(0x40uLL);
}
