/*
 * XREFs of MiGetNodeBaseDomain @ 0x140685A00
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407FF580 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeBaseDomain(unsigned int a1)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2DAF8 + 376) + 12LL);
}
