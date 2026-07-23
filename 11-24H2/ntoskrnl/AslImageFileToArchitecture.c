/*
 * XREFs of AslImageFileToArchitecture @ 0x14080C880
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140807600 (SdbpGetProcessHostGuestArchitectures.c)
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
    if ( word_140E0EED8[i + 1] == a1 )
      return word_140E0EED8[2 * v1];
    ++v1;
  }
  return 0xFFFFLL;
}
