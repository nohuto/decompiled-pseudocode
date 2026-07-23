/*
 * XREFs of CmpConvertRegistryShared @ 0x1407D8D14
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x1402F1430 (ExConvertExclusiveToSharedLite.c)
 */

void CmpConvertRegistryShared()
{
  if ( !dword_140EF6F68 )
    ExConvertExclusiveToSharedLite(CmpRegistryLock);
}
