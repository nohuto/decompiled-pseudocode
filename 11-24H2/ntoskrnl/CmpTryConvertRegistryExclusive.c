/*
 * XREFs of CmpTryConvertRegistryExclusive @ 0x1407D87EC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExTryConvertSharedToExclusiveLite @ 0x140656E3C (ExTryConvertSharedToExclusiveLite.c)
 */

char CmpTryConvertRegistryExclusive()
{
  if ( dword_140EF6D28 )
    return 0;
  else
    return ExTryConvertSharedToExclusiveLite();
}
