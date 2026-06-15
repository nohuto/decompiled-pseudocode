/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x180101B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180132ED8 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call()
{
  struct AtmosCheck *v0; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v0);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(&v0) >= 0 && v0 )
    AtmosCheck::PerformLicenseCheck(v0, 0);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v0);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}
