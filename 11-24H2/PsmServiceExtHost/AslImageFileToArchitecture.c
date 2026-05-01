/*
 * XREFs of AslImageFileToArchitecture @ 0x1800A6DEC
 * Callers:
 *     SdbpGetBinaryRuntimePlatform @ 0x180094E70 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180096C90 (SdbpGetProcessHostGuestArchitectures.c)
 *     SdbpResolveMatchingFile @ 0x18009BCE8 (SdbpResolveMatchingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rdx
  unsigned __int64 i; // rax

  v1 = 0LL;
  for ( i = 0LL; i < 8; i += 2LL )
  {
    if ( word_1800E8A50[i + 1] == a1 )
      return word_1800E8A50[2 * v1];
    ++v1;
  }
  return 0xFFFFLL;
}
