/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x1800556BC
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180055594 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180150BEC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18009F50C (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 */

bool __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  unsigned int v1; // eax
  int v2; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 48);
  result = v1 <= 0x10 && (v2 = 66056, _bittest(&v2, v1)) || AtmosCheck::IsRunningOnXbox(this);
  return result;
}
