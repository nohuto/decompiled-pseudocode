/*
 * XREFs of CmpTransEnlistUowInKcb @ 0x140484100
 * Callers:
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpTransEnlistUowInKcb(_QWORD *a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR **v4; // rdx
  ULONG_PTR *v5; // rax
  __int64 result; // rax

  v2 = a2 + 208;
  v4 = *(ULONG_PTR ***)(a2 + 216);
  v5 = a1 + 4;
  if ( *v4 != (ULONG_PTR *)v2 )
    __fastfail(3u);
  *v5 = v2;
  a1[5] = v4;
  *v4 = v5;
  *(_QWORD *)(v2 + 8) = v5;
  result = CmpReferenceKeyControlBlock(a2);
  a1[6] = a2;
  return result;
}
