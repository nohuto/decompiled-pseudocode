/*
 * XREFs of MiExpandPtes @ 0x14026C728
 * Callers:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiExpandPtes(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // r12d
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  char v18; // r10
  volatile signed __int32 *v19; // r8
  unsigned __int64 v20; // rcx
  volatile LONG *v21; // rcx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-48h]
  KIRQL v28; // [rsp+98h] [rbp+10h]
  KIRQL v29; // [rsp+A0h] [rbp+18h]
  int v30; // [rsp+A8h] [rbp+20h]

  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 44);
  v5 = 0;
  v30 = 0;
  v6 = (*(_DWORD *)(a1 + 40) & 1) != 0 ? 16LL : 1LL;
  if ( a2 >= 0x200 && ((__int64 *)a1 == &qword_140E376A8 || v4 == 6) )
  {
    v5 = 1;
    v30 = 1;
  }
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 4112;
  if ( CurrentIrql != 2 )
    v8 = 16;
  v24 = v8;
  v9 = MiObtainSystemVa(v7 >> 9);
  v26 = v9;
  if ( !v9 )
    return 0LL;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = 17;
  v25 = (v10 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( !v5 )
  {
    v12 = ((v10 - *(_QWORD *)(a1 + 32)) >> 3) / v6;
    if ( CurrentIrql == 2 )
    {
      v28 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 52));
    }
    else
    {
      v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 52));
    }
    v23 = MiSplitBitmapPages(v4);
    if ( v23 )
    {
      v14 = v7 + v25;
      v13 = (v7 + v25) % v6;
      if ( (v7 + v25) / v6 > *(_QWORD *)a1 )
      {
        v13 = v14 % v6;
        *(_QWORD *)a1 = v14 / v6;
      }
      if ( (v12 & 0x3F) != 0 )
        v12 &= 0xFFFFFFFFFFFFFFC0uLL;
      if ( v12 < *(_QWORD *)(a1 + 72) || (*(_DWORD *)(a1 + 40) & 2) == 0 )
      {
        *(_QWORD *)(a1 + 72) = v12;
        *(_DWORD *)(a1 + 40) |= 2u;
      }
    }
    LOBYTE(v13) = v28;
    MiReleaseSpinLockExclusive(a1 + 52, v13);
    if ( !v23 )
      goto LABEL_31;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v10, v10 + 8 * (v7 - 1), v24, v4) )
  {
LABEL_31:
    MiReturnSystemVa(v26, (__int64)((v7 << 28) + (v10 << 25)) >> 16);
    return 0LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), v7);
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
    v21 = (volatile LONG *)(a1 + 52);
    if ( CurrentIrql == 2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v21);
    else
      v29 = ExAcquireSpinLockExclusive(v21);
    if ( !(unsigned int)MiSplitBitmapPages(v4) )
      *(_DWORD *)(a1 + 40) &= ~4u;
    LOBYTE(v22) = v29;
    MiReleaseSpinLockExclusive(a1 + 52, v22);
  }
  if ( !v30 && a2 != v7 )
  {
    v15 = v7 - a2;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v15);
    v16 = v15 / v6;
    v17 = (a2 + v25) / v6;
    v18 = v17 & 0x1F;
    v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v17 >> 5));
    if ( (v17 & 0x1F) + v15 / v6 > 0x20 )
    {
      if ( (v17 & 0x1F) != 0 )
      {
        _InterlockedAnd(v19, ~(((1 << (32 - (v17 & 0x1F))) - 1) << v18));
        v16 -= 32 - (unsigned int)(v17 & 0x1F);
        ++v19;
      }
      if ( v16 >= 0x20 )
      {
        v20 = v16 >> 5;
        v16 += -32LL * (v16 >> 5);
        do
        {
          *v19++ = 0;
          --v20;
        }
        while ( v20 );
      }
      if ( v16 )
        _InterlockedAnd(v19, -1 << v16);
    }
    else if ( v16 == 32 )
    {
      *v19 = 0;
    }
    else
    {
      _InterlockedAnd(v19, ~(((1 << v16) - 1) << v18));
    }
  }
  return v10;
}
