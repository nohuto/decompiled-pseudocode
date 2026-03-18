/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400917B8
 * Callers:
 *     EtwTraceEnumDisplayMonitors @ 0x1400418C0 (EtwTraceEnumDisplayMonitors.c)
 *     _tlgWriteAgg @ 0x1400914C8 (_tlgWriteAgg.c)
 *     EtwTraceEnumDisplaySettings @ 0x1400915B8 (EtwTraceEnumDisplaySettings.c)
 * Callees:
 *     ComputeEventEntryHash @ 0x140091B08 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x140091BA0 (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x14012B438 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x140152FB0 (EnableFlushTimer.c)
 *     DestroyEventEntry @ 0x140157988 (DestroyEventEntry.c)
 *     AggregateField @ 0x14023D05C (AggregateField.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r15
  signed __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r12d
  __int64 v10; // rcx
  int v11; // r8d
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v13; // rsi
  int v14; // eax
  unsigned __int8 v15; // r10
  char v17; // r10
  unsigned int v18; // r11d
  unsigned int v19; // eax
  unsigned int NewEventEntry; // eax
  KIRQL v21; // al
  KIRQL CurrentIrql; // al
  volatile LONG *v23; // rcx
  signed __int64 v24[11]; // [rsp+40h] [rbp-58h] BYREF
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  int v26; // [rsp+A8h] [rbp+10h]

  v26 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a5;
  v24[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_38;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v21 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v21, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_38:
    v6 = 1;
    goto LABEL_4;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_4:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v14 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v13 + 32) )
  {
    if ( *i )
      goto LABEL_6;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v8 = -1073741789;
      goto LABEL_11;
    }
    if ( !v7 )
    {
      LOBYTE(v11) = a3;
      LOBYTE(v10) = *(_BYTE *)(v5 + 373);
      NewEventEntry = CreateNewEventEntry(v10, v26, v11, a4, a5, v9, (__int64)v24);
      v7 = v24[0];
      v8 = NewEventEntry;
      if ( !v24[0] )
      {
        if ( NewEventEntry == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_11;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      break;
    v7 = v24[0];
LABEL_6:
    v13 = *i;
    v10 = *(unsigned int *)(v13 + 40);
    if ( v9 == (_DWORD)v10 )
    {
      LOBYTE(v10) = a3;
      v14 = CompareEventEntry(v10, a4, v13);
    }
    else
    {
      v14 = v9 - v10;
    }
    if ( !v14 )
    {
      if ( v13 )
      {
        v15 = 2;
        if ( a5 )
        {
          do
          {
            AggregateField(
              *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL * v15),
              **(_QWORD **)(a4 + 16LL * v15),
              *(unsigned __int8 *)(*(_QWORD *)(v13 + 16) + 16LL * v15 + 13));
            v15 = v17 + 1;
          }
          while ( v15 < v18 );
        }
      }
      goto LABEL_11;
    }
  }
  v24[0] = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
  v19 = *(_DWORD *)(v5 + 256);
  v7 = v24[0];
  if ( *(_DWORD *)(v5 + 304) < v19 )
    *(_DWORD *)(v5 + 304) = v19;
LABEL_11:
  if ( v6 )
  {
    v23 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v23);
    else
      ExReleaseSpinLockShared(v23, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
