/*
 * XREFs of CmpTryConvertRegistryExclusive @ 0x1407D8D3C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExTryConvertSharedToExclusiveLite @ 0x14065553C (ExTryConvertSharedToExclusiveLite.c)
 */

char CmpTryConvertRegistryExclusive()
{
  if ( dword_140EF6F68 )
    return 0;
  else
    return ExTryConvertSharedToExclusiveLite();
}
