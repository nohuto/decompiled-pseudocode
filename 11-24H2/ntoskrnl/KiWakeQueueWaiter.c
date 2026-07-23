/*
 * XREFs of KiWakeQueueWaiter @ 0x1402CD6B0
 * Callers:
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     KiActivateWaiterKQueue @ 0x1402D5850 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402D5900 (KiActivateWaiterQueueWithThreadLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     IopPassiveInterruptDpc @ 0x140456570 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x14045A460 (KeInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x14057F52C (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405BA850 (KeInsertHeadQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  char v9; // al
  __int64 v10; // rcx
  char v11; // si
  unsigned int v13; // edi
  __int64 v14; // rbx
  char v15; // cl
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      return 0;
    v8 = (_QWORD *)v7[1];
    if ( (_QWORD *)v3[1] != v7 || (_QWORD *)*v8 != v7 )
LABEL_5:
      __fastfail(3u);
    *v8 = v3;
    v11 = 0;
    v3[1] = v8;
    v13 = 0;
    v14 = v7[3];
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
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
      while ( *(_QWORD *)(v14 + 64) );
    }
    if ( *(_BYTE *)(v14 + 388) == 5 )
    {
      v15 = *(_BYTE *)(v14 + 112);
      v16 = v15 & 7;
      if ( v16 == 1 || v16 == 4 )
      {
        v17 = *(_QWORD *)(v14 + 232);
        if ( v17 )
        {
          if ( (*(_BYTE *)v17 & 0x7F) == 0x15 )
          {
            v22 = (unsigned __int8)*(_DWORD *)(v14 + 540);
            *(_DWORD *)(v14 + 540) = v22;
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 4 * v22 + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 40));
          }
        }
        v18 = *(_QWORD *)(v14 + 712);
        if ( v18 )
        {
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 33744), 0LL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v19);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v18 + 33744) );
          }
          if ( *(_QWORD *)(v14 + 712) )
          {
            v20 = *(_QWORD *)(v14 + 216);
            v21 = *(_QWORD **)(v14 + 224);
            if ( *(_QWORD *)(v20 + 8) != v14 + 216 || *v21 != v14 + 216 )
              goto LABEL_5;
            *v21 = v20;
            *(_QWORD *)(v20 + 8) = v21;
            *(_QWORD *)(v14 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 33744), 0LL);
        }
        v9 = *(_BYTE *)(v14 + 388);
        if ( v9 == 1 )
        {
          *(_DWORD *)(v14 + 116) |= 2u;
        }
        else if ( v9 == 5 )
        {
          v10 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v14 + 436));
          if ( *(_BYTE *)(v14 + 391) )
            *(_QWORD *)(v14 + 1000) += v10;
          else
            *(_QWORD *)(v14 + 992) += v10;
        }
        *(_BYTE *)(v14 + 388) = 7;
        *(_QWORD *)(v14 + 216) = *(_QWORD *)(a1 + 11528);
        *(_QWORD *)(a1 + 11528) = v14 + 216;
        *(_QWORD *)(v14 + 200) = a3;
        *(_QWORD *)(v14 + 976) = 0LL;
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v14 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v14 + 112) = v15 & 0xF8 | 2;
        *(_QWORD *)(v14 + 200) = a3;
        *(_QWORD *)(v14 + 976) = 0LL;
        *((_BYTE *)v7 + 17) = 0;
LABEL_12:
        v11 = 1;
        goto LABEL_13;
      }
      if ( v16 == 5 )
      {
        *(_BYTE *)(v14 + 112) = v15 & 0xF8 | 6;
      }
      else if ( v16 == 3 )
      {
        *((_BYTE *)v7 + 17) = 2;
      }
    }
LABEL_13:
    *(_QWORD *)(v14 + 64) = 0LL;
    ++*((_BYTE *)v7 + 17);
    if ( v11 )
      return 1;
    if ( v3 == v4 )
      return 0;
  }
}
