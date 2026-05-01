/*
 * XREFs of _GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E3855
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 56) + 32LL;
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(*(__int64 **)(a2 + 120));
}
