/*
 * XREFs of MiInsertSlabEntry @ 0x14021E754
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140C5B87C (MmUpdateSlabRangeType.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140263454 (MiGetSlabCurrentTime.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14043C38C (MiUpdateSlabTypeAvailablePages.c)
 *     MiSlabEntryPageFreed @ 0x14044E870 (MiSlabEntryPageFreed.c)
 *     MiSlabEntryBecameEmpty @ 0x1404A5228 (MiSlabEntryBecameEmpty.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  volatile LONG *v6; // rcx
  unsigned __int64 v10; // r12
  KIRQL v11; // r14
  unsigned __int64 v12; // rdx
  BOOLEAN v13; // r8
  _RTL_BALANCED_NODE *v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v20; // rdi
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 **v25; // r8

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
  if ( ((a4 & 1) == 0 || !qword_140E30000) && !qword_140E30018 )
  {
LABEL_5:
    v12 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v12 )
      v12 ^= a2;
    v13 = 0;
    if ( v12 )
    {
      v14 = *(_RTL_BALANCED_NODE **)(a3 + 40);
      while ( 1 )
      {
        if ( (unsigned __int64)v14 > *(_QWORD *)(v12 + 48) || (unsigned __int64)v14 >= *(_QWORD *)(v12 + 40) )
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
    RtlRbInsertNodeEx((PRTL_RB_TREE)a2, (PRTL_BALANCED_NODE)v12, v13, (PRTL_BALANCED_NODE)a3);
    if ( *(_DWORD *)(a2 + 128) == 8 )
    {
      v23 = (__int64 *)(a3 + 24);
      v24 = *(_QWORD *)(a2 + 88) + 16LL * ((*(_DWORD *)(a3 + 92) >> 3) & 0x3F);
      v25 = *(__int64 ***)(v24 + 8);
      if ( *v25 != (__int64 *)v24 )
        __fastfail(3u);
      *v23 = v24;
      *(_QWORD *)(a3 + 32) = v25;
      *v25 = v23;
      *(_QWORD *)(v24 + 8) = v23;
    }
    if ( *(_DWORD *)(a3 + 84) )
      MiSlabEntryPageFreed(a2, a3);
    *(_QWORD *)(a2 + 96) += *(unsigned int *)(a3 + 84);
    MiUpdateSlabTypeAvailablePages(a1, *(unsigned int *)(a2 + 128), *(unsigned int *)(a3 + 84));
    v17 = v10;
    ++*(_QWORD *)(a2 + 120);
    if ( (*(_DWORD *)(a3 + 92) & 2) != 0 )
    {
      v18 = 19664LL;
      v16 = v10 + *(_QWORD *)(a2 + 112);
      *(_QWORD *)(a2 + 112) = v16;
    }
    else
    {
      v18 = 19672LL;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v18 + a1), v10);
    if ( *(_DWORD *)(a3 + 84) == (_DWORD)v10 )
    {
      *(_QWORD *)(a2 + 168) = MiGetSlabCurrentTime(v16, v10);
      MiSlabEntryBecameEmpty(a2, a3);
    }
    goto LABEL_25;
  }
  v20 = 48LL * *(_QWORD *)(a3 + 40) - 0x220000000000LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E30010);
  v21 = (_QWORD *)qword_140E30000;
  v22 = 0LL;
  while ( v21 )
  {
    if ( v20 <= v21[3] )
    {
      if ( v20 >= v21[3] )
        goto LABEL_44;
      v22 = v21;
      v21 = (_QWORD *)*v21;
    }
    else
    {
      v21 = (_QWORD *)v21[1];
    }
  }
  v21 = v22;
  if ( !v22 )
    goto LABEL_46;
LABEL_44:
  if ( v21[3] <= (unsigned __int64)(48LL * *(_QWORD *)(a3 + 48) - 0x220000000000LL) )
    v4 = 1;
LABEL_46:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E30010);
  if ( !v4 )
  {
    if ( qword_140E30018 )
    {
      while ( v20 <= 48LL * *(_QWORD *)(a3 + 48) - 0x220000000000LL )
      {
        if ( (*(_DWORD *)(v20 + 32) & 0x40000000) != 0 )
        {
          v4 = 1;
          goto LABEL_25;
        }
        v20 += 48LL;
      }
    }
    goto LABEL_5;
  }
LABEL_25:
  LOBYTE(v17) = v11;
  MiReleaseSpinLockExclusive(a2 + 16, v17);
  return v4;
}
