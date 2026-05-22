/*
 * XREFs of _InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList_::_1_::dtor$0 @ 0x1801C8E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180061840 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(*(__int64 **)(a2 + 96));
  }
}
