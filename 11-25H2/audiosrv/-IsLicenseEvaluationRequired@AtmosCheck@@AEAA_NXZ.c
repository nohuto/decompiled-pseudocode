/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180062D54
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _lambda_c0f79c7db2a352ac037a8b0fb781f475_::operator() @ 0x180147668 (_lambda_c0f79c7db2a352ac037a8b0fb781f475_--operator().c)
 *     _lambda_ddf72429dfe7e6f051e146c766b7831c_::operator() @ 0x1801477A0 (_lambda_ddf72429dfe7e6f051e146c766b7831c_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18014804C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x1800629B4 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180062E7C (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x180147E6C (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x180148688 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  char v2; // r8
  bool IsLogLicenseResult; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]

  if ( !AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(this) )
  {
    *((_DWORD *)this + 47) = 1;
    v2 = 0;
LABEL_3:
    AtmosCheck::TraceResult(this, 0, v2);
    return 0;
  }
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    *((_DWORD *)this + 47) = 2;
    v6 = 0LL;
    v7 = 0;
    v5 = 0LL;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&v5);
    AtmosCheck::EnableAllSpatialCapabilities(this);
    v2 = IsLogLicenseResult;
    goto LABEL_3;
  }
  return 1;
}
