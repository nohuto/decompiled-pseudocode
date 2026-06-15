/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14001E948
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?AERTDestroyHeap@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001DC9C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-AERTDestroyHeap@@YAX0@ZU-$integral_const.c)
 *     ?RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z @ 0x14003491C (-RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140076BA0 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyHeap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // al
  __int64 v5; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    v4 = RtlDestroyMemoryBlockLookaside();
  else
    v4 = 0;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, a2, a3, 4, v3, 0, 0, 0, v5, 0, v4);
}
