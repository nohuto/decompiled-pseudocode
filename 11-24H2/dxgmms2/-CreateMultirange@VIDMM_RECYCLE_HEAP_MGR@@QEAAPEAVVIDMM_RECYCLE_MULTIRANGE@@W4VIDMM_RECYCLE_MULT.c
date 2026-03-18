/*
 * XREFs of ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400CB238
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14008FBAC (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14009042C (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140090A5C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C91E8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400C9A60 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400C9EF0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400CC6F4 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _LOOKASIDE_LIST_EX *v6; // rcx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  ULONGLONG v13; // rcx
  CCHAR LeastSignificantBit; // al
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx

  v6 = *(struct _LOOKASIDE_LIST_EX **)(a1 + 1320);
  v10 = *(_DWORD *)(a1 + 1620);
  if ( v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    v12 = *(_QWORD **)(a1 + 8 * v11 + 1656);
    *(_QWORD *)(a1 + 8 * v11 + 1656) = 0LL;
    --*(_DWORD *)(a1 + 1620);
  }
  else
  {
    v12 = ExAllocateFromLookasideListEx(v6);
  }
  if ( v12 )
  {
    ++*(_DWORD *)(a1 + 1688);
    WdLogSingleEntry1(4LL, v12);
    v12[4] = a4;
    v12[5] = a5;
    *((_DWORD *)v12 + 6) = 1;
    v12[8] = 0LL;
    v12[9] = 0LL;
    v12[10] = a3;
    v12[6] = a4;
    *((_DWORD *)v12 + 50) = a2;
    *((_WORD *)v12 + 64) = 0;
    ++*(_QWORD *)(a3 + 8);
    v13 = v12[4];
    WdLogGlobalForLineNumber = 2278;
    LeastSignificantBit = RtlFindLeastSignificantBit(v13);
    if ( LeastSignificantBit < 0 )
      v15 = 0LL;
    else
      v15 = 1LL << LeastSignificantBit;
    v12[7] = v15;
    v12[11] = 3LL;
    v12[12] = 0LL;
    v12[13] = 0LL;
    v12[14] = 0LL;
    v12[15] = 0LL;
    *((_BYTE *)v12 + 130) = 0;
    v12[17] = 0LL;
    v12[18] = 0LL;
    v12[22] = 0LL;
    *((_WORD *)v12 + 76) = 0;
    v12[20] = 0LL;
    v12[21] = 0LL;
    v12[23] = 0LL;
    v12[24] = 0LL;
    v16 = v12[10];
    *((_BYTE *)v12 + 204) = 0;
    v17 = *(_QWORD *)(v16 + 136);
    if ( v17 )
    {
      v19 = *(_QWORD *)(v17 + 24) + 144LL * *(_QWORD *)(v17 + 32);
      *(_DWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = v12;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v19 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v16 + 136) + 32LL);
      v20 = *(_QWORD *)(v16 + 136);
      if ( *(_QWORD *)(v20 + 32) == *(_QWORD *)(v20 + 48) )
      {
        *(_QWORD *)(v20 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v16 + 136) + 40LL) = 1;
      }
    }
  }
  return v12;
}
