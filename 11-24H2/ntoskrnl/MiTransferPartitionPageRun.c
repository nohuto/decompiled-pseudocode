/*
 * XREFs of MiTransferPartitionPageRun @ 0x14068C62C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14068478C (MiMoveBadPageChargesCrossPartition.c)
 *     MiMoveBadPagePartition @ 0x14068C184 (MiMoveBadPagePartition.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068CA34 (MiUpdatePartitionChildPageCounts.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  volatile LONG *v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rsi
  ULONG_PTR v7; // rdi
  int v9; // r14d
  volatile LONG *v10; // rbp
  unsigned __int8 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  int PfnPageSizeIndex; // esi
  __int64 v16; // r14
  unsigned int v17; // r12d
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  unsigned int v21; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-70h]
  int v24; // [rsp+3Ch] [rbp-6Ch]
  __int64 v25; // [rsp+40h] [rbp-68h]
  ULONG_PTR v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  KIRQL v29; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v30; // [rsp+C0h] [rbp+18h]
  __int16 v31; // [rsp+C8h] [rbp+20h]

  v4 = (volatile LONG *)(a1 + 200);
  v31 = *(_WORD *)a1;
  v5 = a1;
  v6 = 0LL;
  v30 = *(_WORD *)a2;
  v25 = 0LL;
  v26 = a3 + a4;
  v7 = a3;
  v9 = 0;
  v10 = (volatile LONG *)(a2 + 200);
  v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v11 = v29;
  ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  while ( v7 != v26 )
  {
    v24 = ++v9;
    if ( (v9 & 0xF) == 0 && (*v4 & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      MiReleaseSpinLockExclusive(v4, v11);
      --v7;
      ExAcquireSpinLockExclusive(v4);
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
      goto LABEL_44;
    }
    v12 = 48 * v7 - 0x220000000000LL;
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FF) == v31 )
    {
      v13 = *(_BYTE *)(v12 + 34) & 7;
      if ( v13 == 5 )
      {
        if ( !MiIsPageOnBadList(48 * v7 - 0x220000000000LL) )
        {
          if ( !MiInvalidPteConforms(*(_QWORD *)(v12 + 16)) )
            goto LABEL_45;
          if ( qword_140E2DCC0 )
          {
            if ( (v14 & 0x10) != 0 )
              v14 &= ~0x10uLL;
            else
              v14 &= ~qword_140E2DCC0;
          }
          if ( HIDWORD(v14) != 4294967294 )
          {
LABEL_45:
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            KeBugCheckEx(0x1Au, 0x41000uLL, v7, v13, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiDrainZeroLookasides(v5, 0LL, 0LL, 0);
          --v7;
          goto LABEL_43;
        }
        MiMoveBadPagePartition(v5, (ULONG *)a2, 48 * v7 - 0x220000000000LL);
        ++v6;
      }
      else
      {
        if ( v13 > 1 )
          goto LABEL_45;
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(48 * v7 - 0x220000000000LL);
        v16 = MiPageSizes[PfnPageSizeIndex];
        v27 = v16;
        MiUnlinkFreeOrZeroedPage(v7, 0LL, 0);
        if ( (ULONG *)a2 != &MiSystemPartition )
        {
          *(_QWORD *)(a2 + 18512) += v16;
          *(_BYTE *)(a2 + 12) = 1;
        }
        *(_QWORD *)(v5 + 18512) -= v16;
        *(_BYTE *)(v5 + 12) = 1;
        v17 = ((*(_QWORD *)(v12 + 16) & 0x3E0LL) != 0) + 1;
        v23 = v17;
        if ( PfnPageSizeIndex == 3 )
        {
          if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 )
            MiMoveBadPageChargesCrossPartition(48 * v7 - 0x220000000000LL, v5, a2);
          *(_QWORD *)(v12 + 40) = ((unsigned __int64)v30 << 43) ^ (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v30 << 43)) & 0xFFE007FFFFFFFFFFuLL;
          MiInsertPageInFreeOrZeroedList(v7, v17);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = v12 + 48 * v16 - 48;
          if ( v18 >= v12 )
          {
            v19 = v18 + 24;
            do
            {
              v22 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v22);
                while ( *(__int64 *)v19 < 0 );
              }
              if ( (*(_DWORD *)(v19 + 8) & 0x40000000) != 0 )
                MiMoveBadPageChargesCrossPartition(v18, a1, a2);
              *(_QWORD *)(v19 + 16) = ((unsigned __int64)v30 << 43) ^ (*(_QWORD *)(v19 + 16) ^ ((unsigned __int64)v30 << 43)) & 0xFFE007FFFFFFFFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
              v18 -= 48LL;
              v19 -= 48LL;
            }
            while ( v18 >= v12 );
            v16 = v27;
            v17 = v23;
            v5 = a1;
          }
          MiInsertPossiblyBadPage(v7, v17);
          v10 = (volatile LONG *)(a2 + 200);
        }
        MiUpdatePartitionChildPageCounts(a2, v5, v7, v16);
        v11 = v29;
        v7 = v16 + v7 - 1;
        v6 = v16 + v25;
        v9 = v24;
      }
      v25 = v6;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_43:
    v4 = (volatile LONG *)(v5 + 200);
LABEL_44:
    ++v7;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  MiReleaseSpinLockExclusive(v4, v11);
  return v6;
}
