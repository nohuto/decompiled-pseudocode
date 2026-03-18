/*
 * XREFs of CmpTransEnlistUowInCmTrans @ 0x14047F774
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
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140A4A2F8 (UNLOCK_TRANSACTION_LIST.c)
 */

__int64 __fastcall CmpTransEnlistUowInCmTrans(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  LOCK_TRANSACTION_LIST();
  if ( (*(_DWORD *)(a2 + 48) & 7) != 0 )
  {
    UNLOCK_TRANSACTION_LIST();
    return 3222863874LL;
  }
  else
  {
    v4 = *(_QWORD **)(a2 + 24);
    if ( *v4 != a2 + 16 )
      __fastfail(3u);
    *a1 = a2 + 16;
    a1[1] = v4;
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = a1;
    UNLOCK_TRANSACTION_LIST();
    result = 0LL;
    a1[7] = a2;
  }
  return result;
}
