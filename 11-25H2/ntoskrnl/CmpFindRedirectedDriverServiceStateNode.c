/*
 * XREFs of CmpFindRedirectedDriverServiceStateNode @ 0x140C3A694
 * Callers:
 *     CmpFindDrivers @ 0x140C3A1D0 (CmpFindDrivers.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpGetKnownHivePathNode @ 0x140C3AA70 (CmpGetKnownHivePathNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C3AC50 (CmpGetStateSepKeysRedirectionPathValue.c)
 */

char __fastcall CmpFindRedirectedDriverServiceStateNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char result; // al
  char KnownHivePathNode; // di
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0xFFFFFFFFLL;
  v11 = 0LL;
  result = CmpGetStateSepKeysRedirectionPathValue(BugCheckParameter3, (__int64)&v10);
  if ( result )
  {
    KnownHivePathNode = CmpGetKnownHivePathNode(BugCheckParameter3, (__int64)&v11, a5, a6, a7);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v10);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
    return KnownHivePathNode;
  }
  return result;
}
