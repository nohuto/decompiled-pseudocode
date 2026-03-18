/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1407CC38C
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14045E320 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
