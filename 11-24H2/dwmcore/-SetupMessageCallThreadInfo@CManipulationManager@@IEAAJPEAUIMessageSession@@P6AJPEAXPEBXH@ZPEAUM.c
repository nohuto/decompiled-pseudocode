/*
 * XREFs of ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800EC6C8
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800EC7B0 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800ECABC (-Initialize@CManipulationManager@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::SetupMessageCallThreadInfo(
        CManipulationManager *this,
        struct IMessageSession *a2,
        int (*a3)(void *, const void *, int),
        struct CManipulationManager::MessageCallThreadInfo *a4)
{
  int EndpointHost; // eax
  int v9; // eax
  int v10; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 1);
  EndpointHost = CoreUICallCreateEndpointHost(a2, (char *)a4 + 8, 0LL);
  if ( EndpointHost < 0 )
    ModuleFailFastForHRESULT(EndpointHost, retaddr);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 2);
  v9 = CoreUICallCreateEndpointHost(*(_QWORD *)(*((_QWORD *)this + 2) + 5688LL), 0LL, (char *)a4 + 16);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT(v9, retaddr);
  v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, int (*)(void *, const void *, int), CManipulationManager *, struct CManipulationManager::MessageCallThreadInfo *))(*(_QWORD *)a2 + 112LL))(
          a2,
          a3,
          this,
          a4);
  if ( v10 < 0 )
    ModuleFailFastForHRESULT(v10, retaddr);
  return 0LL;
}
