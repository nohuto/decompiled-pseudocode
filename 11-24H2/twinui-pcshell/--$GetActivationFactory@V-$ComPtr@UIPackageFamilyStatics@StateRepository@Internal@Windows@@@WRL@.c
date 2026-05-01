/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18034183C
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180354038 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageFamilyStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, a2);
}
