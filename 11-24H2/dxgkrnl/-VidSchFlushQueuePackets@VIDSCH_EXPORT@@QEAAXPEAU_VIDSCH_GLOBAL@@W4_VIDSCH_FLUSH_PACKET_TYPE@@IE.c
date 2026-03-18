/*
 * XREFs of ?VidSchFlushQueuePackets@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE@Z @ 0x14004CCCC
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchFlushQueuePackets(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r10d

  v5 = a4;
  LOBYTE(a4) = a5;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 8) + 784LL))(a2, a3, v5, a4);
}
