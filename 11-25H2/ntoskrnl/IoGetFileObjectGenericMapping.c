/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x140A01AE0
 * Callers:
 *     DifIoGetFileObjectGenericMappingWrapper @ 0x14061D060 (DifIoGetFileObjectGenericMappingWrapper.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14065C6B4 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140B73424 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
