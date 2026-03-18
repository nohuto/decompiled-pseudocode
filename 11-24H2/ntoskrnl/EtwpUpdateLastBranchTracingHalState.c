/*
 * XREFs of EtwpUpdateLastBranchTracingHalState @ 0x140651824
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B19EC (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407B1A98 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1407B196C (EtwpReferenceLastBranchLookasideList.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingHalState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = 0;
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 1072) + 4LL);
  if ( (_DWORD)v6 == -1 || (v6 = *(unsigned int *)(*(_QWORD *)(a1 + 1072) + 8LL), !(_DWORD)v6) )
  {
    v9 = **(unsigned int **)(a1 + 1072);
    if ( (_DWORD)v9 )
    {
      v4 = guard_dispatch_icall_no_overrides(v9, v6, a3, a4);
      **(_DWORD **)(a1 + 1072) = 0;
      _InterlockedDecrement(&dword_140E28EC0);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xFFFF7FFF);
    }
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 1072);
    if ( !*v7 )
    {
      result = guard_dispatch_icall_no_overrides((unsigned int)v7[1], v7, a3, a4);
      v4 = result;
      if ( (int)result < 0 )
        return result;
      EtwpReferenceLastBranchLookasideList();
      _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000u);
    }
  }
  return v4;
}
