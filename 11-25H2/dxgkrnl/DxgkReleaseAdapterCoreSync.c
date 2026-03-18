/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1402BA104
 * Callers:
 *     DpiLeaveSystemDisplay @ 0x14005CCB0 (DpiLeaveSystemDisplay.c)
 *     DpiEnterSystemDisplay @ 0x14007D7F0 (DpiEnterSystemDisplay.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiProcessEventRequests @ 0x14024B658 (DpiAcpiProcessEventRequests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1402BECA0 (DpiPdoHandleQueryDeviceText.c)
 *     DpiPdoIsChildConnected @ 0x140374F80 (DpiPdoIsChildConnected.c)
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 1009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 1009);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 1009);
  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync(a1, a2);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v10);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 492;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v10);
    return 3221225485LL;
  }
}
