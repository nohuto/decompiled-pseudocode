/*
 * XREFs of StorSubmitIoGatewayItem @ 0x140051730
 * Callers:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1400285A0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1400278D0 (RaAllocateIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x14003E1D0 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  PSLIST_ENTRY IoResource; // r8
  _QWORD *v15; // rcx
  unsigned int v16; // ecx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(v3 + 968) > 1u )
  {
    v8 = *(_DWORD *)(v3 + 976);
    v4 = KeGetCurrentProcessorNumberEx(0LL) / v8;
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL);
    if ( (unsigned int)v4 >= v9 )
      v4 = (unsigned int)v4 % v9;
  }
  v10 = a1 + 320 * v4 == 0;
  v11 = a1 + 320 * v4;
  v12 = v11 + 48;
  if ( !v10 && *(_DWORD *)(*(_QWORD *)v12 + 988LL) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v11, &LockHandle);
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v11 + 40) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v11, &LockHandle);
    if ( !v11 )
    {
LABEL_11:
      if ( !*(_DWORD *)(v11 + 40) )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_13;
      }
LABEL_24:
      v18 = *(_QWORD **)(v11 + 16);
      if ( *v18 != v11 + 8 )
        goto LABEL_35;
      v10 = FeatureFixKcsanRacyAccessV2 == 0;
      *(_QWORD *)a2 = v11 + 8;
      *(_QWORD *)(a2 + 8) = v18;
      *v18 = a2;
      *(_QWORD *)(v11 + 16) = a2;
      if ( v10 )
        ++*(_DWORD *)(v11 + 24);
      else
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 24));
LABEL_28:
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
      {
LABEL_34:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return 1;
      }
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL);
      if ( *(_BYTE *)(v19 + 2) == 40 )
        v20 = *(_QWORD *)(v19 + 96);
      else
        v20 = *(_QWORD *)(v19 + 48);
      v21 = v11 + 264;
      v22 = (_QWORD *)(v20 + 24);
      v23 = *(_QWORD **)(v21 + 8);
      if ( *v23 == v21 )
      {
        *v22 = v21;
        v22[1] = v23;
        *v23 = v22;
        *(_QWORD *)(v21 + 8) = v22;
        goto LABEL_34;
      }
LABEL_35:
      __fastfail(3u);
    }
LABEL_10:
    if ( *(_DWORD *)(*(_QWORD *)v12 + 988LL) )
      goto LABEL_24;
    goto LABEL_11;
  }
LABEL_13:
  IoResource = RaAllocateIoResource(v11 + 64);
  if ( !IoResource )
  {
    if ( *(_DWORD *)(v11 + 136) >= *(_DWORD *)(v11 + 144)
      || (RaAttemptHighWaterMarkIncrease((unsigned int *)v11), (IoResource = RaAllocateIoResource(v11 + 64)) == 0LL) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v11, &LockHandle);
      v15 = *(_QWORD **)(v11 + 16);
      if ( *v15 != v11 + 8 )
        goto LABEL_35;
      v10 = FeatureFixKcsanRacyAccessV2 == 0;
      *(_QWORD *)a2 = v11 + 8;
      *(_QWORD *)(a2 + 8) = v15;
      *v15 = a2;
      *(_QWORD *)(v11 + 16) = a2;
      if ( v10 )
        ++*(_DWORD *)(v11 + 24);
      else
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 24));
      *(_DWORD *)(v11 + 40) = 1699901262;
      goto LABEL_28;
    }
  }
  v16 = *(_DWORD *)(v11 + 36);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v11 + 192)) >= v16 )
    *(_DWORD *)(v11 + 36) = *(_DWORD *)(v11 + 192);
  a3[3] = IoResource + 58;
  a3[2] = IoResource + 3;
  a3[1] = IoResource + 74;
  RaidZeroXrb((__int64)&IoResource[3], v13, *((_DWORD *)&IoResource[49].Next + 2), *((void **)&IoResource[50].Next + 1));
  return 0;
}
