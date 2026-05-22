/*
 * XREFs of _InputSiteManager::CreateInputSiteFromId_::_1_::dtor$1 @ 0x1801D17F5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180061490 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall InputSiteManager::CreateInputSiteFromId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~2u;
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(*(__int64 **)(a2 + 64));
  }
}
