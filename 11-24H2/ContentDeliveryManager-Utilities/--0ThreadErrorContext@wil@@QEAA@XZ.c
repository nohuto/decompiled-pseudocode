/*
 * XREFs of ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180029834
 * Callers:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002941C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800347D0 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180034AD0 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180076150 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B603C (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180033484 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
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
