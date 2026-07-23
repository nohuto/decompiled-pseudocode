/*
 * XREFs of SmcStoreEntryFind @ 0x14079DD04
 * Callers:
 *     SmcStoreDelete @ 0x14079DB54 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SmcStoreEntryFind(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // r9

  v3 = (_DWORD *)(a1 + 168);
  v4 = v3 + 96;
  while ( v3 < v4 )
  {
    if ( *v3 != -1 && *v3 == a2 && (v3[1] & 3) == a3 )
      return v3;
    v3 += 6;
  }
  return 0LL;
}
