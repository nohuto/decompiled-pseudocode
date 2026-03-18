/*
 * XREFs of ?IsCustomPresentDurationSupported@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801E4860
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801E45EC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1802025B0 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     McTemplateU0tu_EventWriteTransfer @ 0x180277D54 (McTemplateU0tu_EventWriteTransfer.c)
 */

char __fastcall COverlayContext::IsCustomPresentDurationSupported(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  if ( -1030792151 * (unsigned int)((__int64)(*((_QWORD *)this + 1618) - *((_QWORD *)this + 1617)) >> 4) != 1 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
      McTemplateU0tu_EventWriteTransfer(
        *((_QWORD *)g_pComposition + 77),
        a2,
        *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL);
    return 0;
  }
  if ( !*((_BYTE *)this + 19773) )
  {
    if ( *((_BYTE *)this + 19472) )
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
