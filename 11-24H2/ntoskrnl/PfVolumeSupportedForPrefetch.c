/*
 * XREFs of PfVolumeSupportedForPrefetch @ 0x1404B7BBC
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfVolumeSupportedForPrefetch(_DWORD *a1)
{
  unsigned int v2; // eax

  if ( (unsigned int)(*a1 - 7) > 1 )
    return 1LL;
  v2 = a1[1];
  if ( (v2 & 0x10) != 0 )
    return 2LL;
  if ( (v2 & 1) != 0 )
    return 3LL;
  return ~(unsigned __int8)(v2 >> 3) & 4;
}
