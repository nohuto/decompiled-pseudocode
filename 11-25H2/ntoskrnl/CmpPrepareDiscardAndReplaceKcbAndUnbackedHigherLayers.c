/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407D19C0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1409D9E84 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407D1A60 (CmpPrepareDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  CmpInitializeDelayDerefContext(&v7);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = a1;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpPrepareDiscardReplacePost,
    (unsigned int)&v7,
    v4,
    1,
    0);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0 )
  {
    CmpPrepareDiscardReplacePost(a1);
    v5 = 0;
    if ( *(int *)(a2 + 8) < 0 )
      v5 = *(_DWORD *)(a2 + 8);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v7);
  return (unsigned int)v5;
}
