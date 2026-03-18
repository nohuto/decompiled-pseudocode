/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00A67B8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00A4EC4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( gptiCurrent )
  {
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v2 )
    {
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 1040) )
      {
        if ( !*(_DWORD *)(v3 + 952) )
        {
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 972LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 1004LL) &= ~1u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 1004LL) &= ~2u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 1004LL) &= ~4u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 1000LL) = 0;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 996LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 952LL);
      }
    }
  }
}
