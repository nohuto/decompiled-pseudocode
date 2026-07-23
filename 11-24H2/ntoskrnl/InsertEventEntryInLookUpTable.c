/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140274A04
 * Callers:
 *     TlgAggregateAbsorbEvent @ 0x140274154 (TlgAggregateAbsorbEvent.c)
 *     MiLogBadMapper @ 0x140274724 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14047E460 (MiLogSlabEntryAllocateFailure.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1404A55E0 (MiLogPeriodicTelemetryForSlabAllocator.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ComputeEventEntryHash @ 0x140274318 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x140274D3C (CompareEventEntry.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EnableFlushTimer @ 0x14044A108 (EnableFlushTimer.c)
 *     CreateNewEventEntry @ 0x140462434 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1404A33C4 (DestroyEventEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     AggregateField @ 0x1406A007C (AggregateField.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r13d
  unsigned int v7; // ebp
  int v8; // r15d
  KIRQL CurrentIrql; // r12
  __int64 v10; // rcx
  int v11; // r8d
  char v12; // si
  volatile signed __int64 *v13; // rdi
  unsigned __int8 v14; // r14
  volatile signed __int64 v15; // rdi
  int v16; // eax
  unsigned __int8 v17; // r10
  __int64 v18; // r14
  char v19; // r10
  unsigned int v20; // r11d
  volatile LONG *v21; // rcx
  __int64 v23; // rdi
  unsigned int NewEventEntry; // eax
  unsigned int v25; // eax
  signed __int64 v26; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v28; // [rsp+B0h] [rbp+18h]
  __int64 v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = a5;
  v26 = 0LL;
  v7 = 0;
  v8 = ComputeEventEntryHash(a5, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v23 = KeAbPreAcquire(v5 + 272, 0LL, 0LL);
      LODWORD(v10) = 17;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v5 + 272, 0LL, v23, v5 + 272);
      if ( v23 )
        *(_BYTE *)(v23 + 10) = 1;
      v12 = 0;
      goto LABEL_5;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  v12 = 1;
LABEL_5:
  v13 = (volatile signed __int64 *)(v5 + 8LL * (v8 & 0x1F));
  v14 = v28;
  while ( 1 )
  {
    if ( !*v13 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v7 = -1073741789;
        goto LABEL_14;
      }
      if ( !v26 )
      {
        LOBYTE(v11) = v14;
        LOBYTE(v10) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v10, v27, v11, v29, v6, v8, (__int64)&v26);
        v7 = NewEventEntry;
        if ( !v26 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_14;
        }
      }
      if ( !_InterlockedCompareExchange64(v13, v26, 0LL) )
        break;
    }
    v15 = *v13;
    v10 = *(unsigned int *)(v15 + 40);
    if ( v8 == (_DWORD)v10 )
    {
      LOBYTE(v10) = v14;
      v16 = CompareEventEntry(v10, v29, v15);
    }
    else
    {
      v16 = v8 - v10;
    }
    if ( !v16 )
    {
      if ( v15 )
      {
        v17 = 2;
        if ( v6 < 0xFFFFFFFE && v6 != 0 )
        {
          v18 = v29;
          do
          {
            AggregateField(
              *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL * v17),
              **(_QWORD **)(v18 + 16LL * v17),
              *(unsigned __int8 *)(*(_QWORD *)(v15 + 16) + 16LL * v17 + 13));
            v17 = v19 + 1;
          }
          while ( v17 < v20 );
        }
      }
      goto LABEL_14;
    }
    v13 = (volatile signed __int64 *)((((__int64)v16 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v15 + 32);
  }
  v26 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360));
  v25 = *(_DWORD *)(v5 + 256);
  if ( *(_DWORD *)(v5 + 304) < v25 )
    *(_DWORD *)(v5 + 304) = v25;
LABEL_14:
  if ( v12 )
  {
    v21 = (volatile LONG *)(v5 + 280);
    if ( CurrentIrql < 2u )
      ExReleaseSpinLockShared(v21, CurrentIrql);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v21);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 272);
    KeAbPostRelease(v5 + 272);
  }
  if ( v26 )
    DestroyEventEntry();
  return v7;
}
