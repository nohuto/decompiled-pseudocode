/*
 * XREFs of ?IsGamingOverlayExperienceManagerEnabled@@YA_NXZ @ 0x1800D07D0
 * Callers:
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800D06A4 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 *     ??R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ @ 0x1803E0130 (--R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
bool IsGamingOverlayExperienceManagerEnabled(void)
{
  if ( __TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                    + (unsigned int)tls_index)
                                                                                  + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA);
    if ( __TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA == -1 )
    {
      `IsGamingOverlayExperienceManagerEnabled'::`2'::isComponentEnabled = (unsigned __int8)_lambda_472df6ff52501759c6fbda191ba6be37_::operator()();
      Init_thread_footer(&__TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA);
    }
  }
  return `IsGamingOverlayExperienceManagerEnabled'::`2'::isComponentEnabled != 0;
}
