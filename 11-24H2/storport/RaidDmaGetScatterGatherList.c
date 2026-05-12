/*
 * XREFs of RaidDmaGetScatterGatherList @ 0x14002AB60
 * Callers:
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x140012F48 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidDmaGetScatterGatherList(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a1
    && (v2 = *a1) != 0
    && (v3 = *(_QWORD *)(v2 + 8)) != 0
    && (v4 = *(__int64 (__fastcall **)(__int64, __int64))(v3 + 88)) != 0LL )
  {
    return v4(v2, a2);
  }
  else
  {
    return 3221225485LL;
  }
}
