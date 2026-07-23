/*
 * XREFs of MiQueryVaPhysicalContiguity @ 0x140681F6C
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiCheckContiguityTradeEligible @ 0x140681EE8 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiQueryVaPhysicalContiguity(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  int v11; // r12d
  int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // [rsp+30h] [rbp-78h]
  int v30; // [rsp+34h] [rbp-74h]
  int v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  __int64 v35; // [rsp+58h] [rbp-50h]
  unsigned int v37; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int8 v38; // [rsp+C0h] [rbp+18h]
  int v39; // [rsp+C8h] [rbp+20h]

  v39 = a4;
  v37 = 0;
  v4 = a1;
  v5 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v35 = MiPageSizes[a3];
  v6 = a2 - 1;
  v7 = v5 - 0x98000000000LL;
  v33 = -1LL;
  v8 = (((unsigned __int64)(v6 + (v35 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v34 = v8;
  v29 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v32 = 0LL;
  v13 = 1;
  v31 = a4 & 1;
  v38 = MiLockWorkingSetShared(a1, v6, 0xFFFFF68000000000uLL, a4);
  while ( v7 <= v8 )
  {
    v14 = 1LL;
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_18;
      MiUnlockPageTableInternal(v4, v9);
      v9 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v7, v34, v38, 1, &v37);
    if ( !NextPageTable )
      goto LABEL_47;
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v37 )
    {
      v32 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = v32;
      if ( v37 > 1 )
      {
        v16 = v37 - 1;
        do
        {
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v16;
        }
        while ( v16 );
        v32 = v10;
      }
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    if ( NextPageTable != v7 )
    {
LABEL_47:
      v11 = 1;
      break;
    }
    if ( v37 )
    {
      v17 = (*(_QWORD *)v10 >> 12) & 0xFFFFFFFFFFLL;
      v18 = (unsigned __int64)((__int64)(v7 << 25) >> 16) >> 12;
      v19 = v37;
      do
      {
        v20 = v18;
        v18 >>= 9;
        v21 = v14 * (v20 & 0x1FF);
        v14 <<= 9;
        v17 += v21;
        --v19;
      }
      while ( v19 );
      v12 = 1;
      v14 -= v17 & (v14 - 1);
      goto LABEL_29;
    }
LABEL_18:
    v30 = 0;
    if ( (*(_QWORD *)v7 & 1) != 0 )
    {
      v17 = (*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL;
      v22 = 48 * v17 - 0x220000000000LL;
    }
    else
    {
      if ( (*(_QWORD *)v7 & 0xC00LL) != 0x800 || (v39 & 2) != 0 || (v22 = MiLockTransitionLeafPageEx(v7, 0LL, 0)) == 0 )
      {
        v11 = 1;
LABEL_42:
        v4 = a1;
        break;
      }
      v30 = 1;
      v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x220000000000LL) >> 4);
    }
    if ( !MiCheckContiguityTradeEligible(v22) )
      v12 = 1;
    if ( v30 )
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v32;
LABEL_29:
    if ( v33 == -1 )
      v23 = ((v35 - 1) & v17) == 0;
    else
      v23 = v33 == v17;
    if ( !v23 )
    {
      v29 = 1;
      if ( !v31 )
        goto LABEL_42;
    }
    v24 = v17 + v14;
    v4 = a1;
    v33 = v24;
    if ( (v7 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(a1, 0) || KeShouldYieldProcessor() )
    {
      if ( v9 )
      {
        MiUnlockPageTableInternal(a1, v9);
        v9 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v38);
      MiLockWorkingSetShared(a1, v25, v26, v27);
    }
    v7 += 8 * v14;
    v8 = v34;
  }
  if ( v9 )
    MiUnlockPageTableInternal(v4, v9);
  MiUnlockWorkingSetShared(v4, v38);
  if ( v11 )
  {
    return (unsigned int)(v12 != 0) + 2;
  }
  else if ( v29 )
  {
    return v12 != 0 ? 3 : 0;
  }
  return v13;
}
