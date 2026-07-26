/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400E5EA0
 * Callers:
 *     TlgAggregateAbsorbEvent @ 0x1400E61DC (TlgAggregateAbsorbEvent.c)
 * Callees:
 *     AggregateField @ 0x1400E591C (AggregateField.c)
 *     CompareEventEntry @ 0x1400E5990 (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x1400E5A1C (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1400E5AAC (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1400E5CEC (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1400E5D14 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int128 *a2, unsigned __int8 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r15
  signed __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r12d
  KIRQL v10; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *i; // rsi
  unsigned int NewEventEntry; // eax
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // r10
  char v19; // r10
  unsigned int v20; // r11d
  volatile LONG *v21; // rcx
  __int64 v23[11]; // [rsp+40h] [rbp-58h] BYREF
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v23[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = ComputeEventEntryHash(a5, a3, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_10;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v10 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v10, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_10:
    v6 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_11:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v16 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v14 + 32) )
  {
    if ( *i )
      goto LABEL_18;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v8 = -1073741789;
      goto LABEL_34;
    }
    if ( !v7 )
    {
      NewEventEntry = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, a3, a4, a5, v9, v23);
      v7 = v23[0];
      v8 = NewEventEntry;
      if ( !v23[0] )
      {
        if ( NewEventEntry == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_34;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      break;
    v7 = v23[0];
LABEL_18:
    v14 = *i;
    v15 = *(_DWORD *)(v14 + 40);
    if ( v9 == v15 )
      v16 = CompareEventEntry(a3, a4, v14);
    else
      v16 = v9 - v15;
    if ( !v16 )
    {
      if ( v14 )
      {
        v18 = 2;
        if ( a5 )
        {
          do
          {
            AggregateField(
              *(volatile signed __int64 **)(*(_QWORD *)(v14 + 16) + 16LL * v18),
              **(_QWORD **)(a4 + 16LL * v18),
              *(unsigned __int8 *)(*(_QWORD *)(v14 + 16) + 16LL * v18 + 13));
            v18 = v19 + 1;
          }
          while ( v18 < v20 );
        }
      }
      goto LABEL_34;
    }
  }
  v23[0] = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
  v17 = *(_DWORD *)(v5 + 256);
  v7 = v23[0];
  if ( *(_DWORD *)(v5 + 304) < v17 )
    *(_DWORD *)(v5 + 304) = v17;
LABEL_34:
  if ( v6 )
  {
    v21 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v21);
    else
      ExReleaseSpinLockShared(v21, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
