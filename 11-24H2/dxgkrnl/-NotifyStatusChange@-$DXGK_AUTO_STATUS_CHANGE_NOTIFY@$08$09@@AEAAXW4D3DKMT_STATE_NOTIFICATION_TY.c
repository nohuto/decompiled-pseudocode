/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004D5F4
 * Callers:
 *     DxgkGetPathsModality @ 0x14031E370 (DxgkGetPathsModality.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int128 v5; // [rsp+60h] [rbp-28h]

  v3[0] = a2;
  v3[1] = 0;
  v4 = *a1;
  v5 = 0LL;
  result = DxgkStatusChangeNotify(v3);
  if ( (int)result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1557;
    return DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 1557LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
