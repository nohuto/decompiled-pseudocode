/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400455A8
 * Callers:
 *     _tlgWriteAgg @ 0x140045AC4 (_tlgWriteAgg.c)
 * Callees:
 *     CreateNewEventEntry @ 0x140045198 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x14004541C (EnableFlushTimer.c)
 *     memcmp @ 0x1400465E0 (memcmp.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  signed __int64 v5; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // ecx
  unsigned __int64 v8; // r10
  int v9; // eax
  unsigned __int8 v10; // r14
  __int64 v11; // rbx
  unsigned __int8 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 i; // r8
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r12d
  __int64 v19; // rbp
  KIRQL v20; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *j; // rsi
  unsigned int v23; // eax
  volatile signed __int64 v24; // rbp
  int v25; // ecx
  volatile signed __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // r15
  unsigned int k; // ebp
  __int64 v30; // rcx
  volatile signed __int64 v31; // rdx
  unsigned __int8 v32; // r9
  signed __int64 v33; // r10
  __int64 v34; // rax
  int v35; // edi
  volatile signed __int64 *v36; // r8
  signed __int64 v37; // rax
  unsigned int v38; // esi
  unsigned int v39; // eax
  volatile signed __int64 v40; // rtt
  volatile LONG *v41; // rcx
  unsigned int v43; // [rsp+40h] [rbp-68h]
  signed __int64 v44; // [rsp+48h] [rbp-60h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h]
  void *Buf1; // [rsp+58h] [rbp-50h]
  KIRQL OldIrql; // [rsp+B0h] [rbp+8h]
  char v49; // [rsp+C0h] [rbp+18h]

  v5 = 0LL;
  v45 = qword_14006C228;
  v6 = a3;
  v7 = 0;
  Buf1 = (void *)(a4 + 16);
  v44 = 0LL;
  v8 = 0LL;
  v43 = 0;
  do
  {
    v9 = *(unsigned __int8 *)(a4 + 16 + v8++);
    v7 = ((1025 * (v7 + v9)) >> 6) ^ (1025 * (v7 + v9));
  }
  while ( v8 < 8 );
  v10 = a5;
  v11 = v45;
  v12 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v6 )
  {
    v13 = a4 + 16LL * v12;
    v14 = (unsigned __int8)(v6 - v12);
    do
    {
      for ( i = 0LL; i < *(unsigned int *)(v13 + 8); v7 = ((1025 * (v7 + v16)) >> 6) ^ (1025 * (v7 + v16)) )
      {
        v16 = *(unsigned __int8 *)(i + *(_QWORD *)v13);
        ++i;
      }
      v13 += 16LL;
      --v14;
    }
    while ( v14 );
  }
  v17 = (9 * v7) ^ ((9 * v7) >> 11);
  v18 = 32769 * v17;
  v19 = v17 & 0x1F;
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v45 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v45 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v45 + 280));
    goto LABEL_17;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v45 + 373) )
    {
      v20 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v45 + 280, v20, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v45 + 280));
LABEL_17:
    v49 = 1;
    goto LABEL_18;
  }
  ExAcquirePushLockSharedEx(v45 + 272, 0LL);
  v49 = 0;
LABEL_18:
  for ( j = (volatile signed __int64 *)(v45 + 8 * v19);
        ;
        j = (volatile signed __int64 *)((((__int64)v27 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v26 + 32) )
  {
    if ( !*j )
    {
      if ( *(_DWORD *)(v11 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v11 + 316);
        v38 = -1073741789;
        goto LABEL_58;
      }
      if ( !v5 )
      {
        v23 = CreateNewEventEntry(*(_BYTE *)(v11 + 373), a2, v6, a4, v10, v18, &v44);
        v5 = v44;
        v43 = v23;
        if ( !v44 )
        {
          v38 = v23;
          if ( v23 == -1073741801 )
            ++*(_DWORD *)(v11 + 320);
          else
            ++*(_DWORD *)(v11 + 324);
          goto LABEL_58;
        }
      }
      if ( !_InterlockedCompareExchange64(j, v5, 0LL) )
      {
        v44 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v11 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v11 + 360), *(_DWORD *)(v11 + 368));
        v39 = *(_DWORD *)(v11 + 256);
        v5 = v44;
        v38 = v43;
        if ( *(_DWORD *)(v11 + 304) < v39 )
          *(_DWORD *)(v11 + 304) = v39;
        goto LABEL_58;
      }
      v5 = v44;
    }
    v24 = *j;
    v25 = *(_DWORD *)(*j + 40);
    if ( v18 != v25 )
    {
      v26 = *j;
      v27 = v18 - v25;
      continue;
    }
    v28 = *(_QWORD *)(v24 + 16);
    v27 = memcmp(Buf1, (const void *)(v28 + 16), 8uLL);
    if ( !v27 )
      break;
    v26 = v24;
LABEL_42:
    ;
  }
  for ( k = *(unsigned __int8 *)(v24 + 45) + 2; k < v6; ++k )
  {
    v30 = 16LL * k;
    v27 = *(_DWORD *)(v30 + a4 + 8) - *(_DWORD *)(v30 + v28 + 8);
    if ( !v27 )
    {
      v27 = memcmp(*(const void **)(v30 + a4), *(const void **)(v30 + v28), *(unsigned int *)(v30 + a4 + 8));
      if ( !v27 )
        continue;
    }
    v10 = a5;
    v26 = *j;
    goto LABEL_42;
  }
  v31 = *j;
  if ( *j )
  {
    v32 = 2;
    if ( a5 )
    {
      do
      {
        v33 = **(_QWORD **)(a4 + 16LL * v32);
        v34 = *(_QWORD *)(v31 + 16);
        v35 = *(unsigned __int8 *)(v34 + 16LL * v32 + 13);
        v36 = *(volatile signed __int64 **)(v34 + 16LL * v32);
        if ( v35 == 113 )
        {
          _InterlockedAdd64(v36, v33);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(v34 + 16LL * v32 + 13) - 114 <= 1 )
        {
          do
          {
            v37 = *v36;
            if ( v35 == 114 )
            {
              if ( v33 >= v37 )
                break;
            }
            else if ( v33 <= v37 )
            {
              break;
            }
            v40 = *v36;
          }
          while ( v40 != _InterlockedCompareExchange64(v36, v33, v37) );
        }
        ++v32;
      }
      while ( v32 < (unsigned int)a5 + 2 );
      v5 = v44;
      v11 = v45;
    }
  }
  v38 = v43;
LABEL_58:
  if ( v49 )
  {
    v41 = (volatile LONG *)(v11 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v41);
    else
      ExReleaseSpinLockShared(v41, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v11 + 272, 0LL);
  }
  if ( v5 )
    ExFreePoolWithTag(*(PVOID *)(v5 + 16), 0);
  return v38;
}
