/*
 * XREFs of ?IsCustomPresentDurationSupported@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801D85B0
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801D8340 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801F6664 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     McTemplateU0tu_EventWriteTransfer @ 0x18026D64C (McTemplateU0tu_EventWriteTransfer.c)
 */

char __fastcall COverlayContext::IsCustomPresentDurationSupported(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  if ( 438261969 * (unsigned int)((__int64)(*((_QWORD *)this + 1586) - *((_QWORD *)this + 1585)) >> 3) != 1 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
      McTemplateU0tu_EventWriteTransfer(
        *((_QWORD *)g_pComposition + 77),
        a2,
        *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL);
    return 0;
  }
  if ( !*((_BYTE *)this + 19583) )
  {
    if ( *((_BYTE *)this + 19088) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &CustomDurationRejectDesktopPlaneEnabledTest,
          0LL,
          1u,
          &v3);
      return 0;
    }
    return 1;
  }
  if ( *((int *)a2 + 90) >= 1 )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&CustomDurationRejectPlaneFullscreenTest,
      *((_DWORD *)a2 + 17),
      *((_DWORD *)a2 + 18),
      *((_DWORD *)a2 + 19),
      *((_DWORD *)a2 + 20));
  return 0;
}
