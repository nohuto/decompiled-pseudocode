/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1403F45C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+50h] [rbp-28h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]
  char v8; // [rsp+60h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v6 = -1;
  v7 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v8 = 1;
    v6 = 3013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Event, (__int64)&EventProfilerEnter, a3, 3013);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v6, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2726;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PASSIVE_LEVEL == KeGetCurrentIrql()",
      2726LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v6);
  }
}
