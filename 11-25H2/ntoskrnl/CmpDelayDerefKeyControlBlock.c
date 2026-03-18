/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x14087C4C0
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14087DD88 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408850B8 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1409DAED8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A530B8 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A9B4D4 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
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
