/*
 * XREFs of KiJoinCooperativeIdleSearch @ 0x1404E06E0
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 */

char __fastcall KiJoinCooperativeIdleSearch(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  _QWORD *v5; // r14
  char v6; // r11
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // r12
  __int64 v14; // r8
  _QWORD *v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  volatile signed __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  _OWORD v27[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_WORD *)(a2 + 1058);
  v5 = *(_QWORD **)(a1 + 192);
  v6 = 0;
  v7 = a3 + 16 * (*(unsigned __int16 *)(a3 + 8) + 1LL);
  v8 = *(unsigned __int16 *)(a2 + 1056);
  *(_WORD *)(a3 + 10) = v4;
  v11 = a2 + 16 * v8;
  v12 = 0;
  v27[0] = 0LL;
  v13 = 32 * v8 + a2;
  if ( v4 )
  {
    do
    {
      v14 = v7 + 16LL * v12;
      v15 = *(_QWORD **)(KiSubNodes + 8LL * *(unsigned __int16 *)(v13 + 2LL * v12 + 1064));
      *(_OWORD *)v14 = *(_OWORD *)(v11 + 16LL * v12 + 1064);
      if ( v15 == v5 )
      {
        *(_QWORD *)v14 &= ~*(_QWORD *)(a1 + 200);
        *(_QWORD *)(v14 + 8) &= ~*(_QWORD *)(a1 + 36416);
      }
      v16 = v15[10] & ~v15[2];
      *(_QWORD *)(v14 + 8) &= v16;
      *(_QWORD *)v14 &= v16;
      *(_QWORD *)v14 &= v15[48] | v15[50];
      v17 = *(_QWORD *)(v14 + 8) & v15[49];
      *(_QWORD *)(v14 + 8) = v17;
      if ( *(_QWORD *)v14 || v17 )
        v6 = 1;
      ++v12;
    }
    while ( v12 < *(unsigned __int16 *)(a3 + 10) );
    if ( v6 )
    {
      *((_QWORD *)&v27[0] + 1) = a2;
      *(_QWORD *)&v27[0] = 0LL;
      v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)v27);
      if ( v18 )
        KxWaitForLockOwnerShip((__int64)v27, v18);
      v19 = 0;
      *(_QWORD *)a3 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) ^= (*(_QWORD *)(a2 + 16) ^ (*(_QWORD *)(a2 + 16) + 128LL)) & 0xFFFFFFFFFFFFFF80uLL;
      if ( *(_WORD *)(a3 + 10) )
      {
        do
        {
          v20 = 16LL * v19;
          v21 = (_QWORD *)(v20 + v7);
          v22 = (volatile signed __int64 *)(v20 + a2 + 1064);
          v23 = v20 + a3;
          *v21 &= ~*v22;
          v21[1] &= ~*((_QWORD *)v22 + 1);
          _InterlockedOr64(v22, *(_QWORD *)(v20 + v7));
          _InterlockedOr64(v22 + 1, *(_QWORD *)(v20 + v7 + 8));
          ++v19;
          *(_QWORD *)(v23 + 16) = *(_QWORD *)(v20 + v7);
          *(_QWORD *)(v23 + 24) = *(_QWORD *)(v20 + v7 + 8);
        }
        while ( v19 < *(unsigned __int16 *)(a3 + 10) );
      }
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24) = *(_QWORD *)a3;
      *(_QWORD *)(a2 + 8) |= *(_QWORD *)(a1 + 200);
      _m_prefetchw(v27);
      v24 = *(_QWORD *)&v27[0];
      if ( !*(_QWORD *)&v27[0] )
      {
        if ( (_OWORD *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v27[0] + 1),
                         0LL,
                         (signed __int64)v27) == v27 )
          return 1;
        v24 = KxWaitForLockChainValid((__int64 *)v27);
      }
      *(_QWORD *)&v27[0] = 0LL;
      v25 = *((_QWORD *)&v27[0] + 1);
      if ( (((unsigned __int8)v25 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v24 + 8),
                                                       *((__int64 *)&v27[0] + 1))) & 4) != 0 )
        KeWakeAddressAll(v24 + 8, v25);
      return 1;
    }
  }
  return 0;
}
