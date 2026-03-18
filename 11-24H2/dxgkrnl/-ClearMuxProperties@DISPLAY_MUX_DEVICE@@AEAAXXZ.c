/*
 * XREFs of ?ClearMuxProperties@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x140083A94
 * Callers:
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084D78 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z @ 0x140087B60 (-SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DISPLAY_MUX_DEVICE::ClearMuxProperties(DISPLAY_MUX_DEVICE *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rbx
  _DWORD v5[20]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x48uLL);
  v5[0] = 3;
  v5[1] = 2;
  v2 = DISPLAY_MUX_DEVICE::SetDeviceProperties(this, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v5);
  v3 = v2;
  v4 = v2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(4LL, v2);
    WdLogGlobalForLineNumber = 1393;
  }
  v5[0] = 0;
  DISPLAY_MUX_DEVICE::SetDeviceProperties(this, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v5);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(4LL, v4);
    WdLogGlobalForLineNumber = 1401;
  }
  v5[0] = 1;
  DISPLAY_MUX_DEVICE::SetDeviceProperties(this, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v5);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(4LL, v4);
    WdLogGlobalForLineNumber = 1409;
  }
}
