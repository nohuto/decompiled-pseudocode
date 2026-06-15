/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001EEC4
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800154E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mm.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18003ACA0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180042698 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180046140 (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 * Callees:
 *     pow @ 0x1800211A4 (pow.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall ConvertDbToEngineVolume(double a1)
{
  if ( _mm_cvtsi128_si32(*(__m128i *)&a1) == -8388608 )
    return 0.0;
  else
    return pow(10.0, *(float *)&a1 / 20.0);
}
