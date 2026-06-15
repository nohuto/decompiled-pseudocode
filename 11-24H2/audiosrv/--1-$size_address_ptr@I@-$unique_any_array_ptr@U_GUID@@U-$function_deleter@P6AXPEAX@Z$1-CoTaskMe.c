/*
 * XREFs of ??1?$size_address_ptr@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x18014FC1C
 * Callers:
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A11B4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ??$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUIApplicationExtension@StateRepository@Internal@Windows@@PEAPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x18014F570 (--$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUI.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180152550 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     _wil::get_sr_entity_propset_Windows::Internal::StateRepository::IApplicationExtension__::_1_::dtor$1 @ 0x180172497 (_wil--get_sr_entity_propset_Windows--Internal--StateRepository--IApplicationExtensi_ea_180172497.c)
 *     _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$12 @ 0x18017274F (_ScanForInstalledSpatialAudioSubtypeAppServices_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 12) )
  {
    result = *a1;
    *(_QWORD *)(*a1 + 8) = *((unsigned int *)a1 + 2);
  }
  return result;
}
