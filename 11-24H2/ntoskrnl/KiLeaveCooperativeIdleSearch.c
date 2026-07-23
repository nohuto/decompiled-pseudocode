/*
 * XREFs of KiLeaveCooperativeIdleSearch @ 0x1404E0960
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 */

char __fastcall KiLeaveCooperativeIdleSearch(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // r15
  __int64 *v10; // r15
  _QWORD *v13; // rdx
  unsigned __int16 v14; // r8
  __int64 v15; // rax
  unsigned int k; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  volatile signed __int64 *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v26; // rax
  volatile signed __int64 *v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int16 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned int i; // r10d
  unsigned __int64 v32; // rax
  __int64 v33; // r11
  char v34; // r9
  unsigned int v35; // edx
  __int64 v36; // r10
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r8
  unsigned int j; // r8d
  __int64 *v40; // rcx
  volatile signed __int64 *v41; // rdx
  __int64 v42; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int64 *v43; // [rsp+28h] [rbp-30h]

  v4 = a2 + 1064;
  v5 = *a3;
  v6 = a3 + 2;
  v7 = *((unsigned __int16 *)a3 + 4) + 1LL;
  v43 = (volatile signed __int64 *)a2;
  v10 = &a3[2 * v7];
  v42 = 0LL;
  v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v42);
  if ( v13 )
    KxWaitForLockOwnerShip((__int64)&v42, v13);
  if ( a4 )
  {
    v28 = *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24);
    if ( (v28 & 1) == 0 )
    {
      v29 = *(unsigned __int8 *)(a2 + 1060);
      v30 = -1LL;
      for ( i = -1; v29 <= *(unsigned __int8 *)(a2 + 1061); ++v29 )
      {
        v32 = *(_QWORD *)(a2 + 8LL * v29 + 24);
        if ( v32 > v28 && v32 < v30 )
        {
          v30 = *(_QWORD *)(a2 + 8LL * v29 + 24);
          i = v29;
        }
      }
      if ( i == -1 )
      {
        for ( j = 0; j < *((unsigned __int16 *)a3 + 5); ++j )
        {
          v40 = &v6[2 * j];
          v41 = (volatile signed __int64 *)(v4 + 16LL * j);
          _InterlockedAnd64(v41, ~*v40);
          _InterlockedAnd64(v41 + 1, ~v40[1]);
        }
      }
      else
      {
        v33 = i;
        v34 = 0;
        v35 = 0;
        v36 = *(_QWORD *)(a2 + 8LL * i + 536);
        if ( *((_WORD *)a3 + 5) )
        {
          do
          {
            v37 = v6[2 * v35];
            if ( v37 )
            {
              v34 = 1;
              _InterlockedOr64((volatile signed __int64 *)(v36 + 16LL * v35 + 16), v37);
            }
            v38 = v6[2 * v35 + 1];
            if ( v38 )
            {
              v34 = 1;
              _InterlockedOr64((volatile signed __int64 *)(v36 + 16LL * v35 + 24), v38);
            }
            ++v35;
          }
          while ( v35 < *((unsigned __int16 *)a3 + 5) );
          if ( v34 )
            *(_QWORD *)(a2 + 8 * v33 + 24) = v30 & 0xFFFFFFFFFFFFFF80uLL | ((_BYTE)v30 + 2) & 0x7E;
        }
      }
    }
  }
  else
  {
    v14 = *(unsigned __int8 *)(a2 + 1060);
    if ( v14 <= *(unsigned __int8 *)(a2 + 1061) )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a2 + 8LL * v14 + 24);
        if ( v15 )
        {
          if ( (v15 & 0xFFFFFFFFFFFFFF80uLL) <= (v5 & 0xFFFFFFFFFFFFFF80uLL) && (v15 & 1) == 0 )
            break;
        }
        if ( ++v14 > *(unsigned __int8 *)(a2 + 1061) )
          goto LABEL_9;
      }
      _m_prefetchw(&v42);
      v26 = v42;
      if ( !v42 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42) == &v42 )
          return 0;
        v26 = KxWaitForLockChainValid(&v42);
      }
      v42 = 0LL;
      v27 = v43;
      if ( (((unsigned __int8)v27 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v26 + 8), (__int64)v43)) & 4) != 0 )
        KeWakeAddressAll(v26 + 8, (__int64)v27);
      return 0;
    }
  }
LABEL_9:
  if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a1 + 200) )
  {
    for ( k = 0; k < *(unsigned __int16 *)(a2 + 1058); *(_QWORD *)(v4 + 8 * v17 + 8) = 0LL )
    {
      v17 = k++;
      v17 *= 2LL;
      *(_QWORD *)(v4 + 8 * v17) = 0LL;
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 209) + 24) = 0LL;
  *(_QWORD *)(a2 + 8) &= ~*(_QWORD *)(a1 + 200);
  if ( !*(_QWORD *)(a2 + 8) )
    *(_QWORD *)(a2 + 16) = 128LL;
  _m_prefetchw(&v42);
  v18 = v42;
  if ( v42 )
    goto LABEL_17;
  if ( (__int64 *)_InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42) != &v42 )
  {
    v18 = KxWaitForLockChainValid(&v42);
LABEL_17:
    v42 = 0LL;
    v19 = v43;
    if ( (((unsigned __int8)v19 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), (__int64)v43)) & 4) != 0 )
      KeWakeAddressAll(v18 + 8, (__int64)v19);
  }
  LOWORD(v20) = *((_WORD *)a3 + 5);
  v21 = 0;
  if ( (_WORD)v20 )
  {
    do
    {
      v22 = v21++;
      v22 *= 2LL;
      v6[v22] = 0LL;
      v6[v22 + 1] = 0LL;
      v20 = *((unsigned __int16 *)a3 + 5);
    }
    while ( v21 < v20 );
  }
  v23 = 0;
  if ( (_WORD)v20 )
  {
    do
    {
      v24 = v23++;
      v24 *= 2LL;
      v10[v24] = 0LL;
      v10[v24 + 1] = 0LL;
    }
    while ( v23 < *((unsigned __int16 *)a3 + 5) );
  }
  *a3 = 0LL;
  return 1;
}
