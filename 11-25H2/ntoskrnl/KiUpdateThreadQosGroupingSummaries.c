/*
 * XREFs of KiUpdateThreadQosGroupingSummaries @ 0x140317BD0
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     KzRefreshWorkloadProperties @ 0x140201D1C (KzRefreshWorkloadProperties.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KeApplyWobBamQos @ 0x140306940 (KeApplyWobBamQos.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1403A9D6C (KiUpdateThreadSchedulingProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiDecrementRankListMembersUnderLock @ 0x14041DC10 (KiDecrementRankListMembersUnderLock.c)
 *     KiIncrementRankListMembersUnderLock @ 0x14041DCD0 (KiIncrementRankListMembersUnderLock.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiUpdateThreadQosGroupingSummaries(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  char v5; // dl
  char v6; // bl
  unsigned __int8 v7; // r9
  unsigned __int64 n; // r8
  unsigned __int64 v9; // r8
  unsigned __int8 jj; // r9
  __int64 v11; // r10
  unsigned __int8 ii; // dl
  __int64 v13; // r10
  unsigned __int8 kk; // dl
  __int64 v15; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v17; // r8
  unsigned __int8 k; // r9
  unsigned __int64 v19; // r10
  unsigned __int8 j; // dl
  unsigned __int64 v21; // r10
  unsigned __int8 m; // al
  int v23; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  result = *(_QWORD *)(v1 + 48);
  v5 = (result & v3) != 0;
  if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 56);
    v6 = (((*(_BYTE *)(result + 64) & 7) - 1) & 0xFFFFFFFA) == 0;
  }
  else
  {
    v6 = 0;
  }
  if ( v5 != v6 )
  {
    result = Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline();
    if ( (_DWORD)result )
    {
      v7 = 0;
      if ( v6 )
      {
        _InterlockedOr64((volatile signed __int64 *)(v1 + 48), v3);
        for ( i = *(_QWORD *)(a1 + 36448); i; i >>= 8 )
        {
          if ( (_BYTE)i )
          {
            v19 = 0LL;
            for ( j = 0; j < 8u; ++j )
            {
              if ( _bittest64((const __int64 *)&i, j) )
                v19 += 1LL << (8 * j);
            }
            result = v7;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * v7 + 640), v19);
          }
          ++v7;
        }
        v17 = *(_QWORD *)(a1 + 36472);
        for ( k = 0; v17; v17 >>= 8 )
        {
          if ( (_BYTE)v17 )
          {
            v21 = 0LL;
            for ( m = 0; m < 8u; ++m )
            {
              if ( _bittest64((const __int64 *)&v17, m) )
                v21 += 1LL << (8 * m);
            }
            result = k;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * k + 704), v21);
          }
          ++k;
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v1 + 48), ~v3);
        for ( n = *(_QWORD *)(a1 + 36448); n; n >>= 8 )
        {
          if ( (_BYTE)n )
          {
            v11 = 0LL;
            for ( ii = 0; ii < 8u; ++ii )
            {
              if ( _bittest64((const __int64 *)&n, ii) )
                v11 += 1LL << (8 * ii);
            }
            result = v7;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * v7 + 640), -v11);
          }
          ++v7;
        }
        v9 = *(_QWORD *)(a1 + 36472);
        for ( jj = 0; v9; v9 >>= 8 )
        {
          if ( (_BYTE)v9 )
          {
            v13 = 0LL;
            for ( kk = 0; kk < 8u; ++kk )
            {
              if ( _bittest64((const __int64 *)&v9, kk) )
                v13 += 1LL << (8 * kk);
            }
            result = jj;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * jj + 704), -v13);
          }
          ++jj;
        }
      }
    }
    else
    {
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(_QWORD *)v1 );
      }
      v15 = v1 + 640;
      if ( v6 )
      {
        *(_QWORD *)(v1 + 48) |= v3;
        KiIncrementRankListMembersUnderLock(v15, *(_QWORD *)(a1 + 36448));
        result = KiIncrementRankListMembersUnderLock(v1 + 704, *(_QWORD *)(a1 + 36472));
      }
      else
      {
        *(_QWORD *)(v1 + 48) &= ~v3;
        KiDecrementRankListMembersUnderLock(v15, *(_QWORD *)(a1 + 36448));
        result = KiDecrementRankListMembersUnderLock(v1 + 704, *(_QWORD *)(a1 + 36472));
      }
      _InterlockedAnd64((volatile signed __int64 *)v1, 0LL);
    }
  }
  return result;
}
