/*
 * XREFs of CmpConvertRegistryShared @ 0x1407D87C4
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x1403D7950 (ExConvertExclusiveToSharedLite.c)
 */

void CmpConvertRegistryShared()
{
  if ( !dword_140EF6D28 )
    ExConvertExclusiveToSharedLite(CmpRegistryLock);
}
