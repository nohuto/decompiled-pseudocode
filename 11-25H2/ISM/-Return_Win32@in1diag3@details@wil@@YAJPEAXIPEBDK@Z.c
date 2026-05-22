/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D29A8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D5974 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800E3E2C (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x180107718 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1801079D8 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 *     ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z @ 0x180112070 (-GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z.c)
 *     ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z @ 0x18011239C (-QueryDeviceConvertibility@DevicePostureHelpers@@YA-AW4DeviceConvertibility@1@W4QueryOptions@1@@.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x1801887B0 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionTarget@@IEAAJXZ @ 0x1801A8A94 (-Initialize@InputRedirectionTarget@@IEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801B696C (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 * Callees:
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18008CFE0 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(wil::details::in1diag3 *this, void *a2, int a3, const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32<1>((int)this, (int)a2, a3, (int)a4, v5, retaddr, v6);
}
