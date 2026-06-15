/*
 * XREFs of ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180132ED8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x180101B20 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x180101B80 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180133CC0 (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CSpatialAudioTech::GetAtmosCheckInstance(struct AtmosCheck **a1)
{
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&CSpatialAudioTech::s_spAtmosCheck);
  *a1 = (struct AtmosCheck *)CSpatialAudioTech::s_spAtmosCheck;
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  return 0LL;
}
