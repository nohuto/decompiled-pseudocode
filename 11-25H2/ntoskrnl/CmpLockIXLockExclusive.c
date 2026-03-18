/*
 * XREFs of CmpLockIXLockExclusive @ 0x140869120
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
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 */

char __fastcall CmpLockIXLockExclusive(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)a1 = -2147483647;
    if ( a3 )
    {
      if ( a3 == 1 )
        *(_QWORD *)(a2 + 24) = a1;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = a1;
    }
    return 1;
  }
  if ( v3 >= 0 )
  {
    if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
    {
      *(_DWORD *)a1 |= 0x80000000;
      return 1;
    }
  }
  else if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
  {
    return 1;
  }
  return 0;
}
