/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E2D82
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 232) = *(_QWORD *)(a2 + 72) + 800LL;
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(*(__int64 **)(a2 + 232));
}
