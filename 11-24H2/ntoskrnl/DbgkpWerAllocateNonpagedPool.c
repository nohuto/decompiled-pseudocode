/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14057EE8C
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A9B198 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(0x40uLL);
}
