/*
 * XREFs of HvlpInitializeHvCrashdumpPhase2 @ 0x14058AD7C
 * Callers:
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 */

char HvlpInitializeHvCrashdumpPhase2()
{
  char result; // al

  IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
  result = IoAddTriageDumpDataBlock((ULONG)&HvlpCrashdumpData, (PVOID)0x100);
  if ( HvlpOfflineDumpFeatureEnabled )
  {
    IoAddTriageDumpDataBlock((ULONG)&HvlpCrashDumpAreaSize, (PVOID)4);
    IoAddTriageDumpDataBlock((ULONG)&HvlpLocalCrashdumpArea, (PVOID)8);
    return IoAddTriageDumpDataBlock(HvlpLocalCrashdumpArea, (PVOID)(unsigned int)HvlpCrashDumpAreaSize);
  }
  return result;
}
