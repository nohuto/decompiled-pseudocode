/*
 * XREFs of MiGetNodeBaseDomain @ 0x140686B30
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407FFCC4 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeBaseDomain(unsigned int a1)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2DC38 + 376) + 12LL);
}
