/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$36 @ 0x1806CDC7F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_36(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 320) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 320) &= ~4u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 64));
  }
}
