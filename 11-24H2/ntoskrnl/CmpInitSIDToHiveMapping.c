/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407DBB4C
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14045D660 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
