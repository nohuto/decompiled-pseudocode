/*
 * XREFs of RaidUnitPendingIrpDpcRoutine @ 0x14003C390
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 */

void __fastcall RaidUnitPendingIrpDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  ULONG MaximumProcessorCount; // eax
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // r11
  ULONG i; // edx
  unsigned __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett

  v4 = DeferredContext[8];
  if ( _bittest((const signed __int32 *)(*(_QWORD *)(v4 + 32) + 80LL), 8u)
    && !(unsigned __int8)RaUnitCheckForwardIoOutstanding(DeferredContext[8]) )
  {
    RaidStartNextIoPacket(v4, 0, 1);
  }
  v5 = *(_QWORD *)(v4 + 32);
  if ( (*(_DWORD *)(v5 + 80) & 1) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 24));
    v7 = *(_QWORD *)(v4 + 32);
    v8 = *(_DWORD *)(v7 + 80);
    if ( (v8 & 0x100) == 0 )
    {
      *(_DWORD *)(v7 + 80) = v8 & 0xFFFFFDFF;
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v4 + 32) + 24LL), v6);
      return;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v6);
    goto LABEL_7;
  }
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v10 = 0;
  if ( MaximumProcessorCount )
  {
    v11 = 0LL;
    v12 = MaximumProcessorCount;
    do
    {
      v11 += 64LL;
      v10 += _InterlockedExchange((volatile __int32 *)(v11 + *(_QWORD *)(v4 + 40) - 60), 0) / 2;
      --v12;
    }
    while ( v12 );
  }
  if ( 4 * v10 + _InterlockedExchangeAdd(*(volatile signed __int32 **)(v4 + 32), 4 * v10) )
  {
LABEL_7:
    KeSetCoalescableTimer(
      (PKTIMER)(*(_QWORD *)(v4 + 32) + 88LL),
      (LARGE_INTEGER)-2000000LL,
      0,
      0x32u,
      (PKDPC)(*(_QWORD *)(v4 + 32) + 152LL));
    return;
  }
  for ( i = 0; i < MaximumProcessorCount; ++i )
  {
    v14 = (unsigned __int64)i << 6;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + *(_QWORD *)(v4 + 40) + 4), 1, 0) )
    {
      for ( ; i; --i )
      {
        v14 -= 64LL;
        _InterlockedExchange((volatile __int32 *)(v14 + *(_QWORD *)(v4 + 40) + 4), 0);
      }
      goto LABEL_7;
    }
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 80LL) >> 1;
  if ( _InterlockedCompareExchange(*(volatile signed __int32 **)(v4 + 32), 1, 0) )
  {
    if ( MaximumProcessorCount )
    {
      v16 = 0LL;
      v17 = MaximumProcessorCount;
      do
      {
        v16 += 64LL;
        _InterlockedExchange((volatile __int32 *)(v16 + *(_QWORD *)(v4 + 40) - 60), 0);
        --v17;
      }
      while ( v17 );
    }
    goto LABEL_7;
  }
  v18 = *(_QWORD *)(v4 + 24);
  if ( (v15 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v4) )
  {
    PoFxIdleComponent(**(_QWORD **)(v4 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 1864));
  }
  if ( (v15 & 2) != 0 && *(_QWORD *)(v18 + 4960) )
    RaidAdapterPoFxIdleComponent(v18, 0LL, 0LL);
  v19 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v20 = *(_DWORD *)(v19 + *(_QWORD *)(v4 + 40));
  while ( (v20 & 1) == 0 )
  {
    v21 = v20;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + *(_QWORD *)(v4 + 40)), v20 - 2, v20);
    if ( v21 == v20 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v4 + 520), 0, 0);
}
