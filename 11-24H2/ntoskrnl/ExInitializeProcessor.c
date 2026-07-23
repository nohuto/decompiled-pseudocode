/*
 * XREFs of ExInitializeProcessor @ 0x140651FD4
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  signed __int64 v4; // rbx
  __int64 Pool2; // rsi
  __int64 v6; // rcx

  v4 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0x80uLL, 0x43497845u);
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(Pool2, 512, 1264, 1128888389, 32, (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2176) = Pool2;
  }
  if ( a2 )
  {
    v6 = *(unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
    if ( (_UNKNOWN *)KeNodeBlock[v6] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * v6) )
      v4 = KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 848), v4, 0LL) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 824), DelayedWorkQueue);
    *(_QWORD *)(a1 + 35760) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}
