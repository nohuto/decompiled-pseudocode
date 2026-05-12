/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x14002ED00
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x14002EE90 (StorTickEventQueue.c)
 *     RaidUnitRequestTimeout @ 0x14002F338 (RaidUnitRequestTimeout.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     RaUnitRequestPowerUp @ 0x140036CD0 (RaUnitRequestPowerUp.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x1400713D4 (RaidUnitIsRegisteredForIdleDetection.c)
 *     RaUnitRequestPowerDown @ 0x140077358 (RaUnitRequestPowerDown.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x140090604 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x14009079C (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x14009DAF8 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400B6414 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // r14
  bool v7; // r15
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  __int64 v17; // [rsp+70h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+78h] [rbp+Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+27h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 560);
  if ( v5 )
  {
    if ( *(int *)(v4 + 1904) > 0 )
    {
      v6 = 0;
      memset(&v18, 0, sizeof(v18));
      v7 = 0;
      v8 = *(_DWORD *)(v5 + 4);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1920), &v18);
      v9 = *(_DWORD *)(v4 + 1904);
      if ( v9 > 0 )
      {
        v10 = 0;
        if ( v9 >= v8 )
          v10 = v9 - v8;
        *(_DWORD *)(v4 + 1904) = v10;
        v6 = v10 == 0;
      }
      v11 = *(_DWORD *)(v4 + 1908);
      if ( v11 > 0 && !v6 )
      {
        if ( v11 >= v8 )
          v12 = v11 - v8;
        else
          v12 = 0;
        *(_DWORD *)(v4 + 1908) = v12;
        v7 = v12 == 0;
      }
      KeReleaseInStackQueuedSpinLock(&v18);
      if ( *(_BYTE *)(v4 + 3368) )
      {
        if ( (*(_BYTE *)(v4 + 506) & 2) == 0 )
        {
          v14 = *(_DWORD *)(v4 + 3376);
          if ( v14 != -1 )
          {
            v15 = *(_DWORD *)(v4 + 1392);
            if ( v15 < 0x1E )
              v15 = 30;
            v13 = 4 * v15 - *(_DWORD *)(v4 + 1904) + 42;
            if ( !v14 || v14 < (unsigned int)v13 )
            {
              v16 = *(_DWORD *)(v4 + 104);
              LODWORD(v20) = v16;
              StorpTelemetryMarkUnitUnresponsive(v4, v13);
              *(_BYTE *)(v4 + 506) |= 2u;
              if ( (byte_140171464 & 2) != 0 )
                McTemplateK0zqjuuujsssq_EtwWriteTransfer(
                  v4 + 177,
                  (unsigned int)&EventUnitUnresponsive,
                  v4 + 2104,
                  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4720LL),
                  *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                  *(_QWORD *)(v4 + 24) + 5064LL,
                  v16,
                  SBYTE1(v20),
                  SBYTE2(v20),
                  v4 + 2104,
                  v4 + 168,
                  v4 + 177,
                  v4 + 242,
                  1);
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 62LL, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids, v4);
              }
            }
          }
        }
      }
      if ( v6 )
      {
        if ( (qword_140170460 & 0x400) != 0 )
          DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
        RaidUnitAbortHierarchicalResetWorkItem(v4);
      }
      else if ( v7 )
      {
        if ( (byte_140171464 & 1) != 0 )
          McTemplateK0zqjujssstq_EtwWriteTransfer(
            v4 + 177,
            v4 + 168,
            v4 + 2104,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4720LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
            *(_QWORD *)(v4 + 24) + 5064LL,
            *(_BYTE *)(v4 + 104),
            v4 + 2104,
            v4 + 168,
            v4 + 177,
            v4 + 242,
            *(_BYTE *)(v4 + 506) & 1,
            3);
        LOBYTE(v13) = *(_BYTE *)(v4 + 104);
        RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v13);
      }
    }
    else
    {
      v17 = 0LL;
      v20 = 0LL;
      if ( (int)StorTickEventQueue(v4, v5, &v17, &v20) >= 0 )
      {
        if ( ((unsigned __int8)RaidUnitIsRegisteredForIdleDetection(v4) || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4960LL))
          && (*(_DWORD *)(v4 + 512) & 4) == 0 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 48), &LockHandle);
          if ( (((*(_BYTE *)(v4 + 512) & 4) == 0) & (unsigned __int8)~(*(_BYTE *)(v4 + 505) >> 5)) != 0 )
          {
            KeCancelTimer((PKTIMER)(v4 + 1056));
            _interlockedbittestandset((volatile signed __int32 *)(v4 + 504), 0xDu);
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( _InterlockedExchange((volatile __int32 *)(v4 + 1888), 0) )
        {
          RaUnitRequestPowerUp(v4);
        }
        else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1892), 0) )
        {
          RaUnitRequestPowerDown(v4);
        }
      }
      else
      {
        if ( (qword_140170460 & 0x400) != 0 )
          DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, v17, v20, 0LL, 0LL);
        RaidUnitRequestTimeout(v4);
      }
    }
  }
}
