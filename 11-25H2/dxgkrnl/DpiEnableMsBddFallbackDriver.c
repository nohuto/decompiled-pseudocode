/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x14024311C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x14018722C (DxgkReleaseAdapterStopResetSync.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1401873E0 (DxgkAcquireAdapterStopResetSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x14018CE9C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402BD2E0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  void (__fastcall *v6)(__int64, __int128 *, __int64, __int64); // rax
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax

  if ( qword_14015DFF8 )
  {
    v3 = *(_QWORD *)(qword_14015DFF8 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_QWORD *)(v3 + 4032) )
    {
      v6 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v3 + 984);
      v7 = *(_QWORD *)(v3 + 48);
      *(_OWORD *)(v3 + 5776) = *a1;
      LOBYTE(v5) = byte_14015DD5B;
      LOBYTE(v4) = dword_14015E150 == 1;
      v6(v7, &xmmword_14015E0B0, v4, v5);
      *(_OWORD *)(v3 + 5776) = 0LL;
      byte_14015DD5B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
      DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v3 + 4032), 1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
      v8 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2848), 1u);
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 4239;
      }
      if ( *(_QWORD *)(v3 + 2872) )
      {
        v9 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2864), 1u);
        if ( v9 < 0 )
        {
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 4251;
        }
      }
      xmmword_14015E0C0 = 0LL;
      DWORD2(xmmword_14015E0C0) = -1;
      xmmword_14015E0B0 = 0LL;
      memset(&xmmword_14015E0D0, 0, 0x80uLL);
      dword_14015E150 = 4;
      DxgkInvalidateQdcCache();
    }
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
    WdLogGlobalForLineNumber = 4158;
  }
  return result;
}
