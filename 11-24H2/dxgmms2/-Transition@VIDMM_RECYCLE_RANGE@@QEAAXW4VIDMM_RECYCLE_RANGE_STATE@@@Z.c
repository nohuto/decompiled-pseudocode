/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7364
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4A1C (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1400C5724 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5B58 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C6EF0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C7544 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1400C794C (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000DBE8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx

  result = WdLogSingleEntry3(4LL, a1, *(int *)(a1 + 64), a2);
  WdLogGlobalForLineNumber = 2248;
  if ( (byte_140081242 & 4) != 0 )
    result = McTemplateK0pqq_EtwWriteTransfer();
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD **)(v5 + 136);
  if ( v6 )
  {
    v7 = *v6 + 144LL * v6[1];
    *(_DWORD *)v7 = 2;
    *(_QWORD *)(v7 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v7 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v5 + 136) + 8LL);
    v8 = *(_QWORD *)(v5 + 136);
    result = *(_QWORD *)(v8 + 48);
    if ( *(_QWORD *)(v8 + 8) == result )
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      result = *(_QWORD *)(v5 + 136);
      *(_BYTE *)(result + 16) = 1;
    }
  }
  *(_DWORD *)(a1 + 64) = a2;
  return result;
}
