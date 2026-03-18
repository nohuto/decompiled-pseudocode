/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1400F7268
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsShellProcess @ 0x1400F7338 (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400F73EC (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 58);
    if ( v5 )
    {
      if ( !(unsigned int)IsShellProcess(v5) && *(_DWORD *)(v6 + 1016) )
      {
        if ( !*(_DWORD *)(v6 + 928) )
        {
          *(_DWORD *)(*((_QWORD *)v4 + 58) + 948LL) = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v4);
          *(_DWORD *)(*((_QWORD *)v4 + 58) + 980LL) &= ~1u;
          *(_DWORD *)(*((_QWORD *)v4 + 58) + 980LL) &= ~2u;
          *(_DWORD *)(*((_QWORD *)v4 + 58) + 980LL) &= ~4u;
          *(_DWORD *)(*((_QWORD *)v4 + 58) + 976LL) = 0;
          *(_DWORD *)(*((_QWORD *)v4 + 58) + 972LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*((_QWORD *)v4 + 58) + 928LL);
      }
    }
  }
}
