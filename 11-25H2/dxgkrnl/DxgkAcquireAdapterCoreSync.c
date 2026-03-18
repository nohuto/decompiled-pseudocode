/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1402BD2E0
 * Callers:
 *     DpiEnterSystemDisplay @ 0x14007D7F0 (DpiEnterSystemDisplay.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiProcessEventRequests @ 0x14024B658 (DpiAcpiProcessEventRequests.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1402BECA0 (DpiPdoHandleQueryDeviceText.c)
 *     DpiPdoIsChildConnected @ 0x140374F80 (DpiPdoIsChildConnected.c)
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BD4A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]

  v10 = -1;
  v4 = a2;
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
    if ( (_DWORD)v4 == 1 || (_DWORD)v4 == 2 || (_DWORD)v4 == 3 || (_DWORD)v4 == 4 || (_DWORD)v4 == 6 )
    {
      DXGADAPTER::AcquireCoreSync(a1, (unsigned int)v4);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
      if ( v12 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v10);
      }
      return 0LL;
    }
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 442;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid adapter synchronization level 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 426;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v10);
  return 3221225485LL;
}
