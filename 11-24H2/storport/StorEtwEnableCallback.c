/*
 * XREFs of StorEtwEnableCallback @ 0x140009BE0
 * Callers:
 *     McGenControlCallbackV2 @ 0x140009FC0 (McGenControlCallbackV2.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x140009B64 (RaidGetPortData.c)
 *     StorAdapterNeedsUpdate @ 0x140009EA8 (StorAdapterNeedsUpdate.c)
 *     RaidReleasePortData @ 0x14000A0FC (RaidReleasePortData.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14003D40C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x14003D77C (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x140055888 (StorEnableAdapterOperationalEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x140055BB0 (StorEnableAdapterEtwTracing.c)
 */

__int64 __fastcall StorEtwEnableCallback(__int64 a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 *v6; // rbp
  char v7; // r14
  bool v8; // al
  bool v9; // al
  bool v10; // al
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 *v14; // rdi
  _QWORD *Pool; // r15
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v27 = a2;
  v6 = 0LL;
  v26 = 0LL;
  StorEtwLoggingEnabled = a2 != 0;
  v7 = a2;
  StorRequestThresholdTime = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    StorRequestThresholdTime = **(_QWORD **)a6;
  v8 = (byte_140171464 & 0x10) != 0
    || (((byte_140171464 & 0x90) == 0) & (unsigned __int8)~((unsigned __int8)byte_140171465 >> 2)) == 0;
  StorMiniportOperationalEventsEnabled = v8;
  v9 = (byte_140171465 & 0x30) != 0 || (byte_140171466 & 0x10) != 0;
  StorMiniportHealthEventsEnabled = v9;
  StorMiniportDiagnosticEventsEnabled = (byte_140171463 & 0x10) != 0;
  v10 = (byte_140171461 & 1) != 0 || (byte_140171463 & 2) != 0;
  StorIoPerformanceEventsEnabled = v10;
  result = RaidGetPortData();
  v28 = result;
  v12 = result;
  if ( result )
  {
    v13 = result + 8;
    v14 = *(__int64 **)(result + 8);
    while ( v14 != (__int64 *)v13 )
    {
      Pool = 0LL;
      v16 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v14 + 7, &LockHandle);
      if ( *((_DWORD *)v14 + 12) )
      {
        v18 = v14 + 4;
        v19 = (__int64 *)v14[4];
        if ( v19 != v14 + 4 )
        {
          do
          {
            if ( *((_DWORD *)v19 - 16) == 1094997074 )
            {
              LOBYTE(v17) = v27;
              v6 = v19 - 8;
              if ( (unsigned __int8)StorAdapterNeedsUpdate(v19 - 8, v17) )
                v16 = (unsigned int)(v16 + 1);
            }
            v19 = (__int64 *)*v19;
          }
          while ( v19 != v18 );
          v12 = v28;
          v26 = v6;
          if ( (_DWORD)v16 )
          {
            Pool = (_QWORD *)RaidAllocatePool(64LL, 8LL * (unsigned int)v16, 1413833042LL, v6[1]);
            if ( Pool )
            {
              v21 = (__int64 *)*v18;
              v22 = 0LL;
              if ( (__int64 *)*v18 != v18 )
              {
                do
                {
                  if ( (unsigned int)v22 >= (unsigned int)v16 )
                    break;
                  v26 = v21 - 8;
                  if ( *((_DWORD *)v21 - 16) == 1094997074 )
                  {
                    LOBYTE(v20) = v27;
                    if ( (unsigned __int8)StorAdapterNeedsUpdate(v21 - 8, v20) )
                    {
                      if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v21 - 8)) >= 0 )
                      {
                        Pool[v22] = v21 - 8;
                        v22 = (unsigned int)(v22 + 1);
                      }
                    }
                  }
                  v21 = (__int64 *)*v21;
                }
                while ( v21 != v18 );
                v12 = v28;
                v13 = v28 + 8;
              }
              v16 = (unsigned int)v22;
            }
          }
        }
        v7 = v27;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( Pool )
      {
        if ( (_DWORD)v16 )
        {
          v24 = Pool;
          do
          {
            LOBYTE(v23) = v7;
            StorEnableAdapterEtwTracing(*v24, v23);
            StorEnableAdapterOperationalEvents(*v24);
            StorEnableAdapterHealthEvents(*v24);
            StorEnableAdapterDiagnosticEvents(*v24);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v24++ + 336LL));
            --v16;
          }
          while ( v16 );
        }
        ExFreePoolWithTag(Pool, 0x54456152u);
      }
      v14 = (__int64 *)*v14;
      v6 = v26;
    }
    return RaidReleasePortData(v12);
  }
  return result;
}
