/*
 * XREFs of MiQueryVaPhysicalContiguity @ 0x1406755A0
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiCheckContiguityTradeEligible @ 0x14067551C (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiQueryVaPhysicalContiguity(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  int v9; // r12d
  int v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  bool v21; // zf
  __int64 v22; // rax
  int v24; // [rsp+30h] [rbp-78h]
  int v25; // [rsp+34h] [rbp-74h]
  int v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+58h] [rbp-50h]
  unsigned int v32; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int8 v33; // [rsp+C0h] [rbp+18h]
  int v34; // [rsp+C8h] [rbp+20h]

  v34 = a4;
  v32 = 0;
  v4 = a1;
  v30 = MiPageSizes[a3];
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = -1LL;
  v6 = (((a2 - 1 + (v30 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v29 = v6;
  v24 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v27 = 0LL;
  v11 = 1;
  v26 = a4 & 1;
  v33 = MiLockWorkingSetShared(a1);
  while ( v5 <= v6 )
  {
    v12 = 1LL;
    if ( v7 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_18;
      MiUnlockPageTable(v4, v7);
      v7 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v5, v29, v33, 1, &v32);
    if ( !NextPageTable )
      goto LABEL_47;
    v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v32 )
    {
      v27 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = v27;
      if ( v32 > 1 )
      {
        v14 = v32 - 1;
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v14;
        }
        while ( v14 );
        v27 = v8;
      }
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    if ( NextPageTable != v5 )
    {
LABEL_47:
      v9 = 1;
      break;
    }
    if ( v32 )
    {
      v15 = (*(_QWORD *)v8 >> 12) & 0xFFFFFFFFFFLL;
      v16 = (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12;
      v17 = v32;
      do
      {
        v18 = v16;
        v16 >>= 9;
        v19 = v12 * (v18 & 0x1FF);
        v12 <<= 9;
        v15 += v19;
        --v17;
      }
      while ( v17 );
      v10 = 1;
      v12 -= v15 & (v12 - 1);
      goto LABEL_29;
    }
LABEL_18:
    v25 = 0;
    if ( (*(_QWORD *)v5 & 1) != 0 )
    {
      v15 = (*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL;
      v20 = 48 * v15 - 0x220000000000LL;
    }
    else
    {
      if ( (*(_QWORD *)v5 & 0xC00LL) != 0x800 || (v34 & 2) != 0 || (v20 = MiLockTransitionLeafPageEx(v5, 0LL, 0)) == 0 )
      {
        v9 = 1;
LABEL_42:
        v4 = a1;
        break;
      }
      v25 = 1;
      v15 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x220000000000LL) >> 4);
    }
    if ( !MiCheckContiguityTradeEligible(v20) )
      v10 = 1;
    if ( v25 )
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v27;
LABEL_29:
    if ( v28 == -1 )
      v21 = ((v30 - 1) & v15) == 0;
    else
      v21 = v28 == v15;
    if ( !v21 )
    {
      v24 = 1;
      if ( !v26 )
        goto LABEL_42;
    }
    v22 = v15 + v12;
    v4 = a1;
    v28 = v22;
    if ( (v5 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(a1, 0) || KeShouldYieldProcessor() )
    {
      if ( v7 )
      {
        MiUnlockPageTable(a1, v7);
        v7 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v33);
      MiLockWorkingSetShared(a1);
    }
    v5 += 8 * v12;
    v6 = v29;
  }
  if ( v7 )
    MiUnlockPageTable(v4, v7);
  MiUnlockWorkingSetShared(v4, v33);
  if ( v9 )
  {
    return (unsigned int)(v10 != 0) + 2;
  }
  else if ( v24 )
  {
    return v10 != 0 ? 3 : 0;
  }
  return v11;
}
