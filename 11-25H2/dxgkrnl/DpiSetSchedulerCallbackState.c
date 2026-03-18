/*
 * XREFs of DpiSetSchedulerCallbackState @ 0x14007C320
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401962F4 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetSchedulerCallbackState(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 4056LL), a2);
}
