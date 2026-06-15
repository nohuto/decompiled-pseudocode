/*
 * XREFs of ??$query_to@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800A6F20
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IInspectable,wil::err_returncode_policy>::query_to<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, a2);
}
