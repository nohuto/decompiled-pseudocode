/*
 * XREFs of _ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor$1 @ 0x1801C9658
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180053184 (--1-$vector@V-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

void __fastcall ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 160) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::~vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>(a2 + 48);
  }
}
