/*
 * XREFs of ??4?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F3F0C
 * Callers:
 *     ?GetCopyOfResourceTokens@CSaDeviceProxy@@UEAAJAEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F65B0 (-GetCopyOfResourceTokens@CSaDeviceProxy@@UEAAJAEAV-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returnco.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800F8498 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18008F4D4 (--$_Assign_counted_range@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  if ( a1 != a2 )
    std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::_Assign_counted_range<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>(
      a1,
      (_QWORD *)*a2,
      (a2[1] - *a2) >> 3);
  return a1;
}
