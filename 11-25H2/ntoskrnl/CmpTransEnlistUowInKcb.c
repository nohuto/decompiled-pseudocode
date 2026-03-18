/*
 * XREFs of CmpTransEnlistUowInKcb @ 0x1404838EC
 * Callers:
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
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
