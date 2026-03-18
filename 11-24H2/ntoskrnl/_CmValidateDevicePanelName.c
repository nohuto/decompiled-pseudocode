/*
 * XREFs of _CmValidateDevicePanelName @ 0x14081DD3C
 * Callers:
 *     _CmGetDevicePanelRegKeyPath @ 0x14081D55C (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpDispatchDevicePanel @ 0x14081FF10 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x140AB6934 (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  Guid = 0LL;
  result = CmSplitDevicePanelId(a2, &Guid);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
