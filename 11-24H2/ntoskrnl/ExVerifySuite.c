/*
 * XREFs of ExVerifySuite @ 0x1404F7070
 * Callers:
 *     MmWriteTriageInformation @ 0x14067804C (MmWriteTriageInformation.c)
 *     PsLocateSystemDlls @ 0x140771B30 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140C4111C (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v2; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v2 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v2, SuiteType);
}
