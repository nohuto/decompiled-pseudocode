/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$26 @ 0x1806CE52D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_26(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~0x20u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 112));
  }
}
