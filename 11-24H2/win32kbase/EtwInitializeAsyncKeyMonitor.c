/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1400C67DC
 * Callers:
 *     EtwTraceGetAsyncKeyState @ 0x1400C6694 (EtwTraceGetAsyncKeyState.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401B3EEC (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  signed __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned int v2; // edx

  v0 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x61734B45u);
  if ( !v0 )
    return 3221225495LL;
  *(_QWORD *)v0 = 0LL;
  *(_BYTE *)(v0 + 88) = 0;
  *(_QWORD *)(v0 + 96) = 0LL;
  memset((void *)(v0 + 8), -1, 0x50uLL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(W32GetUserSessionState(v1) + 14496), v0, 0LL) )
    CAsyncKeyEventMonitor::`scalar deleting destructor'((CAsyncKeyEventMonitor *)v0, v2);
  return 0LL;
}
