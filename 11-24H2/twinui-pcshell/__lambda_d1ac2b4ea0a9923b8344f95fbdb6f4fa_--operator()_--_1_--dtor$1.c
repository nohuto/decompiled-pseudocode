/*
 * XREFs of __lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()_::_1_::dtor$1 @ 0x1806CBCDB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 40));
  }
}
