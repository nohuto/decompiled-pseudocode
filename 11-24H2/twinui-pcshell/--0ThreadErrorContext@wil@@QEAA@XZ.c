/*
 * XREFs of ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004D2BC
 * Callers:
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18004CA18 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x18004D1F0 (wil--details--RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__-_.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18004D270 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E0F4C (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1803DE9E0 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18004D374 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 */

wil::ThreadErrorContext *__fastcall wil::ThreadErrorContext::ThreadErrorContext(wil::ThreadErrorContext *this, bool a2)
{
  wil::ThreadErrorContext *v2; // rbx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  int v4; // ecx
  __int64 v5; // rax

  v2 = this;
  LOBYTE(this) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(this, a2);
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *(_QWORD *)v2 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    *((_DWORD *)v2 + 3) = *((_DWORD *)ThreadLocalDataCache + 4);
    v4 = **((_DWORD **)ThreadLocalDataCache + 1);
    v5 = *(_QWORD *)v2;
    *((_DWORD *)v2 + 2) = v4;
    *(_DWORD *)(v5 + 16) = v4;
  }
  return v2;
}
