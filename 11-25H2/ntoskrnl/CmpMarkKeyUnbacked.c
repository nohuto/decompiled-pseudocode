/*
 * XREFs of CmpMarkKeyUnbacked @ 0x140885038
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x140492108 (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshWorkerRoutine @ 0x1407BF770 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407D1950 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpCommitDiscardReplacePost @ 0x1409D8BAC (CmpCommitDiscardReplacePost.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x1409DAAD0 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x14087DD88 (CmpCleanUpKcbCachedSymlink.c)
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
