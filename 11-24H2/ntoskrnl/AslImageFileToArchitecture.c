/*
 * XREFs of AslImageFileToArchitecture @ 0x14080C140
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140805590 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140806EC0 (SdbpGetProcessHostGuestArchitectures.c)
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
    if ( word_140E0EE08[i + 1] == a1 )
      return word_140E0EE08[2 * v1];
    ++v1;
  }
  return 0xFFFFLL;
}
