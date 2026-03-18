/*
 * XREFs of CmpTransEnlistUowInCmTrans @ 0x14048052C
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
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140A4D108 (UNLOCK_TRANSACTION_LIST.c)
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
