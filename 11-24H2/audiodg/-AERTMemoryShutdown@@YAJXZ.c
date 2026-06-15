/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x1400746B0
 * Callers:
 *     wWinMain @ 0x14004AAF4 (wWinMain.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14001E648 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 */

__int64 AERTMemoryShutdown(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v4; // [rsp+40h] [rbp-28h]
  WINBOOL v5; // [rsp+70h] [rbp+8h] BYREF
  void *v6; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( __std_init_once_begin_initialize(&gRTHeapInitOnce, 1u, &v5, &v6) && !v5 )
    AERTDestroyHeap((__int64)v6, v0, v2);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v1, v0, v2, 2, (char)v6, 0, 0, 0, v4, 0, 0);
  return 0LL;
}
