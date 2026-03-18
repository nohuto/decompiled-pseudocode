/*
 * XREFs of MiInsertSlabEntry @ 0x140413D28
 * Callers:
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140C58FDC (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140C596EC (MmUpdateSlabRangeType.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x140413F84 (MiUpdateSlabTypeAvailablePages.c)
 *     MiSlabEntryPageFreed @ 0x140459AC0 (MiSlabEntryPageFreed.c)
 *     MiGetSlabCurrentTime @ 0x14048ED80 (MiGetSlabCurrentTime.c)
 *     MiSlabEntryBecameEmpty @ 0x1404AAF9C (MiSlabEntryBecameEmpty.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebp
  volatile LONG *v6; // rcx
  unsigned __int64 v10; // r12
  KIRQL v11; // r14
  unsigned __int64 v12; // rdx
  bool v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 **v24; // r8

  v4 = 0;
  v6 = (volatile LONG *)(a2 + 16);
  v10 = LODWORD(MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3]);
  if ( (a4 & 2) != 0 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v6);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v6);
  }
  if ( ((a4 & 1) == 0 || !qword_140E2FEC0) && !qword_140E2FED8 )
  {
LABEL_5:
    v12 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v12 )
      v12 ^= a2;
    v13 = 0;
    if ( v12 )
    {
      v14 = *(_QWORD *)(a3 + 40);
      while ( 1 )
      {
        if ( v14 > *(_QWORD *)(v12 + 48) || v14 >= *(_QWORD *)(v12 + 40) )
        {
          v15 = *(_QWORD *)(v12 + 8);
          if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_17;
            v15 ^= v12;
          }
          if ( !v15 )
          {
LABEL_17:
            v13 = 1;
            break;
          }
        }
        else
        {
          v15 = *(_QWORD *)v12;
          if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_32;
            v15 ^= v12;
          }
          if ( !v15 )
          {
LABEL_32:
            v13 = 0;
            break;
          }
        }
        v12 = v15;
      }
    }
    RtlRbInsertNodeEx((__int64 *)a2, v12, v13, a3);
    if ( *(_DWORD *)(a2 + 128) == 8 )
    {
      v22 = (__int64 *)(a3 + 24);
      v23 = *(_QWORD *)(a2 + 88) + 16LL * ((*(_DWORD *)(a3 + 92) >> 3) & 0x3F);
      v24 = *(__int64 ***)(v23 + 8);
      if ( *v24 != (__int64 *)v23 )
        __fastfail(3u);
      *v22 = v23;
      *(_QWORD *)(a3 + 32) = v24;
      *v24 = v22;
      *(_QWORD *)(v23 + 8) = v22;
    }
    if ( *(_DWORD *)(a3 + 84) )
      MiSlabEntryPageFreed(a2, a3);
    *(_QWORD *)(a2 + 96) += *(unsigned int *)(a3 + 84);
    MiUpdateSlabTypeAvailablePages(a1, *(unsigned int *)(a2 + 128), *(unsigned int *)(a3 + 84));
    ++*(_QWORD *)(a2 + 120);
    if ( (*(_DWORD *)(a3 + 92) & 2) != 0 )
    {
      v17 = 19664LL;
      v16 = v10 + *(_QWORD *)(a2 + 112);
      *(_QWORD *)(a2 + 112) = v16;
    }
    else
    {
      v17 = 19672LL;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v17 + a1), v10);
    if ( *(_DWORD *)(a3 + 84) == (_DWORD)v10 )
    {
      *(_QWORD *)(a2 + 168) = MiGetSlabCurrentTime(v16, v10);
      MiSlabEntryBecameEmpty(a2, a3);
    }
    goto LABEL_25;
  }
  v19 = 48LL * *(_QWORD *)(a3 + 40) - 0x220000000000LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FED0);
  v20 = (_QWORD *)qword_140E2FEC0;
  v21 = 0LL;
  while ( v20 )
  {
    if ( v19 <= v20[3] )
    {
      if ( v19 >= v20[3] )
        goto LABEL_44;
      v21 = v20;
      v20 = (_QWORD *)*v20;
    }
    else
    {
      v20 = (_QWORD *)v20[1];
    }
  }
  v20 = v21;
  if ( !v21 )
    goto LABEL_46;
LABEL_44:
  if ( v20[3] <= (unsigned __int64)(48LL * *(_QWORD *)(a3 + 48) - 0x220000000000LL) )
    v4 = 1;
LABEL_46:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2FED0);
  if ( !v4 )
  {
    if ( qword_140E2FED8 )
    {
      while ( v19 <= 48LL * *(_QWORD *)(a3 + 48) - 0x220000000000LL )
      {
        if ( (*(_DWORD *)(v19 + 32) & 0x40000000) != 0 )
        {
          v4 = 1;
          goto LABEL_25;
        }
        v19 += 48LL;
      }
    }
    goto LABEL_5;
  }
LABEL_25:
  MiReleaseSpinLockExclusive((_DWORD *)(a2 + 16), v11);
  return v4;
}
