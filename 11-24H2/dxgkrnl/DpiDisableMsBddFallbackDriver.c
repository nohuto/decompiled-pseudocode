/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x140249CE4
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x140249E90 (DpiDisableMsBddFallbackDriverWorkItem.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1401893B8 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x140189DE8 (DxgkReleaseAdapterStopResetSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14018F0FC (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  struct _GUID *v4; // r8
  NTSTATUS v5; // eax
  void (__fastcall *v6)(__int64, __int128 *); // rax
  __int64 v7; // rcx

  if ( qword_140160FB8 )
  {
    v3 = *(_QWORD *)(qword_140160FB8 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v3 + 4032), 0, v4, 0LL);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2848), 0);
    if ( *(_QWORD *)(v3 + 2872) )
      v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2864), 0);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 4374;
    }
    v6 = *(void (__fastcall **)(__int64, __int128 *))(v3 + 992);
    v7 = *(_QWORD *)(v3 + 48);
    *(_OWORD *)(v3 + 5776) = *a1;
    v6(v7, &xmmword_140161070);
    *(_OWORD *)(v3 + 5776) = 0LL;
    dword_140161110 = 2;
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
    WdLogGlobalForLineNumber = 4316;
  }
  return result;
}
