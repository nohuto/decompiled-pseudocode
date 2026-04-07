/*
 * XREFs of ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x1800566FC
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180056600 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::OnNotifyRoundTripReply(CLivePreview *this, int a2, __int64 a3)
{
  char v3; // bl
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( a2 == *((_DWORD *)this + 138) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmLivePreviewAnimation_Stop,
        a3,
        1LL,
        (__int64)v7);
    *((_DWORD *)this + 138) = -1;
    return 1;
  }
  if ( a2 == *((_DWORD *)this + 139) )
  {
    if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(
        v6,
        (int)&PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info,
        *((_DWORD *)this + 76));
    *((_DWORD *)this + 139) = -1;
    return 1;
  }
  return v3;
}
