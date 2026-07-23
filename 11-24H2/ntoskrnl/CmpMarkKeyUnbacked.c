/*
 * XREFs of CmpMarkKeyUnbacked @ 0x14087F7A8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x14048BF4C (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshWorkerRoutine @ 0x1407CF470 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407E1780 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpInvalidateSubtreeWorker @ 0x140963A80 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x1408807B0 (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = -1;
  v2 = 1;
  ++*(_QWORD *)(a1 + 304);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 || *(_BYTE *)(v4 + 65) != 3 )
    v2 = 0;
  *(_BYTE *)(a1 + 65) = v2;
  result = CmpCleanUpKcbCachedSymlink(a1, a2);
  *(_DWORD *)(a1 + 100) = -1;
  *(_WORD *)(a1 + 186) &= 4u;
  *(_DWORD *)(a1 + 184) &= 0xFFFFFF00;
  *(_BYTE *)(a1 + 185) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  return result;
}
