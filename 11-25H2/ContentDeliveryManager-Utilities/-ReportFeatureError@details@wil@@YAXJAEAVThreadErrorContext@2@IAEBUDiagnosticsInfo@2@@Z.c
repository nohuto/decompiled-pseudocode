/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003945C
 * Callers:
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180034750 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180034A50 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180075D30 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B5D1C (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x180032020 (-GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800373F8 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18003B188 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v6; // esi
  struct DiagnosticsInfo *v7; // r9
  const struct wil::FailureInfo *v8; // rdx
  unsigned int v9[14]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-70h]
  int v11; // [rsp+60h] [rbp-68h]
  struct DiagnosticsInfo v12; // [rsp+A8h] [rbp-20h]

  v6 = (int)this;
  memset_0(v9, 0, 0x98uLL);
  if ( !*(_QWORD *)a2
    || !wil::details_abi::ThreadLocalData::GetLastError(
          *(wil::details_abi::ThreadLocalData **)a2,
          (struct wil::FailureInfo *)v9,
          *(_DWORD *)(a2 + 8),
          v6) )
  {
    memset_0(v9, 0, 0x98uLL);
    v11 = *(unsigned __int16 *)(a4 + 24);
    v10 = *(_QWORD *)(a4 + 8);
    v12 = *(struct DiagnosticsInfo *)a4;
    v9[2] = v6;
    wil::SetLastError((wil *)v9, v8);
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v9,
        *(_DWORD *)(a2 + 8),
        v6);
  }
  wil::details::RecordFeatureError(
    (wil::details *)0x79780D,
    (const struct wil::FailureInfo *)v9,
    (const struct DiagnosticsInfo *)a4,
    v7);
}
