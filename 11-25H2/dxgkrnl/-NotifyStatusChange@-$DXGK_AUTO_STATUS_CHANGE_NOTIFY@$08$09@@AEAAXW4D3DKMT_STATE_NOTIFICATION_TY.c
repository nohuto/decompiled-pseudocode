/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004DC54
 * Callers:
 *     DxgkGetPathsModality @ 0x140375C90 (DxgkGetPathsModality.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 */

NTSTATUS __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(__int64 *a1, int a2)
{
  NTSTATUS result; // eax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int128 v5; // [rsp+60h] [rbp-28h]

  v3[0] = a2;
  v3[1] = 0;
  v4 = *a1;
  v5 = 0LL;
  result = DxgkStatusChangeNotify(v3);
  if ( result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1556;
    return DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 1556LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
