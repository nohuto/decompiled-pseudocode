/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004F09C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD v5[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+68h] [rbp-30h]
  __int128 v7; // [rsp+70h] [rbp-28h]

  v5[0] = a2;
  v5[1] = 0;
  v6 = *a1;
  v7 = 0LL;
  result = DxgkStatusChangeNotify(v5);
  if ( (int)result < 0 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1557;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 1557LL,
                 v3,
                 v4,
                 0LL,
                 2,
                 -1,
                 L"NT_SUCCESS(_Status)",
                 21,
                 0,
                 0,
                 0,
                 0);
    }
  }
  return result;
}
