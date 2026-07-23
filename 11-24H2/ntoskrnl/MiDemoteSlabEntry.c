/*
 * XREFs of MiDemoteSlabEntry @ 0x14043BE9C
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 *     MiLogSlabEntryDemote @ 0x14043C180 (MiLogSlabEntryDemote.c)
 *     MiRemoveSlabEntry @ 0x14043C298 (MiRemoveSlabEntry.c)
 *     MiRelinkTransitionSlabPages @ 0x14043C4D4 (MiRelinkTransitionSlabPages.c)
 *     MiUnlinkTransitionSlabPages @ 0x14043C5B4 (MiUnlinkTransitionSlabPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDemoteSlabEntry(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // r9
  _WORD *i; // rcx
  unsigned int v13; // r12d
  unsigned int v14; // r11d
  __int64 v15; // rdi
  __int64 v16; // r9
  _DWORD *v17; // r8
  unsigned __int64 v18; // rbx
  int v19; // r10d
  _DWORD *j; // rax
  unsigned int v21; // r10d
  unsigned int v22; // edx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r15
  volatile signed __int32 *v25; // rdi
  unsigned int v26; // esi
  __int64 result; // rax
  __int64 v28; // rcx
  unsigned __int64 k; // rax
  unsigned int *v30; // rax
  unsigned int v31; // r9d
  __int64 v34; // [rsp+78h] [rbp+20h]

  v3 = (volatile LONG *)(a2 + 16);
  v6 = LODWORD(MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3]);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  MiRemoveSlabEntry(a1, a2, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  v8 = MiUnlinkTransitionSlabPages(v7, a3);
  v9 = *(_QWORD *)(a3 + 40);
  v10 = v8;
  v11 = qword_140E3D280 + 2 * ((v6 + v9 - 1) >> 9);
  for ( i = (_WORD *)(qword_140E3D280 + 2 * (v9 >> 9)); (unsigned __int64)i <= v11; ++i )
    *i = 0;
  MiUpdateLargePageBitMap(a1, *(_QWORD *)(a3 + 40), v6, 6);
  v34 = *(unsigned int *)(a3 + 84) + MiRelinkTransitionSlabPages(v10);
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 64);
    if ( v14 <= v13 )
      break;
    v15 = *(_QWORD *)(a3 + 72);
    v16 = 0LL;
    v17 = (_DWORD *)(v15 + 4 * ((unsigned __int64)v13 >> 5));
    v18 = v15 + 4 * ((unsigned __int64)(v14 - 1) >> 5);
    v19 = ((1 << (v13 & 0x1F)) - 1) | *v17;
    for ( j = v17 + 1; ; ++j )
    {
      v21 = ~v19;
      if ( v21 )
        break;
      if ( (unsigned __int64)j > v18 )
        goto LABEL_10;
      v19 = *++v17;
    }
    _BitScanForward64((unsigned __int64 *)&v28, v21);
    v22 = v28 + 32 * (((__int64)v17 - v15) >> 2);
    if ( v22 > v14 )
    {
LABEL_10:
      v22 = *(_DWORD *)(a3 + 64);
      goto LABEL_11;
    }
    for ( k = ~(v21 | ((1 << v28) - 1)); !(_DWORD)k; k = *v30 )
    {
      v30 = v17 + 1;
      if ( (unsigned __int64)(v17 + 1) > v18 )
      {
        LODWORD(k) = 32;
        goto LABEL_32;
      }
      ++v17;
    }
    _BitScanForward64(&k, k);
LABEL_32:
    v31 = k + 32 * (((__int64)v17 - v15) >> 2);
    if ( v31 > v14 )
      v31 = *(_DWORD *)(a3 + 64);
    v16 = v31 - v22;
LABEL_11:
    if ( !(_DWORD)v16 )
      break;
    v13 = v16 + v22;
    v23 = 48 * (*(_QWORD *)(a3 + 40) + v22) - 0x220000000000LL;
    v24 = v23 + 48 * v16;
    if ( v23 < v24 )
    {
      v25 = (volatile signed __int32 *)(v23 + 24);
      do
      {
        v26 = 0;
        while ( _interlockedbittestandset64(v25, 0x3FuLL) )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)v25 < 0 );
        }
        MiUpdateSlabPagePlaceholderState(
          *(_DWORD *)(a2 + 128),
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v25 + 0x87FFFFFFFFALL) >> 4),
          1LL,
          0);
        MiReleaseFreshPageLocked(v23);
        _InterlockedAnd64((volatile signed __int64 *)v25, 0x7FFFFFFFFFFFFFFFuLL);
        v23 += 48LL;
        v25 += 12;
      }
      while ( v23 < v24 );
    }
  }
  MiLogSlabEntryDemote(a3, v34);
  ExFreePoolWithTag((PVOID)a3, 0);
  result = v34;
  ++*(_QWORD *)(a1 + 17736);
  ++*(_DWORD *)(a2 + 148);
  return result;
}
