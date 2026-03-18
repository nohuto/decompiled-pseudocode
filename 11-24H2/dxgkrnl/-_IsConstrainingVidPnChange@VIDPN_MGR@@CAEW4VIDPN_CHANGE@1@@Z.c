/*
 * XREFs of ?_IsConstrainingVidPnChange@VIDPN_MGR@@CAEW4VIDPN_CHANGE@1@@Z @ 0x140045344
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDPN_MGR::_IsConstrainingVidPnChange(int a1)
{
  if ( a1 <= 6 )
  {
    switch ( a1 )
    {
      case 6:
        return 0;
      case 1:
        return 1;
      case 2:
        return 0;
      case 3:
        return 1;
      case 4:
        return 0;
      case 5:
        return 1;
    }
LABEL_14:
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 990;
    return 0;
  }
  if ( a1 == 7 )
    return 1;
  if ( a1 != 8 )
  {
    if ( a1 == 9 )
      return 1;
    if ( (unsigned int)(a1 - 10) > 1 )
      goto LABEL_14;
  }
  return 0;
}
