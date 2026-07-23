/*
 * XREFs of CmpKeyNodeStackEntryCleanup @ 0x14090A758
 * Callers:
 *     CmpKeyNodeStackEntryReset @ 0x14090A44C (CmpKeyNodeStackEntryReset.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryCleanup(__int64 *a1)
{
  unsigned int *v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[2] )
  {
    v1 = (unsigned int *)(a1 + 3);
    v2 = *a1;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(v2, (__int64)v1);
    else
      return HvpReleaseCellPaged(v2, v1);
  }
  return result;
}
