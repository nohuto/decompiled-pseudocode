/*
 * XREFs of ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180063800
 * Callers:
 *     ?HampClientQueryReconnectTimeout@@YAKXZ @ 0x180071D4C (-HampClientQueryReconnectTimeout@@YAKXZ.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1800902E4 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemQueryValue(HKEY a1, const unsigned __int16 *a2, BYTE *lpData, unsigned int *lpcbData)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a1, a2, 0LL, 0LL, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
