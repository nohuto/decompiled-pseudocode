/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14057C31C
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A96708 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePool2(0x40uLL, 0x20uLL, 0x57676244u);
}
