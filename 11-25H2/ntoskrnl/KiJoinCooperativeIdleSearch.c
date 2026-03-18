/*
 * XREFs of KiJoinCooperativeIdleSearch @ 0x1403CFEF0
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KiJoinCooperativeIdleSearch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  char v6; // di
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rdi
  _QWORD *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KPRCB **v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  volatile signed __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // [rsp+20h] [rbp-68h]
  _OWORD v26[2]; // [rsp+28h] [rbp-60h] BYREF
  char v27; // [rsp+90h] [rbp+8h]
  _QWORD *v29; // [rsp+A0h] [rbp+18h]
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v29 = *(_QWORD **)(a1 + 192);
  v5 = a3 + 16 * (*(unsigned __int16 *)(a3 + 8) + 1LL);
  v6 = 0;
  v7 = 16LL * *(unsigned __int16 *)(a2 + 1056) + a2 + 1064;
  v8 = *(_WORD *)(a2 + 1058);
  v9 = 32LL * *(unsigned __int16 *)(a2 + 1056) + a2 + 1064;
  v30 = v7;
  v25 = v9;
  v10 = a2;
  *(_WORD *)(a3 + 10) = v8;
  v11 = 0;
  v27 = 0;
  v26[0] = 0LL;
  if ( v8 )
  {
    do
    {
      v12 = v5 + 16LL * v11;
      v13 = *(_QWORD **)(KiSubNodes + 8LL * *(unsigned __int16 *)(v9 + 2LL * v11));
      *(_OWORD *)v12 = *(_OWORD *)(v7 + 16LL * v11);
      if ( v13 == v29 )
      {
        *(_QWORD *)v12 &= ~*(_QWORD *)(a1 + 200);
        *(_QWORD *)(v12 + 8) &= ~*(_QWORD *)(a1 + 36416);
      }
      v14 = v13[10] & ~v13[2];
      *(_QWORD *)v12 &= v14;
      *(_QWORD *)(v12 + 8) &= v14;
      if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v14) )
      {
        *(_QWORD *)v12 &= v13[48] | v13[50];
        v15 = *(_QWORD *)(v12 + 8) & v13[49];
        *(_QWORD *)(v12 + 8) = v15;
        if ( *(_QWORD *)v12 || v15 )
          v27 = 1;
      }
      ++v11;
      v7 = v30;
      v9 = v25;
    }
    while ( v11 < *(unsigned __int16 *)(a3 + 10) );
    v10 = a2;
    v6 = v27;
  }
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v9) && !v6 )
    return 0;
  *((_QWORD *)&v26[0] + 1) = v10;
  *(_QWORD *)&v26[0] = 0LL;
  v17 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v10, (__int64)v26);
  if ( v17 )
    KxWaitForLockOwnerShip((struct _KPRCB *)v26, v17);
  v18 = 0;
  *(_QWORD *)a3 = *(_QWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) ^= (*(_QWORD *)(v10 + 16) ^ (*(_QWORD *)(v10 + 16) + 128LL)) & 0xFFFFFFFFFFFFFF80uLL;
  if ( *(_WORD *)(a3 + 10) )
  {
    do
    {
      v19 = 16LL * v18;
      v20 = (_QWORD *)(v19 + v5);
      v21 = v19 + a3;
      v22 = (volatile signed __int64 *)(v10 + v19 + 1064);
      *v20 &= ~*v22;
      v20[1] &= ~*((_QWORD *)v22 + 1);
      _InterlockedOr64(v22, *(_QWORD *)(v19 + v5));
      _InterlockedOr64(v22 + 1, *(_QWORD *)(v19 + v5 + 8));
      ++v18;
      *(_QWORD *)(v21 + 16) = *(_QWORD *)(v19 + v5);
      *(_QWORD *)(v21 + 24) = *(_QWORD *)(v19 + v5 + 8);
    }
    while ( v18 < *(unsigned __int16 *)(a3 + 10) );
  }
  *(_QWORD *)(v10 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24) = *(_QWORD *)a3;
  *(_QWORD *)(v10 + 8) |= *(_QWORD *)(a1 + 200);
  _m_prefetchw(v26);
  v23 = *(_QWORD *)&v26[0];
  if ( *(_QWORD *)&v26[0] )
    goto LABEL_19;
  if ( (_OWORD *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v26[0] + 1), 0LL, (signed __int64)v26) != v26 )
  {
    v23 = KxWaitForLockChainValid((__int64 *)v26);
LABEL_19:
    *(_QWORD *)&v26[0] = 0LL;
    v24 = *((_QWORD *)&v26[0] + 1);
    if ( (((unsigned __int8)v24 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v23 + 8),
                                                     *((__int64 *)&v26[0] + 1))) & 4) != 0 )
      KeWakeAddressAll(v23 + 8, v24);
  }
  return 1;
}
