/*
 * XREFs of ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAB3C
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C91E8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400C9EF0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x14001D19C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Destroy(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  VIDMM_RECYCLE_BLOCK *v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r8
  __int64 v9; // rcx

  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = *((_QWORD *)this + 10);
  v4 = *(_QWORD *)(v3 + 136);
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 24) + 144LL * *(_QWORD *)(v4 + 32);
    *(_DWORD *)v8 = 1;
    *(_QWORD *)(v8 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v8 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL);
    v9 = *(_QWORD *)(v3 + 136);
    if ( *(_QWORD *)(v9 + 32) == *(_QWORD *)(v9 + 48) )
    {
      *(_QWORD *)(v9 + 32) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v3 + 136) + 40LL) = 1;
    }
  }
  v5 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v6 = *((_QWORD *)v5 + 1) - 1LL;
  v7 = *(_QWORD *)v5 == 0LL;
  *((_QWORD *)v5 + 1) = v6;
  if ( v7 && !v6 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v5);
  *((_BYTE *)this + 204) = 1;
}
