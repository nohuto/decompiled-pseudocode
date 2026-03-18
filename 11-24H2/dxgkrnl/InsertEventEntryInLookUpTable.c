/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x14005987C
 * Callers:
 *     _tlgWriteAgg @ 0x140060208 (_tlgWriteAgg.c)
 * Callees:
 *     CompareEventEntry @ 0x140061F9C (CompareEventEntry.c)
 *     RunningHash @ 0x14006458C (RunningHash.c)
 *     AggregateField @ 0x1400991EC (AggregateField.c)
 *     CreateNewEventEntry @ 0x140099260 (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x1400994A0 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x1400994C8 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r15
  signed __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned __int64 v9; // r11
  unsigned int v10; // r10d
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // r11
  unsigned int v17; // r14d
  __int64 v18; // rbp
  KIRQL v19; // al
  __int64 v20; // rcx
  int v21; // r8d
  KIRQL CurrentIrql; // al
  volatile signed __int64 *v23; // rsi
  __int64 v24; // rbp
  unsigned int NewEventEntry; // eax
  volatile signed __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // eax
  unsigned __int8 v29; // r10
  char v30; // r10
  unsigned int v31; // r11d
  volatile LONG *v32; // rcx
  signed __int64 v34[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+10h]
  KIRQL OldIrql; // [rsp+B0h] [rbp+18h]
  __int64 v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v36 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v7 = 0LL;
  v34[0] = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  do
  {
    v12 = *(unsigned __int8 *)(a4 + v9++ + 16);
    v10 = (1025 * (v10 + v12)) ^ ((1025 * (v10 + v12)) >> 6);
  }
  while ( v9 < 8 );
  v13 = a5 + 2;
  v35 = v10;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v14 = a4 + 16LL * v13;
    v15 = (unsigned __int8)(a3 - v13);
    do
    {
      RunningHash(&v35, *(_QWORD *)v14, *(unsigned int *)(v14 + 8));
      v14 = v16 + 16;
      --v15;
    }
    while ( v15 );
    v10 = v35;
  }
  v17 = 32769 * ((9 * v10) ^ ((9 * v10) >> 11));
  v18 = ((unsigned __int8)(9 * v10) ^ (unsigned __int8)((9 * v10) >> 11)) & 0x1F;
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_16;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v19 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v19, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_16:
    v6 = 1;
    goto LABEL_17;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_17:
  v23 = (volatile signed __int64 *)(v5 + 8 * v18);
  v24 = v38;
  while ( 1 )
  {
    if ( *v23 )
      goto LABEL_24;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v8 = -1073741789;
      goto LABEL_40;
    }
    if ( !v7 )
    {
      LOBYTE(v20) = *(_BYTE *)(v5 + 373);
      LOBYTE(v21) = a3;
      NewEventEntry = CreateNewEventEntry(v20, v36, v21, v24, a5, v17, (__int64)v34);
      v7 = v34[0];
      v8 = NewEventEntry;
      if ( !v34[0] )
      {
        if ( NewEventEntry == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_40;
      }
    }
    if ( !_InterlockedCompareExchange64(v23, v7, 0LL) )
      break;
    v7 = v34[0];
LABEL_24:
    v26 = *v23;
    v20 = *(unsigned int *)(v26 + 40);
    if ( v17 == (_DWORD)v20 )
    {
      LOBYTE(v20) = a3;
      v27 = CompareEventEntry(v20, v24, v26);
    }
    else
    {
      v27 = v17 - v20;
    }
    if ( !v27 )
    {
      if ( v26 )
      {
        v29 = 2;
        if ( a5 )
        {
          do
          {
            AggregateField(
              *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL * v29),
              **(_QWORD **)(v24 + 16LL * v29),
              *(unsigned __int8 *)(*(_QWORD *)(v26 + 16) + 16LL * v29 + 13));
            v29 = v30 + 1;
          }
          while ( v29 < v31 );
        }
      }
      goto LABEL_40;
    }
    v23 = (volatile signed __int64 *)((((__int64)v27 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v26 + 32);
  }
  v34[0] = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
  v28 = *(_DWORD *)(v5 + 256);
  v7 = v34[0];
  if ( *(_DWORD *)(v5 + 304) < v28 )
    *(_DWORD *)(v5 + 304) = v28;
LABEL_40:
  if ( v6 )
  {
    v32 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v32);
    else
      ExReleaseSpinLockShared(v32, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    DestroyEventEntry(v7);
  return v8;
}
