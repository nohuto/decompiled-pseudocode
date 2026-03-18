/*
 * XREFs of CmpRemoveLayerLinkForDiscardedKcb @ 0x14097D248
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140491454 (CmpRemoveHiveFromNamespace.c)
 *     CmpInvalidateSubtreeWorker @ 0x14097B270 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 */

_QWORD *__fastcall CmpRemoveLayerLinkForDiscardedKcb(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rdx

  result = *(_QWORD **)(a1 + 192);
  if ( result )
  {
    v4 = result[3];
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      result[3] = 0LL;
      *(_WORD *)(a1 + 66) = 0;
      CmpDelayDerefKeyControlBlock(v5, a2);
      v6 = *(_QWORD **)(a1 + 192);
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (result = (_QWORD *)v6[1], (_QWORD *)*result != v6) )
        __fastfail(3u);
      *result = v7;
      *(_QWORD *)(v7 + 8) = result;
    }
  }
  return result;
}
