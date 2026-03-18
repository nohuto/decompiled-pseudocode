/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x140242EE4
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x140243090 (DpiDisableMsBddFallbackDriverWorkItem.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x14018722C (DxgkReleaseAdapterStopResetSync.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1401873E0 (DxgkAcquireAdapterStopResetSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x14018CE9C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402BD2E0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int64 v6; // rcx

  if ( qword_14015DFF8 )
  {
    v3 = *(_QWORD *)(qword_14015DFF8 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v3 + 4032), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2848), 0);
    if ( *(_QWORD *)(v3 + 2872) )
      v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2864), 0);
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 4371;
    }
    v5 = *(void (__fastcall **)(__int64, __int128 *))(v3 + 992);
    v6 = *(_QWORD *)(v3 + 48);
    *(_OWORD *)(v3 + 5776) = *a1;
    v5(v6, &xmmword_14015E0B0);
    *(_OWORD *)(v3 + 5776) = 0LL;
    dword_14015E150 = 2;
    DxgkInvalidateQdcCache();
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4313;
  }
  return result;
}
