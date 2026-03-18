/*
 * XREFs of KiWakeQueueWaiter @ 0x140308B20
 * Callers:
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiActivateWaiterKQueue @ 0x1402A03F0 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A1650 (KiActivateWaiterQueueWithThreadLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     IopPassiveInterruptDpc @ 0x140461CF0 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x140464700 (KeInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405B9380 (KeInsertHeadQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r12
  __int64 v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  char v9; // al
  __int64 v10; // rcx
  char v11; // si
  unsigned int v13; // edi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // esi
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rax

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  v6 = a1;
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
      a1 = *(unsigned __int8 *)(v14 + 112);
      v15 = *(_BYTE *)(v14 + 112) & 7;
      if ( v15 == 1 || v15 == 4 )
      {
        v16 = *(_QWORD *)(v14 + 232);
        if ( v16 )
        {
          if ( (*(_BYTE *)v16 & 0x7F) == 0x15 )
          {
            v21 = (unsigned __int8)*(_DWORD *)(v14 + 540);
            *(_DWORD *)(v14 + 540) = v21;
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v21 + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 40));
          }
        }
        v17 = *(_QWORD *)(v14 + 712);
        if ( v17 )
        {
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 33744), 0LL) )
          {
            do
            {
              if ( (++v18 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
              {
                HvlNotifyLongSpinWait(v18);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v17 + 33744) );
          }
          if ( *(_QWORD *)(v14 + 712) )
          {
            v19 = *(_QWORD *)(v14 + 216);
            v20 = *(_QWORD **)(v14 + 224);
            if ( *(_QWORD *)(v19 + 8) != v14 + 216 || *v20 != v14 + 216 )
              goto LABEL_5;
            *v20 = v19;
            *(_QWORD *)(v19 + 8) = v20;
            *(_QWORD *)(v14 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 33744), 0LL);
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
        a1 = v14 + 216;
        *(_QWORD *)(v14 + 216) = *(_QWORD *)(v6 + 11528);
        *(_QWORD *)(v6 + 11528) = v14 + 216;
        *(_QWORD *)(v14 + 200) = a3;
        *(_QWORD *)(v14 + 976) = 0LL;
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v14 + 112) & 7) == 0 )
      {
        LOBYTE(a1) = a1 & 0xF8 | 2;
        *(_BYTE *)(v14 + 112) = a1;
        *(_QWORD *)(v14 + 200) = a3;
        *(_QWORD *)(v14 + 976) = 0LL;
        *((_BYTE *)v7 + 17) = 0;
LABEL_12:
        v11 = 1;
        goto LABEL_13;
      }
      if ( v15 == 5 )
      {
        LOBYTE(a1) = a1 & 0xF8 | 6;
        *(_BYTE *)(v14 + 112) = a1;
      }
      else if ( v15 == 3 )
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
