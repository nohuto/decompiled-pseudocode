/*
 * XREFs of DxgkResumeMemorySegments @ 0x1401A094C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402C9300 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x14019F818 (-PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkResumeMemorySegments(__int64 a1)
{
  unsigned int v2; // ebx
  ADAPTER_RENDER *v3; // rdi

  if ( a1 )
  {
    v3 = *(ADAPTER_RENDER **)(a1 + 3128);
    if ( !v3 )
    {
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      WdLogGlobalForLineNumber = 749;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkResumeMemorySegments is called on display only DXGADAPTER 0x%I64x, returning 0x%I64x.",
        a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)v3 + 95) + 8LL) + 88LL))(*((_QWORD *)v3 + 96));
    ADAPTER_RENDER::PageInAllDevices(v3);
    ADAPTER_RENDER::FlushScheduler(v3, 7LL, 0xFFFFFFFFLL);
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 741;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v2;
}
