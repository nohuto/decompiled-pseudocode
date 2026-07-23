/*
 * XREFs of _CmValidateDevicePanelName @ 0x14081E47C
 * Callers:
 *     _CmGetDevicePanelRegKeyPath @ 0x14081DC9C (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpDispatchDevicePanel @ 0x140820650 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
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
