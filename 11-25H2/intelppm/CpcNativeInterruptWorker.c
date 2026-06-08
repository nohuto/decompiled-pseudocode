/*
 * XREFs of CpcNativeInterruptWorker @ 0x1400285E0
 * Callers:
 *     <none>
 * Callees:
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x140047164 (CpcGuaranteedNotifyWorker.c)
 */

void __fastcall CpcNativeInterruptWorker(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  __int64 v2; // rdi
  char v4; // bl

  v2 = Context[31];
  do
  {
    v4 = _InterlockedExchange((volatile __int32 *)(v2 + 1328), 4);
    if ( (v4 & 1) != 0 )
      CpcGuaranteedNotifyWorker(DeviceObject, 0LL, "Native Interrupt");
    if ( (v4 & 2) != 0 )
      CpcHighestNotifyWorker(DeviceObject, 0LL, "Native Interrupt");
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 1328), 0, 4) != 4 );
}
