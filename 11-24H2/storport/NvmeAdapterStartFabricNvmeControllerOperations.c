/*
 * XREFs of NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400E8424
 * Callers:
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterAddNvmeIoControllerToList @ 0x1400CC96C (NvmeAdapterAddNvmeIoControllerToList.c)
 *     NvmeAdapterCreateFabricControllerIoQueues @ 0x1400E090C (NvmeAdapterCreateFabricControllerIoQueues.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400E734C (NvmeAdapterSendFabricControllerAsyncEventCommand.c)
 */

__int64 __fastcall NvmeAdapterStartFabricNvmeControllerOperations(char *Context, char a2)
{
  __int64 v3; // r15
  __int64 *v5; // rdi
  unsigned __int16 v6; // bp
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // edx

  v3 = *((_QWORD *)Context + 16);
  if ( *((_DWORD *)Context + 143) == 2 )
    NvmeAdapterFabricRegisterDeregisterHost(Context, 1);
  v5 = (__int64 *)(Context + 136);
  *((_QWORD *)Context + 17) &= ~0x40000000uLL;
  v6 = 0;
  v7 = Context + 136;
  if ( Context[742] )
  {
    do
    {
      if ( (int)NvmeAdapterSendFabricControllerAsyncEventCommand(
                  (__int64)Context,
                  *(_QWORD *)(*((_QWORD *)Context + 68) + 8LL * v6)) < 0 )
        *v5 |= 0x40000000uLL;
      ++v6;
    }
    while ( v6 < (unsigned __int8)Context[742] );
    v7 = Context + 136;
  }
  if ( *((_DWORD *)Context + 143) == 1 )
  {
    v8 = *v5;
    if ( a2 )
    {
      *v5 = v8 | 0x2000;
      NvmeAdapterCreateFabricControllerIoQueues((__int64)Context);
    }
    else
    {
      v9 = v8 | 0x1000;
      *v5 = v9;
      *v7 = v9 | 0x10000;
      NvmeAdapterAddNvmeIoControllerToList(v3, (__int64)Context);
      *v7 |= 0x200uLL;
    }
  }
  *v7 &= ~0x400uLL;
  v10 = *v7 & 0xFFFFFFFFFFFFF7FFuLL;
  *((_QWORD *)Context + 135) = 0LL;
  *((_QWORD *)Context + 136) = 0LL;
  *v7 = v10 & 0xFFFFFFFFDFFFFFFFuLL;
  *((_DWORD *)Context + 268) &= ~0x20u;
  KeClearEvent((PRKEVENT)(Context + 184));
  IoQueueWorkItem(
    *((PIO_WORKITEM *)Context + 18),
    (PIO_WORKITEM_ROUTINE)NvmeAdapterNvmeControllerBackgroundWork,
    DelayedWorkQueue,
    Context);
  v11 = *((_DWORD *)Context + 269);
  if ( v11 )
  {
    KeClearEvent((PRKEVENT)(Context + 208));
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 19),
      (PIO_WORKITEM_ROUTINE)NvmeAdapterNvmeControllerKeepAliveWork,
      CriticalWorkQueue,
      Context);
    v11 = *((_DWORD *)Context + 269);
  }
  StorEtwNvmeControllerEvent(
    (__int64)Context,
    1,
    4,
    (__int64)L"Controller operations started",
    L"Reconnect",
    a2 != 0,
    L"KeepAliveTimeout",
    v11,
    L"CQT",
    *(_WORD *)(*((_QWORD *)Context + 74) + 386LL),
    &word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0);
  return 0LL;
}
