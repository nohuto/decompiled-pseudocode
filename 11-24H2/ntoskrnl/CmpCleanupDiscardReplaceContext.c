/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x140A1FBEC
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x1407DE314 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A1EC80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A1F204 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanupDiscardReplacePost @ 0x1407E1110 (CmpCleanupDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FE28 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCleanupDiscardReplaceContext(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v4; // rcx
  _QWORD *v5; // rdi
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1 + 2;
    if ( (_QWORD *)*v5 != v5 )
    {
      result = CmpEnumerateAllHigherLayerKcbs(
                 v4,
                 (unsigned int)CmpCleanupDiscardReplacePre,
                 (unsigned int)CmpCleanupDiscardReplacePost,
                 a2,
                 (__int64)a1,
                 1,
                 0);
      if ( (_QWORD *)*v5 != v5 )
        return CmpCleanupDiscardReplacePost(*a1, a2, (__int64)a1);
    }
  }
  return result;
}
