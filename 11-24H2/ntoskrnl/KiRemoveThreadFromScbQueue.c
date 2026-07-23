/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x1402D8F60
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x1402D8A9C (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402D8B94 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x1402D8CB0 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 * Callees:
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

unsigned __int8 __fastcall KiRemoveThreadFromScbQueue(struct _KPRCB *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r10
  _QWORD *v8; // r9
  unsigned __int8 v9; // r8
  _QWORD *v10; // rax
  __int16 v11; // cx
  int v12; // eax
  __int64 v13; // rax
  unsigned __int8 result; // al

  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a3 + 968), 0xFFFBFFFF);
  v7 = a3 + 216;
  v8 = *(_QWORD **)(a3 + 216);
  v9 = 0;
  v10 = *(_QWORD **)(a3 + 224);
  if ( v8[1] != a3 + 216 || *v10 != v7 )
    __fastfail(3u);
  *v10 = v8;
  v8[1] = v10;
  if ( v10 == v8 )
  {
    v11 = *(_WORD *)(a2 + 112);
    v12 = *(unsigned __int16 *)(a2 + 120) ^ (1 << a4);
    *(_WORD *)(a2 + 120) = v12;
    if ( (v11 & 2) == 0 && (v11 & 1) != 0 )
    {
      if ( (_WORD)v12 )
      {
LABEL_12:
        v9 = KiResortScbQueue(a1, (struct _KSCB *)a2, 1u);
        goto LABEL_13;
      }
      v13 = *(_QWORD *)(a2 + 400);
      if ( (*(_BYTE *)(a2 + 408) & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_14;
        v13 ^= a2 + 400;
      }
      if ( v13 )
        goto LABEL_12;
LABEL_14:
      KiRemoveSchedulingGroupQueue(a1, (struct _KSCB *)a2, 1);
      v9 = 1;
    }
  }
LABEL_13:
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  result = v9;
  *(_QWORD *)(a3 + 944) = 0LL;
  return result;
}
