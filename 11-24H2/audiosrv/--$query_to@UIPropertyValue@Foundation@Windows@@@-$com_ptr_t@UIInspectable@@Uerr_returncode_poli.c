/*
 * XREFs of ??$query_to@UIPropertyValue@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800A32FC
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180152550 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IInspectable,wil::err_returncode_policy>::query_to<Windows::Foundation::IPropertyValue>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, a2);
}
