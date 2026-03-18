/*
 * XREFs of DpiFdoHandleQueryPartitioningDeviceInterface @ 0x14024E4C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     DpiDoInterfaceReferenceGpuP @ 0x14024E250 (DpiDoInterfaceReferenceGpuP.c)
 *     DpiGetPartitionedInterfaceContextPointer @ 0x14024EDDC (DpiGetPartitionedInterfaceContextPointer.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiFdoHandleQueryPartitioningDeviceInterface(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v6 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v6, L"DpiFdoHandleQueryPartitioningDeviceInterface", 0LL);
  if ( a5 )
  {
    if ( a3 == 1 )
    {
      if ( a2 >= 0x20u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v6 + 484) )
          DpiCheckForOutstandingD3Requests(v6);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
        memmove(a4, &unk_14015E2E8, 0x20uLL);
        PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v6, a5);
        a4[1] = PartitionedInterfaceContextPointer;
        DpiDoInterfaceReferenceGpuP(PartitionedInterfaceContextPointer);
        if ( *(_BYTE *)(v6 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, 0LL);
        result = 3221225507LL;
        WdLogGlobalForLineNumber = 932;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 0LL);
      result = 3221225659LL;
      WdLogGlobalForLineNumber = 923;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 910;
  }
  return result;
}
