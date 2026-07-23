/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x140770DC4
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1407696D8 (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14076A4D0 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A56C (TtmiWriteEventToAllQueues.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x14076B458 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     TtmiLogQueueEnqueueEvent @ 0x14076DB2C (TtmiLogQueueEnqueueEvent.c)
 *     TtmpAcquireQueueLock @ 0x140770F08 (TtmpAcquireQueueLock.c)
 *     TtmpReleaseQueueLock @ 0x140771080 (TtmpReleaseQueueLock.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _QWORD *v11; // rcx

  TtmpAcquireQueueLock(a1);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v4 = -1073740032;
    v5 = 412LL;
LABEL_3:
    TtmiLogError("TtmiWriteEventToSingleQueue", v5, 0xFFFFFFFFLL, v4);
    goto LABEL_11;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x230uLL, 0x716D7454u);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    v5 = 425LL;
    goto LABEL_3;
  }
  v8 = 4LL;
  v9 = (_OWORD *)(Pool2 + 16);
  do
  {
    *v9 = *a2;
    v9[1] = a2[1];
    v9[2] = a2[2];
    v9[3] = a2[3];
    v9[4] = a2[4];
    v9[5] = a2[5];
    v9[6] = a2[6];
    v9 += 8;
    v10 = a2[7];
    a2 += 8;
    *(v9 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *v9 = *a2;
  v9[1] = a2[1];
  TtmiLogQueueEnqueueEvent();
  v11 = *(_QWORD **)(a1 + 160);
  if ( *v11 != a1 + 152 )
    __fastfail(3u);
  v7[1] = v11;
  *v7 = a1 + 152;
  *v11 = v7;
  *(_QWORD *)(a1 + 160) = v7;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_11:
  TtmpReleaseQueueLock(a1);
  return v4;
}
