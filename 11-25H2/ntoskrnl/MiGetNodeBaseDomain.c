/*
 * XREFs of MiGetNodeBaseDomain @ 0x14067A170
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407EF6CC (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeBaseDomain(unsigned int a1)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2D8B8 + 376) + 12LL);
}
