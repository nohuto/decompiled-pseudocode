/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403CFA74
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018C9A0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x14027BECC (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402D7E98 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403CFA34 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1403CFB5C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Flush(struct _KEVENT *this)
{
  __int64 Blink_low; // rbp
  __int64 v3; // rbx

  if ( *(_QWORD *)&this[27].Header.Lock )
  {
    Blink_low = LODWORD(this[37].Header.WaitListHead.Blink);
    if ( KeReadStateEvent(this + 24) )
      LODWORD(this[41].Header.WaitListHead.Flink) |= 1u;
    *((LARGE_INTEGER *)&this[38].Header.Lock + 5 * Blink_low) = KeQueryPerformanceCounter(0LL);
    BYTE1(this[25].Header.SignalState) = 1;
    BLTQUEUE::IssueCommand((BLTQUEUE *)this);
    *((LARGE_INTEGER *)&this[39].Header.Lock + 5 * Blink_low) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)&this[39].Header.WaitListHead.Flink + 5 * Blink_low) = v3 * KeQueryTimeIncrement();
    LODWORD(this[37].Header.WaitListHead.Blink) = ((_BYTE)Blink_low - 1) & 1;
  }
}
