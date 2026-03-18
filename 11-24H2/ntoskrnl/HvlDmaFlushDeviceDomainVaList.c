/*
 * XREFs of HvlDmaFlushDeviceDomainVaList @ 0x1405866C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlDmaFlushDeviceDomain @ 0x140586630 (HvlDmaFlushDeviceDomain.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x140588950 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140588A30 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 */

__int64 __fastcall HvlDmaFlushDeviceDomainVaList(int *a1, unsigned int a2)
{
  if ( a2 - 1 > 0x1FB )
    return HvlDmaFlushDeviceDomain(a1);
  if ( a2 <= 0xA && (HvlEnlightenments & 0x80) != 0 )
    return HvlpDmaFastFlushDeviceDomainVaList();
  return HvlpDmaSlowFlushDeviceDomainVaList();
}
