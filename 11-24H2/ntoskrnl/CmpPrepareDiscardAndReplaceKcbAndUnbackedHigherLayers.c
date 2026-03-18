/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E12A0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A1EC80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407E1340 (CmpPrepareDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FE28 (CmpEnumerateAllHigherLayerKcbs.c)
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
