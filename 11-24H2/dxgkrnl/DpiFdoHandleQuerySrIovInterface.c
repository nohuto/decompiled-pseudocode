/*
 * XREFs of DpiFdoHandleQuerySrIovInterface @ 0x14024E650
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

__int64 __fastcall DpiFdoHandleQuerySrIovInterface(__int64 a1, unsigned __int16 a2, __int16 a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 result; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiFdoHandleQuerySrIovInterface", 0LL);
  if ( a5 )
  {
    if ( a3 == 2 )
    {
      if ( a2 >= 0x90u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v5 + 484) )
          DpiCheckForOutstandingD3Requests(v5);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
        if ( *(_BYTE *)(v5 + 5016) )
        {
          memmove(a4, &unk_14015E1E0, 0x90uLL);
          PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v5, a5);
          a4[1] = PartitionedInterfaceContextPointer;
          DpiDoInterfaceReferenceGpuP(PartitionedInterfaceContextPointer);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
        }
        else
        {
          WdLogSingleEntry1(3LL, 0LL);
          WdLogGlobalForLineNumber = 1360;
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
          v6 = -1073741637;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
        KeLeaveCriticalRegion();
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 1340;
      }
      return v6;
    }
    else
    {
      WdLogSingleEntry1(3LL, 0LL);
      result = 3221225659LL;
      WdLogGlobalForLineNumber = 1331;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1319;
  }
  return result;
}
