/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FEBB0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FEC20 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803FEC20.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FEC30 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1803FEC30.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UIWeakReferenceSource@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803FDC04 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIUserActivityM.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  LPVOID v7; // r8
  __int64 v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v7 = CoTaskMemAlloc(0x80uLL);
  if ( v7 )
  {
    v10 = 0;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,IWeakReferenceSource,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::FillArrayWithIid(
      v6,
      &v10,
      (__int64)v7);
    *a2 = 8;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
