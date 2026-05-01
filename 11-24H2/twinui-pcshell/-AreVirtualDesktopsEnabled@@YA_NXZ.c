/*
 * XREFs of ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x1801275D0
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x18011CA9C (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A68D8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x180248E30 (-IsCloudPCComponentEnabled@@YA_NXZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A51D0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x180127638 (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
char AreVirtualDesktopsEnabled(void)
{
  if ( __TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                      + (unsigned int)tls_index)
                                                                    + 16LL) )
  {
    Init_thread_header(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    if ( __TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA == -1 )
    {
      `AreVirtualDesktopsEnabled'::`2'::s_enabled = _lambda_fe990823f78b875c41e1c4896de2e063_::operator()();
      Init_thread_footer(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    }
  }
  return `AreVirtualDesktopsEnabled'::`2'::s_enabled;
}
