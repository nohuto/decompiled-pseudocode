/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x140882420
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14087F9B0 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408807B0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140965A58 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A14D64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A4E738 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 */

_QWORD *__fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r10
  _QWORD *result; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // r11
  bool v7; // cl
  _QWORD *v8; // rcx

  v2 = *(_QWORD *)(BugCheckParameter2 + 32);
  result = *(_QWORD **)BugCheckParameter2;
  do
  {
    v5 = result;
    if ( (unsigned __int64)result <= 1 )
    {
      result = (_QWORD *)(BugCheckParameter2 + 224);
      if ( (_QWORD *)*result != result )
        KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
      v8 = *(_QWORD **)(a2 + 8);
      if ( *v8 != a2 )
        __fastfail(3u);
      *result = a2;
      *(_QWORD *)(BugCheckParameter2 + 232) = v8;
      *v8 = result;
      *(_QWORD *)(a2 + 8) = result;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
      return result;
    }
    v6 = (unsigned __int64)result - 1;
    v7 = result == (_QWORD *)3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v2 + 2944) == 1;
    result = (_QWORD *)_InterlockedCompareExchange64(
                         (volatile signed __int64 *)BugCheckParameter2,
                         v6,
                         (signed __int64)result);
  }
  while ( result != v5 );
  if ( (unsigned __int64)result < v6 )
    KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v7 )
    return (_QWORD *)CmpDoQueueLateUnloadWorker(v2);
  return result;
}
