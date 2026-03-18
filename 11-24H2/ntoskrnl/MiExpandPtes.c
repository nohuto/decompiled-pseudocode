/*
 * XREFs of MiExpandPtes @ 0x1403A5438
 * Callers:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiSplitBitmapPages @ 0x1403A52F4 (MiSplitBitmapPages.c)
 *     MiObtainSystemVa @ 0x1403A5804 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1403A582C (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiExpandPtes(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // r13d
  int v6; // r12d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  char v16; // r10
  volatile signed __int32 *v17; // r8
  unsigned __int64 v18; // rcx
  volatile LONG *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22; // [rsp+38h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-48h]
  KIRQL v24; // [rsp+98h] [rbp+10h]
  KIRQL v25; // [rsp+A0h] [rbp+18h]
  int v26; // [rsp+A8h] [rbp+20h]

  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 44);
  v5 = v4;
  v6 = 0;
  v26 = 0;
  v7 = (*(_DWORD *)(a1 + 40) & 1) != 0 ? 16LL : 1LL;
  if ( a2 >= 0x200 )
  {
    if ( (__int64 *)a1 == &qword_140E37568 )
    {
      v5 = 12;
    }
    else
    {
      if ( v4 != 6 )
        goto LABEL_3;
      v5 = 10;
    }
    v6 = 1;
    v26 = 1;
  }
LABEL_3:
  v8 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  CurrentIrql = KeGetCurrentIrql();
  v9 = MiObtainSystemVa(v8 >> 9);
  v22 = v9;
  if ( !v9 )
    return 0LL;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = 17;
  v21 = (v10 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( !v6 )
  {
    v12 = ((v10 - *(_QWORD *)(a1 + 32)) >> 3) / v7;
    if ( CurrentIrql == 2 )
    {
      v24 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 52));
    }
    else
    {
      v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 52));
    }
    v20 = MiSplitBitmapPages(v4);
    if ( v20 )
    {
      if ( (v8 + v21) / v7 > *(_QWORD *)a1 )
        *(_QWORD *)a1 = (v8 + v21) / v7;
      if ( (v12 & 0x3F) != 0 )
        v12 &= 0xFFFFFFFFFFFFFFC0uLL;
      if ( v12 < *(_QWORD *)(a1 + 72) || (*(_DWORD *)(a1 + 40) & 2) == 0 )
      {
        *(_QWORD *)(a1 + 72) = v12;
        *(_DWORD *)(a1 + 40) |= 2u;
      }
    }
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 52), v24);
    if ( !v20 )
      goto LABEL_32;
    v6 = v26;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v10, v10 + 8 * (v8 - 1)) )
  {
    if ( v6 )
      v4 = v5;
LABEL_32:
    MiReturnSystemVa(v22, (__int64)((v8 << 28) + (v10 << 25)) >> 16, v4);
    return 0LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), v8);
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
    v19 = (volatile LONG *)(a1 + 52);
    if ( CurrentIrql == 2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v19);
    else
      v25 = ExAcquireSpinLockExclusive(v19);
    if ( !(unsigned int)MiSplitBitmapPages(v4) )
      *(_DWORD *)(a1 + 40) &= ~4u;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 52), v25);
  }
  if ( !v26 && a2 != v8 )
  {
    v13 = v8 - a2;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v13);
    v14 = v13 / v7;
    v15 = (a2 + v21) / v7;
    v16 = v15 & 0x1F;
    v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v15 >> 5));
    if ( (v15 & 0x1F) + v13 / v7 > 0x20 )
    {
      if ( (v15 & 0x1F) != 0 )
      {
        _InterlockedAnd(v17, ~(((1 << (32 - (v15 & 0x1F))) - 1) << v16));
        v14 -= 32 - (unsigned int)(v15 & 0x1F);
        ++v17;
      }
      if ( v14 >= 0x20 )
      {
        v18 = v14 >> 5;
        v14 += -32LL * (v14 >> 5);
        do
        {
          *v17++ = 0;
          --v18;
        }
        while ( v18 );
      }
      if ( v14 )
        _InterlockedAnd(v17, -1 << v14);
    }
    else if ( v14 == 32 )
    {
      *v17 = 0;
    }
    else
    {
      _InterlockedAnd(v17, ~(((1 << v14) - 1) << v16));
    }
  }
  return v10;
}
