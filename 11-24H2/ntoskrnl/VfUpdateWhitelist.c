/*
 * XREFs of VfUpdateWhitelist @ 0x1403E5208
 * Callers:
 *     VfTargetDriversAdd @ 0x1403E3ED4 (VfTargetDriversAdd.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

char __fastcall VfUpdateWhitelist(wchar_t *Str1, wchar_t **a2)
{
  char v2; // bl
  unsigned int v5; // edi
  wchar_t **v6; // rsi

  v2 = 0;
  v5 = 0;
  if ( !a2 )
    return 0;
  while ( v5 < 8 )
  {
    v6 = &(&VfLegacyCallWhitelist)[4 * v5];
    if ( !wcsicmp(Str1, *v6) )
    {
      v2 = 1;
      v6[1] = *a2;
      v6[2] = a2[1];
      return v2;
    }
    ++v5;
  }
  return v2;
}
