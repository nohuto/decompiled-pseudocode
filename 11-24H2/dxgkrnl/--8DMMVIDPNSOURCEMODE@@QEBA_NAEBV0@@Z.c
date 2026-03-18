/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x14002DA00
 * Callers:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14008E580 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1403E5308 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNSOURCEMODE::operator==(_DWORD *a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = a1[18];
  if ( v2 != a2[18] )
    return 0;
  if ( v2 != 4 && v2 != 1 )
  {
    if ( v2 == 2 )
      return a1[19] == a2[19];
    if ( v2 != 3 )
    {
      if ( (unsigned int)(v2 - 1) <= 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 265;
      }
      return 0;
    }
  }
  return a1[19] == a2[19]
      && a1[20] == a2[20]
      && a1[21] == a2[21]
      && a1[22] == a2[22]
      && a1[23] == a2[23]
      && a1[24] == a2[24]
      && a1[25] == a2[25]
      && a1[26] == a2[26];
}
