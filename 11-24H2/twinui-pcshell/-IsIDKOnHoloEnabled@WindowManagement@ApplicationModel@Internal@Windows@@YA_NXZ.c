/*
 * XREFs of ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F8910
 * Callers:
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180019D6C (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18023620C (-IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z @ 0x1802133F8 (-IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z.c)
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  const unsigned __int16 *v1; // rdx

  if ( __TSS0__1__IsIDKOnHoloEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsIDKOnHoloEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA);
    if ( __TSS0__1__IsIDKOnHoloEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA == -1 )
    {
      `Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled'::`2'::result = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnSKUEnabled(
                                                                                                   L"IDKOnHolo",
                                                                                                   v1);
      Init_thread_footer(&__TSS0__1__IsIDKOnHoloEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA);
    }
  }
  return `Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled'::`2'::result;
}
