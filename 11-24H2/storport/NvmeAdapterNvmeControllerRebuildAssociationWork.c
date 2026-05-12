/*
 * XREFs of NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterInitializeControllerQueue @ 0x1400E3FF4 (NvmeAdapterInitializeControllerQueue.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400E8424 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 *     NvmeAdapterStopControllerWorkItems @ 0x1400E867C (NvmeAdapterStopControllerWorkItems.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeAdapterTerminateFabricControllerAssociation @ 0x1400E8BC0 (NvmeAdapterTerminateFabricControllerAssociation.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400F56D0 (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeAdapterSendControlUpdateNvmeController @ 0x14019E964 (NvmeAdapterSendControlUpdateNvmeController.c)
 */

void __fastcall NvmeAdapterNvmeControllerRebuildAssociationWork(PDEVICE_OBJECT DeviceObject, char *Context)
{
  char v3; // di
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  unsigned __int16 v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // r14
  unsigned __int16 v18; // r15
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  unsigned __int16 v21; // bp
  unsigned __int16 i; // di
  int v23; // eax
  int v24; // eax
  int updated; // eax
  int started; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
  {
    if ( _InterlockedCompareExchange(*((volatile signed __int32 **)Context + 161), 1, 0) )
      return;
    StorEtwNvmeControllerEvent(
      (__int64)Context,
      1,
      4,
      (__int64)L"Rebuild association started",
      (void *)&word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
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
    NvmeAdapterStopControllerWorkItems(Context, 0LL);
    _interlockedbittestandset((volatile signed __int32 *)Context + 237, 1u);
    NvmeControllerSubmissionQueueQuiesce(Context);
    v4 = (__int64 *)(Context + 712);
    v7 = NvmeAdapterTransportDisconnectFabricControllerQueue(*((_QWORD *)Context + 89), v5, v6);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v12 = Context + 728;
      if ( *((_QWORD *)Context + 91) && (v13 = 0, *((_WORD *)Context + 10)) )
      {
        while ( 1 )
        {
          v14 = *((_QWORD *)Context + 91) + 192LL * v13;
          if ( *(_DWORD *)(v14 + 120) == 5 )
          {
            v15 = NvmeAdapterTransportDisconnectFabricControllerQueue(v14, v8, v9);
            v3 = v15;
            if ( v15 < 0 )
              break;
          }
          if ( ++v13 >= *((_WORD *)Context + 10) )
          {
            v4 = (__int64 *)(Context + 712);
            v12 = Context + 728;
            goto LABEL_16;
          }
        }
        *((_DWORD *)Context + 298) = 40;
      }
      else
      {
LABEL_16:
        NvmeControllerSubmissionQueueCompletionQuiesce(Context);
        NvmeAdapterDrainFabricControllerQueue(*v4);
        v17 = v12;
        if ( *v12 )
        {
          v18 = 0;
          if ( *((_WORD *)Context + 10) )
          {
            do
              NvmeAdapterDrainFabricControllerQueue(*v12 + 192LL * v18++);
            while ( v18 < *((_WORD *)Context + 10) );
            v4 = (__int64 *)(Context + 712);
            v17 = Context + 728;
          }
        }
        LOBYTE(v16) = 37;
        NvmeCompleteSubmissionQueueRequests(*v4, v16, 3221225996LL);
        v20 = v17;
        if ( *v17 )
        {
          v21 = 0;
          if ( *((_WORD *)Context + 10) )
          {
            do
            {
              LOBYTE(v19) = 37;
              NvmeCompleteSubmissionQueueRequests(*v17 + 192LL * v21++, v19, 3221225996LL);
            }
            while ( v21 < *((_WORD *)Context + 10) );
            v20 = Context + 728;
          }
        }
        StorEtwNvmeControllerEvent(
          (__int64)Context,
          1,
          4,
          (__int64)L"Transport connections terminated and outstanding requests drained",
          (void *)&word_140150F48,
          0,
          &word_140150F48,
          0,
          &word_140150F48,
          0,
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
        if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
        {
          NvmeAdapterTerminateFabricControllerAssociation(Context);
          if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
          {
            NvmeAdapterInitializeControllerQueue((__int64)Context, 0, 1);
            if ( *v20 )
            {
              for ( i = 1; i <= *((_WORD *)Context + 10); ++i )
                NvmeAdapterInitializeControllerQueue((__int64)Context, i, 1);
            }
            v23 = NvmeAdapterTransportReconnectFabricControllerQueue(*((_QWORD *)Context + 89));
            v3 = v23;
            if ( v23 >= 0 )
            {
              _interlockedbittestandreset((volatile signed __int32 *)Context + 237, 1u);
              if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
              {
                v24 = NvmeAdapterReconnectFabricControllerAssociation(Context);
                v3 = v24;
                if ( v24 >= 0 )
                {
                  updated = NvmeAdapterSendControlUpdateNvmeController(Context);
                  v3 = updated;
                  if ( updated >= 0 )
                  {
                    started = NvmeAdapterStartFabricNvmeControllerOperations(Context);
                    v3 = started;
                    if ( started >= 0 )
                    {
                      **(_QWORD **)(*((_QWORD *)Context + 161) + 40LL) = KeQueryUnbiasedInterruptTime();
                      _InterlockedOr(v27, 0);
                      _InterlockedExchange(*((volatile __int32 **)Context + 161), 0);
                      if ( FeatureFixTRIMAddSCSIPassthrough )
                        **(_QWORD **)(*((_QWORD *)Context + 161) + 40LL) = KeQueryUnbiasedInterruptTime();
                      if ( !_InterlockedCompareExchange(
                              (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL),
                              1,
                              0) )
                        KeSetCoalescableTimer(
                          (PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 128LL),
                          (LARGE_INTEGER)-50000000LL,
                          0x7D0u,
                          0x12Cu,
                          (PKDPC)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 64LL));
                      NvmeControllerRestart(Context);
                      StorEtwNvmeControllerEvent(
                        (__int64)Context,
                        1,
                        4,
                        (__int64)L"Rebuild association succeeded",
                        (void *)&word_140150F48,
                        0,
                        &word_140150F48,
                        0,
                        &word_140150F48,
                        0,
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
                      goto LABEL_8;
                    }
                    *((_DWORD *)Context + 298) = 44;
                  }
                  else
                  {
                    *((_DWORD *)Context + 298) = 43;
                  }
                }
                else
                {
                  *((_DWORD *)Context + 298) = 42;
                }
              }
            }
            else
            {
              *((_DWORD *)Context + 298) = 41;
            }
          }
        }
      }
    }
    else
    {
      *((_DWORD *)Context + 298) = 40;
    }
    _InterlockedExchange(*((volatile __int32 **)Context + 161), 0);
  }
  if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
  {
    StorEtwNvmeControllerEvent(
      (__int64)Context,
      1,
      2,
      (__int64)L"Rebuild association failed",
      L"Status",
      v3,
      L"ErrorState",
      *((_DWORD *)Context + 298),
      &word_140150F48,
      0,
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
    LOBYTE(v10) = 1;
    NvmeAdapterStopFabricNvmeControllerOperations(Context, v10);
    NvmeAdapterCleanupFabricNvmeController((__int64)Context, v11);
    *((_DWORD *)Context + 142) = 4;
  }
LABEL_8:
  KeSetEvent((PRKEVENT)(Context + 232), 0, 0);
}
