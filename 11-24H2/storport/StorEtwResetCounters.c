/*
 * XREFs of StorEtwResetCounters @ 0x1400AA828
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x14003FCF0 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x140009B64 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x14000A0FC (RaidReleasePortData.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 */

void StorEtwResetCounters()
{
  __int64 PortData; // rax
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *i; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 *v10; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  __int64 *v12; // r15
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v18, 0, sizeof(v18));
  memset(&v17, 0, sizeof(v17));
  memset(&v16, 0, sizeof(v16));
  PortData = RaidGetPortData();
  v1 = (_QWORD *)PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PortData + 24), &LockHandle);
    v2 = v1 + 1;
    for ( i = (_QWORD *)v1[1]; ; i = (_QWORD *)*i )
    {
      if ( i == v2 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        RaidReleasePortData(v1);
        return;
      }
      KeAcquireInStackQueuedSpinLock(i + 7, &v18);
      v4 = i + 4;
      v5 = (_QWORD *)i[4];
      if ( v5 == i + 4 )
        goto LABEL_28;
      do
      {
        v6 = v5 - 8;
        v7 = *((_DWORD *)v5 - 16);
        if ( v7 == 1314275652 )
        {
          if ( (int)NvmeAdapterAcquireRemoveLock(v5 - 8) < 0 )
            goto LABEL_26;
          *((_WORD *)v6 + 564) = 0;
          *((_WORD *)v6 + 565) = 0;
          *((_WORD *)v6 + 566) = 0;
          v8 = v6[74];
          if ( v8 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 128), &v16);
            v9 = (__int64 **)(v6[74] + 136LL);
            v10 = *v9;
            while ( v10 != (__int64 *)v9 )
            {
              *((_WORD *)v10 + 328) = 0;
              *((_WORD *)v10 + 329) = 0;
              *((_WORD *)v10 + 330) = 0;
              v10 = (__int64 *)*v10;
              v9 = (__int64 **)(v6[74] + 136LL);
            }
            KeReleaseInStackQueuedSpinLock(&v16);
          }
          v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v6[19];
          goto LABEL_25;
        }
        if ( v7 == 1094997074 && (int)RaidAcquireAdapterRemoveLock((__int64)(v5 - 8)) >= 0 )
        {
          *((_WORD *)v6 + 2996) = 0;
          *((_WORD *)v6 + 2997) = 0;
          *((_WORD *)v6 + 2998) = 0;
          KeAcquireInStackQueuedSpinLock(v6 + 17, &v17);
          v12 = (__int64 *)v6[18];
          if ( v12 != v6 + 18 )
          {
            do
            {
              if ( (int)RaUnitAcquireRemoveLock((__int64)(v12 - 8), 0LL, 0) >= 0 )
              {
                *((_WORD *)v12 + 1732) = 0;
                *((_WORD *)v12 + 1733) = 0;
                *((_WORD *)v12 + 1734) = 0;
                v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                v14 = *(_DWORD *)(v13 + *(v12 - 3));
                while ( (v14 & 1) == 0 )
                {
                  v15 = v14;
                  v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(v12 - 3)), v14 - 2, v14);
                  if ( v15 == v14 )
                    goto LABEL_22;
                }
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 242, 0xFFFFFFFF) == 1 )
                  KeSetEvent((PRKEVENT)v12 + 19, 0, 0);
              }
LABEL_22:
              v12 = (__int64 *)*v12;
            }
            while ( v12 != v6 + 18 );
            v4 = i + 4;
          }
          KeReleaseInStackQueuedSpinLock(&v17);
          v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v6[42];
LABEL_25:
          ExReleaseRundownProtectionCacheAware(v11);
        }
LABEL_26:
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != v4 );
      v2 = v1 + 1;
LABEL_28:
      KeReleaseInStackQueuedSpinLock(&v18);
    }
  }
}
