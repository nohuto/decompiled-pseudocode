/*
 * XREFs of ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1401E7350
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::IncrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this) <= 0xFFFF )
    return 0LL;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6230;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Too many VM processes created", 6230LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
