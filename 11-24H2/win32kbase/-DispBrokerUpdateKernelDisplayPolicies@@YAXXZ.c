/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1400C7B00
 * Callers:
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400C7110 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     DrvDxgkConfigureKernelDisplayPolicy @ 0x1400C8410 (DrvDxgkConfigureKernelDisplayPolicy.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1400C844C (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 */

void __fastcall DispBrokerUpdateKernelDisplayPolicies(__int64 a1)
{
  __int64 UserSessionState; // rax
  unsigned int CurrentMode; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  UserSessionState = W32GetUserSessionState(a1);
  DispBroker::DispBrokerClient::LoadRegistrySettings(*(DispBroker::DispBrokerClient **)(UserSessionState + 57056));
  CurrentMode = DispBrokerGetCurrentMode();
  DrvDxgkConfigureKernelDisplayPolicy(1LL, CurrentMode != 0);
  DrvDxgkConfigureKernelDisplayPolicy(2LL, CurrentMode == 0);
  DrvDxgkConfigureKernelDisplayPolicy(3LL, CurrentMode <= 1);
  v4 = W32GetUserSessionState(v3);
  DrvDxgkConfigureKernelDisplayPolicy(4LL, *(unsigned __int8 *)(*(_QWORD *)(v4 + 57056) + 8LL));
  v6 = W32GetUserSessionState(v5);
  DrvDxgkConfigureKernelDisplayPolicy(5LL, *(unsigned __int8 *)(*(_QWORD *)(v6 + 57056) + 9LL));
}
