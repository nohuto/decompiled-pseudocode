/*
 * XREFs of ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180217B80
 * Callers:
 *     ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1801B09E0 (-LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1801EFC7C (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x180367824 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x1804044D0 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KP.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180404820 (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x180406B4C (--$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 *     ??0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z @ 0x18056BD24 (--0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180675880 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(HSTRING *a1, const unsigned __int16 **a2)
{
  const unsigned __int16 *v2; // rdx
  unsigned __int64 v3; // r8

  v2 = *a2;
  if ( v2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    if ( v3 > 0xFFFFFFFF )
      return -2147024362;
  }
  else
  {
    LODWORD(v3) = 0;
    v2 = &pvData;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}
