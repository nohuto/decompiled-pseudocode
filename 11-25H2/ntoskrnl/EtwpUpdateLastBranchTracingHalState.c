/*
 * XREFs of EtwpUpdateLastBranchTracingHalState @ 0x140645824
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407A261C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407A26C8 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407A259C (EtwpReferenceLastBranchLookasideList.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingHalState(__int64 a1)
{
  unsigned int v1; // edi
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1072) + 4LL) == -1 || !*(_DWORD *)(*(_QWORD *)(a1 + 1072) + 8LL) )
  {
    v5 = **(unsigned int **)(a1 + 1072);
    if ( (_DWORD)v5 )
    {
      v1 = guard_dispatch_icall_no_overrides(v5);
      **(_DWORD **)(a1 + 1072) = 0;
      _InterlockedDecrement(&dword_140E28C80);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xFFFF7FFF);
    }
  }
  else
  {
    v3 = *(_DWORD **)(a1 + 1072);
    if ( !*v3 )
    {
      result = guard_dispatch_icall_no_overrides((unsigned int)v3[1]);
      v1 = result;
      if ( (int)result < 0 )
        return result;
      EtwpReferenceLastBranchLookasideList();
      _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000u);
    }
  }
  return v1;
}
