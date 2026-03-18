/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1409FFFA0
 * Callers:
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x140629020 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14066812C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140B83404 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
