/*
 * XREFs of MiExpandPtes @ 0x14038E6D8
 * Callers:
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSplitBitmapPages @ 0x14038E594 (MiSplitBitmapPages.c)
 *     MiObtainSystemVa @ 0x14038EAA4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiExpandPtes(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // r12d
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  char v15; // r10
  volatile signed __int32 *v16; // r8
  unsigned __int64 v17; // rcx
  volatile LONG *v18; // rcx
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  unsigned __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-48h]
  KIRQL v23; // [rsp+98h] [rbp+10h]
  KIRQL v24; // [rsp+A0h] [rbp+18h]
  int v25; // [rsp+A8h] [rbp+20h]

  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 44);
  v5 = 0;
  v25 = 0;
  v6 = (*(_DWORD *)(a1 + 40) & 1) != 0 ? 16LL : 1LL;
  if ( a2 >= 0x200 && ((__int64 *)a1 == &qword_140E37328 || v4 == 6) )
  {
    v5 = 1;
    v25 = 1;
  }
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = MiObtainSystemVa(v7 >> 9);
  v21 = v8;
  if ( !v8 )
    return 0LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = 17;
  v20 = (v9 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( !v5 )
  {
    v11 = ((v9 - *(_QWORD *)(a1 + 32)) >> 3) / v6;
    if ( CurrentIrql == 2 )
    {
      v23 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 52));
    }
    else
    {
      v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 52));
    }
    v19 = MiSplitBitmapPages(v4);
    if ( v19 )
    {
      if ( (v7 + v20) / v6 > *(_QWORD *)a1 )
        *(_QWORD *)a1 = (v7 + v20) / v6;
      if ( (v11 & 0x3F) != 0 )
        v11 &= 0xFFFFFFFFFFFFFFC0uLL;
      if ( v11 < *(_QWORD *)(a1 + 72) || (*(_DWORD *)(a1 + 40) & 2) == 0 )
      {
        *(_QWORD *)(a1 + 72) = v11;
        *(_DWORD *)(a1 + 40) |= 2u;
      }
    }
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 52), v23);
    if ( !v19 )
      goto LABEL_29;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v9, v9 + 8 * (v7 - 1)) )
  {
LABEL_29:
    MiReturnSystemVa(v21, (__int64)((v7 << 28) + (v9 << 25)) >> 16);
    return 0LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), v7);
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
    v18 = (volatile LONG *)(a1 + 52);
    if ( CurrentIrql == 2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v18);
    else
      v24 = ExAcquireSpinLockExclusive(v18);
    if ( !(unsigned int)MiSplitBitmapPages(v4) )
      *(_DWORD *)(a1 + 40) &= ~4u;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 52), v24);
  }
  if ( !v25 && a2 != v7 )
  {
    v12 = v7 - a2;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v12);
    v13 = v12 / v6;
    v14 = (a2 + v20) / v6;
    v15 = v14 & 0x1F;
    v16 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v14 >> 5));
    if ( (v14 & 0x1F) + v12 / v6 > 0x20 )
    {
      if ( (v14 & 0x1F) != 0 )
      {
        _InterlockedAnd(v16, ~(((1 << (32 - (v14 & 0x1F))) - 1) << v15));
        v13 -= 32 - (unsigned int)(v14 & 0x1F);
        ++v16;
      }
      if ( v13 >= 0x20 )
      {
        v17 = v13 >> 5;
        v13 += -32LL * (v13 >> 5);
        do
        {
          *v16++ = 0;
          --v17;
        }
        while ( v17 );
      }
      if ( v13 )
        _InterlockedAnd(v16, -1 << v13);
    }
    else if ( v13 == 32 )
    {
      *v16 = 0;
    }
    else
    {
      _InterlockedAnd(v16, ~(((1 << v13) - 1) << v15));
    }
  }
  return v9;
}
