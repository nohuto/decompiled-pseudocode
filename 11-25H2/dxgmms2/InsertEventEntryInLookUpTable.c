/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140055768
 * Callers:
 *     _tlgWriteAgg @ 0x14003C640 (_tlgWriteAgg.c)
 * Callees:
 *     AggregateField @ 0x140055314 (AggregateField.c)
 *     CompareEventEntry @ 0x140055388 (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x140055414 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1400554A4 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1400556E4 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x14005570C (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int128 *a2, unsigned __int8 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r15
  signed __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL v13; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *i; // rsi
  unsigned int NewEventEntry; // eax
  __int64 v17; // rsi
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  unsigned __int8 v21; // r10
  char v22; // r10
  unsigned int v23; // r11d
  volatile LONG *v24; // rcx
  __int64 v26[11]; // [rsp+40h] [rbp-58h] BYREF
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v26[0] = 0LL;
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
  if ( (unsigned int)KeIsExecutingDpc(v11, v10, v12) )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v13 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v13, 1uLL, 0LL);
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
        i = (volatile signed __int64 *)((((__int64)v19 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v17 + 32) )
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
      NewEventEntry = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, a3, a4, a5, v9, v26);
      v7 = v26[0];
      v8 = NewEventEntry;
      if ( !v26[0] )
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
    v7 = v26[0];
LABEL_18:
    v17 = *i;
    v18 = *(_DWORD *)(v17 + 40);
    if ( v9 == v18 )
      v19 = CompareEventEntry(a3, a4, v17);
    else
      v19 = v9 - v18;
    if ( !v19 )
    {
      if ( v17 )
      {
        v21 = 2;
        if ( a5 )
        {
          do
          {
            AggregateField(
              *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL * v21),
              **(_QWORD **)(a4 + 16LL * v21),
              *(unsigned __int8 *)(*(_QWORD *)(v17 + 16) + 16LL * v21 + 13));
            v21 = v22 + 1;
          }
          while ( v21 < v23 );
        }
      }
      goto LABEL_34;
    }
  }
  v26[0] = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
  v20 = *(_DWORD *)(v5 + 256);
  v7 = v26[0];
  if ( *(_DWORD *)(v5 + 304) < v20 )
    *(_DWORD *)(v5 + 304) = v20;
LABEL_34:
  if ( v6 )
  {
    v24 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v24);
    else
      ExReleaseSpinLockShared(v24, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
