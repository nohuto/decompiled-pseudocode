/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x140283660
 * Callers:
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     IopPassiveInterruptDpc @ 0x140461CF0 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x140464700 (KeInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405B9380 (KeInsertHeadQueue.c)
 * Callees:
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // r15
  __int64 *v5; // r14
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = *(__int64 **)(a2 + 16);
  v4 = a1;
  do
  {
    v5 = v2;
    v2 = (__int64 *)v2[1];
    result = *((unsigned __int8 *)v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v16 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v2 != v5 )
        goto LABEL_6;
      *v2 = v16;
      *(_QWORD *)(v16 + 8) = v2;
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
      v12 = 0;
      *(_QWORD *)(v7 + 8) = v2;
      v13 = *((unsigned __int16 *)v5 + 9);
      v14 = v5[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v14 + 64) );
      }
      if ( *(_BYTE *)(v14 + 388) == 5 )
      {
        a1 = *(unsigned __int8 *)(v14 + 112);
        v8 = *(_BYTE *)(v14 + 112) & 7;
        if ( v8 == 1 || v8 == 4 )
        {
          v9 = *(_QWORD *)(v14 + 232);
          if ( v9 )
          {
            if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
            {
              v15 = (unsigned __int8)*(_DWORD *)(v14 + 540);
              *(_DWORD *)(v14 + 540) = v15;
              _InterlockedIncrement((volatile signed __int32 *)(v9 + 4 * v15 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v9 + 40));
            }
          }
          KiRemovePrcbWaitEntry(v14);
          v10 = *(_BYTE *)(v14 + 388);
          if ( v10 == 1 )
          {
            *(_DWORD *)(v14 + 116) |= 2u;
          }
          else if ( v10 == 5 )
          {
            v11 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v14 + 436));
            if ( *(_BYTE *)(v14 + 391) )
              *(_QWORD *)(v14 + 1000) += v11;
            else
              *(_QWORD *)(v14 + 992) += v11;
          }
          *(_BYTE *)(v14 + 388) = 7;
          a1 = v14 + 216;
          *(_QWORD *)(v14 + 216) = *(_QWORD *)(v4 + 11528);
          *(_QWORD *)(v4 + 11528) = v14 + 216;
          *(_QWORD *)(v14 + 200) = v13;
          *(_QWORD *)(v14 + 976) = 0LL;
        }
        else if ( (*(_BYTE *)(v14 + 112) & 7) != 0 )
        {
          if ( v8 == 5 )
          {
            LOBYTE(a1) = a1 & 0xF8 | 6;
            *(_BYTE *)(v14 + 112) = a1;
          }
          else if ( v8 == 3 )
          {
            *((_BYTE *)v5 + 17) = 2;
          }
        }
        else
        {
          LOBYTE(a1) = a1 & 0xF8 | 2;
          *(_BYTE *)(v14 + 112) = a1;
          *(_QWORD *)(v14 + 200) = v13;
          *(_QWORD *)(v14 + 976) = 0LL;
          *((_BYTE *)v5 + 17) = 0;
        }
      }
      *(_QWORD *)(v14 + 64) = 0LL;
      ++*((_BYTE *)v5 + 17);
    }
    result = a2 + 8;
  }
  while ( v2 != (__int64 *)(a2 + 8) );
  return result;
}
