/*
 * XREFs of IommuFlushDomainVaList @ 0x1406F7E30
 * Callers:
 *     <none>
 * Callees:
 *     IommupHvFlushDeviceDomainVaList @ 0x140563570 (IommupHvFlushDeviceDomainVaList.c)
 */

__int64 __fastcall IommuFlushDomainVaList(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( HalpHvIommu )
    return IommupHvFlushDeviceDomainVaList(*(_DWORD *)(a1 + 48), *(_BYTE *)(a1 + 52));
  return 3221225474LL;
}
