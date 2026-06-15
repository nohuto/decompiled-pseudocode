/*
 * XREFs of ??0?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18009EFEC
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180152550 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x18009E07C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IInspectable,wil::err_returncode_policy>::com_ptr_t<IInspectable,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 *a2)
{
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    a1,
    *a2);
  return a1;
}
