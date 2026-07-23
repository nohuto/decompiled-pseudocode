/*
 * XREFs of EtwpTiAsyncVadQueryEventWrite @ 0x140262F9C
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140262ED4 (EtwpTiVadQueryEventWrite.c)
 * Callees:
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140263100 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     EtwpTiGetHashedBitNumbers @ 0x140263290 (EtwpTiGetHashedBitNumbers.c)
 *     EtwpTiTestBloomFilter @ 0x140263340 (EtwpTiTestBloomFilter.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall EtwpTiAsyncVadQueryEventWrite(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        int a6,
        __int64 a7)
{
  _QWORD *v9; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  _BYTE *v15; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  _BYTE *v18; // rdx
  int v19; // eax
  PWORK_QUEUE_ITEM v20; // rcx
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-20h]
  PWORK_QUEUE_ITEM WorkItem; // [rsp+98h] [rbp+20h] BYREF

  WorkItem = 0LL;
  v9 = a5;
  v12 = *a5 ^ ((*(_QWORD *)(a4 + 1656) ^ (KeGetCurrentThread()->ApcState.Process[3].CycleTime << 16)) << 32);
  if ( !(unsigned __int8)EtwpTiTestBloomFilter(a1, v12)
    && (int)EtwpTiAllocVadQueryEventWriteWorkItemContext(a1, a2, a3, a4, v9, a6, a7, v12, &WorkItem) >= 0 )
  {
    v21 = 0LL;
    v22 = 0;
    EtwpTiGetHashedBitNumbers(&v21, v13, v12);
    v14 = HIDWORD(v21);
    *(_BYTE *)(qword_140EFEF68 + ((unsigned __int64)(unsigned int)v21 >> 3)) |= 1 << (v21 & 7);
    v15 = (_BYTE *)(qword_140EFEF68 + ((unsigned __int64)v14 >> 3));
    v16 = (char)*v15 | (1 << (v14 & 7));
    v17 = v22;
    *v15 = v16;
    v18 = (_BYTE *)(qword_140EFEF68 + ((unsigned __int64)v17 >> 3));
    v19 = (char)*v18 | (1 << (v17 & 7));
    v20 = WorkItem;
    *v18 = v19;
    v20->List.Flink = 0LL;
    v20->WorkerRoutine = (void (__fastcall *)(void *))EtwpTiVadQueryEventWriteCallback;
    v20->Parameter = v20;
    ExQueueWorkItem(v20, DelayedWorkQueue);
  }
}
