/*
 * XREFs of ?IteratePhysicalMemoryRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3II@Z @ 0x1400AD980
 * Callers:
 *     CommitVirtualAddressRangesInList @ 0x140092E24 (CommitVirtualAddressRangesInList.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     CommitAllocationVirtualAddressCb @ 0x1400ADB50 (CommitAllocationVirtualAddressCb.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::IteratePhysicalMemoryRanges(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        int (*a3)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *),
        void *a4)
{
  VIDMM_SEGMENT *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int16 v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+62h] [rbp-26h]
  __int16 v21; // [rsp+66h] [rbp-22h]

  if ( (*((_DWORD *)a2 + 14) & 1) == 0 )
    return 0LL;
  v7 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 8);
  v8 = 0LL;
  v9 = 0LL;
  if ( (*((_DWORD *)v7 + 26) & 0x1001) != 0 )
  {
    v10 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( !v8 )
    {
      if ( (*(_DWORD *)(v10 + 28) & 0x14000) != 0 )
      {
        v8 = *(_QWORD *)(v10 + 408);
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 248);
        v8 = v11
           ? (*(__int64 (__fastcall **)(_QWORD, __int64, int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *)))(**(_QWORD **)(v10 + 240) + 88LL))(
               *(_QWORD *)(v10 + 240),
               v11,
               a3)
           : *(_QWORD *)(*(_QWORD *)(v10 + 48) + 72LL);
      }
      if ( !v8 )
      {
        _InterlockedIncrement(&dword_14008178C);
        WdLogSingleEntry1(6LL, *(_QWORD *)a2);
        WdLogGlobalForLineNumber = 2733;
        DxgkLogInternalTriageEvent(v15, 262145LL);
        return 3221225495LL;
      }
    }
  }
  else
  {
    v9 = *((__int64 *)a2 + 9) >> 12;
  }
  v18 = *((_QWORD *)a2 + 2) >> 12;
  v20 = 0;
  v21 = 0;
  v17 = 0;
  if ( (*((_DWORD *)v7 + 26) & 0x1001) != 0 )
  {
    v19 = 0;
    v16 = v8 + 48;
  }
  else
  {
    v16 = v9;
    v19 = VIDMM_SEGMENT::DriverId(v7);
  }
  v12 = CommitAllocationVirtualAddressCb(this, a2, &v16, a4);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  WdLogSingleEntry4(3LL, CommitAllocationVirtualAddressCb, v12);
  result = v13;
  WdLogGlobalForLineNumber = 2764;
  return result;
}
