/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803131F0
 * Callers:
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180317518 (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180353CF0 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU-$IAsyncOperation@_N@Foundation@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUILauncherOptions@System@1@@Z @ 0x180313154 (--$ActivateInstance@UILauncherOptions@System@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEA.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return Windows::Foundation::ActivateInstance<Windows::System::ILauncherOptions>(a1, a2);
}
