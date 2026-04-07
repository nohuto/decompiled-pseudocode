/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x180097C64
 * Callers:
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18002D900 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800DB54C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::Unregister(CIndirectSwapchainRenderTargetProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 440LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
