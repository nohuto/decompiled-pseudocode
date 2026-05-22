/*
 * XREFs of ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF814
 * Callers:
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BFB20 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BFB70 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180013DFC (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x1800C037C (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180110108 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180110818 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCGestureHandler::DownLevelPressTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v4; // rbp
  const RECT *v8; // r10
  MPCHolographicInputManager *Instance; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  unsigned int v14; // esi
  ISMTracing *v15; // rcx
  struct tagPOINT v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = a4;
  v4 = (MPCGestureHandler *)((char *)this + 80);
  if ( !ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
    && PtInRect(v8 + 55, a4) )
  {
    ManipulationInjector::InjectDrag(v4, &v16, a3);
    *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v4, a3);
    Instance = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance, v10, v11, v12);
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *, struct tagPOINT))(*(_QWORD *)PostProcessor + 64LL))(
      PostProcessor,
      a4);
    v14 = *((_DWORD *)this + 228);
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCGestureHandler_InjectPress_(v15, a4.x, v16.y, a3, v14);
    }
  }
}
