/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$39 @ 0x1806CDCB2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_39(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 320) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 320) &= ~0x10u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 64));
  }
}
