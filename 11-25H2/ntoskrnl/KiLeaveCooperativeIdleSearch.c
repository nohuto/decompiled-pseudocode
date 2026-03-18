/*
 * XREFs of KiLeaveCooperativeIdleSearch @ 0x1403CF880
 * Callers:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KiLeaveCooperativeIdleSearch(unsigned __int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 *v6; // r13
  __int64 v7; // r15
  __int64 *v10; // r15
  unsigned __int64 v12; // r14
  struct _KPRCB **v13; // rdx
  unsigned __int16 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned int j; // r9d
  unsigned __int64 v17; // rax
  unsigned int k; // r8d
  int IsEnabledNoReportingNoInline; // r8d
  unsigned int m; // edx
  __int64 v21; // rax
  volatile signed __int64 *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned __int16 i; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdx
  __int64 v33; // r10
  char v34; // r11
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r9
  __int64 v38; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int64 *v39; // [rsp+28h] [rbp-30h]

  v4 = a2 + 1064;
  v5 = *a3;
  v6 = a3 + 2;
  v7 = *((unsigned __int16 *)a3 + 4) + 1LL;
  v39 = (volatile signed __int64 *)a2;
  v10 = &a3[2 * v7];
  v38 = 0LL;
  v12 = a1;
  v13 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v38);
  if ( v13 )
    KxWaitForLockOwnerShip((struct _KPRCB *)&v38, v13);
  if ( !a4 )
  {
    for ( i = *(unsigned __int8 *)(a2 + 1060); ; ++i )
    {
      if ( i > *(unsigned __int8 *)(a2 + 1061) )
        goto LABEL_11;
      v30 = *(_QWORD *)(a2 + 8LL * i + 24);
      if ( v30 )
      {
        a1 = v5 & 0xFFFFFFFFFFFFFF80uLL;
        if ( (v30 & 0xFFFFFFFFFFFFFF80uLL) <= (v5 & 0xFFFFFFFFFFFFFF80uLL) && (v30 & 1) == 0 )
          break;
      }
    }
    _m_prefetchw(&v38);
    v31 = v38;
    if ( !v38 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38) == &v38 )
        return 0;
      v31 = KxWaitForLockChainValid(&v38);
    }
    v38 = 0LL;
    v32 = v39;
    if ( (((unsigned __int8)v32 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v31 + 8), (__int64)v39)) & 4) != 0 )
      KeWakeAddressAll(v31 + 8, (__int64)v32);
    return 0;
  }
  a1 = *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(v12 + 209) + 24);
  if ( (a1 & 1) == 0 )
  {
    v14 = *(unsigned __int8 *)(a2 + 1060);
    v15 = -1LL;
    for ( j = -1; v14 <= *(unsigned __int8 *)(a2 + 1061); ++v14 )
    {
      v17 = *(_QWORD *)(a2 + 8LL * v14 + 24);
      if ( v17 > a1 && v17 < v15 )
      {
        v15 = *(_QWORD *)(a2 + 8LL * v14 + 24);
        j = v14;
      }
    }
    if ( j == -1 )
    {
      for ( k = 0; k < *((unsigned __int16 *)a3 + 5); ++k )
      {
        a1 = 16LL * k;
        _InterlockedAnd64((volatile signed __int64 *)(v4 + a1), ~*(__int64 *)((char *)v6 + a1));
        _InterlockedAnd64((volatile signed __int64 *)(v4 + a1 + 8), ~*(__int64 *)((char *)v6 + a1 + 8));
      }
    }
    else
    {
      v33 = j;
      v34 = 0;
      a1 = 0LL;
      v35 = *(_QWORD *)(a2 + 8LL * j + 536);
      if ( *((_WORD *)a3 + 5) )
      {
        do
        {
          v36 = v6[2 * (unsigned int)a1];
          if ( v36 )
          {
            v34 = 1;
            _InterlockedOr64((volatile signed __int64 *)(v35 + 16LL * (unsigned int)a1 + 16), v36);
          }
          v37 = v6[2 * (unsigned int)a1 + 1];
          if ( v37 )
          {
            v34 = 1;
            _InterlockedOr64((volatile signed __int64 *)(v35 + 16LL * (unsigned int)a1 + 24), v37);
          }
          a1 = (unsigned int)(a1 + 1);
        }
        while ( (unsigned int)a1 < *((unsigned __int16 *)a3 + 5) );
        if ( v34 )
          *(_QWORD *)(a2 + 8 * v33 + 24) = v15 & 0xFFFFFFFFFFFFFF80uLL | ((_BYTE)v15 + 2) & 0x7E;
      }
    }
  }
LABEL_11:
  if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(v12 + 200) )
  {
    IsEnabledNoReportingNoInline = Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(a1);
    for ( m = 0; m < *(unsigned __int16 *)(a2 + 1058); ++m )
    {
      if ( IsEnabledNoReportingNoInline )
      {
        *(_QWORD *)(v4 + 16LL * m) = 0LL;
        *(_QWORD *)(v4 + 16LL * m + 8) = 0LL;
      }
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(v12 + 209) + 24) = 0LL;
  *(_QWORD *)(a2 + 8) &= ~*(_QWORD *)(v12 + 200);
  if ( !*(_QWORD *)(a2 + 8) )
    *(_QWORD *)(a2 + 16) = 128LL;
  _m_prefetchw(&v38);
  v21 = v38;
  if ( v38 )
    goto LABEL_21;
  if ( (__int64 *)_InterlockedCompareExchange64(v39, 0LL, (signed __int64)&v38) != &v38 )
  {
    v21 = KxWaitForLockChainValid(&v38);
LABEL_21:
    v38 = 0LL;
    v22 = v39;
    if ( (((unsigned __int8)v22 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v21 + 8), (__int64)v39)) & 4) != 0 )
      KeWakeAddressAll(v21 + 8, (__int64)v22);
  }
  LOWORD(v23) = *((_WORD *)a3 + 5);
  v24 = 0;
  if ( (_WORD)v23 )
  {
    do
    {
      v25 = v24++;
      v25 *= 2LL;
      v6[v25] = 0LL;
      v6[v25 + 1] = 0LL;
      v23 = *((unsigned __int16 *)a3 + 5);
    }
    while ( v24 < v23 );
  }
  v26 = 0;
  if ( (_WORD)v23 )
  {
    do
    {
      v27 = v26++;
      v27 *= 2LL;
      v10[v27] = 0LL;
      v10[v27 + 1] = 0LL;
    }
    while ( v26 < *((unsigned __int16 *)a3 + 5) );
  }
  *a3 = 0LL;
  return 1;
}
