/*
 * XREFs of ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x180086278
 * Callers:
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180029B8C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(
        CIndirectSwapchainRenderTargetProxy *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                      + 432LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           a4,
           a5);
}
