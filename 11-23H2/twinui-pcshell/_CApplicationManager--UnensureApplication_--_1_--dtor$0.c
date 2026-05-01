/*
 * XREFs of _CApplicationManager::UnensureApplication_::_1_::dtor$0 @ 0x1803A1A9E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::UnensureApplication_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 96));
  }
}
