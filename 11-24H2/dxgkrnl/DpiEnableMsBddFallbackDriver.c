/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x140249F1C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1401893B8 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x140189DE8 (DxgkReleaseAdapterStopResetSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14018F0FC (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(void *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, __int128 *, __int64, __int64); // rax
  __int64 v9; // rcx
  struct _GUID *v10; // r8
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax

  if ( qword_140160FB8 )
  {
    v5 = *(_QWORD *)(qword_140160FB8 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
    if ( *(_QWORD *)(v5 + 4032) )
    {
      v8 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v5 + 984);
      v9 = *(_QWORD *)(v5 + 48);
      *(_OWORD *)(v5 + 5776) = *a2;
      LOBYTE(v7) = byte_140160D1B;
      LOBYTE(v6) = dword_140161110 == 1;
      v8(v9, &xmmword_140161070, v6, v7);
      *(_OWORD *)(v5 + 5776) = 0LL;
      byte_140160D1B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v5 + 4032), 1);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 4032), 2LL);
      DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v5 + 4032), 1, v10, a1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 4032), 2LL);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v5 + 4032), 1);
      v11 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2848), 1u);
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 4242;
      }
      if ( *(_QWORD *)(v5 + 2872) )
      {
        v12 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2864), 1u);
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(2LL, v12);
          WdLogGlobalForLineNumber = 4254;
        }
      }
      xmmword_140161080 = 0LL;
      DWORD2(xmmword_140161080) = -1;
      xmmword_140161070 = 0LL;
      memset(&xmmword_140161090, 0, 0x80uLL);
      dword_140161110 = 4;
      DxgkInvalidateQdcCache();
    }
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4161;
  }
  return result;
}
