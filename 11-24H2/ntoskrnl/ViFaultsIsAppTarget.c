/*
 * XREFs of ViFaultsIsAppTarget @ 0x140B96CF0
 * Callers:
 *     ViCreateProcessCallbackInternal @ 0x140B968D0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140B969F8 (ViFaultsAddAppNoDuplicates.c)
 * Callees:
 *     VfUtilEqualUnicodeString @ 0x140B83228 (VfUtilEqualUnicodeString.c)
 */

__int64 __fastcall ViFaultsIsAppTarget(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v2; // edi

  v1 = (const void **)ViFaultApplicationsList;
  v2 = 0;
  if ( !ViFaultApplicationsList || ViFaultApplicationsList == &ViFaultApplicationsList )
    return 0LL;
  while ( v1 != (const void **)&ViFaultApplicationsList )
  {
    if ( VfUtilEqualUnicodeString(v1 + 2, a1) )
      return 1;
    v1 = (const void **)*v1;
  }
  return v2;
}
