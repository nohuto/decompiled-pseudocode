/*
 * XREFs of PsReturnPoolQuota @ 0x14027B8E0
 * Callers:
 *     <none>
 * Callees:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  __int64 *SchedulingGroup; // r13
  unsigned __int64 v6; // r12
  ULONG_PTR v7; // rbp
  volatile signed __int64 *v8; // r14
  char v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  ULONG_PTR *v12; // r9
  ULONG_PTR v13; // r8
  ULONG_PTR BugCheckParameter4; // r8
  unsigned __int64 v15; // r9
  signed __int64 v16; // rdx
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v19; // r8

  if ( Process != PsInitialSystemProcess )
  {
    SchedulingGroup = (__int64 *)Process[1].SchedulingGroup;
    v6 = (unsigned __int64)(PoolType == PagedPool) << 7;
    v7 = PoolType == PagedPool;
    v8 = (__int64 *)((char *)SchedulingGroup + v6);
    v9 = PspResourceFlags[8 * v7];
    _m_prefetchw((char *)SchedulingGroup + v6);
    v10 = *(__int64 *)((char *)SchedulingGroup + v6);
    v11 = *(__int64 *)((char *)SchedulingGroup + v6 + 64);
    if ( *(__int64 *)((char *)SchedulingGroup + v6 + 80) )
    {
      if ( v11 > v10 )
      {
        v12 = (ULONG_PTR *)&qword_140F05B28[7 * v7];
        v13 = *v12;
        if ( v11 - v10 > *v12 )
        {
          if ( v13 > Amount )
            v13 = Amount;
          if ( v11 == _InterlockedCompareExchange64(v8 + 8, v11 - v13, v11)
            && _InterlockedExchangeAdd64(v8 + 9, v13) + v13 > *v12 )
          {
            v19 = _InterlockedExchange64(v8 + 9, 0LL);
            if ( v19 )
              PspReturnResourceQuota((unsigned int)v7, (char *)SchedulingGroup + v6, v19, 0LL);
          }
        }
      }
    }
    BugCheckParameter4 = Amount;
    while ( 1 )
    {
      do
      {
        v15 = v10;
        if ( BugCheckParameter4 < v10 )
          v15 = BugCheckParameter4;
        v16 = 0LL;
        if ( BugCheckParameter4 < v10 )
          v16 = v10 - BugCheckParameter4;
        v18 = _InterlockedCompareExchange64(v8, v16, v10);
        v17 = v10 == v18;
        v10 = v18;
      }
      while ( !v17 );
      BugCheckParameter4 -= v15;
      if ( !BugCheckParameter4 )
        break;
      if ( SchedulingGroup == &PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, (ULONG_PTR)Process, v7, Amount, BugCheckParameter4);
      SchedulingGroup = &PspSystemQuotaBlock;
      v8 = (__int64 *)((char *)&PspSystemQuotaBlock + v6);
      _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
      v10 = *(__int64 *)((char *)&PspSystemQuotaBlock + v6);
    }
    if ( Process )
    {
      if ( (v9 & 4) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v7, -(__int64)Amount);
    }
  }
}
