/*
 * XREFs of MiLargePageHasNoDanglingReferences @ 0x140476464
 * Callers:
 *     MiReadyLargePageToFree @ 0x14021B69C (MiReadyLargePageToFree.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiLargePageHasNoDanglingReferences(__int64 a1)
{
  int PfnPageSizeIndex; // eax
  unsigned __int64 v3; // rcx
  _DWORD *v4; // rbx

  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 32);
  while ( v3 < MiPageSizes[PfnPageSizeIndex] )
  {
    if ( (unsigned __int16)*v4 != 2 )
      return 0LL;
    v4 += 12;
    ++v3;
  }
  return 1LL;
}
