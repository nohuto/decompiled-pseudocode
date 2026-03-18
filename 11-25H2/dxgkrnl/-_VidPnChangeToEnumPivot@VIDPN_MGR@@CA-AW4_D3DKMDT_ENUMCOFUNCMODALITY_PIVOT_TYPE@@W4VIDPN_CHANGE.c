/*
 * XREFs of ?_VidPnChangeToEnumPivot@VIDPN_MGR@@CA?AW4_D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE@@W4VIDPN_CHANGE@1@@Z @ 0x140046AB4
 * Callers:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402D0DD4 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::_VidPnChangeToEnumPivot(int a1)
{
  __int64 result; // rax

  if ( a1 <= 6 )
  {
    switch ( a1 )
    {
      case 6:
        return 2LL;
      case 1:
      case 2:
        return 5LL;
      case 3:
      case 4:
        return 1LL;
      case 5:
        return 2LL;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 7:
      case 8:
        return 3LL;
      case 9:
      case 10:
        return 4LL;
      case 11:
        return 5LL;
    }
  }
  WdLogSingleEntry1(2LL, a1);
  result = 0LL;
  WdLogGlobalForLineNumber = 961;
  return result;
}
