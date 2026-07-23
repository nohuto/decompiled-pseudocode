/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1403ACF00
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x1402C55A0 (KiInsertQueue.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403AC260 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403ACAA0 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     IopPassiveInterruptDpc @ 0x140456570 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x14045A460 (KeInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x14057F52C (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405BA850 (KeInsertHeadQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // r14
  __int64 result; // rax
  __int64 v7; // rax
  char v8; // cl
  int v9; // eax
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax

  v2 = *(__int64 **)(a2 + 16);
  do
  {
    v5 = v2;
    v2 = (__int64 *)v2[1];
    result = *((unsigned __int8 *)v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v17 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v2 != v5 )
        goto LABEL_6;
      *v2 = v17;
      *(_QWORD *)(v17 + 8) = v2;
      *((_BYTE *)v5 + 17) = 5;
      KiInsertQueueInternal(v5[3], v5);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v7 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v2 != v5 )
LABEL_6:
        __fastfail(3u);
      *v2 = v7;
      v13 = 0;
      *(_QWORD *)(v7 + 8) = v2;
      v14 = *((unsigned __int16 *)v5 + 9);
      v15 = v5[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 64), 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v15 + 64) );
      }
      if ( *(_BYTE *)(v15 + 388) == 5 )
      {
        v8 = *(_BYTE *)(v15 + 112);
        v9 = v8 & 7;
        if ( v9 == 1 || v9 == 4 )
        {
          v10 = *(_QWORD *)(v15 + 232);
          if ( v10 )
          {
            if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
            {
              v16 = (unsigned __int8)*(_DWORD *)(v15 + 540);
              *(_DWORD *)(v15 + 540) = v16;
              _InterlockedIncrement((volatile signed __int32 *)(v10 + 4 * v16 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
            }
          }
          KiRemovePrcbWaitEntry((_QWORD *)v15);
          v11 = *(_BYTE *)(v15 + 388);
          if ( v11 == 1 )
          {
            *(_DWORD *)(v15 + 116) |= 2u;
          }
          else if ( v11 == 5 )
          {
            v12 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v15 + 436));
            if ( *(_BYTE *)(v15 + 391) )
              *(_QWORD *)(v15 + 1000) += v12;
            else
              *(_QWORD *)(v15 + 992) += v12;
          }
          *(_BYTE *)(v15 + 388) = 7;
          *(_QWORD *)(v15 + 216) = *(_QWORD *)(a1 + 11528);
          *(_QWORD *)(a1 + 11528) = v15 + 216;
          *(_QWORD *)(v15 + 200) = v14;
          *(_QWORD *)(v15 + 976) = 0LL;
        }
        else if ( (*(_BYTE *)(v15 + 112) & 7) != 0 )
        {
          if ( v9 == 5 )
          {
            *(_BYTE *)(v15 + 112) = v8 & 0xF8 | 6;
          }
          else if ( v9 == 3 )
          {
            *((_BYTE *)v5 + 17) = 2;
          }
        }
        else
        {
          *(_BYTE *)(v15 + 112) = v8 & 0xF8 | 2;
          *(_QWORD *)(v15 + 200) = v14;
          *(_QWORD *)(v15 + 976) = 0LL;
          *((_BYTE *)v5 + 17) = 0;
        }
      }
      *(_QWORD *)(v15 + 64) = 0LL;
      ++*((_BYTE *)v5 + 17);
    }
    result = a2 + 8;
  }
  while ( v2 != (__int64 *)(a2 + 8) );
  return result;
}
